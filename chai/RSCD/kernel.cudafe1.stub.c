#include "crt/host_runtime.h"
#include "kernel.fatbin.c"
struct __T20 {int __par0;int __par1;int __par2;float __par3;int __par4;float __par5;float *__par6;flowvector *__par7;int *__par8;int *__par9;int *__par10;int *__par11;int *__par12;int __dummy_field;__pad__(volatile char __dummy[4];)};
extern void __device_stub__Z19RANSAC_kernel_blockiiififPfP10flowvectorPiS2_S2_S2_S2_(int, int, int, float, int, float, float *, flowvector *, int *, int *, int *, int *, int *);
static void __sti____cudaRegisterAll_14_kernel_cpp1_ii_e68026d2(void) __attribute__((__constructor__));
void __device_stub__Z19RANSAC_kernel_blockiiififPfP10flowvectorPiS2_S2_S2_S2_(int __par0, int __par1, int __par2, float __par3, int __par4, float __par5, float *__par6, flowvector *__par7, int *__par8, int *__par9, int *__par10, int *__par11, int *__par12){ struct __T20 *__T21 = 0;
__cudaSetupArg(__par0, __T21);__cudaSetupArg(__par1, __T21);__cudaSetupArg(__par2, __T21);__cudaSetupArg(__par3, __T21);__cudaSetupArg(__par4, __T21);__cudaSetupArg(__par5, __T21);__cudaSetupArg(__par6, __T21);__cudaSetupArg(__par7, __T21);__cudaSetupArg(__par8, __T21);__cudaSetupArg(__par9, __T21);__cudaSetupArg(__par10, __T21);__cudaSetupArg(__par11, __T21);__cudaSetupArg(__par12, __T21);__cudaLaunch(((char *)((void ( *)(int, int, int, float, int, float, float *, flowvector *, int *, int *, int *, int *, int *))RANSAC_kernel_block)));}
void RANSAC_kernel_block( int __cuda_0,int __cuda_1,int __cuda_2,float __cuda_3,int __cuda_4,float __cuda_5,float *__cuda_6,flowvector *__cuda_7,int *__cuda_8,int *__cuda_9,int *__cuda_10,int *__cuda_11,int *__cuda_12)
# 75 "kernel.cu"
{__device_stub__Z19RANSAC_kernel_blockiiififPfP10flowvectorPiS2_S2_S2_S2_( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8,__cuda_9,__cuda_10,__cuda_11,__cuda_12);
# 169 "kernel.cu"
}
# 1 "kernel.cudafe1.stub.c"
static void __sti____cudaRegisterAll_14_kernel_cpp1_ii_e68026d2(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(int, int, int, float, int, float, float *, flowvector *, int *, int *, int *, int *, int *))RANSAC_kernel_block), _Z19RANSAC_kernel_blockiiififPfP10flowvectorPiS2_S2_S2_S2_, (-1));  }
