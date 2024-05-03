#include <../src/sys/classes/random/randomimpl.h>

typedef struct {
  unsigned short seed[3];
  unsigned short mult[3];
  unsigned short add;
} PetscRandom_Rander48;

#define RANDER48_SEED_0 (0x330e)
#define RANDER48_SEED_1 (0xabcd)
#define RANDER48_SEED_2 (0x1234)
#define RANDER48_MULT_0 (0xe66d)
#define RANDER48_MULT_1 (0xdeec)
#define RANDER48_MULT_2 (0x0005)
#define RANDER48_ADD    (0x000b)

static double _dorander48(PetscRandom_Rander48 *r48)
{
  unsigned long accu;
  unsigned short temp[2];

  accu     = (unsigned long) r48->mult[0] * (unsigned long) r48->seed[0] + (unsigned long)r48->add;
  temp[0]  = (unsigned short) accu;        /* lower 16 bits */
  accu   >>= sizeof(unsigned short) * 8;
  accu    += (unsigned long) r48->mult[0] * (unsigned long) r48->seed[1] + (unsigned long) r48->mult[1] * (unsigned long) r48->seed[0];
  temp[1]  = (unsigned short)accu;        /* middle 16 bits */
  accu   >>= sizeof(unsigned short) * 8;
  accu    += r48->mult[0] * r48->seed[2] + r48->mult[1] * r48->seed[1] + r48->mult[2] * r48->seed[0];
  r48->seed[0] = temp[0];
  r48->seed[1] = temp[1];
  r48->seed[2] = (unsigned short) accu;
  return ldexp((double) r48->seed[0], -48) + ldexp((double) r48->seed[1], -32) + ldexp((double) r48->seed[2], -16);
}

static PetscErrorCode  PetscRandomSeed_Rander48(PetscRandom r)
{
  PetscRandom_Rander48 *r48 = (PetscRandom_Rander48*)r->data;

  PetscFunctionBegin;
  r48->seed[0] = RANDER48_SEED_0;
  r48->seed[1] = (unsigned short) r->seed;
  r48->seed[2] = (unsigned short) (r->seed >> 16);
  r48->mult[0] = RANDER48_MULT_0;
  r48->mult[1] = RANDER48_MULT_1;
  r48->mult[2] = RANDER48_MULT_2;
  r48->add     = RANDER48_ADD;
  PetscFunctionReturn(0);
}

static PetscErrorCode  PetscRandomGetValue_Rander48(PetscRandom r, PetscScalar *val)
{
  PetscRandom_Rander48 *r48 = (PetscRandom_Rander48*)r->data;

  PetscFunctionBegin;
#if defined(PETSC_USE_COMPLEX)
  if (r->iset) {
    *val = PetscRealPart(r->low) + PetscImaginaryPart(r->low) * PETSC_i;
    if (PetscRealPart(r->width)) {
      *val += PetscRealPart(r->width)* _dorander48(r48);
    }
    if (PetscImaginaryPart(r->width)) {
      *val += PetscImaginaryPart(r->width)* _dorander48(r48) * PETSC_i;
    }
  } else {
    *val = _dorander48(r48) +  _dorander48(r48)*PETSC_i;
  }
#else
  if (r->iset) *val = r->width * _dorander48(r48) + r->low;
  else         *val = _dorander48(r48);
#endif
  PetscFunctionReturn(0);
}

static PetscErrorCode  PetscRandomGetValueReal_Rander48(PetscRandom r, PetscReal *val)
{
  PetscRandom_Rander48 *r48 = (PetscRandom_Rander48*)r->data;

  PetscFunctionBegin;
#if defined(PETSC_USE_COMPLEX)
  if (r->iset) *val = PetscRealPart(r->width)*_dorander48(r48) + PetscRealPart(r->low);
  else         *val = _dorander48(r48);
#else
  if (r->iset) *val = r->width * _dorander48(r48) + r->low;
  else         *val = _dorander48(r48);
#endif
  PetscFunctionReturn(0);
}

static PetscErrorCode  PetscRandomDestroy_Rander48(PetscRandom r)
{
  PetscErrorCode ierr;

  PetscFunctionBegin;
  ierr = PetscFree(r->data);CHKERRQ(ierr);
  PetscFunctionReturn(0);
}

static struct _PetscRandomOps PetscRandomOps_Values = {
  /* 0 */
  PetscRandomSeed_Rander48,
  PetscRandomGetValue_Rander48,
  PetscRandomGetValueReal_Rander48,
  PetscRandomDestroy_Rander48,
  /* 5 */
  0
};

/*MC
   PETSCRANDER48 - simple portable reimplementation of basic Unix drand48() random number generator that should generate the
        exact same random numbers on any system.

   Options Database Keys:
. -random_type <rand,rand48,rander48,sprng>

  Notes:
    This is the default random number generate provided by PetscRandomCreate() if you do not set a particular implementation.

  Each PetscRandom object created with this type has its own seed and its own history, so multiple PetscRandom objects of this type
  will not interfer with random numbers generated by other objects. Each PETSc object of this type will produce the exact same set of
  random numbers so if you wish different PetscObjects of this type set different seeds for each one after you create them with
  PetscRandomSetSeed() followed by PetscRandomSeed().

  Level: beginner

.seealso: RandomCreate(), RandomSetType(), PETSCRAND, PETSCRAND48, PETSCRANDER48, PETSCSPRNG, PetscRandomSetSeed(), PetscRandomSeed()
M*/

PETSC_EXTERN PetscErrorCode PetscRandomCreate_Rander48(PetscRandom r)
{
  PetscErrorCode       ierr;
  PetscRandom_Rander48 *r48;

  PetscFunctionBegin;
  ierr = PetscNewLog(r,&r48);CHKERRQ(ierr);
  /* r48 does not need to be initialized because PetscRandomSeed() is always called before use and sets the needed values */
  r->data = r48;
  ierr = PetscMemcpy(r->ops, &PetscRandomOps_Values, sizeof(PetscRandomOps_Values));CHKERRQ(ierr);
  ierr = PetscObjectChangeTypeName((PetscObject) r, PETSCRANDER48);CHKERRQ(ierr);
  PetscFunctionReturn(0);
}
