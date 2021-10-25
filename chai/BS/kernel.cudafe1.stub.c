#include "crt/host_runtime.h"
#include "kernel.fatbin.c"
struct __T20 {int __par0;float __par1;int __par2;int __par3;int __par4;int __par5;XYZ *__par6;XYZ *__par7;int *__par8;int __dummy_field;__pad__(volatile char __dummy[4];)};
extern void __device_stub__Z14Bezier_surfaceifiiiiP3XYZS0_Pi(int, float, int, int, int, int, XYZ *, XYZ *, int *);
static void __sti____cudaRegisterAll_14_kernel_cpp1_ii_b5b693b1(void) __attribute__((__constructor__));
void __device_stub__Z14Bezier_surfaceifiiiiP3XYZS0_Pi(int __par0, float __par1, int __par2, int __par3, int __par4, int __par5, XYZ *__par6, XYZ *__par7, int *__par8){ struct __T20 *__T21 = 0;
__cudaSetupArg(__par0, __T21);__cudaSetupArg(__par1, __T21);__cudaSetupArg(__par2, __T21);__cudaSetupArg(__par3, __T21);__cudaSetupArg(__par4, __T21);__cudaSetupArg(__par5, __T21);__cudaSetupArg(__par6, __T21);__cudaSetupArg(__par7, __T21);__cudaSetupArg(__par8, __T21);__cudaLaunch(((char *)((void ( *)(int, float, int, int, int, int, XYZ *, XYZ *, int *))Bezier_surface)));}
void Bezier_surface( int __cuda_0,float __cuda_1,int __cuda_2,int __cuda_3,int __cuda_4,int __cuda_5,XYZ *__cuda_6,XYZ *__cuda_7,int *__cuda_8)
# 73 "kernel.cu"
{__device_stub__Z14Bezier_surfaceifiiiiP3XYZS0_Pi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8);
# 121 "kernel.cu"
}
# 1 "kernel.cudafe1.stub.c"
static void __sti____cudaRegisterAll_14_kernel_cpp1_ii_b5b693b1(void) {  __cudaRegisterBinary(); __cudaRegisterEntry(((void ( *)(int, float, int, int, int, int, XYZ *, XYZ *, int *))Bezier_surface), _Z14Bezier_surfaceifiiiiP3XYZS0_Pi, (-1));  }
