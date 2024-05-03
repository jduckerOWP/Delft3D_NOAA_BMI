#if !defined(INCLUDED_PETSCCONF_H)
#define INCLUDED_PETSCCONF_H

#define PETSC_ARCH ""
#define PETSC_ATTRIBUTEALIGNED(size)  
#define PETSC_BLASLAPACK_CAPS 1
#define PETSC_CANNOT_START_DEBUGGER 1
#define PETSC_CLANGUAGE_C 1
#define PETSC_DEPRECATED_ENUM(why)  
#define PETSC_DEPRECATED_FUNCTION(why) __declspec(deprecated)
#define PETSC_DEPRECATED_MACRO(why) _Pragma(why)
#define PETSC_DEPRECATED_TYPEDEF(why)  
#define PETSC_DIR "C:\\opt\\petsc-3.19.4"
#define PETSC_DIR_SEPARATOR '\\'
#define PETSC_FORTRAN_CHARLEN_T int
#define PETSC_FORTRAN_TYPE_INITIALIZE  = -2
#define PETSC_FUNCTION_NAME_C __func__
#define PETSC_HAVE_ACCESS 1
#define PETSC_HAVE_ATOLL 1
#define PETSC_HAVE_CLOCK 1
#define PETSC_HAVE_CLOSESOCKET 1
#define PETSC_HAVE_DIRECT_H 1
#define PETSC_HAVE_DOS_H 1
#define PETSC_HAVE_DOUBLE_ALIGN_MALLOC 1
#define PETSC_HAVE_ERF 1
#define PETSC_HAVE_FCNTL_H 1
#define PETSC_HAVE_FENV_H 1
#define PETSC_HAVE_FE_VALUES 1
#define PETSC_HAVE_FLOAT_H 1
#define PETSC_HAVE_FORTRAN 1
#define PETSC_HAVE_FORTRAN_CAPS 1
#define PETSC_HAVE_FORTRAN_FLUSH 1
#define PETSC_HAVE_FORTRAN_FREE_LINE_LENGTH_NONE 1
#define PETSC_HAVE_FORTRAN_GET_COMMAND_ARGUMENT 1
#define PETSC_HAVE_FORTRAN_TYPE_STAR 1
#define PETSC_HAVE_FREELIBRARY 1
#define PETSC_HAVE_GETCOMPUTERNAME 1
#define PETSC_HAVE_GETCWD 1
#define PETSC_HAVE_GETLASTERROR 1
#define PETSC_HAVE_GETPROCADDRESS 1
#define PETSC_HAVE_GET_USER_NAME 1
#define PETSC_HAVE_IMMINTRIN_H 1
#define PETSC_HAVE_INTTYPES_H 1
#define PETSC_HAVE_IO_H 1
#define PETSC_HAVE_ISINF 1
#define PETSC_HAVE_ISNAN 1
#define PETSC_HAVE_ISNORMAL 1
#define PETSC_HAVE_I_MPI_NUMVERSION 20211000300
#define PETSC_HAVE_LARGE_INTEGER_U 1
#define PETSC_HAVE_LGAMMA 1
#define PETSC_HAVE_LOADLIBRARY 1
#define PETSC_HAVE_LOG2 1
#define PETSC_HAVE_LSEEK 1
#define PETSC_HAVE_MALLOC_H 1
#define PETSC_HAVE_MEMMOVE 1
#define PETSC_HAVE_MKL_INCLUDES 1
#define PETSC_HAVE_MKL_LIBS 1
#define PETSC_HAVE_MKL_SPARSE 1
#define PETSC_HAVE_MKL_SPARSE_OPTIMIZE 1
#define PETSC_HAVE_MKL_SPARSE_SP2M_FEATURE 1
#define PETSC_HAVE_MPICH_NUMVERSION 30400002
#define PETSC_HAVE_MPIIO 1
#define PETSC_HAVE_MPI_COMBINER_CONTIGUOUS 1
#define PETSC_HAVE_MPI_COMBINER_DUP 1
#define PETSC_HAVE_MPI_COMBINER_NAMED 1
#define PETSC_HAVE_MPI_F90MODULE 1
#define PETSC_HAVE_MPI_F90MODULE_VISIBILITY 1
#define PETSC_HAVE_MPI_GET_ACCUMULATE 1
#define PETSC_HAVE_MPI_GET_LIBRARY_VERSION 1
#define PETSC_HAVE_MPI_INIT_THREAD 1
#define PETSC_HAVE_MPI_INT64_T 1
#define PETSC_HAVE_MPI_LONG_DOUBLE 1
#define PETSC_HAVE_MPI_NEIGHBORHOOD_COLLECTIVES 1
#define PETSC_HAVE_MPI_NONBLOCKING_COLLECTIVES 1
#define PETSC_HAVE_MPI_ONE_SIDED 1
#define PETSC_HAVE_MPI_PROCESS_SHARED_MEMORY 1
#define PETSC_HAVE_MPI_REDUCE_LOCAL 1
#define PETSC_HAVE_MPI_REDUCE_SCATTER_BLOCK 1
#define PETSC_HAVE_MPI_RGET 1
#define PETSC_HAVE_MPI_WIN_CREATE 1
#define PETSC_HAVE_O_BINARY 1
#define PETSC_HAVE_PACKAGES ":blaslapack:mathlib:mkl_sparse:mkl_sparse_optimize:mpi:"
#define PETSC_HAVE_RAND 1
#define PETSC_HAVE_SETJMP_H 1
#define PETSC_HAVE_SETLASTERROR 1
#define PETSC_HAVE_STDINT_H 1
#define PETSC_HAVE_STRICMP 1
#define PETSC_HAVE_SYS_TYPES_H 1
#define PETSC_HAVE_TAU_PERFSTUBS 1
#define PETSC_HAVE_TGAMMA 1
#define PETSC_HAVE_TIME 1
#define PETSC_HAVE_TIME_H 1
#define PETSC_HAVE_TMPNAM_S 1
#define PETSC_HAVE_VA_COPY 1
#define PETSC_HAVE_VSNPRINTF 1
#define PETSC_HAVE_WINDOWSX_H 1
#define PETSC_HAVE_WINDOWS_COMPILERS 1
#define PETSC_HAVE_WINDOWS_H 1
#define PETSC_HAVE_WINSOCK2_H 1
#define PETSC_HAVE_WS2TCPIP_H 1
#define PETSC_HAVE_WSAGETLASTERROR 1
#define PETSC_HAVE_XMMINTRIN_H 1
#define PETSC_HAVE__ACCESS 1
#define PETSC_HAVE__GETCWD 1
#define PETSC_HAVE__LSEEK 1
#define PETSC_HAVE__MKDIR 1
#define PETSC_HAVE__SLEEP 1
#define PETSC_HAVE___INT64 1
#define PETSC_INTPTR_T intptr_t
#define PETSC_INTPTR_T_FMT "#" PRIxPTR
#define PETSC_IS_COLORING_MAX USHRT_MAX
#define PETSC_IS_COLORING_VALUE_TYPE short
#define PETSC_IS_COLORING_VALUE_TYPE_F integer2
#define PETSC_LEVEL1_DCACHE_LINESIZE 32
#define PETSC_LIB_DIR "/cygdrive/c/opt/petsc-3.19.4/lib"
#define PETSC_MAX_PATH_LEN 4096
#define PETSC_MEMALIGN 16
#define PETSC_MISSING_GETLINE 1
#define PETSC_MISSING_SIGALRM 1
#define PETSC_MISSING_SIGBUS 1
#define PETSC_MISSING_SIGCHLD 1
#define PETSC_MISSING_SIGCONT 1
#define PETSC_MISSING_SIGHUP 1
#define PETSC_MISSING_SIGKILL 1
#define PETSC_MISSING_SIGPIPE 1
#define PETSC_MISSING_SIGQUIT 1
#define PETSC_MISSING_SIGSTOP 1
#define PETSC_MISSING_SIGSYS 1
#define PETSC_MISSING_SIGTRAP 1
#define PETSC_MISSING_SIGTSTP 1
#define PETSC_MISSING_SIGURG 1
#define PETSC_MISSING_SIGUSR1 1
#define PETSC_MISSING_SIGUSR2 1
#define PETSC_MKL_SPBLAS_DEPRECATED 1
#define PETSC_MPICC_SHOW "Unavailable"
#define PETSC_MPIU_IS_COLORING_VALUE_TYPE MPI_UNSIGNED_SHORT
#define PETSC_NEEDS_UTYPE_TYPEDEFS 1
#define PETSC_OMAKE "/usr/bin/make --no-print-directory"
#define PETSC_PREFETCH_HINT_NTA _MM_HINT_NTA
#define PETSC_PREFETCH_HINT_T0 _MM_HINT_T0
#define PETSC_PREFETCH_HINT_T1 _MM_HINT_T1
#define PETSC_PREFETCH_HINT_T2 _MM_HINT_T2
#define PETSC_PYTHON_EXE "/usr/bin/python3"
#define PETSC_Prefetch(a,b,c) _mm_prefetch((const char*)(a),(c))
#define PETSC_REPLACE_DIR_SEPARATOR '/'
#define PETSC_SIZEOF_INT 4
#define PETSC_SIZEOF_LONG 4
#define PETSC_SIZEOF_LONG_LONG 8
#define PETSC_SIZEOF_SIZE_T 8
#define PETSC_SIZEOF_VOID_P 8
#define PETSC_SLSUFFIX "dll"
#define PETSC_UINTPTR_T uintptr_t
#define PETSC_UINTPTR_T_FMT "#" PRIxPTR
#define PETSC_UNUSED  
#define PETSC_USE_AVX512_KERNELS 1
#define PETSC_USE_BACKWARD_LOOP 1
#define PETSC_USE_CTABLE 1
#define PETSC_USE_DMLANDAU_2D 1
#define PETSC_USE_INFO 1
#define PETSC_USE_ISATTY 1
#define PETSC_USE_LOG 1
#define PETSC_USE_MALLOC_COALESCED 1
#define PETSC_USE_MICROSOFT_TIME 1
#define PETSC_USE_PROC_FOR_SIZE 1
#define PETSC_USE_REAL_DOUBLE 1
#define PETSC_USE_SHARED_LIBRARIES 1
#define PETSC_USE_SINGLE_LIBRARY 1
#define PETSC_USE_WINDOWS_GRAPHICS 1
#define PETSC_USING_64BIT_PTR 1
#define PETSC_USING_F2003 1
#define PETSC_USING_F90FREEFORM 1
#define PETSC__BSD_SOURCE 1
#define PETSC__DEFAULT_SOURCE 1
#define R_OK 04
#define S_ISDIR(a) (((a)&_S_IFMT) == _S_IFDIR)
#define S_ISREG(a) (((a)&_S_IFMT) == _S_IFREG)
#define W_OK 02
#define X_OK 01
#define _USE_MATH_DEFINES 1
#endif
