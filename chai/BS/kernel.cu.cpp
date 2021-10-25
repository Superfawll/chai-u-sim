# 1 "kernel.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "kernel.cudafe1.cpp"
# 1 "kernel.cu"
# 46 "/usr/local/cuda/bin/../include/device_types.h"
# 150 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h" 3
typedef long ptrdiff_t;
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h" 3
typedef unsigned long size_t;
# 1 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 1 3
# 69 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 3
# 1 "/usr/local/cuda/bin/../include/builtin_types.h" 1 3
# 42 "/usr/local/cuda/bin/../include/builtin_types.h" 3
# 1 "/usr/local/cuda/bin/../include/device_types.h" 1 3
# 46 "/usr/local/cuda/bin/../include/device_types.h" 3
enum cudaRoundMode
{
  cudaRoundNearest,
  cudaRoundZero,
  cudaRoundPosInf,
  cudaRoundMinInf
};
# 43 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/driver_types.h" 1 3
# 96 "/usr/local/cuda/bin/../include/driver_types.h" 3
enum cudaError
{





  cudaSuccess = 0,





  cudaErrorMissingConfiguration = 1,





  cudaErrorMemoryAllocation = 2,





  cudaErrorInitializationError = 3,
# 131 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchFailure = 4,
# 140 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorPriorLaunchFailure = 5,
# 150 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchTimeout = 6,
# 159 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchOutOfResources = 7,





  cudaErrorInvalidDeviceFunction = 8,
# 174 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorInvalidConfiguration = 9,





  cudaErrorInvalidDevice = 10,





  cudaErrorInvalidValue = 11,





  cudaErrorInvalidPitchValue = 12,





  cudaErrorInvalidSymbol = 13,




  cudaErrorMapBufferObjectFailed = 14,




  cudaErrorUnmapBufferObjectFailed = 15,





  cudaErrorInvalidHostPointer = 16,





  cudaErrorInvalidDevicePointer = 17,





  cudaErrorInvalidTexture = 18,





  cudaErrorInvalidTextureBinding = 19,






  cudaErrorInvalidChannelDescriptor = 20,





  cudaErrorInvalidMemcpyDirection = 21,
# 255 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorAddressOfConstant = 22,
# 264 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorTextureFetchFailed = 23,
# 273 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorTextureNotBound = 24,
# 282 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorSynchronizationError = 25,





  cudaErrorInvalidFilterSetting = 26,





  cudaErrorInvalidNormSetting = 27,







  cudaErrorMixedDeviceExecution = 28,







  cudaErrorCudartUnloading = 29,




  cudaErrorUnknown = 30,





  cudaErrorNotYetImplemented = 31,
# 330 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorMemoryValueTooLarge = 32,






  cudaErrorInvalidResourceHandle = 33,







  cudaErrorNotReady = 34,






  cudaErrorInsufficientDriver = 35,
# 365 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorSetOnActiveProcess = 36,





  cudaErrorInvalidSurface = 37,





  cudaErrorNoDevice = 38,





  cudaErrorECCUncorrectable = 39,




  cudaErrorSharedObjectSymbolNotFound = 40,




  cudaErrorSharedObjectInitFailed = 41,





  cudaErrorUnsupportedLimit = 42,





  cudaErrorDuplicateVariableName = 43,





  cudaErrorDuplicateTextureName = 44,





  cudaErrorDuplicateSurfaceName = 45,
# 426 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorDevicesUnavailable = 46,




  cudaErrorInvalidKernelImage = 47,







  cudaErrorNoKernelImageForDevice = 48,
# 448 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorIncompatibleDriverContext = 49,




  cudaErrorStartupFailure = 0x7f,





  cudaErrorApiFailureBase = 10000
};





enum cudaChannelFormatKind
{
  cudaChannelFormatKindSigned = 0,
  cudaChannelFormatKindUnsigned = 1,
  cudaChannelFormatKindFloat = 2,
  cudaChannelFormatKindNone = 3
};





struct cudaChannelFormatDesc
{
  int x;
  int y;
  int z;
  int w;
  enum cudaChannelFormatKind f;
};





struct cudaArray;





enum cudaMemcpyKind
{
  cudaMemcpyHostToHost = 0,
  cudaMemcpyHostToDevice = 1,
  cudaMemcpyDeviceToHost = 2,
  cudaMemcpyDeviceToDevice = 3
};






struct cudaPitchedPtr
{
  void *ptr;
  size_t pitch;
  size_t xsize;
  size_t ysize;
};






struct cudaExtent
{
  size_t width;
  size_t height;
  size_t depth;
};






struct cudaPos
{
  size_t x;
  size_t y;
  size_t z;
};





struct cudaMemcpy3DParms
{
  struct cudaArray *srcArray;
  struct cudaPos srcPos;
  struct cudaPitchedPtr srcPtr;

  struct cudaArray *dstArray;
  struct cudaPos dstPos;
  struct cudaPitchedPtr dstPtr;

  struct cudaExtent extent;
  enum cudaMemcpyKind kind;
};





struct cudaGraphicsResource;





enum cudaGraphicsRegisterFlags
{
  cudaGraphicsRegisterFlagsNone = 0
};





enum cudaGraphicsMapFlags
{
  cudaGraphicsMapFlagsNone = 0,
  cudaGraphicsMapFlagsReadOnly = 1,
  cudaGraphicsMapFlagsWriteDiscard = 2
};





enum cudaGraphicsCubeFace {
  cudaGraphicsCubeFacePositiveX = 0x00,
  cudaGraphicsCubeFaceNegativeX = 0x01,
  cudaGraphicsCubeFacePositiveY = 0x02,
  cudaGraphicsCubeFaceNegativeY = 0x03,
  cudaGraphicsCubeFacePositiveZ = 0x04,
  cudaGraphicsCubeFaceNegativeZ = 0x05
};





struct cudaFuncAttributes
{





   size_t sharedSizeBytes;





   size_t constSizeBytes;




   size_t localSizeBytes;






   int maxThreadsPerBlock;




   int numRegs;






   int ptxVersion;






   int binaryVersion;

   int __cudaReserved[6];
};





enum cudaFuncCache
{
  cudaFuncCachePreferNone = 0,
  cudaFuncCachePreferShared = 1,
  cudaFuncCachePreferL1 = 2
};





enum cudaComputeMode
{
  cudaComputeModeDefault = 0,
  cudaComputeModeExclusive = 1,
  cudaComputeModeProhibited = 2
};





enum cudaLimit
{
    cudaLimitStackSize = 0x00,
    cudaLimitPrintfFifoSize = 0x01,
    cudaLimitMallocHeapSize = 0x02
};





struct cudaDeviceProp
{
  char name[256];
  size_t totalGlobalMem;
  size_t sharedMemPerBlock;
  int regsPerBlock;
  int warpSize;
  size_t memPitch;
  int maxThreadsPerBlock;
  int maxThreadsDim[3];
  int maxGridSize[3];
  int clockRate;
  size_t totalConstMem;
  int major;
  int minor;
  size_t textureAlignment;
  int deviceOverlap;
  int multiProcessorCount;
  int kernelExecTimeoutEnabled;
  int integrated;
  int canMapHostMemory;
  int computeMode;
  int maxTexture1D;
  int maxTexture2D[2];
  int maxTexture3D[3];
  int maxTexture2DArray[3];
  size_t surfaceAlignment;
  int concurrentKernels;
  int ECCEnabled;
  int pciBusID;
  int pciDeviceID;
  int tccDriver;
  int __cudaReserved[21];
};
# 768 "/usr/local/cuda/bin/../include/driver_types.h" 3
typedef enum cudaError cudaError_t;





typedef struct CUstream_st *cudaStream_t;





typedef struct CUevent_st *cudaEvent_t;





typedef struct cudaGraphicsResource *cudaGraphicsResource_t;





typedef struct CUuuid_st cudaUUID_t;
# 44 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/surface_types.h" 1 3
# 63 "/usr/local/cuda/bin/../include/surface_types.h" 3
enum cudaSurfaceBoundaryMode
{
  cudaBoundaryModeZero = 0,
  cudaBoundaryModeClamp = 1,
  cudaBoundaryModeTrap = 2
};





enum cudaSurfaceFormatMode
{
  cudaFormatModeForced = 0,
  cudaFormatModeAuto = 1
};





struct surfaceReference
{



  struct cudaChannelFormatDesc channelDesc;
};
# 45 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/texture_types.h" 1 3
# 63 "/usr/local/cuda/bin/../include/texture_types.h" 3
enum cudaTextureAddressMode
{
  cudaAddressModeWrap = 0,
  cudaAddressModeClamp = 1,
  cudaAddressModeMirror = 2,
  cudaAddressModeBorder = 3
};





enum cudaTextureFilterMode
{
  cudaFilterModePoint = 0,
  cudaFilterModeLinear = 1
};





enum cudaTextureReadMode
{
  cudaReadModeElementType = 0,
  cudaReadModeNormalizedFloat = 1
};





struct textureReference
{



  int normalized;



  enum cudaTextureFilterMode filterMode;



  enum cudaTextureAddressMode addressMode[3];



  struct cudaChannelFormatDesc channelDesc;
  int __cudaReserved[16];
};
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/vector_types.h" 1 3
# 45 "/usr/local/cuda/bin/../include/vector_types.h" 3
# 1 "/usr/local/cuda/bin/../include/builtin_types.h" 1 3
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 3
# 1 "/usr/local/cuda/bin/../include/vector_types.h" 1 3
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 46 "/usr/local/cuda/bin/../include/vector_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/host_defines.h" 1 3
# 47 "/usr/local/cuda/bin/../include/vector_types.h" 2 3
# 75 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct char1
{
  signed char x;
};


struct uchar1
{
  unsigned char x;
};


struct __attribute__((aligned(2))) char2
{
  signed char x, y;
};


struct __attribute__((aligned(2))) uchar2
{
  unsigned char x, y;
};


struct char3
{
  signed char x, y, z;
};


struct uchar3
{
  unsigned char x, y, z;
};


struct __attribute__((aligned(4))) char4
{
  signed char x, y, z, w;
};


struct __attribute__((aligned(4))) uchar4
{
  unsigned char x, y, z, w;
};


struct short1
{
  short x;
};


struct ushort1
{
  unsigned short x;
};


struct __attribute__((aligned(4))) short2
{
  short x, y;
};


struct __attribute__((aligned(4))) ushort2
{
  unsigned short x, y;
};


struct short3
{
  short x, y, z;
};


struct ushort3
{
  unsigned short x, y, z;
};


struct __attribute__((aligned(8))) short4 { short x; short y; short z; short w; };


struct __attribute__((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; };


struct int1
{
  int x;
};


struct uint1
{
  unsigned int x;
};


struct __attribute__((aligned(8))) int2 { int x; int y; };


struct __attribute__((aligned(8))) uint2 { unsigned int x; unsigned int y; };


struct int3
{
  int x, y, z;
};


struct uint3
{
  unsigned int x, y, z;
};


struct __attribute__((aligned(16))) int4
{
  int x, y, z, w;
};


struct __attribute__((aligned(16))) uint4
{
  unsigned int x, y, z, w;
};


struct long1
{
  long int x;
};


struct ulong1
{
  unsigned long x;
};
# 229 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct __attribute__((aligned(2*sizeof(long int)))) long2
{
  long int x, y;
};


struct __attribute__((aligned(2*sizeof(unsigned long int)))) ulong2
{
  unsigned long int x, y;
};




struct long3
{
  long int x, y, z;
};


struct ulong3
{
  unsigned long int x, y, z;
};


struct __attribute__((aligned(16))) long4
{
  long int x, y, z, w;
};


struct __attribute__((aligned(16))) ulong4
{
  unsigned long int x, y, z, w;
};


struct float1
{
  float x;
};


struct __attribute__((aligned(8))) float2 { float x; float y; };


struct float3
{
  float x, y, z;
};


struct __attribute__((aligned(16))) float4
{
  float x, y, z, w;
};


struct longlong1
{
  long long int x;
};


struct ulonglong1
{
  unsigned long long int x;
};


struct __attribute__((aligned(16))) longlong2
{
  long long int x, y;
};


struct __attribute__((aligned(16))) ulonglong2
{
  unsigned long long int x, y;
};


struct longlong3
{
  long long int x, y, z;
};


struct ulonglong3
{
  unsigned long long int x, y, z;
};


struct __attribute__((aligned(16))) longlong4
{
  long long int x, y, z ,w;
};


struct __attribute__((aligned(16))) ulonglong4
{
  unsigned long long int x, y, z, w;
};


struct double1
{
  double x;
};


struct __attribute__((aligned(16))) double2
{
  double x, y;
};


struct double3
{
  double x, y, z;
};


struct __attribute__((aligned(16))) double4
{
  double x, y, z, w;
};
# 366 "/usr/local/cuda/bin/../include/vector_types.h" 3
typedef struct char1 char1;

typedef struct uchar1 uchar1;

typedef struct char2 char2;

typedef struct uchar2 uchar2;

typedef struct char3 char3;

typedef struct uchar3 uchar3;

typedef struct char4 char4;

typedef struct uchar4 uchar4;

typedef struct short1 short1;

typedef struct ushort1 ushort1;

typedef struct short2 short2;

typedef struct ushort2 ushort2;

typedef struct short3 short3;

typedef struct ushort3 ushort3;

typedef struct short4 short4;

typedef struct ushort4 ushort4;

typedef struct int1 int1;

typedef struct uint1 uint1;

typedef struct int2 int2;

typedef struct uint2 uint2;

typedef struct int3 int3;

typedef struct uint3 uint3;

typedef struct int4 int4;

typedef struct uint4 uint4;

typedef struct long1 long1;

typedef struct ulong1 ulong1;

typedef struct long2 long2;

typedef struct ulong2 ulong2;

typedef struct long3 long3;

typedef struct ulong3 ulong3;

typedef struct long4 long4;

typedef struct ulong4 ulong4;

typedef struct float1 float1;

typedef struct float2 float2;

typedef struct float3 float3;

typedef struct float4 float4;

typedef struct longlong1 longlong1;

typedef struct ulonglong1 ulonglong1;

typedef struct longlong2 longlong2;

typedef struct ulonglong2 ulonglong2;

typedef struct longlong3 longlong3;

typedef struct ulonglong3 ulonglong3;

typedef struct longlong4 longlong4;

typedef struct ulonglong4 ulonglong4;

typedef struct double1 double1;

typedef struct double2 double2;

typedef struct double3 double3;

typedef struct double4 double4;
# 469 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct dim3
{
    unsigned int x, y, z;

    dim3(unsigned int vx = 1, unsigned int vy = 1, unsigned int vz = 1) : x(vx), y(vy), z(vz) {}
    dim3(uint3 v) : x(v.x), y(v.y), z(v.z) {}
    operator uint3(void) { uint3 t; t.x = x; t.y = y; t.z = z; return t; }

};


typedef struct dim3 dim3;
# 46 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 70 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2 3
# 1 "/usr/local/cuda/bin/../include/crt/storage_class.h" 1 3
# 71 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2 3
# 214 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h" 2 3
# 96 "/usr/local/cuda/bin/../include/driver_types.h"
# 466 "/usr/local/cuda/bin/../include/driver_types.h"
# 478 "/usr/local/cuda/bin/../include/driver_types.h"
# 491 "/usr/local/cuda/bin/../include/driver_types.h"
# 497 "/usr/local/cuda/bin/../include/driver_types.h"
# 510 "/usr/local/cuda/bin/../include/driver_types.h"
# 523 "/usr/local/cuda/bin/../include/driver_types.h"
# 535 "/usr/local/cuda/bin/../include/driver_types.h"
# 546 "/usr/local/cuda/bin/../include/driver_types.h"
# 564 "/usr/local/cuda/bin/../include/driver_types.h"
# 570 "/usr/local/cuda/bin/../include/driver_types.h"
# 579 "/usr/local/cuda/bin/../include/driver_types.h"
# 590 "/usr/local/cuda/bin/../include/driver_types.h"
# 603 "/usr/local/cuda/bin/../include/driver_types.h"
# 656 "/usr/local/cuda/bin/../include/driver_types.h"
# 667 "/usr/local/cuda/bin/../include/driver_types.h"
# 678 "/usr/local/cuda/bin/../include/driver_types.h"
# 689 "/usr/local/cuda/bin/../include/driver_types.h"
# 768 "/usr/local/cuda/bin/../include/driver_types.h"
# 774 "/usr/local/cuda/bin/../include/driver_types.h"
# 780 "/usr/local/cuda/bin/../include/driver_types.h"
# 786 "/usr/local/cuda/bin/../include/driver_types.h"
# 792 "/usr/local/cuda/bin/../include/driver_types.h"
# 63 "/usr/local/cuda/bin/../include/surface_types.h"
# 74 "/usr/local/cuda/bin/../include/surface_types.h"
# 84 "/usr/local/cuda/bin/../include/surface_types.h"
# 63 "/usr/local/cuda/bin/../include/texture_types.h"
# 75 "/usr/local/cuda/bin/../include/texture_types.h"
# 85 "/usr/local/cuda/bin/../include/texture_types.h"
# 95 "/usr/local/cuda/bin/../include/texture_types.h"
# 75 "/usr/local/cuda/bin/../include/vector_types.h"
# 81 "/usr/local/cuda/bin/../include/vector_types.h"
# 87 "/usr/local/cuda/bin/../include/vector_types.h"
# 93 "/usr/local/cuda/bin/../include/vector_types.h"
# 99 "/usr/local/cuda/bin/../include/vector_types.h"
# 105 "/usr/local/cuda/bin/../include/vector_types.h"
# 111 "/usr/local/cuda/bin/../include/vector_types.h"
# 117 "/usr/local/cuda/bin/../include/vector_types.h"
# 123 "/usr/local/cuda/bin/../include/vector_types.h"
# 129 "/usr/local/cuda/bin/../include/vector_types.h"
# 135 "/usr/local/cuda/bin/../include/vector_types.h"
# 141 "/usr/local/cuda/bin/../include/vector_types.h"
# 147 "/usr/local/cuda/bin/../include/vector_types.h"
# 153 "/usr/local/cuda/bin/../include/vector_types.h"
# 159 "/usr/local/cuda/bin/../include/vector_types.h"
# 162 "/usr/local/cuda/bin/../include/vector_types.h"
# 165 "/usr/local/cuda/bin/../include/vector_types.h"
# 171 "/usr/local/cuda/bin/../include/vector_types.h"
# 177 "/usr/local/cuda/bin/../include/vector_types.h"
# 180 "/usr/local/cuda/bin/../include/vector_types.h"
# 183 "/usr/local/cuda/bin/../include/vector_types.h"
# 189 "/usr/local/cuda/bin/../include/vector_types.h"
# 195 "/usr/local/cuda/bin/../include/vector_types.h"
# 201 "/usr/local/cuda/bin/../include/vector_types.h"
# 207 "/usr/local/cuda/bin/../include/vector_types.h"
# 213 "/usr/local/cuda/bin/../include/vector_types.h"
# 229 "/usr/local/cuda/bin/../include/vector_types.h"
# 235 "/usr/local/cuda/bin/../include/vector_types.h"
# 243 "/usr/local/cuda/bin/../include/vector_types.h"
# 249 "/usr/local/cuda/bin/../include/vector_types.h"
# 255 "/usr/local/cuda/bin/../include/vector_types.h"
# 261 "/usr/local/cuda/bin/../include/vector_types.h"
# 267 "/usr/local/cuda/bin/../include/vector_types.h"
# 273 "/usr/local/cuda/bin/../include/vector_types.h"
# 276 "/usr/local/cuda/bin/../include/vector_types.h"
# 282 "/usr/local/cuda/bin/../include/vector_types.h"
# 288 "/usr/local/cuda/bin/../include/vector_types.h"
# 294 "/usr/local/cuda/bin/../include/vector_types.h"
# 300 "/usr/local/cuda/bin/../include/vector_types.h"
# 306 "/usr/local/cuda/bin/../include/vector_types.h"
# 312 "/usr/local/cuda/bin/../include/vector_types.h"
# 318 "/usr/local/cuda/bin/../include/vector_types.h"
# 324 "/usr/local/cuda/bin/../include/vector_types.h"
# 330 "/usr/local/cuda/bin/../include/vector_types.h"
# 336 "/usr/local/cuda/bin/../include/vector_types.h"
# 342 "/usr/local/cuda/bin/../include/vector_types.h"
# 348 "/usr/local/cuda/bin/../include/vector_types.h"
# 354 "/usr/local/cuda/bin/../include/vector_types.h"
# 366 "/usr/local/cuda/bin/../include/vector_types.h"
# 368 "/usr/local/cuda/bin/../include/vector_types.h"
# 370 "/usr/local/cuda/bin/../include/vector_types.h"
# 372 "/usr/local/cuda/bin/../include/vector_types.h"
# 374 "/usr/local/cuda/bin/../include/vector_types.h"
# 376 "/usr/local/cuda/bin/../include/vector_types.h"
# 378 "/usr/local/cuda/bin/../include/vector_types.h"
# 380 "/usr/local/cuda/bin/../include/vector_types.h"
# 382 "/usr/local/cuda/bin/../include/vector_types.h"
# 384 "/usr/local/cuda/bin/../include/vector_types.h"
# 386 "/usr/local/cuda/bin/../include/vector_types.h"
# 388 "/usr/local/cuda/bin/../include/vector_types.h"
# 390 "/usr/local/cuda/bin/../include/vector_types.h"
# 392 "/usr/local/cuda/bin/../include/vector_types.h"
# 394 "/usr/local/cuda/bin/../include/vector_types.h"
# 396 "/usr/local/cuda/bin/../include/vector_types.h"
# 398 "/usr/local/cuda/bin/../include/vector_types.h"
# 400 "/usr/local/cuda/bin/../include/vector_types.h"
# 402 "/usr/local/cuda/bin/../include/vector_types.h"
# 404 "/usr/local/cuda/bin/../include/vector_types.h"
# 406 "/usr/local/cuda/bin/../include/vector_types.h"
# 408 "/usr/local/cuda/bin/../include/vector_types.h"
# 410 "/usr/local/cuda/bin/../include/vector_types.h"
# 412 "/usr/local/cuda/bin/../include/vector_types.h"
# 414 "/usr/local/cuda/bin/../include/vector_types.h"
# 416 "/usr/local/cuda/bin/../include/vector_types.h"
# 418 "/usr/local/cuda/bin/../include/vector_types.h"
# 420 "/usr/local/cuda/bin/../include/vector_types.h"
# 422 "/usr/local/cuda/bin/../include/vector_types.h"
# 424 "/usr/local/cuda/bin/../include/vector_types.h"
# 426 "/usr/local/cuda/bin/../include/vector_types.h"
# 428 "/usr/local/cuda/bin/../include/vector_types.h"
# 430 "/usr/local/cuda/bin/../include/vector_types.h"
# 432 "/usr/local/cuda/bin/../include/vector_types.h"
# 434 "/usr/local/cuda/bin/../include/vector_types.h"
# 436 "/usr/local/cuda/bin/../include/vector_types.h"
# 438 "/usr/local/cuda/bin/../include/vector_types.h"
# 440 "/usr/local/cuda/bin/../include/vector_types.h"
# 442 "/usr/local/cuda/bin/../include/vector_types.h"
# 444 "/usr/local/cuda/bin/../include/vector_types.h"
# 446 "/usr/local/cuda/bin/../include/vector_types.h"
# 448 "/usr/local/cuda/bin/../include/vector_types.h"
# 450 "/usr/local/cuda/bin/../include/vector_types.h"
# 452 "/usr/local/cuda/bin/../include/vector_types.h"
# 454 "/usr/local/cuda/bin/../include/vector_types.h"
# 456 "/usr/local/cuda/bin/../include/vector_types.h"
# 458 "/usr/local/cuda/bin/../include/vector_types.h"
# 460 "/usr/local/cuda/bin/../include/vector_types.h"
# 469 "/usr/local/cuda/bin/../include/vector_types.h"
# 480 "/usr/local/cuda/bin/../include/vector_types.h"
# 115 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit();
# 131 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSynchronize();
# 183 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetLimit(cudaLimit, size_t);
# 207 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetLimit(size_t *, cudaLimit);
# 237 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetCacheConfig(cudaFuncCache *);
# 278 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetCacheConfig(cudaFuncCache);
# 330 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetLastError();
# 373 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaPeekAtLastError();
# 387 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" const char *cudaGetErrorString(cudaError_t);
# 418 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceCount(int *);
# 536 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp *, int);
# 555 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaChooseDevice(int *, const cudaDeviceProp *);
# 579 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDevice(int);
# 597 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDevice(int *);
# 626 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetValidDevices(int *, int);
# 677 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDeviceFlags(unsigned);
# 703 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamCreate(cudaStream_t *);
# 719 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t);
# 753 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamWaitEvent(cudaStream_t, cudaEvent_t, unsigned);
# 771 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t);
# 789 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamQuery(cudaStream_t);
# 821 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreate(cudaEvent_t *);
# 852 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreateWithFlags(cudaEvent_t *, unsigned);
# 885 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventRecord(cudaEvent_t, cudaStream_t = 0);
# 914 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventQuery(cudaEvent_t);
# 946 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t);
# 966 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t);
# 1007 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventElapsedTime(float *, cudaEvent_t, cudaEvent_t);
# 1046 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaConfigureCall(dim3, dim3, size_t = (0), cudaStream_t = 0);
# 1073 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetupArgument(const void *, size_t, size_t);
# 1119 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncSetCacheConfig(const char *, cudaFuncCache);
# 1154 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaLaunch(const char *);
# 1187 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncGetAttributes(cudaFuncAttributes *, const char *);
# 1209 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForDevice(double *);
# 1231 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForHost(double *);
# 1263 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc(void **, size_t);
# 1292 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocHost(void **, size_t);
# 1331 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocPitch(void **, size_t *, size_t, size_t);
# 1370 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocArray(cudaArray **, const cudaChannelFormatDesc *, size_t, size_t = (0), unsigned = (0));
# 1394 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFree(void *);
# 1414 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeHost(void *);
# 1436 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeArray(cudaArray *);
# 1495 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostAlloc(void **, size_t, unsigned);
# 1522 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetDevicePointer(void **, void *, unsigned);
# 1541 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetFlags(unsigned *, void *);
# 1576 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr *, cudaExtent);
# 1626 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3DArray(cudaArray **, const cudaChannelFormatDesc *, cudaExtent, unsigned = (0));
# 1723 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms *);
# 1828 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms *, cudaStream_t = 0);
# 1847 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemGetInfo(size_t *, size_t *);
# 1880 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy(void *, const void *, size_t, cudaMemcpyKind);
# 1913 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArray(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind);
# 1946 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArray(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind);
# 1981 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2023 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2D(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 2064 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 2105 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArray(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind);
# 2144 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2179 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbol(const char *, const void *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice);
# 2213 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbol(void *, const char *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost);
# 2256 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyAsync(void *, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2298 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2340 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2391 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DAsync(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2441 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2491 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2535 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char *, const void *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2578 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void *, const char *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0);
# 2600 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset(void *, int, size_t);
# 2626 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2D(void *, size_t, int, size_t, size_t);
# 2665 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr, int, cudaExtent);
# 2692 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemsetAsync(void *, int, size_t, cudaStream_t = 0);
# 2724 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2DAsync(void *, size_t, int, size_t, size_t, cudaStream_t = 0);
# 2769 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3DAsync(cudaPitchedPtr, int, cudaExtent, cudaStream_t = 0);
# 2796 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolAddress(void **, const char *);
# 2819 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolSize(size_t *, const char *);
# 2865 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t);
# 2897 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t, unsigned);
# 2932 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsMapResources(int, cudaGraphicsResource_t *, cudaStream_t = 0);
# 2963 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnmapResources(int, cudaGraphicsResource_t *, cudaStream_t = 0);
# 2992 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceGetMappedPointer(void **, size_t *, cudaGraphicsResource_t);
# 3026 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray **, cudaGraphicsResource_t, unsigned, unsigned);
# 3059 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc *, const cudaArray *);
# 3094 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int, int, int, int, cudaChannelFormatKind);
# 3136 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t = (((2147483647) * 2U) + 1U));
# 3179 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture2D(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t, size_t, size_t);
# 3207 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTextureToArray(const textureReference *, const cudaArray *, const cudaChannelFormatDesc *);
# 3228 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaUnbindTexture(const textureReference *);
# 3253 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t *, const textureReference *);
# 3277 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureReference(const textureReference **, const char *);
# 3310 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindSurfaceToArray(const surfaceReference *, const cudaArray *, const cudaChannelFormatDesc *);
# 3328 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSurfaceReference(const surfaceReference **, const char *);
# 3355 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDriverGetVersion(int *);
# 3372 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaRuntimeGetVersion(int *);
# 3377 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetExportTable(const void **, const cudaUUID_t *);
# 93 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc()
# 94 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 95 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone);
# 96 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 98 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf()
# 99 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 100 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 102 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 103 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 105 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1()
# 106 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 107 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 109 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 110 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 112 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2()
# 113 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 114 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 116 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 117 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 119 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4()
# 120 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 121 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 123 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 124 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 126 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> ()
# 127 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 128 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(char)) * 8);
# 133 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 135 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 137 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> ()
# 138 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 139 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 141 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 142 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 144 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> ()
# 145 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 146 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 148 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 149 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 151 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> ()
# 152 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 153 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 155 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 156 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 158 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> ()
# 159 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 160 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 162 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 163 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 165 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> ()
# 166 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 167 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 169 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 170 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 172 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> ()
# 173 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 174 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 176 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 177 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 179 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> ()
# 180 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 181 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 183 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 184 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 186 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> ()
# 187 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 188 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 190 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 191 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 193 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> ()
# 194 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 195 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 197 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 198 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 200 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> ()
# 201 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 202 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 204 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 205 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 207 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> ()
# 208 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 209 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 211 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 212 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 214 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> ()
# 215 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 216 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 218 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 219 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 221 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> ()
# 222 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 223 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 225 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 226 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 228 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> ()
# 229 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 230 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 232 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 233 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 235 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> ()
# 236 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 237 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 239 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 240 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 242 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> ()
# 243 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 244 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 246 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 247 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 249 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> ()
# 250 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 251 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 253 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 254 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 256 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> ()
# 257 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 258 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 260 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 261 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 263 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> ()
# 264 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 265 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 267 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 268 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 270 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> ()
# 271 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 272 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 274 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 275 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 277 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> ()
# 278 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 279 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 281 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 282 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 284 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> ()
# 285 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 286 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 288 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 289 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 291 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> ()
# 292 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 293 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 295 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 296 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 298 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> ()
# 299 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 300 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 302 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 303 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 365 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> ()
# 366 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 367 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 369 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 370 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 372 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> ()
# 373 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 374 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 376 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 377 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 379 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> ()
# 380 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 381 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 383 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 384 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 386 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> ()
# 387 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 388 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 390 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 391 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 65 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz)
# 66 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 67 "/usr/local/cuda/bin/../include/driver_functions.h"
cudaPitchedPtr s;
# 69 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.ptr) = d;
# 70 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.pitch) = p;
# 71 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.xsize) = xsz;
# 72 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.ysize) = ysz;
# 74 "/usr/local/cuda/bin/../include/driver_functions.h"
return s;
# 75 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 92 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z)
# 93 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 94 "/usr/local/cuda/bin/../include/driver_functions.h"
cudaPos p;
# 96 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.x) = x;
# 97 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.y) = y;
# 98 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.z) = z;
# 100 "/usr/local/cuda/bin/../include/driver_functions.h"
return p;
# 101 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 118 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d)
# 119 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 120 "/usr/local/cuda/bin/../include/driver_functions.h"
cudaExtent e;
# 122 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.width) = w;
# 123 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.height) = h;
# 124 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.depth) = d;
# 126 "/usr/local/cuda/bin/../include/driver_functions.h"
return e;
# 127 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 55 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char1 make_char1(signed char x)
# 56 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 57 "/usr/local/cuda/bin/../include/vector_functions.h"
char1 t; (t.x) = x; return t;
# 58 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 60 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar1 make_uchar1(unsigned char x)
# 61 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 62 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar1 t; (t.x) = x; return t;
# 63 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 65 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char2 make_char2(signed char x, signed char y)
# 66 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 67 "/usr/local/cuda/bin/../include/vector_functions.h"
char2 t; (t.x) = x; (t.y) = y; return t;
# 68 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 70 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar2 make_uchar2(unsigned char x, unsigned char y)
# 71 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 72 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar2 t; (t.x) = x; (t.y) = y; return t;
# 73 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 75 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char3 make_char3(signed char x, signed char y, signed char z)
# 76 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 77 "/usr/local/cuda/bin/../include/vector_functions.h"
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 78 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 80 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z)
# 81 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 82 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 83 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 85 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w)
# 86 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 87 "/usr/local/cuda/bin/../include/vector_functions.h"
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 88 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 90 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
# 91 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 92 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 93 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 95 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short1 make_short1(short x)
# 96 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 97 "/usr/local/cuda/bin/../include/vector_functions.h"
short1 t; (t.x) = x; return t;
# 98 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 100 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort1 make_ushort1(unsigned short x)
# 101 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 102 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort1 t; (t.x) = x; return t;
# 103 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 105 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short2 make_short2(short x, short y)
# 106 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 107 "/usr/local/cuda/bin/../include/vector_functions.h"
short2 t; (t.x) = x; (t.y) = y; return t;
# 108 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 110 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort2 make_ushort2(unsigned short x, unsigned short y)
# 111 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 112 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort2 t; (t.x) = x; (t.y) = y; return t;
# 113 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 115 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short3 make_short3(short x, short y, short z)
# 116 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 117 "/usr/local/cuda/bin/../include/vector_functions.h"
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 118 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 120 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z)
# 121 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 122 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 123 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 125 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short4 make_short4(short x, short y, short z, short w)
# 126 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 127 "/usr/local/cuda/bin/../include/vector_functions.h"
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 128 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 130 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
# 131 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 132 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 133 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 135 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int1 make_int1(int x)
# 136 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 137 "/usr/local/cuda/bin/../include/vector_functions.h"
int1 t; (t.x) = x; return t;
# 138 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 140 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint1 make_uint1(unsigned x)
# 141 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 142 "/usr/local/cuda/bin/../include/vector_functions.h"
uint1 t; (t.x) = x; return t;
# 143 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 145 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int2 make_int2(int x, int y)
# 146 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 147 "/usr/local/cuda/bin/../include/vector_functions.h"
int2 t; (t.x) = x; (t.y) = y; return t;
# 148 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 150 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint2 make_uint2(unsigned x, unsigned y)
# 151 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 152 "/usr/local/cuda/bin/../include/vector_functions.h"
uint2 t; (t.x) = x; (t.y) = y; return t;
# 153 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 155 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int3 make_int3(int x, int y, int z)
# 156 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 157 "/usr/local/cuda/bin/../include/vector_functions.h"
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 158 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 160 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z)
# 161 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 162 "/usr/local/cuda/bin/../include/vector_functions.h"
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 163 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 165 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int4 make_int4(int x, int y, int z, int w)
# 166 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 167 "/usr/local/cuda/bin/../include/vector_functions.h"
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 168 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 170 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w)
# 171 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 172 "/usr/local/cuda/bin/../include/vector_functions.h"
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 173 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 175 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long1 make_long1(long x)
# 176 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 177 "/usr/local/cuda/bin/../include/vector_functions.h"
long1 t; (t.x) = x; return t;
# 178 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 180 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong1 make_ulong1(unsigned long x)
# 181 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 182 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong1 t; (t.x) = x; return t;
# 183 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 185 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long2 make_long2(long x, long y)
# 186 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 187 "/usr/local/cuda/bin/../include/vector_functions.h"
long2 t; (t.x) = x; (t.y) = y; return t;
# 188 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 190 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong2 make_ulong2(unsigned long x, unsigned long y)
# 191 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 192 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong2 t; (t.x) = x; (t.y) = y; return t;
# 193 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 195 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long3 make_long3(long x, long y, long z)
# 196 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 197 "/usr/local/cuda/bin/../include/vector_functions.h"
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 198 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 200 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z)
# 201 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 202 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 203 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 205 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long4 make_long4(long x, long y, long z, long w)
# 206 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 207 "/usr/local/cuda/bin/../include/vector_functions.h"
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 208 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 210 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w)
# 211 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 212 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 213 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 215 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float1 make_float1(float x)
# 216 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 217 "/usr/local/cuda/bin/../include/vector_functions.h"
float1 t; (t.x) = x; return t;
# 218 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 220 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float2 make_float2(float x, float y)
# 221 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 222 "/usr/local/cuda/bin/../include/vector_functions.h"
float2 t; (t.x) = x; (t.y) = y; return t;
# 223 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 225 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float3 make_float3(float x, float y, float z)
# 226 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 227 "/usr/local/cuda/bin/../include/vector_functions.h"
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 228 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 230 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float4 make_float4(float x, float y, float z, float w)
# 231 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 232 "/usr/local/cuda/bin/../include/vector_functions.h"
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 233 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 235 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong1 make_longlong1(long long x)
# 236 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 237 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong1 t; (t.x) = x; return t;
# 238 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 240 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong1 make_ulonglong1(unsigned long long x)
# 241 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 242 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong1 t; (t.x) = x; return t;
# 243 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 245 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong2 make_longlong2(long long x, long long y)
# 246 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 247 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong2 t; (t.x) = x; (t.y) = y; return t;
# 248 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 250 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y)
# 251 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 252 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong2 t; (t.x) = x; (t.y) = y; return t;
# 253 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 255 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong3 make_longlong3(long long x, long long y, long long z)
# 256 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 257 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 258 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 260 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z)
# 261 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 262 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 263 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 265 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w)
# 266 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 267 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 268 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 270 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w)
# 271 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 272 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 273 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 275 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double1 make_double1(double x)
# 276 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 277 "/usr/local/cuda/bin/../include/vector_functions.h"
double1 t; (t.x) = x; return t;
# 278 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 280 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double2 make_double2(double x, double y)
# 281 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 282 "/usr/local/cuda/bin/../include/vector_functions.h"
double2 t; (t.x) = x; (t.y) = y; return t;
# 283 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 285 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double3 make_double3(double x, double y, double z)
# 286 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 287 "/usr/local/cuda/bin/../include/vector_functions.h"
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 288 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 290 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double4 make_double4(double x, double y, double z, double w)
# 291 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 292 "/usr/local/cuda/bin/../include/vector_functions.h"
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 293 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 46 "/usr/include/string.h" 3
extern "C" { extern inline void *memcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); }
# 50 "/usr/include/string.h" 3
extern "C" { extern inline void *memmove(void *, const void *, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); }
# 58 "/usr/include/string.h" 3
extern "C" void *memccpy(void *__restrict__, const void *__restrict__, int, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 66 "/usr/include/string.h" 3
extern "C" { extern inline void *memset(void *, int, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); }
# 69 "/usr/include/string.h" 3
extern "C" int memcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 76 "/usr/include/string.h" 3
extern inline void *memchr(void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1)));
# 78 "/usr/include/string.h" 3
extern inline const void *memchr(const void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1)));
# 83 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) void *memchr(void *__s, int __c, size_t __n) throw()
# 84 "/usr/include/string.h" 3
{
# 85 "/usr/include/string.h" 3
return __builtin_memchr(__s, __c, __n);
# 86 "/usr/include/string.h" 3
}
# 89 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) const void *memchr(const void *__s, int __c, size_t __n) throw()
# 90 "/usr/include/string.h" 3
{
# 91 "/usr/include/string.h" 3
return __builtin_memchr(__s, __c, __n);
# 92 "/usr/include/string.h" 3
}
# 105 "/usr/include/string.h" 3
void *rawmemchr(void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 107 "/usr/include/string.h" 3
const void *rawmemchr(const void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 116 "/usr/include/string.h" 3
void *memrchr(void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 118 "/usr/include/string.h" 3
const void *memrchr(const void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 129 "/usr/include/string.h" 3
extern "C" { extern inline char *strcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); }
# 132 "/usr/include/string.h" 3
extern "C" { extern inline char *strncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); }
# 137 "/usr/include/string.h" 3
extern "C" { extern inline char *strcat(char *__restrict__, const char *__restrict__) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); }
# 140 "/usr/include/string.h" 3
extern "C" { extern inline char *strncat(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); }
# 144 "/usr/include/string.h" 3
extern "C" int strcmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 147 "/usr/include/string.h" 3
extern "C" int strncmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 151 "/usr/include/string.h" 3
extern "C" int strcoll(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 154 "/usr/include/string.h" 3
extern "C" size_t strxfrm(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(2)));
# 39 "/usr/include/xlocale.h" 3
extern "C" { typedef
# 27 "/usr/include/xlocale.h" 3
struct __locale_struct {
# 30 "/usr/include/xlocale.h" 3
struct __locale_data *__locales[13];
# 33 "/usr/include/xlocale.h" 3
const unsigned short *__ctype_b;
# 34 "/usr/include/xlocale.h" 3
const int *__ctype_tolower;
# 35 "/usr/include/xlocale.h" 3
const int *__ctype_toupper;
# 38 "/usr/include/xlocale.h" 3
const char *__names[13];
# 39 "/usr/include/xlocale.h" 3
} *__locale_t; }
# 42 "/usr/include/xlocale.h" 3
extern "C" { typedef __locale_t locale_t; }
# 166 "/usr/include/string.h" 3
extern "C" int strcoll_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 169 "/usr/include/string.h" 3
extern "C" size_t strxfrm_l(char *, const char *, size_t, __locale_t) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 176 "/usr/include/string.h" 3
extern "C" char *strdup(const char *) throw() __attribute__((__malloc__)) __attribute__((nonnull(1)));
# 184 "/usr/include/string.h" 3
extern "C" char *strndup(const char *, size_t) throw() __attribute__((__malloc__)) __attribute__((nonnull(1)));
# 216 "/usr/include/string.h" 3
extern inline char *strchr(char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1)));
# 218 "/usr/include/string.h" 3
extern inline const char *strchr(const char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1)));
# 223 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) char *strchr(char *__s, int __c) throw()
# 224 "/usr/include/string.h" 3
{
# 225 "/usr/include/string.h" 3
return __builtin_strchr(__s, __c);
# 226 "/usr/include/string.h" 3
}
# 229 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) const char *strchr(const char *__s, int __c) throw()
# 230 "/usr/include/string.h" 3
{
# 231 "/usr/include/string.h" 3
return __builtin_strchr(__s, __c);
# 232 "/usr/include/string.h" 3
}
# 243 "/usr/include/string.h" 3
extern inline char *strrchr(char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1)));
# 245 "/usr/include/string.h" 3
extern inline const char *strrchr(const char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1)));
# 250 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) char *strrchr(char *__s, int __c) throw()
# 251 "/usr/include/string.h" 3
{
# 252 "/usr/include/string.h" 3
return __builtin_strrchr(__s, __c);
# 253 "/usr/include/string.h" 3
}
# 256 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) const char *strrchr(const char *__s, int __c) throw()
# 257 "/usr/include/string.h" 3
{
# 258 "/usr/include/string.h" 3
return __builtin_strrchr(__s, __c);
# 259 "/usr/include/string.h" 3
}
# 272 "/usr/include/string.h" 3
char *strchrnul(char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 274 "/usr/include/string.h" 3
const char *strchrnul(const char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1)));
# 285 "/usr/include/string.h" 3
extern "C" size_t strcspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 289 "/usr/include/string.h" 3
extern "C" size_t strspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 295 "/usr/include/string.h" 3
extern inline char *strpbrk(char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 297 "/usr/include/string.h" 3
extern inline const char *strpbrk(const char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 302 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) char *strpbrk(char *__s, const char *__accept) throw()
# 303 "/usr/include/string.h" 3
{
# 304 "/usr/include/string.h" 3
return __builtin_strpbrk(__s, __accept);
# 305 "/usr/include/string.h" 3
}
# 308 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) const char *strpbrk(const char *__s, const char *__accept) throw()
# 309 "/usr/include/string.h" 3
{
# 310 "/usr/include/string.h" 3
return __builtin_strpbrk(__s, __accept);
# 311 "/usr/include/string.h" 3
}
# 322 "/usr/include/string.h" 3
extern inline char *strstr(char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 324 "/usr/include/string.h" 3
extern inline const char *strstr(const char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 329 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) char *strstr(char *__haystack, const char *__needle) throw()
# 330 "/usr/include/string.h" 3
{
# 331 "/usr/include/string.h" 3
return __builtin_strstr(__haystack, __needle);
# 332 "/usr/include/string.h" 3
}
# 335 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) const char *strstr(const char *__haystack, const char *__needle) throw()
# 336 "/usr/include/string.h" 3
{
# 337 "/usr/include/string.h" 3
return __builtin_strstr(__haystack, __needle);
# 338 "/usr/include/string.h" 3
}
# 348 "/usr/include/string.h" 3
extern "C" char *strtok(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(2)));
# 354 "/usr/include/string.h" 3
extern "C" char *__strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 359 "/usr/include/string.h" 3
extern "C" char *strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 367 "/usr/include/string.h" 3
char *strcasestr(char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 369 "/usr/include/string.h" 3
const char *strcasestr(const char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 382 "/usr/include/string.h" 3
extern "C" void *memmem(const void *, size_t, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 388 "/usr/include/string.h" 3
extern "C" void *__mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 391 "/usr/include/string.h" 3
extern "C" { extern inline void *mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); }
# 399 "/usr/include/string.h" 3
extern "C" size_t strlen(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 406 "/usr/include/string.h" 3
extern "C" size_t strnlen(const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1)));
# 413 "/usr/include/string.h" 3
extern "C" char *strerror(int) throw();
# 438 "/usr/include/string.h" 3
extern "C" char *strerror_r(int, char *, size_t) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(2)));
# 445 "/usr/include/string.h" 3
extern "C" char *strerror_l(int, __locale_t) throw();
# 451 "/usr/include/string.h" 3
extern "C" void __bzero(void *, size_t) throw() __attribute__((nonnull(1)));
# 455 "/usr/include/string.h" 3
extern "C" { extern inline void bcopy(const void *, void *, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); }
# 459 "/usr/include/string.h" 3
extern "C" { extern inline void bzero(void *, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); }
# 462 "/usr/include/string.h" 3
extern "C" int bcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 469 "/usr/include/string.h" 3
extern inline char *index(char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1)));
# 471 "/usr/include/string.h" 3
extern inline const char *index(const char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1)));
# 476 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) char *index(char *__s, int __c) throw()
# 477 "/usr/include/string.h" 3
{
# 478 "/usr/include/string.h" 3
return __builtin_index(__s, __c);
# 479 "/usr/include/string.h" 3
}
# 482 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) const char *index(const char *__s, int __c) throw()
# 483 "/usr/include/string.h" 3
{
# 484 "/usr/include/string.h" 3
return __builtin_index(__s, __c);
# 485 "/usr/include/string.h" 3
}
# 497 "/usr/include/string.h" 3
extern inline char *rindex(char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1)));
# 499 "/usr/include/string.h" 3
extern inline const char *rindex(const char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1)));
# 504 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) char *rindex(char *__s, int __c) throw()
# 505 "/usr/include/string.h" 3
{
# 506 "/usr/include/string.h" 3
return __builtin_rindex(__s, __c);
# 507 "/usr/include/string.h" 3
}
# 510 "/usr/include/string.h" 3
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) const char *rindex(const char *__s, int __c) throw()
# 511 "/usr/include/string.h" 3
{
# 512 "/usr/include/string.h" 3
return __builtin_rindex(__s, __c);
# 513 "/usr/include/string.h" 3
}
# 523 "/usr/include/string.h" 3
extern "C" int ffs(int) throw() __attribute__((__const__));
# 528 "/usr/include/string.h" 3
extern "C" int ffsl(long) throw() __attribute__((__const__));
# 529 "/usr/include/string.h" 3
extern "C" int ffsll(long long) throw() __attribute__((__const__));
# 534 "/usr/include/string.h" 3
extern "C" int strcasecmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 538 "/usr/include/string.h" 3
extern "C" int strncasecmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 545 "/usr/include/string.h" 3
extern "C" int strcasecmp_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 549 "/usr/include/string.h" 3
extern "C" int strncasecmp_l(const char *, const char *, size_t, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 557 "/usr/include/string.h" 3
extern "C" char *strsep(char **__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 564 "/usr/include/string.h" 3
extern "C" char *strsignal(int) throw();
# 567 "/usr/include/string.h" 3
extern "C" char *__stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 569 "/usr/include/string.h" 3
extern "C" { extern inline char *stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); }
# 574 "/usr/include/string.h" 3
extern "C" char *__stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 577 "/usr/include/string.h" 3
extern "C" { extern inline char *stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); }
# 584 "/usr/include/string.h" 3
extern "C" int strverscmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 588 "/usr/include/string.h" 3
extern "C" char *strfry(char *) throw() __attribute__((nonnull(1)));
# 591 "/usr/include/string.h" 3
extern "C" void *memfrob(void *, size_t) throw() __attribute__((nonnull(1)));
# 599 "/usr/include/string.h" 3
char *basename(char *) throw() __asm__("basename") __attribute__((nonnull(1)));
# 601 "/usr/include/string.h" 3
const char *basename(const char *) throw() __asm__("basename") __attribute__((nonnull(1)));
# 22 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
extern "C" void __warn_memset_zero_len();
# 48 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) void *memcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __len) throw()
# 50 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
{
# 51 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
return __builtin___memcpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
# 52 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
} }
# 55 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) void *memmove(void *__dest, const void *__src, size_t __len) throw()
# 56 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
{
# 57 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
return __builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
# 58 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
} }
# 62 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) void *mempcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __len) throw()
# 64 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
{
# 65 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
return __builtin___mempcpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
# 66 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
} }
# 76 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) void *memset(void *__dest, int __ch, size_t __len) throw()
# 77 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
{
# 78 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
if (((0) && (__len == (0))) && ((!(0)) || (__ch != 0)))
# 80 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
{
# 81 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
__warn_memset_zero_len();
# 82 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
return __dest;
# 83 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
}
# 84 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
return __builtin___memset_chk(__dest, __ch, __len, __builtin_object_size(__dest, 0));
# 85 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
} }
# 89 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) void bcopy(const void *__src, void *__dest, size_t __len) throw()
# 90 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
{
# 91 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
(void)__builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0));
# 92 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
} }
# 95 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) void bzero(void *__dest, size_t __len) throw()
# 96 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
{
# 97 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
(void)__builtin___memset_chk(__dest, '\000', __len, __builtin_object_size(__dest, 0));
# 98 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
} }
# 102 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) char *strcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 103 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
{
# 104 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
return __builtin___strcpy_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1));
# 105 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
} }
# 109 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) char *stpcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 110 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
{
# 111 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
return __builtin___stpcpy_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1));
# 112 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
} }
# 117 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) char *strncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __len) throw()
# 119 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
{
# 120 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
return __builtin___strncpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1));
# 121 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
} }
# 124 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
extern "C" char *__stpncpy_chk(char *, const char *, size_t, size_t) throw();
# 126 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
extern "C" char *__stpncpy_alias(char *, const char *, size_t) throw() __asm__("stpncpy");
# 130 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) char *stpncpy(char *__dest, const char *__src, size_t __n) throw()
# 131 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
{
# 132 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
if ((__builtin_object_size(__dest, 2 > 1) != ((size_t)(-1))) && ((!(0)) || (__n <= __builtin_object_size(__dest, 2 > 1)))) {
# 134 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
return __stpncpy_chk(__dest, __src, __n, __builtin_object_size(__dest, 2 > 1)); }
# 135 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
return __stpncpy_alias(__dest, __src, __n);
# 136 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
} }
# 140 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) char *strcat(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 141 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
{
# 142 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
return __builtin___strcat_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1));
# 143 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
} }
# 147 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) char *strncat(char *__restrict__ __dest, const char *__restrict__ __src, size_t __len) throw()
# 149 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
{
# 150 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
return __builtin___strncat_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1));
# 151 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
} }
# 30 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned char __u_char; }
# 31 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned short __u_short; }
# 32 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __u_int; }
# 33 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __u_long; }
# 36 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef signed char __int8_t; }
# 37 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned char __uint8_t; }
# 38 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef signed short __int16_t; }
# 39 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned short __uint16_t; }
# 40 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef signed int __int32_t; }
# 41 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __uint32_t; }
# 43 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef signed long __int64_t; }
# 44 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __uint64_t; }
# 52 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __quad_t; }
# 53 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __u_quad_t; }
# 124 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __dev_t; }
# 125 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __uid_t; }
# 126 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __gid_t; }
# 127 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __ino_t; }
# 128 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __ino64_t; }
# 129 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __mode_t; }
# 130 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __nlink_t; }
# 131 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __off_t; }
# 132 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __off64_t; }
# 133 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef int __pid_t; }
# 134 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef struct { int __val[2]; } __fsid_t; }
# 135 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __clock_t; }
# 136 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __rlim_t; }
# 137 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __rlim64_t; }
# 138 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __id_t; }
# 139 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __time_t; }
# 140 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __useconds_t; }
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __suseconds_t; }
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef int __daddr_t; }
# 144 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef int __key_t; }
# 147 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef int __clockid_t; }
# 150 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef void *__timer_t; }
# 153 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __blksize_t; }
# 158 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __blkcnt_t; }
# 159 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __blkcnt64_t; }
# 162 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt_t; }
# 163 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt64_t; }
# 166 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt_t; }
# 167 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt64_t; }
# 170 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __fsword_t; }
# 172 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __ssize_t; }
# 175 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __syscall_slong_t; }
# 177 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __syscall_ulong_t; }
# 181 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef __off64_t __loff_t; }
# 182 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef __quad_t *__qaddr_t; }
# 183 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef char *__caddr_t; }
# 186 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __intptr_t; }
# 189 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __socklen_t; }
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
extern "C" { struct timeval {
# 32 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
__time_t tv_sec;
# 33 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
__suseconds_t tv_usec;
# 34 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
}; }
# 25 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
extern "C" { struct timex {
# 27 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
unsigned modes;
# 28 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t offset;
# 29 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t freq;
# 30 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t maxerror;
# 31 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t esterror;
# 32 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
int status;
# 33 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t constant;
# 34 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t precision;
# 35 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t tolerance;
# 36 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
timeval time;
# 37 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t tick;
# 38 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t ppsfreq;
# 39 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t jitter;
# 40 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
int shift;
# 41 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t stabil;
# 42 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t jitcnt;
# 43 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t calcnt;
# 44 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t errcnt;
# 45 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t stbcnt;
# 47 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
int tai;
# 50 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
int:32; int:32; int:32; int:32;
# 51 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
int:32; int:32; int:32; int:32;
# 52 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
int:32; int:32; int:32;
# 53 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
}; }
# 91 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
extern "C" int clock_adjtime(__clockid_t, timex *) throw();
# 59 "/usr/include/time.h" 3
extern "C" { typedef __clock_t clock_t; }
# 75 "/usr/include/time.h" 3
extern "C" { typedef __time_t time_t; }
# 91 "/usr/include/time.h" 3
extern "C" { typedef __clockid_t clockid_t; }
# 103 "/usr/include/time.h" 3
extern "C" { typedef __timer_t timer_t; }
# 120 "/usr/include/time.h" 3
extern "C" { struct timespec {
# 122 "/usr/include/time.h" 3
__time_t tv_sec;
# 123 "/usr/include/time.h" 3
__syscall_slong_t tv_nsec;
# 124 "/usr/include/time.h" 3
}; }
# 133 "/usr/include/time.h" 3
extern "C" { struct tm {
# 135 "/usr/include/time.h" 3
int tm_sec;
# 136 "/usr/include/time.h" 3
int tm_min;
# 137 "/usr/include/time.h" 3
int tm_hour;
# 138 "/usr/include/time.h" 3
int tm_mday;
# 139 "/usr/include/time.h" 3
int tm_mon;
# 140 "/usr/include/time.h" 3
int tm_year;
# 141 "/usr/include/time.h" 3
int tm_wday;
# 142 "/usr/include/time.h" 3
int tm_yday;
# 143 "/usr/include/time.h" 3
int tm_isdst;
# 146 "/usr/include/time.h" 3
long tm_gmtoff;
# 147 "/usr/include/time.h" 3
const char *tm_zone;
# 152 "/usr/include/time.h" 3
}; }
# 161 "/usr/include/time.h" 3
extern "C" { struct itimerspec {
# 163 "/usr/include/time.h" 3
timespec it_interval;
# 164 "/usr/include/time.h" 3
timespec it_value;
# 165 "/usr/include/time.h" 3
}; }
# 168 "/usr/include/time.h" 3
struct sigevent;
# 174 "/usr/include/time.h" 3
extern "C" { typedef __pid_t pid_t; }
# 189 "/usr/include/time.h" 3
extern "C" __attribute__((weak)) clock_t clock() throw();
# 192 "/usr/include/time.h" 3
extern "C" time_t time(time_t *) throw();
# 195 "/usr/include/time.h" 3
extern "C" double difftime(time_t, time_t) throw() __attribute__((__const__));
# 199 "/usr/include/time.h" 3
extern "C" time_t mktime(tm *) throw();
# 205 "/usr/include/time.h" 3
extern "C" size_t strftime(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__) throw();
# 213 "/usr/include/time.h" 3
extern "C" char *strptime(const char *__restrict__, const char *__restrict__, tm *) throw();
# 223 "/usr/include/time.h" 3
extern "C" size_t strftime_l(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__, __locale_t) throw();
# 230 "/usr/include/time.h" 3
extern "C" char *strptime_l(const char *__restrict__, const char *__restrict__, tm *, __locale_t) throw();
# 239 "/usr/include/time.h" 3
extern "C" tm *gmtime(const time_t *) throw();
# 243 "/usr/include/time.h" 3
extern "C" tm *localtime(const time_t *) throw();
# 249 "/usr/include/time.h" 3
extern "C" tm *gmtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 254 "/usr/include/time.h" 3
extern "C" tm *localtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 261 "/usr/include/time.h" 3
extern "C" char *asctime(const tm *) throw();
# 264 "/usr/include/time.h" 3
extern "C" char *ctime(const time_t *) throw();
# 272 "/usr/include/time.h" 3
extern "C" char *asctime_r(const tm *__restrict__, char *__restrict__) throw();
# 276 "/usr/include/time.h" 3
extern "C" char *ctime_r(const time_t *__restrict__, char *__restrict__) throw();
# 282 "/usr/include/time.h" 3
extern "C" { extern char *__tzname[2]; }
# 283 "/usr/include/time.h" 3
extern "C" { extern int __daylight; }
# 284 "/usr/include/time.h" 3
extern "C" { extern long __timezone; }
# 289 "/usr/include/time.h" 3
extern "C" { extern char *tzname[2]; }
# 293 "/usr/include/time.h" 3
extern "C" void tzset() throw();
# 297 "/usr/include/time.h" 3
extern "C" { extern int daylight; }
# 298 "/usr/include/time.h" 3
extern "C" { extern long timezone; }
# 304 "/usr/include/time.h" 3
extern "C" int stime(const time_t *) throw();
# 319 "/usr/include/time.h" 3
extern "C" time_t timegm(tm *) throw();
# 322 "/usr/include/time.h" 3
extern "C" time_t timelocal(tm *) throw();
# 325 "/usr/include/time.h" 3
extern "C" int dysize(int) throw() __attribute__((__const__));
# 334 "/usr/include/time.h" 3
extern "C" int nanosleep(const timespec *, timespec *);
# 339 "/usr/include/time.h" 3
extern "C" int clock_getres(clockid_t, timespec *) throw();
# 342 "/usr/include/time.h" 3
extern "C" int clock_gettime(clockid_t, timespec *) throw();
# 345 "/usr/include/time.h" 3
extern "C" int clock_settime(clockid_t, const timespec *) throw();
# 353 "/usr/include/time.h" 3
extern "C" int clock_nanosleep(clockid_t, int, const timespec *, timespec *);
# 358 "/usr/include/time.h" 3
extern "C" int clock_getcpuclockid(pid_t, clockid_t *) throw();
# 363 "/usr/include/time.h" 3
extern "C" int timer_create(clockid_t, sigevent *__restrict__, timer_t *__restrict__) throw();
# 368 "/usr/include/time.h" 3
extern "C" int timer_delete(timer_t) throw();
# 371 "/usr/include/time.h" 3
extern "C" int timer_settime(timer_t, int, const itimerspec *__restrict__, itimerspec *__restrict__) throw();
# 376 "/usr/include/time.h" 3
extern "C" int timer_gettime(timer_t, itimerspec *) throw();
# 380 "/usr/include/time.h" 3
extern "C" int timer_getoverrun(timer_t) throw();
# 386 "/usr/include/time.h" 3
extern "C" int timespec_get(timespec *, int) throw() __attribute__((nonnull(1)));
# 403 "/usr/include/time.h" 3
extern "C" { extern int getdate_err; }
# 412 "/usr/include/time.h" 3
extern "C" tm *getdate(const char *);
# 426 "/usr/include/time.h" 3
extern "C" int getdate_r(const char *__restrict__, tm *__restrict__);
# 57 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" __attribute__((weak)) clock_t clock() throw();
# 59 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" { extern inline void *memset(void *, int, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); }
# 61 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" { extern inline void *memcpy(void *, const void *, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); }
# 66 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int abs(int) throw() __attribute__((__warn_unused_result__)) __attribute__((__const__));
# 68 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long labs(long) throw() __attribute__((__warn_unused_result__)) __attribute__((__const__));
# 70 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llabs(long long) throw() __attribute__((__warn_unused_result__)) __attribute__((__const__));
# 72 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fabs(double) throw() __attribute__((__const__));
# 74 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fabsf(float) throw() __attribute__((__const__));
# 77 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int min(int, int);
# 79 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned umin(unsigned, unsigned);
# 81 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llmin(long long, long long);
# 83 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned long long ullmin(unsigned long long, unsigned long long);
# 85 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fminf(float, float) throw() __attribute__((__const__));
# 87 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmin(double, double) throw() __attribute__((__const__));
# 90 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int max(int, int);
# 92 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned umax(unsigned, unsigned);
# 94 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llmax(long long, long long);
# 96 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) unsigned long long ullmax(unsigned long long, unsigned long long);
# 98 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmaxf(float, float) throw() __attribute__((__const__));
# 100 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmax(double, double) throw() __attribute__((__const__));
# 103 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sin(double) throw();
# 105 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinf(float) throw();
# 108 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cos(double) throw();
# 110 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float cosf(float) throw();
# 113 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) void sincos(double, double *, double *) throw();
# 115 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) void sincosf(float, float *, float *) throw();
# 118 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tan(double) throw();
# 120 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tanf(float) throw();
# 123 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sqrt(double) throw();
# 125 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sqrtf(float) throw();
# 128 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rsqrt(double);
# 130 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rsqrtf(float);
# 133 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp2(double) throw();
# 135 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float exp2f(float) throw();
# 138 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp10(double) throw();
# 140 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float exp10f(float) throw();
# 143 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double expm1(double) throw();
# 145 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float expm1f(float) throw();
# 148 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log2(double) throw();
# 150 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log2f(float) throw();
# 153 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log10(double) throw();
# 155 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log10f(float) throw();
# 158 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log(double) throw();
# 160 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float logf(float) throw();
# 163 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double log1p(double) throw();
# 165 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float log1pf(float) throw();
# 168 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double floor(double) throw() __attribute__((__const__));
# 170 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float floorf(float) throw() __attribute__((__const__));
# 173 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double exp(double) throw();
# 175 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float expf(float) throw();
# 178 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cosh(double) throw();
# 180 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float coshf(float) throw();
# 183 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sinh(double) throw();
# 185 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinhf(float) throw();
# 188 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tanh(double) throw();
# 190 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tanhf(float) throw();
# 193 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double acosh(double) throw();
# 195 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float acoshf(float) throw();
# 198 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double asinh(double) throw();
# 200 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float asinhf(float) throw();
# 203 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atanh(double) throw();
# 205 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atanhf(float) throw();
# 208 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double ldexp(double, int) throw();
# 210 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float ldexpf(float, int) throw();
# 213 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double logb(double) throw();
# 215 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float logbf(float) throw();
# 218 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int ilogb(double) throw();
# 220 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int ilogbf(float) throw();
# 223 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double scalbn(double, int) throw();
# 225 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float scalbnf(float, int) throw();
# 228 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double scalbln(double, long) throw();
# 230 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float scalblnf(float, long) throw();
# 233 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double frexp(double, int *) throw();
# 235 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float frexpf(float, int *) throw();
# 238 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double round(double) throw() __attribute__((__const__));
# 240 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float roundf(float) throw() __attribute__((__const__));
# 243 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lround(double) throw();
# 245 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lroundf(float) throw();
# 248 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llround(double) throw();
# 250 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llroundf(float) throw();
# 253 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rint(double) throw();
# 255 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rintf(float) throw();
# 258 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lrint(double) throw();
# 260 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long lrintf(float) throw();
# 263 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llrint(double) throw();
# 265 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) long long llrintf(float) throw();
# 268 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nearbyint(double) throw();
# 270 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nearbyintf(float) throw();
# 273 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double ceil(double) throw() __attribute__((__const__));
# 275 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float ceilf(float) throw() __attribute__((__const__));
# 278 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double trunc(double) throw() __attribute__((__const__));
# 280 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float truncf(float) throw() __attribute__((__const__));
# 283 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fdim(double, double) throw();
# 285 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fdimf(float, float) throw();
# 288 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atan2(double, double) throw();
# 290 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atan2f(float, float) throw();
# 293 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double atan(double) throw();
# 295 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float atanf(float) throw();
# 298 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double asin(double) throw();
# 300 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float asinf(float) throw();
# 303 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double acos(double) throw();
# 305 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float acosf(float) throw();
# 308 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double hypot(double, double) throw();
# 310 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float hypotf(float, float) throw();
# 313 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double cbrt(double) throw();
# 315 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float cbrtf(float) throw();
# 318 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double rcbrt(double);
# 320 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float rcbrtf(float);
# 323 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double sinpi(double);
# 325 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float sinpif(float);
# 328 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double pow(double, double) throw();
# 330 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float powf(float, float) throw();
# 333 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double modf(double, double *) throw();
# 335 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float modff(float, float *) throw();
# 338 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fmod(double, double) throw();
# 340 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmodf(float, float) throw();
# 343 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double remainder(double, double) throw();
# 345 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float remainderf(float, float) throw();
# 348 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double remquo(double, double, int *) throw();
# 350 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float remquof(float, float, int *) throw();
# 353 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erf(double) throw();
# 355 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erff(float) throw();
# 358 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfinv(double);
# 360 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfinvf(float);
# 363 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfc(double) throw();
# 365 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfcf(float) throw();
# 368 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double erfcinv(double);
# 370 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float erfcinvf(float);
# 373 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double lgamma(double) throw();
# 375 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float lgammaf(float) throw();
# 378 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double tgamma(double) throw();
# 380 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float tgammaf(float) throw();
# 383 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double copysign(double, double) throw() __attribute__((__const__));
# 385 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float copysignf(float, float) throw() __attribute__((__const__));
# 388 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nextafter(double, double) throw() __attribute__((__const__));
# 390 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nextafterf(float, float) throw() __attribute__((__const__));
# 393 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double nan(const char *) throw() __attribute__((__const__));
# 395 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float nanf(const char *) throw() __attribute__((__const__));
# 398 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinf(double) throw() __attribute__((__const__));
# 400 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinff(float) throw() __attribute__((__const__));
# 403 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnan(double) throw() __attribute__((__const__));
# 405 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnanf(float) throw() __attribute__((__const__));
# 419 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finite(double) throw() __attribute__((__const__));
# 421 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finitef(float) throw() __attribute__((__const__));
# 423 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" { extern inline int __signbit(double) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__const__)); }
# 428 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" { extern inline int __signbitf(float) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__const__)); }
# 431 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) double fma(double, double, double) throw();
# 433 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) float fmaf(float, float, float) throw();
# 441 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" { extern inline int __signbitl(long double) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__const__)); }
# 443 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__));
# 445 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__));
# 455 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__));
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3
extern "C" { typedef float float_t; }
# 29 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3
extern "C" { typedef double double_t; }
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double acos(double) throw(); extern "C" double __acos(double) throw();
# 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double asin(double) throw(); extern "C" double __asin(double) throw();
# 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atan(double) throw(); extern "C" double __atan(double) throw();
# 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atan2(double, double) throw(); extern "C" double __atan2(double, double) throw();
# 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cos(double) throw(); extern "C" double __cos(double) throw();
# 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sin(double) throw(); extern "C" double __sin(double) throw();
# 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tan(double) throw(); extern "C" double __tan(double) throw();
# 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cosh(double) throw(); extern "C" double __cosh(double) throw();
# 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sinh(double) throw(); extern "C" double __sinh(double) throw();
# 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tanh(double) throw(); extern "C" double __tanh(double) throw();
# 81 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) void sincos(double, double *, double *) throw(); extern "C" void __sincos(double, double *, double *) throw();
# 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double acosh(double) throw(); extern "C" double __acosh(double) throw();
# 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double asinh(double) throw(); extern "C" double __asinh(double) throw();
# 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double atanh(double) throw(); extern "C" double __atanh(double) throw();
# 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp(double) throw(); extern "C" double __exp(double) throw();
# 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double frexp(double, int *) throw(); extern "C" double __frexp(double, int *) throw();
# 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double ldexp(double, int) throw(); extern "C" double __ldexp(double, int) throw();
# 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log(double) throw(); extern "C" double __log(double) throw();
# 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log10(double) throw(); extern "C" double __log10(double) throw();
# 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double modf(double, double *) throw(); extern "C" double __modf(double, double *) throw() __attribute__((nonnull(2)));
# 120 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp10(double) throw(); extern "C" double __exp10(double) throw();
# 122 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double pow10(double) throw(); extern "C" double __pow10(double) throw();
# 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double expm1(double) throw(); extern "C" double __expm1(double) throw();
# 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log1p(double) throw(); extern "C" double __log1p(double) throw();
# 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double logb(double) throw(); extern "C" double __logb(double) throw();
# 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double exp2(double) throw(); extern "C" double __exp2(double) throw();
# 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double log2(double) throw(); extern "C" double __log2(double) throw();
# 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double pow(double, double) throw(); extern "C" double __pow(double, double) throw();
# 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double sqrt(double) throw(); extern "C" double __sqrt(double) throw();
# 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double hypot(double, double) throw(); extern "C" double __hypot(double, double) throw();
# 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double cbrt(double) throw(); extern "C" double __cbrt(double) throw();
# 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double ceil(double) throw() __attribute__((__const__)); extern "C" double __ceil(double) throw() __attribute__((__const__));
# 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fabs(double) throw() __attribute__((__const__)); extern "C" double __fabs(double) throw() __attribute__((__const__));
# 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double floor(double) throw() __attribute__((__const__)); extern "C" double __floor(double) throw() __attribute__((__const__));
# 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmod(double, double) throw(); extern "C" double __fmod(double, double) throw();
# 192 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinf(double) throw() __attribute__((__const__));
# 195 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finite(double) throw() __attribute__((__const__));
# 201 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int isinf(double) throw() __attribute__((__const__));
# 204 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int finite(double) throw() __attribute__((__const__));
# 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double drem(double, double) throw(); extern "C" double __drem(double, double) throw();
# 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double significand(double) throw(); extern "C" double __significand(double) throw();
# 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double copysign(double, double) throw() __attribute__((__const__)); extern "C" double __copysign(double, double) throw() __attribute__((__const__));
# 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nan(const char *) throw() __attribute__((__const__)); extern "C" double __nan(const char *) throw() __attribute__((__const__));
# 230 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnan(double) throw() __attribute__((__const__));
# 234 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int isnan(double) throw() __attribute__((__const__));
# 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double j0(double) throw(); extern "C" double __j0(double) throw();
# 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double j1(double) throw(); extern "C" double __j1(double) throw();
# 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double jn(int, double) throw(); extern "C" double __jn(int, double) throw();
# 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double y0(double) throw(); extern "C" double __y0(double) throw();
# 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double y1(double) throw(); extern "C" double __y1(double) throw();
# 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double yn(int, double) throw(); extern "C" double __yn(int, double) throw();
# 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double erf(double) throw(); extern "C" double __erf(double) throw();
# 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double erfc(double) throw(); extern "C" double __erfc(double) throw();
# 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double lgamma(double) throw(); extern "C" double __lgamma(double) throw();
# 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double tgamma(double) throw(); extern "C" double __tgamma(double) throw();
# 264 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw();
# 271 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double lgamma_r(double, int *) throw(); extern "C" double __lgamma_r(double, int *) throw();
# 279 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double rint(double) throw(); extern "C" double __rint(double) throw();
# 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nextafter(double, double) throw() __attribute__((__const__)); extern "C" double __nextafter(double, double) throw() __attribute__((__const__));
# 284 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double nexttoward(double, long double) throw() __attribute__((__const__)); extern "C" double __nexttoward(double, long double) throw() __attribute__((__const__));
# 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double remainder(double, double) throw(); extern "C" double __remainder(double, double) throw();
# 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double scalbn(double, int) throw(); extern "C" double __scalbn(double, int) throw();
# 296 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int ilogb(double) throw(); extern "C" int __ilogb(double) throw();
# 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double scalbln(double, long) throw(); extern "C" double __scalbln(double, long) throw();
# 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double nearbyint(double) throw(); extern "C" double __nearbyint(double) throw();
# 309 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double round(double) throw() __attribute__((__const__)); extern "C" double __round(double) throw() __attribute__((__const__));
# 313 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double trunc(double) throw() __attribute__((__const__)); extern "C" double __trunc(double) throw() __attribute__((__const__));
# 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double remquo(double, double, int *) throw(); extern "C" double __remquo(double, double, int *) throw();
# 325 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lrint(double) throw(); extern "C" long __lrint(double) throw();
# 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llrint(double) throw(); extern "C" long long __llrint(double) throw();
# 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lround(double) throw(); extern "C" long __lround(double) throw();
# 333 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llround(double) throw(); extern "C" long long __llround(double) throw();
# 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fdim(double, double) throw(); extern "C" double __fdim(double, double) throw();
# 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmax(double, double) throw() __attribute__((__const__)); extern "C" double __fmax(double, double) throw() __attribute__((__const__));
# 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fmin(double, double) throw() __attribute__((__const__)); extern "C" double __fmin(double, double) throw() __attribute__((__const__));
# 347 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __fpclassify(double) throw() __attribute__((__const__));
# 351 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" { extern inline int __signbit(double) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__const__)); }
# 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) double fma(double, double, double) throw(); extern "C" double __fma(double, double, double) throw();
# 365 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __issignaling(double) throw() __attribute__((__const__));
# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double scalb(double, double) throw(); extern "C" double __scalb(double, double) throw();
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float acosf(float) throw(); extern "C" float __acosf(float) throw();
# 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float asinf(float) throw(); extern "C" float __asinf(float) throw();
# 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atanf(float) throw(); extern "C" float __atanf(float) throw();
# 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atan2f(float, float) throw(); extern "C" float __atan2f(float, float) throw();
# 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float cosf(float) throw();
# 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sinf(float) throw();
# 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tanf(float) throw();
# 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float coshf(float) throw(); extern "C" float __coshf(float) throw();
# 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sinhf(float) throw(); extern "C" float __sinhf(float) throw();
# 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tanhf(float) throw(); extern "C" float __tanhf(float) throw();
# 82 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) void sincosf(float, float *, float *) throw();
# 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float acoshf(float) throw(); extern "C" float __acoshf(float) throw();
# 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float asinhf(float) throw(); extern "C" float __asinhf(float) throw();
# 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float atanhf(float) throw(); extern "C" float __atanhf(float) throw();
# 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float expf(float) throw();
# 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float frexpf(float, int *) throw(); extern "C" float __frexpf(float, int *) throw();
# 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float ldexpf(float, int) throw(); extern "C" float __ldexpf(float, int) throw();
# 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float logf(float) throw();
# 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log10f(float) throw();
# 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float modff(float, float *) throw(); extern "C" float __modff(float, float *) throw() __attribute__((nonnull(2)));
# 120 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float exp10f(float) throw();
# 122 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float pow10f(float) throw(); extern "C" float __pow10f(float) throw();
# 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float expm1f(float) throw(); extern "C" float __expm1f(float) throw();
# 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log1pf(float) throw(); extern "C" float __log1pf(float) throw();
# 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float logbf(float) throw(); extern "C" float __logbf(float) throw();
# 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float exp2f(float) throw(); extern "C" float __exp2f(float) throw();
# 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float log2f(float) throw();
# 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float powf(float, float) throw();
# 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float sqrtf(float) throw(); extern "C" float __sqrtf(float) throw();
# 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float hypotf(float, float) throw(); extern "C" float __hypotf(float, float) throw();
# 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float cbrtf(float) throw(); extern "C" float __cbrtf(float) throw();
# 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float ceilf(float) throw() __attribute__((__const__)); extern "C" float __ceilf(float) throw() __attribute__((__const__));
# 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fabsf(float) throw() __attribute__((__const__)); extern "C" float __fabsf(float) throw() __attribute__((__const__));
# 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float floorf(float) throw() __attribute__((__const__)); extern "C" float __floorf(float) throw() __attribute__((__const__));
# 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmodf(float, float) throw(); extern "C" float __fmodf(float, float) throw();
# 192 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinff(float) throw() __attribute__((__const__));
# 195 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finitef(float) throw() __attribute__((__const__));
# 201 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int isinff(float) throw() __attribute__((__const__));
# 204 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int finitef(float) throw() __attribute__((__const__));
# 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float dremf(float, float) throw(); extern "C" float __dremf(float, float) throw();
# 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float significandf(float) throw(); extern "C" float __significandf(float) throw();
# 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float copysignf(float, float) throw() __attribute__((__const__)); extern "C" float __copysignf(float, float) throw() __attribute__((__const__));
# 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nanf(const char *) throw() __attribute__((__const__)); extern "C" float __nanf(const char *) throw() __attribute__((__const__));
# 230 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnanf(float) throw() __attribute__((__const__));
# 234 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int isnanf(float) throw() __attribute__((__const__));
# 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float j0f(float) throw(); extern "C" float __j0f(float) throw();
# 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float j1f(float) throw(); extern "C" float __j1f(float) throw();
# 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float jnf(int, float) throw(); extern "C" float __jnf(int, float) throw();
# 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float y0f(float) throw(); extern "C" float __y0f(float) throw();
# 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float y1f(float) throw(); extern "C" float __y1f(float) throw();
# 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float ynf(int, float) throw(); extern "C" float __ynf(int, float) throw();
# 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float erff(float) throw(); extern "C" float __erff(float) throw();
# 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float erfcf(float) throw(); extern "C" float __erfcf(float) throw();
# 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw();
# 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw();
# 264 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw();
# 271 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float lgammaf_r(float, int *) throw(); extern "C" float __lgammaf_r(float, int *) throw();
# 279 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float rintf(float) throw(); extern "C" float __rintf(float) throw();
# 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nextafterf(float, float) throw() __attribute__((__const__)); extern "C" float __nextafterf(float, float) throw() __attribute__((__const__));
# 284 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float nexttowardf(float, long double) throw() __attribute__((__const__)); extern "C" float __nexttowardf(float, long double) throw() __attribute__((__const__));
# 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float remainderf(float, float) throw(); extern "C" float __remainderf(float, float) throw();
# 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float scalbnf(float, int) throw(); extern "C" float __scalbnf(float, int) throw();
# 296 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int ilogbf(float) throw(); extern "C" int __ilogbf(float) throw();
# 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float scalblnf(float, long) throw(); extern "C" float __scalblnf(float, long) throw();
# 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float nearbyintf(float) throw(); extern "C" float __nearbyintf(float) throw();
# 309 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float roundf(float) throw() __attribute__((__const__)); extern "C" float __roundf(float) throw() __attribute__((__const__));
# 313 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float truncf(float) throw() __attribute__((__const__)); extern "C" float __truncf(float) throw() __attribute__((__const__));
# 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float remquof(float, float, int *) throw(); extern "C" float __remquof(float, float, int *) throw();
# 325 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lrintf(float) throw(); extern "C" long __lrintf(float) throw();
# 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llrintf(float) throw(); extern "C" long long __llrintf(float) throw();
# 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long lroundf(float) throw(); extern "C" long __lroundf(float) throw();
# 333 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) long long llroundf(float) throw(); extern "C" long long __llroundf(float) throw();
# 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fdimf(float, float) throw(); extern "C" float __fdimf(float, float) throw();
# 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmaxf(float, float) throw() __attribute__((__const__)); extern "C" float __fmaxf(float, float) throw() __attribute__((__const__));
# 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fminf(float, float) throw() __attribute__((__const__)); extern "C" float __fminf(float, float) throw() __attribute__((__const__));
# 347 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __fpclassifyf(float) throw() __attribute__((__const__));
# 351 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" { extern inline int __signbitf(float) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__const__)); }
# 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) float fmaf(float, float, float) throw(); extern "C" float __fmaf(float, float, float) throw();
# 365 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __issignalingf(float) throw() __attribute__((__const__));
# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float scalbf(float, float) throw(); extern "C" float __scalbf(float, float) throw();
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double acosl(long double) throw(); extern "C" long double __acosl(long double) throw();
# 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double asinl(long double) throw(); extern "C" long double __asinl(long double) throw();
# 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double atanl(long double) throw(); extern "C" long double __atanl(long double) throw();
# 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double atan2l(long double, long double) throw(); extern "C" long double __atan2l(long double, long double) throw();
# 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double cosl(long double) throw(); extern "C" long double __cosl(long double) throw();
# 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double sinl(long double) throw(); extern "C" long double __sinl(long double) throw();
# 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double tanl(long double) throw(); extern "C" long double __tanl(long double) throw();
# 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double coshl(long double) throw(); extern "C" long double __coshl(long double) throw();
# 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double sinhl(long double) throw(); extern "C" long double __sinhl(long double) throw();
# 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double tanhl(long double) throw(); extern "C" long double __tanhl(long double) throw();
# 82 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" void sincosl(long double, long double *, long double *) throw();
# 82 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" void __sincosl(long double, long double *, long double *) throw();
# 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double acoshl(long double) throw(); extern "C" long double __acoshl(long double) throw();
# 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double asinhl(long double) throw(); extern "C" long double __asinhl(long double) throw();
# 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double atanhl(long double) throw(); extern "C" long double __atanhl(long double) throw();
# 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double expl(long double) throw(); extern "C" long double __expl(long double) throw();
# 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double frexpl(long double, int *) throw(); extern "C" long double __frexpl(long double, int *) throw();
# 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double ldexpl(long double, int) throw(); extern "C" long double __ldexpl(long double, int) throw();
# 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double logl(long double) throw(); extern "C" long double __logl(long double) throw();
# 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double log10l(long double) throw(); extern "C" long double __log10l(long double) throw();
# 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double modfl(long double, long double *) throw(); extern "C" long double __modfl(long double, long double *) throw() __attribute__((nonnull(2)));
# 120 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double exp10l(long double) throw(); extern "C" long double __exp10l(long double) throw();
# 122 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double pow10l(long double) throw(); extern "C" long double __pow10l(long double) throw();
# 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double expm1l(long double) throw(); extern "C" long double __expm1l(long double) throw();
# 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double log1pl(long double) throw(); extern "C" long double __log1pl(long double) throw();
# 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double logbl(long double) throw(); extern "C" long double __logbl(long double) throw();
# 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double exp2l(long double) throw(); extern "C" long double __exp2l(long double) throw();
# 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double log2l(long double) throw(); extern "C" long double __log2l(long double) throw();
# 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double powl(long double, long double) throw(); extern "C" long double __powl(long double, long double) throw();
# 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double sqrtl(long double) throw(); extern "C" long double __sqrtl(long double) throw();
# 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double hypotl(long double, long double) throw(); extern "C" long double __hypotl(long double, long double) throw();
# 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double cbrtl(long double) throw(); extern "C" long double __cbrtl(long double) throw();
# 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double ceill(long double) throw() __attribute__((__const__)); extern "C" long double __ceill(long double) throw() __attribute__((__const__));
# 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double fabsl(long double) throw() __attribute__((__const__)); extern "C" long double __fabsl(long double) throw() __attribute__((__const__));
# 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double floorl(long double) throw() __attribute__((__const__)); extern "C" long double __floorl(long double) throw() __attribute__((__const__));
# 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double fmodl(long double, long double) throw(); extern "C" long double __fmodl(long double, long double) throw();
# 192 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__));
# 195 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__));
# 201 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int isinfl(long double) throw() __attribute__((__const__));
# 204 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int finitel(long double) throw() __attribute__((__const__));
# 207 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double dreml(long double, long double) throw(); extern "C" long double __dreml(long double, long double) throw();
# 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double significandl(long double) throw(); extern "C" long double __significandl(long double) throw();
# 217 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double copysignl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __copysignl(long double, long double) throw() __attribute__((__const__));
# 224 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double nanl(const char *) throw() __attribute__((__const__)); extern "C" long double __nanl(const char *) throw() __attribute__((__const__));
# 230 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__));
# 234 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int isnanl(long double) throw() __attribute__((__const__));
# 237 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double j0l(long double) throw(); extern "C" long double __j0l(long double) throw();
# 238 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double j1l(long double) throw(); extern "C" long double __j1l(long double) throw();
# 239 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double jnl(int, long double) throw(); extern "C" long double __jnl(int, long double) throw();
# 240 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double y0l(long double) throw(); extern "C" long double __y0l(long double) throw();
# 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double y1l(long double) throw(); extern "C" long double __y1l(long double) throw();
# 242 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double ynl(int, long double) throw(); extern "C" long double __ynl(int, long double) throw();
# 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double erfl(long double) throw(); extern "C" long double __erfl(long double) throw();
# 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double erfcl(long double) throw(); extern "C" long double __erfcl(long double) throw();
# 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double lgammal(long double) throw(); extern "C" long double __lgammal(long double) throw();
# 258 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double tgammal(long double) throw(); extern "C" long double __tgammal(long double) throw();
# 264 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double gammal(long double) throw(); extern "C" long double __gammal(long double) throw();
# 271 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double lgammal_r(long double, int *) throw(); extern "C" long double __lgammal_r(long double, int *) throw();
# 279 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double rintl(long double) throw(); extern "C" long double __rintl(long double) throw();
# 282 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double nextafterl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nextafterl(long double, long double) throw() __attribute__((__const__));
# 284 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double nexttowardl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nexttowardl(long double, long double) throw() __attribute__((__const__));
# 288 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double remainderl(long double, long double) throw(); extern "C" long double __remainderl(long double, long double) throw();
# 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double scalbnl(long double, int) throw(); extern "C" long double __scalbnl(long double, int) throw();
# 296 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int ilogbl(long double) throw(); extern "C" int __ilogbl(long double) throw();
# 301 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double scalblnl(long double, long) throw(); extern "C" long double __scalblnl(long double, long) throw();
# 305 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double nearbyintl(long double) throw(); extern "C" long double __nearbyintl(long double) throw();
# 309 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double roundl(long double) throw() __attribute__((__const__)); extern "C" long double __roundl(long double) throw() __attribute__((__const__));
# 313 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double truncl(long double) throw() __attribute__((__const__)); extern "C" long double __truncl(long double) throw() __attribute__((__const__));
# 318 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double remquol(long double, long double, int *) throw(); extern "C" long double __remquol(long double, long double, int *) throw();
# 325 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long lrintl(long double) throw(); extern "C" long __lrintl(long double) throw();
# 327 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long long llrintl(long double) throw(); extern "C" long long __llrintl(long double) throw();
# 331 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long lroundl(long double) throw(); extern "C" long __lroundl(long double) throw();
# 333 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long long llroundl(long double) throw(); extern "C" long long __llroundl(long double) throw();
# 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double fdiml(long double, long double) throw(); extern "C" long double __fdiml(long double, long double) throw();
# 340 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double fmaxl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __fmaxl(long double, long double) throw() __attribute__((__const__));
# 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double fminl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __fminl(long double, long double) throw() __attribute__((__const__));
# 347 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __fpclassifyl(long double) throw() __attribute__((__const__));
# 351 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" { extern inline int __signbitl(long double) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__const__)); }
# 356 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double fmal(long double, long double, long double) throw(); extern "C" long double __fmal(long double, long double, long double) throw();
# 365 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __issignalingl(long double) throw() __attribute__((__const__));
# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double scalbl(long double, long double) throw(); extern "C" long double __scalbl(long double, long double) throw();
# 148 "/usr/include/math.h" 3
extern "C" { extern int signgam; }
# 190 "/usr/include/math.h" 3
enum {
# 191 "/usr/include/math.h" 3
FP_NAN,
# 194 "/usr/include/math.h" 3
FP_INFINITE,
# 197 "/usr/include/math.h" 3
FP_ZERO,
# 200 "/usr/include/math.h" 3
FP_SUBNORMAL,
# 203 "/usr/include/math.h" 3
FP_NORMAL
# 206 "/usr/include/math.h" 3
};
# 308 "/usr/include/math.h" 3
extern "C" { typedef
# 302 "/usr/include/math.h" 3
enum {
# 303 "/usr/include/math.h" 3
_IEEE_ = (-1),
# 304 "/usr/include/math.h" 3
_SVID_ = 0,
# 305 "/usr/include/math.h" 3
_XOPEN_,
# 306 "/usr/include/math.h" 3
_POSIX_,
# 307 "/usr/include/math.h" 3
_ISOC_
# 308 "/usr/include/math.h" 3
} _LIB_VERSION_TYPE; }
# 313 "/usr/include/math.h" 3
extern "C" { extern _LIB_VERSION_TYPE _LIB_VERSION; }
# 324 "/usr/include/math.h" 3
extern "C" { struct __exception {
# 329 "/usr/include/math.h" 3
int type;
# 330 "/usr/include/math.h" 3
char *name;
# 331 "/usr/include/math.h" 3
double arg1;
# 332 "/usr/include/math.h" 3
double arg2;
# 333 "/usr/include/math.h" 3
double retval;
# 334 "/usr/include/math.h" 3
}; }
# 337 "/usr/include/math.h" 3
extern "C" int matherr(__exception *) throw();
# 127 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__const__)) int __signbitf(float __x) throw()
# 128 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
{
# 130 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
int __m;
# 131 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
__asm__("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
# 132 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
return (__m & 8) != 0;
# 137 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
} }
# 139 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__const__)) int __signbit(double __x) throw()
# 140 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
{
# 142 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
int __m;
# 143 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
__asm__("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
# 144 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
return (__m & 128) != 0;
# 149 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
} }
# 151 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__const__)) int __signbitl(long double __x) throw()
# 152 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
{
# 153 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union { long double __l; int __i[3]; } __u = {__l: __x};
# 154 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
return (((__u.__i)[2]) & 32768) != 0;
# 155 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
} }
# 55 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
extern "C" { typedef
# 51 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
enum {
# 52 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
P_ALL,
# 53 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
P_PID,
# 54 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
P_PGID
# 55 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
} idtype_t; }
# 45 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
extern "C" { static inline unsigned __bswap_32(unsigned __bsx)
# 46 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
{
# 47 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
return __builtin_bswap32(__bsx);
# 48 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
} }
# 109 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
extern "C" { static inline __uint64_t __bswap_64(__uint64_t __bsx)
# 110 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
{
# 111 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
return __builtin_bswap64(__bsx);
# 112 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
} }
# 66 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
extern "C" { union wait {
# 68 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
int w_status;
# 70 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
struct {
# 72 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
unsigned __w_termsig:7;
# 73 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
unsigned __w_coredump:1;
# 74 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
unsigned __w_retcode:8;
# 75 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
unsigned:16;
# 83 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
} __wait_terminated;
# 85 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
struct {
# 87 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
unsigned __w_stopval:8;
# 88 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
unsigned __w_stopsig:8;
# 89 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
unsigned:16;
# 96 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
} __wait_stopped;
# 97 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
}; }
# 101 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 98 "/usr/include/stdlib.h" 3
struct {
# 99 "/usr/include/stdlib.h" 3
int quot;
# 100 "/usr/include/stdlib.h" 3
int rem;
# 101 "/usr/include/stdlib.h" 3
} div_t; }
# 109 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 106 "/usr/include/stdlib.h" 3
struct {
# 107 "/usr/include/stdlib.h" 3
long quot;
# 108 "/usr/include/stdlib.h" 3
long rem;
# 109 "/usr/include/stdlib.h" 3
} ldiv_t; }
# 121 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 118 "/usr/include/stdlib.h" 3
struct {
# 119 "/usr/include/stdlib.h" 3
long long quot;
# 120 "/usr/include/stdlib.h" 3
long long rem;
# 121 "/usr/include/stdlib.h" 3
} lldiv_t; }
# 139 "/usr/include/stdlib.h" 3
extern "C" size_t __ctype_get_mb_cur_max() throw() __attribute__((__warn_unused_result__));
# 144 "/usr/include/stdlib.h" 3
extern "C" { extern inline double atof(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); }
# 147 "/usr/include/stdlib.h" 3
extern "C" { extern inline int atoi(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); }
# 150 "/usr/include/stdlib.h" 3
extern "C" { extern inline long atol(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); }
# 157 "/usr/include/stdlib.h" 3
extern "C" { extern inline long long atoll(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); }
# 164 "/usr/include/stdlib.h" 3
extern "C" double strtod(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 172 "/usr/include/stdlib.h" 3
extern "C" float strtof(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 175 "/usr/include/stdlib.h" 3
extern "C" long double strtold(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1)));
# 183 "/usr/include/stdlib.h" 3
extern "C" long strtol(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 187 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 195 "/usr/include/stdlib.h" 3
extern "C" long long strtoq(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 200 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtouq(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 209 "/usr/include/stdlib.h" 3
extern "C" long long strtoll(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 214 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1)));
# 239 "/usr/include/stdlib.h" 3
extern "C" long strtol_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 243 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 249 "/usr/include/stdlib.h" 3
extern "C" long long strtoll_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 255 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 260 "/usr/include/stdlib.h" 3
extern "C" double strtod_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 264 "/usr/include/stdlib.h" 3
extern "C" float strtof_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 268 "/usr/include/stdlib.h" 3
extern "C" long double strtold_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3)));
# 278 "/usr/include/stdlib.h" 3
extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))) int atoi(const char *__nptr) throw()
# 279 "/usr/include/stdlib.h" 3
{
# 280 "/usr/include/stdlib.h" 3
return (int)strtol(__nptr, (char **)__null, 10);
# 281 "/usr/include/stdlib.h" 3
} }
# 283 "/usr/include/stdlib.h" 3
extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))) long atol(const char *__nptr) throw()
# 284 "/usr/include/stdlib.h" 3
{
# 285 "/usr/include/stdlib.h" 3
return strtol(__nptr, (char **)__null, 10);
# 286 "/usr/include/stdlib.h" 3
} }
# 292 "/usr/include/stdlib.h" 3
extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))) long long atoll(const char *__nptr) throw()
# 293 "/usr/include/stdlib.h" 3
{
# 294 "/usr/include/stdlib.h" 3
return strtoll(__nptr, (char **)__null, 10);
# 295 "/usr/include/stdlib.h" 3
} }
# 305 "/usr/include/stdlib.h" 3
extern "C" char *l64a(long) throw() __attribute__((__warn_unused_result__));
# 308 "/usr/include/stdlib.h" 3
extern "C" long a64l(const char *) throw() __attribute__((__pure__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1)));
# 33 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __u_char u_char; }
# 34 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __u_short u_short; }
# 35 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __u_int u_int; }
# 36 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __u_long u_long; }
# 37 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __quad_t quad_t; }
# 38 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __u_quad_t u_quad_t; }
# 39 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __fsid_t fsid_t; }
# 44 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __loff_t loff_t; }
# 48 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __ino_t ino_t; }
# 55 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __ino64_t ino64_t; }
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __dev_t dev_t; }
# 65 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __gid_t gid_t; }
# 70 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __mode_t mode_t; }
# 75 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __nlink_t nlink_t; }
# 80 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __uid_t uid_t; }
# 86 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __off_t off_t; }
# 93 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __off64_t off64_t; }
# 104 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __id_t id_t; }
# 109 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __ssize_t ssize_t; }
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __daddr_t daddr_t; }
# 116 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __caddr_t caddr_t; }
# 122 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __key_t key_t; }
# 136 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __useconds_t useconds_t; }
# 140 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __suseconds_t suseconds_t; }
# 150 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned long ulong; }
# 151 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned short ushort; }
# 152 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned uint; }
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef signed char int8_t; }
# 195 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef short int16_t; }
# 196 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef int int32_t; }
# 197 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef long int64_t; }
# 200 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned char u_int8_t; }
# 201 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned short u_int16_t; }
# 202 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned u_int32_t; }
# 203 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned long u_int64_t; }
# 205 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef long register_t; }
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 30 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
extern "C" { typedef
# 28 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
struct {
# 29 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
unsigned long __val[((1024) / ((8) * sizeof(unsigned long)))];
# 30 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
} __sigset_t; }
# 37 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" { typedef __sigset_t sigset_t; }
# 54 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" { typedef long __fd_mask; }
# 75 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" { typedef
# 65 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
struct {
# 69 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
__fd_mask fds_bits[(1024 / (8 * ((int)sizeof(__fd_mask))))];
# 75 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
} fd_set; }
# 82 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" { typedef __fd_mask fd_mask; }
# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" int select(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, timeval *__restrict__);
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" int pselect(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, const timespec *__restrict__, const __sigset_t *__restrict__);
# 24 "/usr/include/x86_64-linux-gnu/bits/select2.h" 3
extern "C" long __fdelt_chk(long);
# 25 "/usr/include/x86_64-linux-gnu/bits/select2.h" 3
extern "C" long __fdelt_warn(long);
# 27 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
extern "C" { extern inline unsigned gnu_dev_major(unsigned long long) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); }
# 30 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
extern "C" { extern inline unsigned gnu_dev_minor(unsigned long long) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); }
# 33 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
extern "C" { extern inline unsigned long long gnu_dev_makedev(unsigned, unsigned) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); }
# 39 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__const__)) unsigned gnu_dev_major(unsigned long long __dev) throw()
# 40 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
{
# 41 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
return ((__dev >> 8) & (4095)) | (((unsigned)(__dev >> 32)) & (~4095));
# 42 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
} }
# 45 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__const__)) unsigned gnu_dev_minor(unsigned long long __dev) throw()
# 46 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
{
# 47 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
return (__dev & (255)) | (((unsigned)(__dev >> 12)) & (~255));
# 48 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
} }
# 51 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__const__)) unsigned long long gnu_dev_makedev(unsigned __major, unsigned __minor) throw()
# 52 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
{
# 53 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
return (((__minor & (255)) | ((__major & (4095)) << 8)) | (((unsigned long long)(__minor & (~255))) << 12)) | (((unsigned long long)(__major & (~4095))) << 32);
# 56 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
} }
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __blksize_t blksize_t; }
# 235 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __blkcnt_t blkcnt_t; }
# 239 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __fsblkcnt_t fsblkcnt_t; }
# 243 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __fsfilcnt_t fsfilcnt_t; }
# 262 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __blkcnt64_t blkcnt64_t; }
# 263 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __fsblkcnt64_t fsblkcnt64_t; }
# 264 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __fsfilcnt64_t fsfilcnt64_t; }
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned long pthread_t; }
# 63 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { union pthread_attr_t {
# 65 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[56];
# 66 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
long __align;
# 67 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
}; }
# 69 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef pthread_attr_t pthread_attr_t; }
# 79 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 75 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct __pthread_internal_list {
# 77 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__pthread_internal_list *__prev;
# 78 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__pthread_internal_list *__next;
# 79 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} __pthread_list_t; }
# 127 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 91 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 92 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct __pthread_mutex_s {
# 94 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __lock;
# 95 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __count;
# 96 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __owner;
# 98 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __nusers;
# 102 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __kind;
# 104 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
short __spins;
# 105 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
short __elision;
# 106 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__pthread_list_t __list;
# 124 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} __data;
# 125 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[40];
# 126 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
long __align;
# 127 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_mutex_t; }
# 133 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 130 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 131 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[4];
# 132 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __align;
# 133 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_mutexattr_t; }
# 153 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 139 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 141 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct {
# 142 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __lock;
# 143 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __futex;
# 144 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__extension__ unsigned long long __total_seq;
# 145 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__extension__ unsigned long long __wakeup_seq;
# 146 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__extension__ unsigned long long __woken_seq;
# 147 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
void *__mutex;
# 148 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __nwaiters;
# 149 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __broadcast_seq;
# 150 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} __data;
# 151 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[48];
# 152 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__extension__ long long __align;
# 153 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_cond_t; }
# 159 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 156 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 157 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[4];
# 158 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __align;
# 159 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_condattr_t; }
# 163 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned pthread_key_t; }
# 167 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef int pthread_once_t; }
# 213 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 174 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 177 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct {
# 178 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __lock;
# 179 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __nr_readers;
# 180 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __readers_wakeup;
# 181 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __writer_wakeup;
# 182 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __nr_readers_queued;
# 183 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __nr_writers_queued;
# 184 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __writer;
# 185 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __shared;
# 186 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned long __pad1;
# 187 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned long __pad2;
# 190 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __flags;
# 192 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} __data;
# 211 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[56];
# 212 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
long __align;
# 213 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_rwlock_t; }
# 219 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 216 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 217 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[8];
# 218 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
long __align;
# 219 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_rwlockattr_t; }
# 225 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef volatile int pthread_spinlock_t; }
# 234 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 231 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 232 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[32];
# 233 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
long __align;
# 234 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_barrier_t; }
# 240 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 237 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 238 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[4];
# 239 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __align;
# 240 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_barrierattr_t; }
# 321 "/usr/include/stdlib.h" 3
extern "C" long random() throw();
# 324 "/usr/include/stdlib.h" 3
extern "C" void srandom(unsigned) throw();
# 330 "/usr/include/stdlib.h" 3
extern "C" char *initstate(unsigned, char *, size_t) throw() __attribute__((nonnull(2)));
# 335 "/usr/include/stdlib.h" 3
extern "C" char *setstate(char *) throw() __attribute__((nonnull(1)));
# 343 "/usr/include/stdlib.h" 3
extern "C" { struct random_data {
# 345 "/usr/include/stdlib.h" 3
int32_t *fptr;
# 346 "/usr/include/stdlib.h" 3
int32_t *rptr;
# 347 "/usr/include/stdlib.h" 3
int32_t *state;
# 348 "/usr/include/stdlib.h" 3
int rand_type;
# 349 "/usr/include/stdlib.h" 3
int rand_deg;
# 350 "/usr/include/stdlib.h" 3
int rand_sep;
# 351 "/usr/include/stdlib.h" 3
int32_t *end_ptr;
# 352 "/usr/include/stdlib.h" 3
}; }
# 354 "/usr/include/stdlib.h" 3
extern "C" int random_r(random_data *__restrict__, int32_t *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 357 "/usr/include/stdlib.h" 3
extern "C" int srandom_r(unsigned, random_data *) throw() __attribute__((nonnull(2)));
# 360 "/usr/include/stdlib.h" 3
extern "C" int initstate_r(unsigned, char *__restrict__, size_t, random_data *__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4)));
# 365 "/usr/include/stdlib.h" 3
extern "C" int setstate_r(char *__restrict__, random_data *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 374 "/usr/include/stdlib.h" 3
extern "C" int rand() throw();
# 376 "/usr/include/stdlib.h" 3
extern "C" void srand(unsigned) throw();
# 381 "/usr/include/stdlib.h" 3
extern "C" int rand_r(unsigned *) throw();
# 389 "/usr/include/stdlib.h" 3
extern "C" double drand48() throw();
# 390 "/usr/include/stdlib.h" 3
extern "C" double erand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 393 "/usr/include/stdlib.h" 3
extern "C" long lrand48() throw();
# 394 "/usr/include/stdlib.h" 3
extern "C" long nrand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 398 "/usr/include/stdlib.h" 3
extern "C" long mrand48() throw();
# 399 "/usr/include/stdlib.h" 3
extern "C" long jrand48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 403 "/usr/include/stdlib.h" 3
extern "C" void srand48(long) throw();
# 404 "/usr/include/stdlib.h" 3
extern "C" unsigned short *seed48(unsigned short [3]) throw() __attribute__((nonnull(1)));
# 406 "/usr/include/stdlib.h" 3
extern "C" void lcong48(unsigned short [7]) throw() __attribute__((nonnull(1)));
# 412 "/usr/include/stdlib.h" 3
extern "C" { struct drand48_data {
# 414 "/usr/include/stdlib.h" 3
unsigned short __x[3];
# 415 "/usr/include/stdlib.h" 3
unsigned short __old_x[3];
# 416 "/usr/include/stdlib.h" 3
unsigned short __c;
# 417 "/usr/include/stdlib.h" 3
unsigned short __init;
# 418 "/usr/include/stdlib.h" 3
__extension__ unsigned long long __a;
# 420 "/usr/include/stdlib.h" 3
}; }
# 423 "/usr/include/stdlib.h" 3
extern "C" int drand48_r(drand48_data *__restrict__, double *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 425 "/usr/include/stdlib.h" 3
extern "C" int erand48_r(unsigned short [3], drand48_data *__restrict__, double *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 430 "/usr/include/stdlib.h" 3
extern "C" int lrand48_r(drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 433 "/usr/include/stdlib.h" 3
extern "C" int nrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 439 "/usr/include/stdlib.h" 3
extern "C" int mrand48_r(drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 442 "/usr/include/stdlib.h" 3
extern "C" int jrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 448 "/usr/include/stdlib.h" 3
extern "C" int srand48_r(long, drand48_data *) throw() __attribute__((nonnull(2)));
# 451 "/usr/include/stdlib.h" 3
extern "C" int seed48_r(unsigned short [3], drand48_data *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 454 "/usr/include/stdlib.h" 3
extern "C" int lcong48_r(unsigned short [7], drand48_data *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2)));
# 466 "/usr/include/stdlib.h" 3
extern "C" void *malloc(size_t) throw() __attribute__((__malloc__)) __attribute__((__warn_unused_result__));
# 468 "/usr/include/stdlib.h" 3
extern "C" void *calloc(size_t, size_t) throw() __attribute__((__malloc__)) __attribute__((__warn_unused_result__));
# 480 "/usr/include/stdlib.h" 3
extern "C" void *realloc(void *, size_t) throw() __attribute__((__warn_unused_result__));
# 483 "/usr/include/stdlib.h" 3
extern "C" void free(void *) throw();
# 488 "/usr/include/stdlib.h" 3
extern "C" void cfree(void *) throw();
# 32 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t) throw();
# 498 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t) throw() __attribute__((__malloc__)) __attribute__((__warn_unused_result__));
# 503 "/usr/include/stdlib.h" 3
extern "C" int posix_memalign(void **, size_t, size_t) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(1)));
# 509 "/usr/include/stdlib.h" 3
extern "C" void *aligned_alloc(size_t, size_t) throw() __attribute__((__malloc__)) __attribute__((__warn_unused_result__));
# 515 "/usr/include/stdlib.h" 3
extern "C" void abort() throw() __attribute__((__noreturn__));
# 519 "/usr/include/stdlib.h" 3
extern "C" int atexit(void (*)(void)) throw() __attribute__((nonnull(1)));
# 524 "/usr/include/stdlib.h" 3
int at_quick_exit(void (*)(void)) throw() __asm__("at_quick_exit") __attribute__((nonnull(1)));
# 535 "/usr/include/stdlib.h" 3
extern "C" int on_exit(void (*)(int, void *), void *) throw() __attribute__((nonnull(1)));
# 543 "/usr/include/stdlib.h" 3
extern "C" void exit(int) throw() __attribute__((__noreturn__));
# 549 "/usr/include/stdlib.h" 3
extern "C" void quick_exit(int) throw() __attribute__((__noreturn__));
# 557 "/usr/include/stdlib.h" 3
extern "C" void _Exit(int) throw() __attribute__((__noreturn__));
# 564 "/usr/include/stdlib.h" 3
extern "C" char *getenv(const char *) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(1)));
# 570 "/usr/include/stdlib.h" 3
extern "C" char *secure_getenv(const char *) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(1)));
# 578 "/usr/include/stdlib.h" 3
extern "C" int putenv(char *) throw() __attribute__((nonnull(1)));
# 584 "/usr/include/stdlib.h" 3
extern "C" int setenv(const char *, const char *, int) throw() __attribute__((nonnull(2)));
# 588 "/usr/include/stdlib.h" 3
extern "C" int unsetenv(const char *) throw() __attribute__((nonnull(1)));
# 595 "/usr/include/stdlib.h" 3
extern "C" int clearenv() throw();
# 606 "/usr/include/stdlib.h" 3
extern "C" char *mktemp(char *) throw() __attribute__((nonnull(1)));
# 620 "/usr/include/stdlib.h" 3
extern "C" int mkstemp(char *) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1)));
# 630 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char *) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1)));
# 642 "/usr/include/stdlib.h" 3
extern "C" int mkstemps(char *, int) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1)));
# 652 "/usr/include/stdlib.h" 3
extern "C" int mkstemps64(char *, int) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1)));
# 663 "/usr/include/stdlib.h" 3
extern "C" char *mkdtemp(char *) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(1)));
# 674 "/usr/include/stdlib.h" 3
extern "C" int mkostemp(char *, int) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1)));
# 684 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char *, int) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1)));
# 694 "/usr/include/stdlib.h" 3
extern "C" int mkostemps(char *, int, int) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1)));
# 706 "/usr/include/stdlib.h" 3
extern "C" int mkostemps64(char *, int, int) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1)));
# 717 "/usr/include/stdlib.h" 3
extern "C" int system(const char *) __attribute__((__warn_unused_result__));
# 724 "/usr/include/stdlib.h" 3
extern "C" char *canonicalize_file_name(const char *) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(1)));
# 734 "/usr/include/stdlib.h" 3
extern "C" { extern inline char *realpath(const char *__restrict__, char *__restrict__) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__warn_unused_result__)); }
# 742 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }
# 745 "/usr/include/stdlib.h" 3
extern "C" { typedef __compar_fn_t comparison_fn_t; }
# 749 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 755 "/usr/include/stdlib.h" 3
extern "C" { extern inline void *bsearch(const void *, const void *, size_t, size_t, __compar_fn_t) __attribute__((__gnu_inline__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(5))); }
# 20 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(5))) void *bsearch(const void *__key, const void *__base, size_t __nmemb, size_t __size, __compar_fn_t
# 21 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
__compar)
# 22 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
{
# 23 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
size_t __l, __u, __idx;
# 24 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
const void *__p;
# 25 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
int __comparison;
# 27 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
__l = (0);
# 28 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
__u = __nmemb;
# 29 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
while (__l < __u)
# 30 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
{
# 31 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
__idx = ((__l + __u) / (2));
# 32 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
__p = ((void *)(((const char *)__base) + (__idx * __size)));
# 33 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
__comparison = (*__compar)(__key, __p);
# 34 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
if (__comparison < 0) {
# 35 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
__u = __idx; } else {
# 36 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
if (__comparison > 0) {
# 37 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
__l = (__idx + (1)); } else {
# 39 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
return (void *)__p; } }
# 40 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
}
# 42 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
return __null;
# 43 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
} }
# 765 "/usr/include/stdlib.h" 3
extern "C" void qsort(void *, size_t, size_t, __compar_fn_t) __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 768 "/usr/include/stdlib.h" 3
extern "C" void qsort_r(void *, size_t, size_t, __compar_d_fn_t, void *) __attribute__((nonnull(1))) __attribute__((nonnull(4)));
# 775 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) int abs(int) throw() __attribute__((__warn_unused_result__)) __attribute__((__const__));
# 776 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) long labs(long) throw() __attribute__((__warn_unused_result__)) __attribute__((__const__));
# 780 "/usr/include/stdlib.h" 3
extern "C" __attribute__((weak)) long long llabs(long long) throw() __attribute__((__warn_unused_result__)) __attribute__((__const__));
# 789 "/usr/include/stdlib.h" 3
extern "C" div_t div(int, int) throw() __attribute__((__warn_unused_result__)) __attribute__((__const__));
# 791 "/usr/include/stdlib.h" 3
extern "C" ldiv_t ldiv(long, long) throw() __attribute__((__warn_unused_result__)) __attribute__((__const__));
# 797 "/usr/include/stdlib.h" 3
extern "C" lldiv_t lldiv(long long, long long) throw() __attribute__((__warn_unused_result__)) __attribute__((__const__));
# 812 "/usr/include/stdlib.h" 3
extern "C" char *ecvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 818 "/usr/include/stdlib.h" 3
extern "C" char *fcvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 824 "/usr/include/stdlib.h" 3
extern "C" char *gcvt(double, int, char *) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(3)));
# 830 "/usr/include/stdlib.h" 3
extern "C" char *qecvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 833 "/usr/include/stdlib.h" 3
extern "C" char *qfcvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(3))) __attribute__((nonnull(4)));
# 836 "/usr/include/stdlib.h" 3
extern "C" char *qgcvt(long double, int, char *) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(3)));
# 842 "/usr/include/stdlib.h" 3
extern "C" int ecvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 845 "/usr/include/stdlib.h" 3
extern "C" int fcvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 849 "/usr/include/stdlib.h" 3
extern "C" int qecvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 853 "/usr/include/stdlib.h" 3
extern "C" int qfcvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5)));
# 863 "/usr/include/stdlib.h" 3
extern "C" int mblen(const char *, size_t) throw();
# 866 "/usr/include/stdlib.h" 3
extern "C" int mbtowc(wchar_t *__restrict__, const char *__restrict__, size_t) throw();
# 870 "/usr/include/stdlib.h" 3
extern "C" { extern inline int wctomb(char *, wchar_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__warn_unused_result__)); }
# 874 "/usr/include/stdlib.h" 3
extern "C" { extern inline size_t mbstowcs(wchar_t *__restrict__, const char *__restrict__, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)); }
# 877 "/usr/include/stdlib.h" 3
extern "C" { extern inline size_t wcstombs(char *__restrict__, const wchar_t *__restrict__, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)); }
# 888 "/usr/include/stdlib.h" 3
extern "C" int rpmatch(const char *) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(1)));
# 899 "/usr/include/stdlib.h" 3
extern "C" int getsubopt(char **__restrict__, char *const *__restrict__, char **__restrict__) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3)));
# 908 "/usr/include/stdlib.h" 3
extern "C" void setkey(const char *) throw() __attribute__((nonnull(1)));
# 916 "/usr/include/stdlib.h" 3
extern "C" int posix_openpt(int) __attribute__((__warn_unused_result__));
# 924 "/usr/include/stdlib.h" 3
extern "C" int grantpt(int) throw();
# 928 "/usr/include/stdlib.h" 3
extern "C" int unlockpt(int) throw();
# 933 "/usr/include/stdlib.h" 3
extern "C" char *ptsname(int) throw() __attribute__((__warn_unused_result__));
# 940 "/usr/include/stdlib.h" 3
extern "C" { extern inline int ptsname_r(int, char *, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(2))); }
# 944 "/usr/include/stdlib.h" 3
extern "C" int getpt();
# 951 "/usr/include/stdlib.h" 3
extern "C" int getloadavg(double [], int) throw() __attribute__((nonnull(1)));
# 26 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3
extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))) double atof(const char *__nptr) throw()
# 27 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3
{
# 28 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3
return strtod(__nptr, (char **)__null);
# 29 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3
} }
# 23 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
extern "C" char *__realpath_chk(const char *__restrict__, char *__restrict__, size_t) throw() __attribute__((__warn_unused_result__));
# 26 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
extern "C" char *__realpath_alias(const char *__restrict__, char *__restrict__) throw() __asm__("realpath") __attribute__((__warn_unused_result__));
# 29 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
extern "C" char *__realpath_chk_warn(const char *__restrict__, char *__restrict__, size_t) throw() __asm__("__realpath_chk") __attribute__((__warn_unused_result__));
# 37 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__warn_unused_result__)) char *realpath(const char *__restrict__ __name, char *__restrict__ __resolved) throw()
# 38 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
{
# 39 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
if (__builtin_object_size(__resolved, 2 > 1) != ((size_t)(-1)))
# 40 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
{
# 42 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
if (__builtin_object_size(__resolved, 2 > 1) < (4096)) {
# 43 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
return __realpath_chk_warn(__name, __resolved, __builtin_object_size(__resolved, 2 > 1)); }
# 45 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
return __realpath_chk(__name, __resolved, __builtin_object_size(__resolved, 2 > 1));
# 46 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
}
# 48 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
return __realpath_alias(__name, __resolved);
# 49 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
} }
# 52 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
extern "C" int __ptsname_r_chk(int, char *, size_t, size_t) throw() __attribute__((nonnull(2)));
# 54 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
extern "C" int __ptsname_r_alias(int, char *, size_t) throw() __asm__("ptsname_r") __attribute__((nonnull(2)));
# 57 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
extern "C" int __ptsname_r_chk_warn(int, char *, size_t, size_t) throw() __asm__("__ptsname_r_chk") __attribute__((nonnull(2)));
# 64 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(2))) int ptsname_r(int __fd, char *__buf, size_t __buflen) throw()
# 65 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
{
# 66 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
if (__builtin_object_size(__buf, 2 > 1) != ((size_t)(-1)))
# 67 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
{
# 68 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
if (!(0)) {
# 69 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
return __ptsname_r_chk(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1)); }
# 70 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
if (__buflen > __builtin_object_size(__buf, 2 > 1)) {
# 71 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
return __ptsname_r_chk_warn(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1)); }
# 72 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
}
# 73 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
return __ptsname_r_alias(__fd, __buf, __buflen);
# 74 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
} }
# 77 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
extern "C" int __wctomb_chk(char *, wchar_t, size_t) throw() __attribute__((__warn_unused_result__));
# 79 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
extern "C" int __wctomb_alias(char *, wchar_t) throw() __asm__("wctomb") __attribute__((__warn_unused_result__));
# 83 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__warn_unused_result__)) int wctomb(char *__s, wchar_t __wchar) throw()
# 84 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
{
# 92 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
if ((__builtin_object_size(__s, 2 > 1) != ((size_t)(-1))) && ((16) > __builtin_object_size(__s, 2 > 1))) {
# 93 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
return __wctomb_chk(__s, __wchar, __builtin_object_size(__s, 2 > 1)); }
# 94 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
return __wctomb_alias(__s, __wchar);
# 95 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
} }
# 98 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
extern "C" size_t __mbstowcs_chk(wchar_t *__restrict__, const char *__restrict__, size_t, size_t) throw();
# 101 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
extern "C" size_t __mbstowcs_alias(wchar_t *__restrict__, const char *__restrict__, size_t) throw() __asm__("mbstowcs");
# 105 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
extern "C" size_t __mbstowcs_chk_warn(wchar_t *__restrict__, const char *__restrict__, size_t, size_t) throw() __asm__("__mbstowcs_chk");
# 113 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) size_t mbstowcs(wchar_t *__restrict__ __dst, const char *__restrict__ __src, size_t __len) throw()
# 115 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
{
# 116 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
if (__builtin_object_size(__dst, 2 > 1) != ((size_t)(-1)))
# 117 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
{
# 118 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
if (!(0)) {
# 119 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
return __mbstowcs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof(wchar_t)); }
# 122 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
if (__len > (__builtin_object_size(__dst, 2 > 1) / sizeof(wchar_t))) {
# 123 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
return __mbstowcs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof(wchar_t)); }
# 125 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
}
# 126 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
return __mbstowcs_alias(__dst, __src, __len);
# 127 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
} }
# 130 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
extern "C" size_t __wcstombs_chk(char *__restrict__, const wchar_t *__restrict__, size_t, size_t) throw();
# 133 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
extern "C" size_t __wcstombs_alias(char *__restrict__, const wchar_t *__restrict__, size_t) throw() __asm__("wcstombs");
# 137 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
extern "C" size_t __wcstombs_chk_warn(char *__restrict__, const wchar_t *__restrict__, size_t, size_t) throw() __asm__("__wcstombs_chk");
# 144 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) size_t wcstombs(char *__restrict__ __dst, const wchar_t *__restrict__ __src, size_t __len) throw()
# 146 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
{
# 147 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
if (__builtin_object_size(__dst, 2 > 1) != ((size_t)(-1)))
# 148 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
{
# 149 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
if (!(0)) {
# 150 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
return __wcstombs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1)); }
# 151 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
if (__len > __builtin_object_size(__dst, 2 > 1)) {
# 152 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
return __wcstombs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1)); }
# 153 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
}
# 154 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
return __wcstombs_alias(__dst, __src, __len);
# 155 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
} }
# 153 "/usr/include/c++/4.6/x86_64-linux-gnu/./bits/c++config.h" 3
namespace std {
# 155 "/usr/include/c++/4.6/x86_64-linux-gnu/./bits/c++config.h" 3
typedef unsigned long size_t;
# 1 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 1 3
# 91 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 3
extern "C" {

extern void** __cudaRegisterFatBinary(
  void *fatCubin
);

extern void __cudaUnregisterFatBinary(
  void **fatCubinHandle
);

extern void __cudaRegisterVar(
        void **fatCubinHandle,
        char *hostVar,
        char *deviceAddress,
  const char *deviceName,
        int ext,
        int size,
        int constant,
        int global
);

extern void __cudaRegisterTexture(
        void **fatCubinHandle,
  const struct textureReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int norm,
        int ext
);

extern void __cudaRegisterSurface(
        void **fatCubinHandle,
  const struct surfaceReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int ext
);

extern void __cudaRegisterFunction(
        void **fatCubinHandle,
  const char *hostFun,
        char *deviceFun,
  const char *deviceName,
        int thread_limit,
        uint3 *tid,
        uint3 *bid,
        dim3 *bDim,
        dim3 *gDim,
        int *wSize
);



extern int atexit(void(*)(void)) throw();







}

static void **__cudaFatCubinHandle;

static void __cudaUnregisterBinaryUtil(void)
{
  __cudaUnregisterFatBinary(__cudaFatCubinHandle);
}

# 1 "/usr/local/cuda/bin/../include/common_functions.h" 1 3
# 90 "/usr/local/cuda/bin/../include/common_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/math_functions.h" 1 3
# 948 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/math_constants.h" 1 3
# 949 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 2973 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/crt/func_macro.h" 1 3
# 2974 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 4683 "/usr/local/cuda/bin/../include/math_functions.h" 3
extern __attribute__((__weak__)) double rsqrt(double a); double rsqrt(double a)
{
  return 1.0 / sqrt(a);
}

extern __attribute__((__weak__)) double rcbrt(double a); double rcbrt(double a)
{
  double s, t;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return 1.0 / a;
  }
  s = fabs(a);
  t = exp2(-3.3333333333333333e-1 * log2(s));
  t = ((t*t) * (-s*t) + 1.0) * (3.3333333333333333e-1*t) + t;



  if (__signbit(a))

  {
    t = -t;
  }
  return t;
}

extern __attribute__((__weak__)) double sinpi(double a); double sinpi(double a)
{
  int n;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return sin (a);
  }
  if (a == floor(a)) {
    return ((a / 1.0e308) / 1.0e308) / 1.0e308;
  }
  a = remquo (a, 0.5, &n);
  a = a * 3.1415926535897931e+0;
  if (n & 1) {
    a = cos (a);
  } else {
    a = sin (a);
  }
  if (n & 2) {
    a = -a;
  }
  return a;
}

extern __attribute__((__weak__)) double erfinv(double a); double erfinv(double a)
{
  double p, q, t, fa;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  fa = fabs(a);
  if (fa >= 1.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (fa == 1.0) {
      t = a * exp(1000.0);
    }
  } else if (fa >= 0.9375) {




    t = log1p(-fa);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
    if (a < 0.0) t = -t;
  } else if (fa >= 0.75) {




    t = a * a - .87890625;
    p = .21489185007307062000e+0;
    p = p * t - .64200071507209448655e+1;
    p = p * t + .29631331505876308123e+2;
    p = p * t - .47644367129787181803e+2;
    p = p * t + .34810057749357500873e+2;
    p = p * t - .12954198980646771502e+2;
    p = p * t + .25349389220714893917e+1;
    p = p * t - .24758242362823355486e+0;
    p = p * t + .94897362808681080020e-2;
    q = t - .12831383833953226499e+2;
    q = q * t + .41409991778428888716e+2;
    q = q * t - .53715373448862143349e+2;
    q = q * t + .33880176779595142685e+2;
    q = q * t - .11315360624238054876e+2;
    q = q * t + .20369295047216351160e+1;
    q = q * t - .18611650627372178511e+0;
    q = q * t + .67544512778850945940e-2;
    p = p / q;
    t = a * p;
  } else {




    t = a * a - .5625;
    p = - .23886240104308755900e+2;
    p = p * t + .45560204272689128170e+3;
    p = p * t - .22977467176607144887e+4;
    p = p * t + .46631433533434331287e+4;
    p = p * t - .43799652308386926161e+4;
    p = p * t + .19007153590528134753e+4;
    p = p * t - .30786872642313695280e+3;
    q = t - .83288327901936570000e+2;
    q = q * t + .92741319160935318800e+3;
    q = q * t - .35088976383877264098e+4;
    q = q * t + .59039348134843665626e+4;
    q = q * t - .48481635430048872102e+4;
    q = q * t + .18997769186453057810e+4;
    q = q * t - .28386514725366621129e+3;
    p = p / q;
    t = a * p;
  }
  return t;
}

extern __attribute__((__weak__)) double erfcinv(double a); double erfcinv(double a)
{
  double t;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  if (__isnan(a)) {
    return a + a;
  }
  if (a <= 0.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (a == 0.0) {
        t = (1.0 - a) * exp(1000.0);
    }
  }
  else if (a >= 0.0625) {
    t = erfinv (1.0 - a);
  }
  else if (a >= 1e-100) {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
  }
  else {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 6.9952990607058154858e-1;
    p = p * t + 1.9507620287580568829e+0;
    p = p * t + 8.2810030904462690216e-1;
    p = p * t + 1.1279046353630280005e-1;
    p = p * t + 6.0537914739162189689e-3;
    p = p * t + 1.3714329569665128933e-4;
    p = p * t + 1.2964481560643197452e-6;
    p = p * t + 4.6156006321345332510e-9;
    p = p * t + 4.5344689563209398450e-12;
    q = t + 1.5771922386662040546e+0;
    q = q * t + 2.1238242087454993542e+0;
    q = q * t + 8.4001814918178042919e-1;
    q = q * t + 1.1311889334355782065e-1;
    q = q * t + 6.0574830550097140404e-3;
    q = q * t + 1.3715891988350205065e-4;
    q = q * t + 1.2964671850944981713e-6;
    q = q * t + 4.6156017600933592558e-9;
    q = q * t + 4.5344687377088206783e-12;
    t = p / (q * t);
  }
  return t;
}

extern __attribute__((__weak__)) float rsqrtf(float a); float rsqrtf(float a)
{
  return (float)rsqrt((double)a);
}

extern __attribute__((__weak__)) float rcbrtf(float a); float rcbrtf(float a)
{
  return (float)rcbrt((double)a);
}

extern __attribute__((__weak__)) float sinpif(float a); float sinpif(float a)
{
  return (float)sinpi((double)a);
}

extern __attribute__((__weak__)) float erfinvf(float a); float erfinvf(float a)
{
  return (float)erfinv((double)a);
}

extern __attribute__((__weak__)) float erfcinvf(float a); float erfcinvf(float a)
{
  return (float)erfcinv((double)a);
}







extern __attribute__((__weak__)) int min(int a, int b); int min(int a, int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umin(unsigned int a, unsigned int b); unsigned int umin(unsigned int a, unsigned int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) long long int llmin(long long int a, long long int b); long long int llmin(long long int a, long long int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned long long int ullmin(unsigned long long int a, unsigned long long int b); unsigned long long int ullmin(unsigned long long int a, unsigned long long int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) int max(int a, int b); int max(int a, int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umax(unsigned int a, unsigned int b); unsigned int umax(unsigned int a, unsigned int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) long long int llmax(long long int a, long long int b); long long int llmax(long long int a, long long int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) unsigned long long int ullmax(unsigned long long int a, unsigned long long int b); unsigned long long int ullmax(unsigned long long int a, unsigned long long int b)
{
  return a > b ? a : b;
}
# 5006 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/math_functions_dbl_ptx3.h" 1 3
# 5007 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 91 "/usr/local/cuda/bin/../include/common_functions.h" 2 3
# 164 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2 3







#pragma pack()
# 157 "/usr/include/c++/4.6/x86_64-linux-gnu/./bits/c++config.h" 2 3
# 156 "/usr/include/c++/4.6/x86_64-linux-gnu/./bits/c++config.h" 3
typedef long ptrdiff_t;
# 161 "/usr/include/c++/4.6/x86_64-linux-gnu/./bits/c++config.h" 3
}
# 69 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 73 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container> class __normal_iterator;
# 77 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
}
# 79 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
namespace std __attribute__((visibility("default"))) {
# 83 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
struct __true_type { };
# 84 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
struct __false_type { };
# 86 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template< bool __T0>
# 87 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
struct __truth_type {
# 88 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __false_type __type; };
# 91 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __truth_type< true> {
# 92 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type; };
# 96 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template< class _Sp, class _Tp>
# 97 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
struct __traitor {
# 99 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = (((bool)_Sp::__value) || ((bool)_Tp::__value))};
# 100 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef typename __truth_type< __value> ::__type __type;
# 101 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 104 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template< class , class >
# 105 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
struct __are_same {
# 107 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value};
# 108 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 109 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 111 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template< class _Tp>
# 112 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
struct __are_same< _Tp, _Tp> {
# 114 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 115 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 116 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 119 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template< class _Tp>
# 120 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
struct __is_void {
# 122 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value};
# 123 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 124 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 127 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_void< void> {
# 129 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 130 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 131 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 136 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template< class _Tp>
# 137 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
struct __is_integer {
# 139 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value};
# 140 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 141 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 147 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_integer< bool> {
# 149 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 150 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 151 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 154 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_integer< char> {
# 156 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 157 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 158 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 161 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_integer< signed char> {
# 163 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 164 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 165 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 168 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned char> {
# 170 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 171 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 172 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 176 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_integer< wchar_t> {
# 178 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 179 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 180 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 200 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_integer< short> {
# 202 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 203 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 204 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 207 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned short> {
# 209 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 210 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 211 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 214 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_integer< int> {
# 216 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 217 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 218 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 221 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned> {
# 223 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 224 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 225 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 228 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long> {
# 230 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 231 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 232 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 235 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long> {
# 237 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 238 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 239 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 242 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long long> {
# 244 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 245 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 246 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 249 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long long> {
# 251 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 252 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 253 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 258 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template< class _Tp>
# 259 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
struct __is_floating {
# 261 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value};
# 262 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 263 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 267 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_floating< float> {
# 269 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 270 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 271 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 274 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_floating< double> {
# 276 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 277 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 278 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 281 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_floating< long double> {
# 283 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 284 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 285 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 290 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template< class _Tp>
# 291 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
struct __is_pointer {
# 293 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value};
# 294 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 295 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 297 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template< class _Tp>
# 298 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
struct __is_pointer< _Tp *> {
# 300 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 301 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 302 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 307 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template< class _Tp>
# 308 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
struct __is_normal_iterator {
# 310 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value};
# 311 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 312 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 314 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container>
# 315 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> > {
# 318 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 319 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 320 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 325 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template< class _Tp>
# 326 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> > {
# 328 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 333 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template< class _Tp>
# 334 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> > {
# 336 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 341 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template< class _Tp>
# 342 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> > {
# 344 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 349 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template< class _Tp>
# 350 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
struct __is_char {
# 352 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value};
# 353 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 354 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 357 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_char< char> {
# 359 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 360 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 361 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 365 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_char< wchar_t> {
# 367 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 368 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 369 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 372 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template< class _Tp>
# 373 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
struct __is_byte {
# 375 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value};
# 376 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 377 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 380 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_byte< char> {
# 382 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 383 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 384 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 387 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_byte< signed char> {
# 389 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 390 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 391 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 394 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_byte< unsigned char> {
# 396 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 397 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 398 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 403 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template< class _Tp>
# 404 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
struct __is_move_iterator {
# 406 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
enum { __value};
# 407 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 408 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
};
# 423 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
}
# 38 "/usr/include/c++/4.6/ext/type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 43 "/usr/include/c++/4.6/ext/type_traits.h" 3
template< bool __T1, class >
# 44 "/usr/include/c++/4.6/ext/type_traits.h" 3
struct __enable_if {
# 45 "/usr/include/c++/4.6/ext/type_traits.h" 3
};
# 47 "/usr/include/c++/4.6/ext/type_traits.h" 3
template< class _Tp>
# 48 "/usr/include/c++/4.6/ext/type_traits.h" 3
struct __enable_if< true, _Tp> {
# 49 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef _Tp __type; };
# 53 "/usr/include/c++/4.6/ext/type_traits.h" 3
template< bool _Cond, class _Iftrue, class _Iffalse>
# 54 "/usr/include/c++/4.6/ext/type_traits.h" 3
struct __conditional_type {
# 55 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef _Iftrue __type; };
# 57 "/usr/include/c++/4.6/ext/type_traits.h" 3
template< class _Iftrue, class _Iffalse>
# 58 "/usr/include/c++/4.6/ext/type_traits.h" 3
struct __conditional_type< false, _Iftrue, _Iffalse> {
# 59 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef _Iffalse __type; };
# 63 "/usr/include/c++/4.6/ext/type_traits.h" 3
template< class _Tp>
# 64 "/usr/include/c++/4.6/ext/type_traits.h" 3
struct __add_unsigned {
# 67 "/usr/include/c++/4.6/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 70 "/usr/include/c++/4.6/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 71 "/usr/include/c++/4.6/ext/type_traits.h" 3
};
# 74 "/usr/include/c++/4.6/ext/type_traits.h" 3
template<> struct __add_unsigned< char> {
# 75 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef unsigned char __type; };
# 78 "/usr/include/c++/4.6/ext/type_traits.h" 3
template<> struct __add_unsigned< signed char> {
# 79 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef unsigned char __type; };
# 82 "/usr/include/c++/4.6/ext/type_traits.h" 3
template<> struct __add_unsigned< short> {
# 83 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef unsigned short __type; };
# 86 "/usr/include/c++/4.6/ext/type_traits.h" 3
template<> struct __add_unsigned< int> {
# 87 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef unsigned __type; };
# 90 "/usr/include/c++/4.6/ext/type_traits.h" 3
template<> struct __add_unsigned< long> {
# 91 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef unsigned long __type; };
# 94 "/usr/include/c++/4.6/ext/type_traits.h" 3
template<> struct __add_unsigned< long long> {
# 95 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef unsigned long long __type; };
# 99 "/usr/include/c++/4.6/ext/type_traits.h" 3
template<> struct __add_unsigned< bool> ;
# 102 "/usr/include/c++/4.6/ext/type_traits.h" 3
template<> struct __add_unsigned< wchar_t> ;
# 106 "/usr/include/c++/4.6/ext/type_traits.h" 3
template< class _Tp>
# 107 "/usr/include/c++/4.6/ext/type_traits.h" 3
struct __remove_unsigned {
# 110 "/usr/include/c++/4.6/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 113 "/usr/include/c++/4.6/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 114 "/usr/include/c++/4.6/ext/type_traits.h" 3
};
# 117 "/usr/include/c++/4.6/ext/type_traits.h" 3
template<> struct __remove_unsigned< char> {
# 118 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef signed char __type; };
# 121 "/usr/include/c++/4.6/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned char> {
# 122 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef signed char __type; };
# 125 "/usr/include/c++/4.6/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned short> {
# 126 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef short __type; };
# 129 "/usr/include/c++/4.6/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned> {
# 130 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef int __type; };
# 133 "/usr/include/c++/4.6/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long> {
# 134 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef long __type; };
# 137 "/usr/include/c++/4.6/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long long> {
# 138 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef long long __type; };
# 142 "/usr/include/c++/4.6/ext/type_traits.h" 3
template<> struct __remove_unsigned< bool> ;
# 145 "/usr/include/c++/4.6/ext/type_traits.h" 3
template<> struct __remove_unsigned< wchar_t> ;
# 149 "/usr/include/c++/4.6/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type * __ptr )
    { return __ptr == 0; }
# 154 "/usr/include/c++/4.6/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type )
    { return false; }
# 161 "/usr/include/c++/4.6/ext/type_traits.h" 3
template< class _Tp, bool __T2 = std::__is_integer< _Tp> ::__value>
# 162 "/usr/include/c++/4.6/ext/type_traits.h" 3
struct __promote {
# 163 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef double __type; };
# 168 "/usr/include/c++/4.6/ext/type_traits.h" 3
template< class _Tp>
# 169 "/usr/include/c++/4.6/ext/type_traits.h" 3
struct __promote< _Tp, false> {
# 170 "/usr/include/c++/4.6/ext/type_traits.h" 3
};
# 173 "/usr/include/c++/4.6/ext/type_traits.h" 3
template<> struct __promote< long double, false> {
# 174 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef long double __type; };
# 177 "/usr/include/c++/4.6/ext/type_traits.h" 3
template<> struct __promote< double, false> {
# 178 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef double __type; };
# 181 "/usr/include/c++/4.6/ext/type_traits.h" 3
template<> struct __promote< float, false> {
# 182 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef float __type; };
# 184 "/usr/include/c++/4.6/ext/type_traits.h" 3
template< class _Tp, class _Up, class
# 185 "/usr/include/c++/4.6/ext/type_traits.h" 3
_Tp2 = typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type, class
# 186 "/usr/include/c++/4.6/ext/type_traits.h" 3
_Up2 = typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type>
# 187 "/usr/include/c++/4.6/ext/type_traits.h" 3
struct __promote_2 {
# 189 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef __typeof__(_Tp2() + _Up2()) __type;
# 190 "/usr/include/c++/4.6/ext/type_traits.h" 3
};
# 192 "/usr/include/c++/4.6/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp, class
# 193 "/usr/include/c++/4.6/ext/type_traits.h" 3
_Tp2 = typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type, class
# 194 "/usr/include/c++/4.6/ext/type_traits.h" 3
_Up2 = typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type, class
# 195 "/usr/include/c++/4.6/ext/type_traits.h" 3
_Vp2 = typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type>
# 196 "/usr/include/c++/4.6/ext/type_traits.h" 3
struct __promote_3 {
# 198 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef __typeof__((_Tp2() + _Up2()) + _Vp2()) __type;
# 199 "/usr/include/c++/4.6/ext/type_traits.h" 3
};
# 201 "/usr/include/c++/4.6/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp, class _Wp, class
# 202 "/usr/include/c++/4.6/ext/type_traits.h" 3
_Tp2 = typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type, class
# 203 "/usr/include/c++/4.6/ext/type_traits.h" 3
_Up2 = typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type, class
# 204 "/usr/include/c++/4.6/ext/type_traits.h" 3
_Vp2 = typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type, class
# 205 "/usr/include/c++/4.6/ext/type_traits.h" 3
_Wp2 = typename __promote< _Wp, std::__is_integer< _Wp> ::__value> ::__type>
# 206 "/usr/include/c++/4.6/ext/type_traits.h" 3
struct __promote_4 {
# 208 "/usr/include/c++/4.6/ext/type_traits.h" 3
typedef __typeof__(((_Tp2() + _Up2()) + _Vp2()) + _Wp2()) __type;
# 209 "/usr/include/c++/4.6/ext/type_traits.h" 3
};
# 212 "/usr/include/c++/4.6/ext/type_traits.h" 3
}
# 77 "/usr/include/c++/4.6/cmath" 3
namespace std __attribute__((visibility("default"))) {
# 82 "/usr/include/c++/4.6/cmath" 3
inline double abs(double __x)
# 83 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_fabs(__x); }
# 86 "/usr/include/c++/4.6/cmath" 3
inline float abs(float __x)
# 87 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_fabsf(__x); }
# 90 "/usr/include/c++/4.6/cmath" 3
inline long double abs(long double __x)
# 91 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_fabsl(__x); }
# 93 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    abs ( _Tp __x )
    { return __builtin_fabs ( __x ); }
# 99 "/usr/include/c++/4.6/cmath" 3
using ::acos;
# 102 "/usr/include/c++/4.6/cmath" 3
inline float acos(float __x)
# 103 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_acosf(__x); }
# 106 "/usr/include/c++/4.6/cmath" 3
inline long double acos(long double __x)
# 107 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_acosl(__x); }
# 109 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    acos ( _Tp __x )
    { return __builtin_acos ( __x ); }
# 115 "/usr/include/c++/4.6/cmath" 3
using ::asin;
# 118 "/usr/include/c++/4.6/cmath" 3
inline float asin(float __x)
# 119 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_asinf(__x); }
# 122 "/usr/include/c++/4.6/cmath" 3
inline long double asin(long double __x)
# 123 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_asinl(__x); }
# 125 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    asin ( _Tp __x )
    { return __builtin_asin ( __x ); }
# 131 "/usr/include/c++/4.6/cmath" 3
using ::atan;
# 134 "/usr/include/c++/4.6/cmath" 3
inline float atan(float __x)
# 135 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_atanf(__x); }
# 138 "/usr/include/c++/4.6/cmath" 3
inline long double atan(long double __x)
# 139 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_atanl(__x); }
# 141 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    atan ( _Tp __x )
    { return __builtin_atan ( __x ); }
# 147 "/usr/include/c++/4.6/cmath" 3
using ::atan2;
# 150 "/usr/include/c++/4.6/cmath" 3
inline float atan2(float __y, float __x)
# 151 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_atan2f(__y, __x); }
# 154 "/usr/include/c++/4.6/cmath" 3
inline long double atan2(long double __y, long double __x)
# 155 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_atan2l(__y, __x); }
# 157 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type
    atan2 ( _Tp __y, _Up __x )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return atan2 ( __type ( __y ), __type ( __x ) );
    }
# 166 "/usr/include/c++/4.6/cmath" 3
using ::ceil;
# 169 "/usr/include/c++/4.6/cmath" 3
inline float ceil(float __x)
# 170 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_ceilf(__x); }
# 173 "/usr/include/c++/4.6/cmath" 3
inline long double ceil(long double __x)
# 174 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_ceill(__x); }
# 176 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    ceil ( _Tp __x )
    { return __builtin_ceil ( __x ); }
# 182 "/usr/include/c++/4.6/cmath" 3
using ::cos;
# 185 "/usr/include/c++/4.6/cmath" 3
inline float cos(float __x)
# 186 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_cosf(__x); }
# 189 "/usr/include/c++/4.6/cmath" 3
inline long double cos(long double __x)
# 190 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_cosl(__x); }
# 192 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cos ( _Tp __x )
    { return __builtin_cos ( __x ); }
# 198 "/usr/include/c++/4.6/cmath" 3
using ::cosh;
# 201 "/usr/include/c++/4.6/cmath" 3
inline float cosh(float __x)
# 202 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_coshf(__x); }
# 205 "/usr/include/c++/4.6/cmath" 3
inline long double cosh(long double __x)
# 206 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_coshl(__x); }
# 208 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cosh ( _Tp __x )
    { return __builtin_cosh ( __x ); }
# 214 "/usr/include/c++/4.6/cmath" 3
using ::exp;
# 217 "/usr/include/c++/4.6/cmath" 3
inline float exp(float __x)
# 218 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_expf(__x); }
# 221 "/usr/include/c++/4.6/cmath" 3
inline long double exp(long double __x)
# 222 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_expl(__x); }
# 224 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    exp ( _Tp __x )
    { return __builtin_exp ( __x ); }
# 230 "/usr/include/c++/4.6/cmath" 3
using ::fabs;
# 233 "/usr/include/c++/4.6/cmath" 3
inline float fabs(float __x)
# 234 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_fabsf(__x); }
# 237 "/usr/include/c++/4.6/cmath" 3
inline long double fabs(long double __x)
# 238 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_fabsl(__x); }
# 240 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    fabs ( _Tp __x )
    { return __builtin_fabs ( __x ); }
# 246 "/usr/include/c++/4.6/cmath" 3
using ::floor;
# 249 "/usr/include/c++/4.6/cmath" 3
inline float floor(float __x)
# 250 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_floorf(__x); }
# 253 "/usr/include/c++/4.6/cmath" 3
inline long double floor(long double __x)
# 254 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_floorl(__x); }
# 256 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    floor ( _Tp __x )
    { return __builtin_floor ( __x ); }
# 262 "/usr/include/c++/4.6/cmath" 3
using ::fmod;
# 265 "/usr/include/c++/4.6/cmath" 3
inline float fmod(float __x, float __y)
# 266 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_fmodf(__x, __y); }
# 269 "/usr/include/c++/4.6/cmath" 3
inline long double fmod(long double __x, long double __y)
# 270 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_fmodl(__x, __y); }
# 272 "/usr/include/c++/4.6/cmath" 3
using ::frexp;
# 275 "/usr/include/c++/4.6/cmath" 3
inline float frexp(float __x, int *__exp)
# 276 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_frexpf(__x, __exp); }
# 279 "/usr/include/c++/4.6/cmath" 3
inline long double frexp(long double __x, int *__exp)
# 280 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_frexpl(__x, __exp); }
# 282 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    frexp ( _Tp __x, int * __exp )
    { return __builtin_frexp ( __x, __exp ); }
# 288 "/usr/include/c++/4.6/cmath" 3
using ::ldexp;
# 291 "/usr/include/c++/4.6/cmath" 3
inline float ldexp(float __x, int __exp)
# 292 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_ldexpf(__x, __exp); }
# 295 "/usr/include/c++/4.6/cmath" 3
inline long double ldexp(long double __x, int __exp)
# 296 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_ldexpl(__x, __exp); }
# 298 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
  ldexp ( _Tp __x, int __exp )
  { return __builtin_ldexp ( __x, __exp ); }
# 304 "/usr/include/c++/4.6/cmath" 3
using ::log;
# 307 "/usr/include/c++/4.6/cmath" 3
inline float log(float __x)
# 308 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_logf(__x); }
# 311 "/usr/include/c++/4.6/cmath" 3
inline long double log(long double __x)
# 312 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_logl(__x); }
# 314 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log ( _Tp __x )
    { return __builtin_log ( __x ); }
# 320 "/usr/include/c++/4.6/cmath" 3
using ::log10;
# 323 "/usr/include/c++/4.6/cmath" 3
inline float log10(float __x)
# 324 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_log10f(__x); }
# 327 "/usr/include/c++/4.6/cmath" 3
inline long double log10(long double __x)
# 328 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_log10l(__x); }
# 330 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log10 ( _Tp __x )
    { return __builtin_log10 ( __x ); }
# 336 "/usr/include/c++/4.6/cmath" 3
using ::modf;
# 339 "/usr/include/c++/4.6/cmath" 3
inline float modf(float __x, float *__iptr)
# 340 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_modff(__x, __iptr); }
# 343 "/usr/include/c++/4.6/cmath" 3
inline long double modf(long double __x, long double *__iptr)
# 344 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_modfl(__x, __iptr); }
# 346 "/usr/include/c++/4.6/cmath" 3
using ::pow;
# 349 "/usr/include/c++/4.6/cmath" 3
inline float pow(float __x, float __y)
# 350 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_powf(__x, __y); }
# 353 "/usr/include/c++/4.6/cmath" 3
inline long double pow(long double __x, long double __y)
# 354 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_powl(__x, __y); }
# 360 "/usr/include/c++/4.6/cmath" 3
inline double pow(double __x, int __i)
# 361 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_powi(__x, __i); }
# 364 "/usr/include/c++/4.6/cmath" 3
inline float pow(float __x, int __n)
# 365 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_powif(__x, __n); }
# 368 "/usr/include/c++/4.6/cmath" 3
inline long double pow(long double __x, int __n)
# 369 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_powil(__x, __n); }
# 372 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type
    pow ( _Tp __x, _Up __y )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return pow ( __type ( __x ), __type ( __y ) );
    }
# 381 "/usr/include/c++/4.6/cmath" 3
using ::sin;
# 384 "/usr/include/c++/4.6/cmath" 3
inline float sin(float __x)
# 385 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_sinf(__x); }
# 388 "/usr/include/c++/4.6/cmath" 3
inline long double sin(long double __x)
# 389 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_sinl(__x); }
# 391 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sin ( _Tp __x )
    { return __builtin_sin ( __x ); }
# 397 "/usr/include/c++/4.6/cmath" 3
using ::sinh;
# 400 "/usr/include/c++/4.6/cmath" 3
inline float sinh(float __x)
# 401 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_sinhf(__x); }
# 404 "/usr/include/c++/4.6/cmath" 3
inline long double sinh(long double __x)
# 405 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_sinhl(__x); }
# 407 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sinh ( _Tp __x )
    { return __builtin_sinh ( __x ); }
# 413 "/usr/include/c++/4.6/cmath" 3
using ::sqrt;
# 416 "/usr/include/c++/4.6/cmath" 3
inline float sqrt(float __x)
# 417 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_sqrtf(__x); }
# 420 "/usr/include/c++/4.6/cmath" 3
inline long double sqrt(long double __x)
# 421 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_sqrtl(__x); }
# 423 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sqrt ( _Tp __x )
    { return __builtin_sqrt ( __x ); }
# 429 "/usr/include/c++/4.6/cmath" 3
using ::tan;
# 432 "/usr/include/c++/4.6/cmath" 3
inline float tan(float __x)
# 433 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_tanf(__x); }
# 436 "/usr/include/c++/4.6/cmath" 3
inline long double tan(long double __x)
# 437 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_tanl(__x); }
# 439 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tan ( _Tp __x )
    { return __builtin_tan ( __x ); }
# 445 "/usr/include/c++/4.6/cmath" 3
using ::tanh;
# 448 "/usr/include/c++/4.6/cmath" 3
inline float tanh(float __x)
# 449 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_tanhf(__x); }
# 452 "/usr/include/c++/4.6/cmath" 3
inline long double tanh(long double __x)
# 453 "/usr/include/c++/4.6/cmath" 3
{ return __builtin_tanhl(__x); }
# 455 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tanh ( _Tp __x )
    { return __builtin_tanh ( __x ); }
# 462 "/usr/include/c++/4.6/cmath" 3
}
# 481 "/usr/include/c++/4.6/cmath" 3
namespace std __attribute__((visibility("default"))) {
# 731 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    fpclassify ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_fpclassify ( 0, 1, 4,
      3, 2, __type ( __f ) );
    }
# 741 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isfinite ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isfinite ( __type ( __f ) );
    }
# 750 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isinf ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isinf ( __type ( __f ) );
    }
# 759 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnan ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnan ( __type ( __f ) );
    }
# 768 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnormal ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnormal ( __type ( __f ) );
    }
# 777 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    signbit ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_signbit ( __type ( __f ) );
    }
# 786 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 795 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreaterequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreaterequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 804 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isless ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isless ( __type ( __f1 ), __type ( __f2 ) );
    }
# 813 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 822 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 831 "/usr/include/c++/4.6/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isunordered ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isunordered ( __type ( __f1 ), __type ( __f2 ) );
    }
# 843 "/usr/include/c++/4.6/cmath" 3
}
# 98 "/usr/include/c++/4.6/cstdlib" 3
namespace std __attribute__((visibility("default"))) {
# 102 "/usr/include/c++/4.6/cstdlib" 3
using ::div_t;
# 103 "/usr/include/c++/4.6/cstdlib" 3
using ::ldiv_t;
# 105 "/usr/include/c++/4.6/cstdlib" 3
using ::abort;
# 106 "/usr/include/c++/4.6/cstdlib" 3
using ::abs;
# 107 "/usr/include/c++/4.6/cstdlib" 3
using ::atexit;
# 108 "/usr/include/c++/4.6/cstdlib" 3
using ::atof;
# 109 "/usr/include/c++/4.6/cstdlib" 3
using ::atoi;
# 110 "/usr/include/c++/4.6/cstdlib" 3
using ::atol;
# 111 "/usr/include/c++/4.6/cstdlib" 3
using ::bsearch;
# 112 "/usr/include/c++/4.6/cstdlib" 3
using ::calloc;
# 113 "/usr/include/c++/4.6/cstdlib" 3
using ::div;
# 114 "/usr/include/c++/4.6/cstdlib" 3
using ::exit;
# 115 "/usr/include/c++/4.6/cstdlib" 3
using ::free;
# 116 "/usr/include/c++/4.6/cstdlib" 3
using ::getenv;
# 117 "/usr/include/c++/4.6/cstdlib" 3
using ::labs;
# 118 "/usr/include/c++/4.6/cstdlib" 3
using ::ldiv;
# 119 "/usr/include/c++/4.6/cstdlib" 3
using ::malloc;
# 121 "/usr/include/c++/4.6/cstdlib" 3
using ::mblen;
# 122 "/usr/include/c++/4.6/cstdlib" 3
using ::mbstowcs;
# 123 "/usr/include/c++/4.6/cstdlib" 3
using ::mbtowc;
# 125 "/usr/include/c++/4.6/cstdlib" 3
using ::qsort;
# 126 "/usr/include/c++/4.6/cstdlib" 3
using ::rand;
# 127 "/usr/include/c++/4.6/cstdlib" 3
using ::realloc;
# 128 "/usr/include/c++/4.6/cstdlib" 3
using ::srand;
# 129 "/usr/include/c++/4.6/cstdlib" 3
using ::strtod;
# 130 "/usr/include/c++/4.6/cstdlib" 3
using ::strtol;
# 131 "/usr/include/c++/4.6/cstdlib" 3
using ::strtoul;
# 132 "/usr/include/c++/4.6/cstdlib" 3
using ::system;
# 134 "/usr/include/c++/4.6/cstdlib" 3
using ::wcstombs;
# 135 "/usr/include/c++/4.6/cstdlib" 3
using ::wctomb;
# 139 "/usr/include/c++/4.6/cstdlib" 3
inline long abs(long __i) { return labs(__i); }
# 142 "/usr/include/c++/4.6/cstdlib" 3
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); }
# 145 "/usr/include/c++/4.6/cstdlib" 3
}
# 158 "/usr/include/c++/4.6/cstdlib" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 163 "/usr/include/c++/4.6/cstdlib" 3
using ::lldiv_t;
# 169 "/usr/include/c++/4.6/cstdlib" 3
using ::_Exit;
# 173 "/usr/include/c++/4.6/cstdlib" 3
inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); }
# 176 "/usr/include/c++/4.6/cstdlib" 3
using ::llabs;
# 179 "/usr/include/c++/4.6/cstdlib" 3
inline lldiv_t div(long long __n, long long __d)
# 180 "/usr/include/c++/4.6/cstdlib" 3
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; }
# 182 "/usr/include/c++/4.6/cstdlib" 3
using ::lldiv;
# 193 "/usr/include/c++/4.6/cstdlib" 3
using ::atoll;
# 194 "/usr/include/c++/4.6/cstdlib" 3
using ::strtoll;
# 195 "/usr/include/c++/4.6/cstdlib" 3
using ::strtoull;
# 197 "/usr/include/c++/4.6/cstdlib" 3
using ::strtof;
# 198 "/usr/include/c++/4.6/cstdlib" 3
using ::strtold;
# 201 "/usr/include/c++/4.6/cstdlib" 3
}
# 203 "/usr/include/c++/4.6/cstdlib" 3
namespace std {
# 206 "/usr/include/c++/4.6/cstdlib" 3
using __gnu_cxx::lldiv_t;
# 208 "/usr/include/c++/4.6/cstdlib" 3
using __gnu_cxx::_Exit;
# 209 "/usr/include/c++/4.6/cstdlib" 3
using __gnu_cxx::abs;
# 211 "/usr/include/c++/4.6/cstdlib" 3
using __gnu_cxx::llabs;
# 212 "/usr/include/c++/4.6/cstdlib" 3
using __gnu_cxx::div;
# 213 "/usr/include/c++/4.6/cstdlib" 3
using __gnu_cxx::lldiv;
# 215 "/usr/include/c++/4.6/cstdlib" 3
using __gnu_cxx::atoll;
# 216 "/usr/include/c++/4.6/cstdlib" 3
using __gnu_cxx::strtof;
# 217 "/usr/include/c++/4.6/cstdlib" 3
using __gnu_cxx::strtoll;
# 218 "/usr/include/c++/4.6/cstdlib" 3
using __gnu_cxx::strtoull;
# 219 "/usr/include/c++/4.6/cstdlib" 3
using __gnu_cxx::strtold;
# 220 "/usr/include/c++/4.6/cstdlib" 3
}
# 497 "/usr/local/cuda/bin/../include/math_functions.h"
namespace __gnu_cxx {
# 499 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline long long abs(long long) __attribute__((visibility("default")));
# 500 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 502 "/usr/local/cuda/bin/../include/math_functions.h"
namespace std {
# 504 "/usr/local/cuda/bin/../include/math_functions.h"
template< class T> extern T __pow_helper(T, int);
# 505 "/usr/local/cuda/bin/../include/math_functions.h"
template< class T> extern T __cmath_power(T, unsigned);
# 506 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 508 "/usr/local/cuda/bin/../include/math_functions.h"
using std::abs;
# 509 "/usr/local/cuda/bin/../include/math_functions.h"
using std::fabs;
# 510 "/usr/local/cuda/bin/../include/math_functions.h"
using std::ceil;
# 511 "/usr/local/cuda/bin/../include/math_functions.h"
using std::floor;
# 512 "/usr/local/cuda/bin/../include/math_functions.h"
using std::sqrt;
# 513 "/usr/local/cuda/bin/../include/math_functions.h"
using std::pow;
# 514 "/usr/local/cuda/bin/../include/math_functions.h"
using std::log;
# 515 "/usr/local/cuda/bin/../include/math_functions.h"
using std::log10;
# 516 "/usr/local/cuda/bin/../include/math_functions.h"
using std::fmod;
# 517 "/usr/local/cuda/bin/../include/math_functions.h"
using std::modf;
# 518 "/usr/local/cuda/bin/../include/math_functions.h"
using std::exp;
# 519 "/usr/local/cuda/bin/../include/math_functions.h"
using std::frexp;
# 520 "/usr/local/cuda/bin/../include/math_functions.h"
using std::ldexp;
# 521 "/usr/local/cuda/bin/../include/math_functions.h"
using std::asin;
# 522 "/usr/local/cuda/bin/../include/math_functions.h"
using std::sin;
# 523 "/usr/local/cuda/bin/../include/math_functions.h"
using std::sinh;
# 524 "/usr/local/cuda/bin/../include/math_functions.h"
using std::acos;
# 525 "/usr/local/cuda/bin/../include/math_functions.h"
using std::cos;
# 526 "/usr/local/cuda/bin/../include/math_functions.h"
using std::cosh;
# 527 "/usr/local/cuda/bin/../include/math_functions.h"
using std::atan;
# 528 "/usr/local/cuda/bin/../include/math_functions.h"
using std::atan2;
# 529 "/usr/local/cuda/bin/../include/math_functions.h"
using std::tan;
# 530 "/usr/local/cuda/bin/../include/math_functions.h"
using std::tanh;
# 584 "/usr/local/cuda/bin/../include/math_functions.h"
namespace std {
# 587 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline long abs(long) __attribute__((visibility("default")));
# 588 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float abs(float) __attribute__((visibility("default")));
# 589 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline double abs(double) __attribute__((visibility("default")));
# 590 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float fabs(float) __attribute__((visibility("default")));
# 591 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float ceil(float) __attribute__((visibility("default")));
# 592 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float floor(float) __attribute__((visibility("default")));
# 593 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sqrt(float) __attribute__((visibility("default")));
# 594 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float pow(float, float) __attribute__((visibility("default")));
# 595 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float pow(float, int) __attribute__((visibility("default")));
# 596 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline double pow(double, int) __attribute__((visibility("default")));
# 597 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float log(float) __attribute__((visibility("default")));
# 598 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float log10(float) __attribute__((visibility("default")));
# 599 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float fmod(float, float) __attribute__((visibility("default")));
# 600 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float modf(float, float *) __attribute__((visibility("default")));
# 601 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float exp(float) __attribute__((visibility("default")));
# 602 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float frexp(float, int *) __attribute__((visibility("default")));
# 603 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float ldexp(float, int) __attribute__((visibility("default")));
# 604 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float asin(float) __attribute__((visibility("default")));
# 605 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sin(float) __attribute__((visibility("default")));
# 606 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sinh(float) __attribute__((visibility("default")));
# 607 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float acos(float) __attribute__((visibility("default")));
# 608 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float cos(float) __attribute__((visibility("default")));
# 609 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float cosh(float) __attribute__((visibility("default")));
# 610 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float atan(float) __attribute__((visibility("default")));
# 611 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float atan2(float, float) __attribute__((visibility("default")));
# 612 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float tan(float) __attribute__((visibility("default")));
# 613 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float tanh(float) __attribute__((visibility("default")));
# 616 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 619 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float logb(float a)
# 620 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 621 "/usr/local/cuda/bin/../include/math_functions.h"
return logbf(a);
# 622 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 624 "/usr/local/cuda/bin/../include/math_functions.h"
static inline int ilogb(float a)
# 625 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 626 "/usr/local/cuda/bin/../include/math_functions.h"
return ilogbf(a);
# 627 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 629 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float scalbn(float a, int b)
# 630 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 631 "/usr/local/cuda/bin/../include/math_functions.h"
return scalbnf(a, b);
# 632 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 634 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float scalbln(float a, long b)
# 635 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 636 "/usr/local/cuda/bin/../include/math_functions.h"
return scalblnf(a, b);
# 637 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 639 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float exp2(float a)
# 640 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 641 "/usr/local/cuda/bin/../include/math_functions.h"
return exp2f(a);
# 642 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 644 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float exp10(float a)
# 645 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 646 "/usr/local/cuda/bin/../include/math_functions.h"
return exp10f(a);
# 647 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 649 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float expm1(float a)
# 650 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 651 "/usr/local/cuda/bin/../include/math_functions.h"
return expm1f(a);
# 652 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 654 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float log2(float a)
# 655 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 656 "/usr/local/cuda/bin/../include/math_functions.h"
return log2f(a);
# 657 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 659 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float log1p(float a)
# 660 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 661 "/usr/local/cuda/bin/../include/math_functions.h"
return log1pf(a);
# 662 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 664 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rsqrt(float a)
# 665 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 666 "/usr/local/cuda/bin/../include/math_functions.h"
return rsqrtf(a);
# 667 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 669 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float acosh(float a)
# 670 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 671 "/usr/local/cuda/bin/../include/math_functions.h"
return acoshf(a);
# 672 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 674 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float asinh(float a)
# 675 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 676 "/usr/local/cuda/bin/../include/math_functions.h"
return asinhf(a);
# 677 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 679 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float atanh(float a)
# 680 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 681 "/usr/local/cuda/bin/../include/math_functions.h"
return atanhf(a);
# 682 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 684 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float hypot(float a, float b)
# 685 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 686 "/usr/local/cuda/bin/../include/math_functions.h"
return hypotf(a, b);
# 687 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 689 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float cbrt(float a)
# 690 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 691 "/usr/local/cuda/bin/../include/math_functions.h"
return cbrtf(a);
# 692 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 694 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rcbrt(float a)
# 695 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 696 "/usr/local/cuda/bin/../include/math_functions.h"
return rcbrtf(a);
# 697 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 699 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float sinpi(float a)
# 700 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 701 "/usr/local/cuda/bin/../include/math_functions.h"
return sinpif(a);
# 702 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 704 "/usr/local/cuda/bin/../include/math_functions.h"
static inline void sincos(float a, float *sptr, float *cptr)
# 705 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 706 "/usr/local/cuda/bin/../include/math_functions.h"
sincosf(a, sptr, cptr);
# 707 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 709 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erf(float a)
# 710 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 711 "/usr/local/cuda/bin/../include/math_functions.h"
return erff(a);
# 712 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 714 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfinv(float a)
# 715 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 716 "/usr/local/cuda/bin/../include/math_functions.h"
return erfinvf(a);
# 717 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 719 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfc(float a)
# 720 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 721 "/usr/local/cuda/bin/../include/math_functions.h"
return erfcf(a);
# 722 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 724 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfcinv(float a)
# 725 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 726 "/usr/local/cuda/bin/../include/math_functions.h"
return erfcinvf(a);
# 727 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 729 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float lgamma(float a)
# 730 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 731 "/usr/local/cuda/bin/../include/math_functions.h"
return lgammaf(a);
# 732 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 734 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float tgamma(float a)
# 735 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 736 "/usr/local/cuda/bin/../include/math_functions.h"
return tgammaf(a);
# 737 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 739 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float copysign(float a, float b)
# 740 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 741 "/usr/local/cuda/bin/../include/math_functions.h"
return copysignf(a, b);
# 742 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 744 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double copysign(double a, float b)
# 745 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 746 "/usr/local/cuda/bin/../include/math_functions.h"
return copysign(a, (double)b);
# 747 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 749 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float copysign(float a, double b)
# 750 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 751 "/usr/local/cuda/bin/../include/math_functions.h"
return copysignf(a, (float)b);
# 752 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 754 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float nextafter(float a, float b)
# 755 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 756 "/usr/local/cuda/bin/../include/math_functions.h"
return nextafterf(a, b);
# 757 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 759 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float remainder(float a, float b)
# 760 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 761 "/usr/local/cuda/bin/../include/math_functions.h"
return remainderf(a, b);
# 762 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 764 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float remquo(float a, float b, int *quo)
# 765 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 766 "/usr/local/cuda/bin/../include/math_functions.h"
return remquof(a, b, quo);
# 767 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 769 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float round(float a)
# 770 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 771 "/usr/local/cuda/bin/../include/math_functions.h"
return roundf(a);
# 772 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 774 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long lround(float a)
# 775 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 776 "/usr/local/cuda/bin/../include/math_functions.h"
return lroundf(a);
# 777 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 779 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long llround(float a)
# 780 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 781 "/usr/local/cuda/bin/../include/math_functions.h"
return llroundf(a);
# 782 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 784 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float trunc(float a)
# 785 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 786 "/usr/local/cuda/bin/../include/math_functions.h"
return truncf(a);
# 787 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 789 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rint(float a)
# 790 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 791 "/usr/local/cuda/bin/../include/math_functions.h"
return rintf(a);
# 792 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 794 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long lrint(float a)
# 795 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 796 "/usr/local/cuda/bin/../include/math_functions.h"
return lrintf(a);
# 797 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 799 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long llrint(float a)
# 800 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 801 "/usr/local/cuda/bin/../include/math_functions.h"
return llrintf(a);
# 802 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 804 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float nearbyint(float a)
# 805 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 806 "/usr/local/cuda/bin/../include/math_functions.h"
return nearbyintf(a);
# 807 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 809 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fdim(float a, float b)
# 810 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 811 "/usr/local/cuda/bin/../include/math_functions.h"
return fdimf(a, b);
# 812 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 814 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fma(float a, float b, float c)
# 815 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 816 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaf(a, b, c);
# 817 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 819 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fmax(float a, float b)
# 820 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 821 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaxf(a, b);
# 822 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 824 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fmin(float a, float b)
# 825 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 826 "/usr/local/cuda/bin/../include/math_functions.h"
return fminf(a, b);
# 827 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 829 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(unsigned a, unsigned b)
# 830 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 831 "/usr/local/cuda/bin/../include/math_functions.h"
return umin(a, b);
# 832 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 834 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(int a, unsigned b)
# 835 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 836 "/usr/local/cuda/bin/../include/math_functions.h"
return umin((unsigned)a, b);
# 837 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 839 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(unsigned a, int b)
# 840 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 841 "/usr/local/cuda/bin/../include/math_functions.h"
return umin(a, (unsigned)b);
# 842 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 844 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long min(long long a, long long b)
# 845 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 846 "/usr/local/cuda/bin/../include/math_functions.h"
return llmin(a, b);
# 847 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 849 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(unsigned long long a, unsigned long long b)
# 850 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 851 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmin(a, b);
# 852 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 854 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(long long a, unsigned long long b)
# 855 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 856 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmin((unsigned long long)a, b);
# 857 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 859 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(unsigned long long a, long long b)
# 860 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 861 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmin(a, (unsigned long long)b);
# 862 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 864 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float min(float a, float b)
# 865 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 866 "/usr/local/cuda/bin/../include/math_functions.h"
return fminf(a, b);
# 867 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 869 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(double a, double b)
# 870 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 871 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin(a, b);
# 872 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 874 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(float a, double b)
# 875 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 876 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin((double)a, b);
# 877 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 879 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(double a, float b)
# 880 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 881 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin(a, (double)b);
# 882 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 884 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(unsigned a, unsigned b)
# 885 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 886 "/usr/local/cuda/bin/../include/math_functions.h"
return umax(a, b);
# 887 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 889 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(int a, unsigned b)
# 890 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 891 "/usr/local/cuda/bin/../include/math_functions.h"
return umax((unsigned)a, b);
# 892 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 894 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(unsigned a, int b)
# 895 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 896 "/usr/local/cuda/bin/../include/math_functions.h"
return umax(a, (unsigned)b);
# 897 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 899 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long max(long long a, long long b)
# 900 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 901 "/usr/local/cuda/bin/../include/math_functions.h"
return llmax(a, b);
# 902 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 904 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(unsigned long long a, unsigned long long b)
# 905 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 906 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmax(a, b);
# 907 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 909 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(long long a, unsigned long long b)
# 910 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 911 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmax((unsigned long long)a, b);
# 912 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 914 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(unsigned long long a, long long b)
# 915 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 916 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmax(a, (unsigned long long)b);
# 917 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 919 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float max(float a, float b)
# 920 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 921 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaxf(a, b);
# 922 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 924 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(double a, double b)
# 925 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 926 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax(a, b);
# 927 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 929 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(float a, double b)
# 930 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 931 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax((double)a, b);
# 932 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 934 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(double a, float b)
# 935 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 936 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax(a, (double)b);
# 937 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 60 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
template< class T, int dim = 1>
# 61 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
struct surface : public surfaceReference {
# 63 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
surface()
# 64 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
{
# 65 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 66 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
}
# 68 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
surface(cudaChannelFormatDesc desc)
# 69 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
{
# 70 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = desc;
# 71 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
}
# 72 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
};
# 75 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
template< int dim>
# 76 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
struct surface< void, dim> : public surfaceReference {
# 78 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
surface()
# 79 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
{
# 80 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< void> ();
# 81 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
}
# 82 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
};
# 60 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
template< class T, int dim = 1, cudaTextureReadMode mode = cudaReadModeElementType>
# 61 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
struct texture : public textureReference {
# 63 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
texture(int norm = 0, cudaTextureFilterMode
# 64 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
fMode = cudaFilterModePoint, cudaTextureAddressMode
# 65 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
aMode = cudaAddressModeClamp)
# 66 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
{
# 67 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(normalized) = norm;
# 68 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(filterMode) = fMode;
# 69 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 70 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 71 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 72 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 73 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
}
# 75 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
texture(int norm, cudaTextureFilterMode
# 76 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
fMode, cudaTextureAddressMode
# 77 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
aMode, cudaChannelFormatDesc
# 78 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
desc)
# 79 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
{
# 80 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(normalized) = norm;
# 81 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(filterMode) = fMode;
# 82 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 83 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 84 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 85 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(channelDesc) = desc;
# 86 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
}
# 87 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
};
# 324 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mulhi(int a, int b)
# 325 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 327 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 329 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b)
# 330 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 332 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 334 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b)
# 335 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 337 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 339 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b)
# 340 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 342 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 344 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline long long mul64hi(long long a, long long b)
# 345 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 347 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 349 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b)
# 350 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 352 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 354 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b)
# 355 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 357 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 359 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b)
# 360 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 362 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 364 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float_as_int(float a)
# 365 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 367 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 369 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int_as_float(int a)
# 370 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 372 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 374 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float saturate(float a)
# 375 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 377 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 379 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mul24(int a, int b)
# 380 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 382 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 384 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b)
# 385 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 387 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 389 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void trap()
# 390 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 392 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 394 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void brkpt(int c)
# 395 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 397 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 399 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void syncthreads()
# 400 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 402 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 404 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void prof_trigger(int e)
# 405 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 422 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 424 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void threadfence(bool global = true)
# 425 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 427 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 429 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode = cudaRoundZero)
# 430 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 435 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 437 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero)
# 438 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 443 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 445 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest)
# 446 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 451 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 453 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 454 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 459 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 102 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd(int *address, int val)
# 103 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 105 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 107 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val)
# 108 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 110 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 112 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub(int *address, int val)
# 113 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 115 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 117 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val)
# 118 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 120 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 122 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch(int *address, int val)
# 123 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 125 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 127 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val)
# 128 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 130 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 132 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch(float *address, float val)
# 133 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 135 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 137 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin(int *address, int val)
# 138 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 140 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 142 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val)
# 143 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 145 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 147 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax(int *address, int val)
# 148 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 150 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 152 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val)
# 153 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 155 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 157 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val)
# 158 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 160 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 162 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val)
# 163 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 165 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 167 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd(int *address, int val)
# 168 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 170 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 172 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val)
# 173 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 175 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 177 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr(int *address, int val)
# 178 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 180 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 182 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val)
# 183 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 185 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 187 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor(int *address, int val)
# 188 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 190 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 192 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val)
# 193 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 195 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 197 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val)
# 198 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 200 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 202 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val)
# 203 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;
# 205 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 75 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val)
# 76 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 78 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 80 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val)
# 81 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 83 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 85 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val)
# 86 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 88 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 90 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool any(bool cond)
# 91 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 93 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 95 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool all(bool cond)
# 96 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;
# 98 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 170 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode)
# 171 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 176 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 178 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 179 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 184 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 186 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 187 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 192 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 194 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero)
# 195 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 200 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 202 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero)
# 203 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 208 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 210 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero)
# 211 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 216 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 218 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero)
# 219 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 224 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 226 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest)
# 227 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 232 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 234 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest)
# 235 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 240 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 242 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest)
# 243 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 245 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 247 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 248 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 250 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 252 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest)
# 253 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;
# 255 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 66 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd(float *address, float val)
# 67 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
{int volatile ___ = 1;
# 69 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
exit(___);}
# 124 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned ballot(bool pred)
# 125 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 127 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 129 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline int syncthreads_count(bool pred)
# 130 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 132 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 134 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_and(bool pred)
# 135 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 137 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 139 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_or(bool pred)
# 140 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;
# 142 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 97 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 98 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 99 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 106 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 108 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 109 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 110 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 116 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 118 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 119 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 120 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 122 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 125 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 126 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 128 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 131 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 132 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 134 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 137 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 138 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 140 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 143 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 144 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 146 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 149 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 150 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 152 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 155 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 156 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 160 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 163 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 164 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 166 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 169 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 170 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 174 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 177 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 178 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 180 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 183 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 184 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 186 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 189 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 190 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 192 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 195 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 196 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 198 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 201 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 202 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 204 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 207 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 208 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 212 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 215 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 216 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 218 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 221 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 222 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 226 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 229 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 230 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 232 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 235 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 236 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 238 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 241 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 242 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 244 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 247 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 248 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 250 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 253 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 254 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 256 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 259 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 260 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 264 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 267 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 268 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 270 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 273 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 274 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 278 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 281 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 282 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 284 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 287 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 288 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 290 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 293 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 294 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 296 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 299 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 300 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 302 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 305 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 306 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 308 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 311 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 312 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 316 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 319 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 320 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 322 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 385 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 386 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 388 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 391 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 392 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 394 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 397 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 398 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 402 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 405 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 406 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 410 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 457 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 458 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 459 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 466 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 468 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 469 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 470 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 476 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 478 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 479 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 480 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 482 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 485 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 486 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 488 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 491 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 492 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 494 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 497 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 498 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 500 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 503 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 504 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 506 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 509 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 510 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 512 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 515 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 516 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 520 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 523 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 524 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 526 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 529 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 530 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 534 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 537 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 538 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 540 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 543 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 544 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 546 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 549 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 550 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 552 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 555 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 556 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 558 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 561 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 562 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 564 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 567 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 568 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 572 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 575 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 576 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 578 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 581 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 582 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 586 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 589 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 590 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 592 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 595 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 596 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 598 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 601 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 602 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 604 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 607 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 608 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 610 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 613 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 614 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 616 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 619 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 620 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 624 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 627 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 628 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 630 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 633 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 634 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 638 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 641 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 642 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 644 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 647 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 648 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 650 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 653 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 654 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 656 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 659 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 660 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 662 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 665 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 666 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 668 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 671 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 672 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 676 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 679 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 680 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 682 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 745 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 746 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 748 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 751 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 752 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 754 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 757 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 758 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 762 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 765 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 766 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 770 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 817 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 818 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 819 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 837 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 839 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 840 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 841 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 843 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 846 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 847 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 849 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 851 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(signed char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 852 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 854 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 856 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 857 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 859 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 861 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 862 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 864 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 866 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 867 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 869 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 871 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 872 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 874 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 876 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 877 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 879 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 881 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 882 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 884 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 886 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 887 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 889 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 891 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 892 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 894 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 896 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 897 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 899 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 901 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 902 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 904 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 906 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 907 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 909 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 911 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 912 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 914 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 916 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 917 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 919 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 921 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 922 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 924 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 926 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 927 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 929 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 931 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 932 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 934 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 936 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 937 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 939 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 941 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 942 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 944 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 946 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 947 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 949 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 951 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 952 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 954 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 956 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 957 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 959 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 961 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 962 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 964 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 966 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 967 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 969 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 971 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 972 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 974 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 976 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 977 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 979 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 981 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 982 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 984 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 986 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 987 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 989 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 991 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 992 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 994 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 996 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 997 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 999 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1045 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1046 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1048 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1050 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1051 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1053 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1055 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1056 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1058 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1060 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1061 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1063 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1110 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1111 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1112 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1130 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1132 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1133 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1134 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1136 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1139 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1140 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1142 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1144 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(signed char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1145 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1147 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1149 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1150 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1152 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1154 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1155 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1157 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1159 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1160 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1162 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1164 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1165 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1167 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1169 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1170 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1172 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1174 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1175 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1177 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1179 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1180 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1182 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1184 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1185 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1187 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1189 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1190 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1192 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1194 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1195 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1197 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1199 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1200 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1202 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1204 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1205 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1207 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1209 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1210 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1212 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1214 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1215 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1217 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1219 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1220 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1222 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1224 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1225 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1227 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1229 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1230 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1232 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1234 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1235 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1237 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1239 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1240 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1242 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1244 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1245 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1247 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1249 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1250 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1252 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1254 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1255 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1257 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1259 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1260 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1262 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1264 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1265 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1267 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1269 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1270 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1272 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1274 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1275 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1277 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1279 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1280 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1282 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1284 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1285 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1287 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1289 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1290 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1292 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1338 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1339 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1341 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1343 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1344 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1346 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1348 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1349 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1351 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1353 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1354 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;
# 1356 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 61 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetchi(texture< T, 1, readMode> , int4);
# 63 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetchi(texture< T, 1, readMode> , int4);
# 65 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetchi(texture< T, 1, readMode> , int4);
# 68 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetch(texture< T, dim, readMode> , float4, int = dim);
# 70 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetch(texture< T, dim, readMode> , float4, int = dim);
# 72 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetch(texture< T, dim, readMode> , float4, int = dim);
# 80 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1Dfetch(texture< char, 1, cudaReadModeElementType> t, int x)
# 81 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 89 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 91 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1Dfetch(texture< signed char, 1, cudaReadModeElementType> t, int x)
# 92 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 96 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 98 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1Dfetch(texture< unsigned char, 1, cudaReadModeElementType> t, int x)
# 99 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 103 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 105 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1Dfetch(texture< char1, 1, cudaReadModeElementType> t, int x)
# 106 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 110 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 112 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1Dfetch(texture< uchar1, 1, cudaReadModeElementType> t, int x)
# 113 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 117 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1Dfetch(texture< char2, 1, cudaReadModeElementType> t, int x)
# 120 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 124 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 126 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1Dfetch(texture< uchar2, 1, cudaReadModeElementType> t, int x)
# 127 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 131 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 133 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1Dfetch(texture< char4, 1, cudaReadModeElementType> t, int x)
# 134 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 138 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 140 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1Dfetch(texture< uchar4, 1, cudaReadModeElementType> t, int x)
# 141 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 145 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 153 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1Dfetch(texture< short, 1, cudaReadModeElementType> t, int x)
# 154 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 158 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 160 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1Dfetch(texture< unsigned short, 1, cudaReadModeElementType> t, int x)
# 161 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 165 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 167 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1Dfetch(texture< short1, 1, cudaReadModeElementType> t, int x)
# 168 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 172 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 174 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1Dfetch(texture< ushort1, 1, cudaReadModeElementType> t, int x)
# 175 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 179 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 181 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1Dfetch(texture< short2, 1, cudaReadModeElementType> t, int x)
# 182 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 186 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 188 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1Dfetch(texture< ushort2, 1, cudaReadModeElementType> t, int x)
# 189 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 193 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 195 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1Dfetch(texture< short4, 1, cudaReadModeElementType> t, int x)
# 196 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 200 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 202 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1Dfetch(texture< ushort4, 1, cudaReadModeElementType> t, int x)
# 203 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 207 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 215 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1Dfetch(texture< int, 1, cudaReadModeElementType> t, int x)
# 216 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 220 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 222 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1Dfetch(texture< unsigned, 1, cudaReadModeElementType> t, int x)
# 223 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 227 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 229 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1Dfetch(texture< int1, 1, cudaReadModeElementType> t, int x)
# 230 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 234 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 236 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1Dfetch(texture< uint1, 1, cudaReadModeElementType> t, int x)
# 237 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 241 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 243 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1Dfetch(texture< int2, 1, cudaReadModeElementType> t, int x)
# 244 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 248 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 250 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1Dfetch(texture< uint2, 1, cudaReadModeElementType> t, int x)
# 251 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 255 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 257 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1Dfetch(texture< int4, 1, cudaReadModeElementType> t, int x)
# 258 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 262 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 264 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1Dfetch(texture< uint4, 1, cudaReadModeElementType> t, int x)
# 265 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 269 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 343 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< float, 1, cudaReadModeElementType> t, int x)
# 344 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 348 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 350 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< float1, 1, cudaReadModeElementType> t, int x)
# 351 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 355 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 357 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< float2, 1, cudaReadModeElementType> t, int x)
# 358 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 362 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 364 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< float4, 1, cudaReadModeElementType> t, int x)
# 365 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 369 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 377 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< char, 1, cudaReadModeNormalizedFloat> t, int x)
# 378 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 387 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 389 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< signed char, 1, cudaReadModeNormalizedFloat> t, int x)
# 390 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 395 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 397 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, int x)
# 398 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 403 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 405 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< char1, 1, cudaReadModeNormalizedFloat> t, int x)
# 406 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 411 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 413 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, int x)
# 414 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 419 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 421 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< char2, 1, cudaReadModeNormalizedFloat> t, int x)
# 422 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 427 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 429 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, int x)
# 430 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 435 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 437 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< char4, 1, cudaReadModeNormalizedFloat> t, int x)
# 438 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 443 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 445 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, int x)
# 446 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 451 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 459 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< short, 1, cudaReadModeNormalizedFloat> t, int x)
# 460 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 465 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 467 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, int x)
# 468 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 473 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 475 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< short1, 1, cudaReadModeNormalizedFloat> t, int x)
# 476 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 481 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 483 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, int x)
# 484 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 489 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 491 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< short2, 1, cudaReadModeNormalizedFloat> t, int x)
# 492 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 497 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 499 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, int x)
# 500 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 505 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 507 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< short4, 1, cudaReadModeNormalizedFloat> t, int x)
# 508 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 513 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 515 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, int x)
# 516 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 521 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 529 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1D(texture< char, 1, cudaReadModeElementType> t, float x)
# 530 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 538 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 540 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1D(texture< signed char, 1, cudaReadModeElementType> t, float x)
# 541 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 545 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 547 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1D(texture< unsigned char, 1, cudaReadModeElementType> t, float x)
# 548 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 552 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 554 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1D(texture< char1, 1, cudaReadModeElementType> t, float x)
# 555 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 559 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 561 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1D(texture< uchar1, 1, cudaReadModeElementType> t, float x)
# 562 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 566 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 568 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1D(texture< char2, 1, cudaReadModeElementType> t, float x)
# 569 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 573 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 575 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1D(texture< uchar2, 1, cudaReadModeElementType> t, float x)
# 576 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 580 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 582 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1D(texture< char4, 1, cudaReadModeElementType> t, float x)
# 583 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 587 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 589 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1D(texture< uchar4, 1, cudaReadModeElementType> t, float x)
# 590 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 594 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 602 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1D(texture< short, 1, cudaReadModeElementType> t, float x)
# 603 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 607 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 609 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1D(texture< unsigned short, 1, cudaReadModeElementType> t, float x)
# 610 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 614 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 616 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1D(texture< short1, 1, cudaReadModeElementType> t, float x)
# 617 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 621 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 623 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1D(texture< ushort1, 1, cudaReadModeElementType> t, float x)
# 624 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 628 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 630 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1D(texture< short2, 1, cudaReadModeElementType> t, float x)
# 631 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 635 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 637 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1D(texture< ushort2, 1, cudaReadModeElementType> t, float x)
# 638 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 642 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 644 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1D(texture< short4, 1, cudaReadModeElementType> t, float x)
# 645 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 649 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 651 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1D(texture< ushort4, 1, cudaReadModeElementType> t, float x)
# 652 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 656 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 664 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1D(texture< int, 1, cudaReadModeElementType> t, float x)
# 665 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 669 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 671 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1D(texture< unsigned, 1, cudaReadModeElementType> t, float x)
# 672 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 676 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 678 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1D(texture< int1, 1, cudaReadModeElementType> t, float x)
# 679 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 683 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 685 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1D(texture< uint1, 1, cudaReadModeElementType> t, float x)
# 686 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 690 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 692 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1D(texture< int2, 1, cudaReadModeElementType> t, float x)
# 693 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 697 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 699 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1D(texture< uint2, 1, cudaReadModeElementType> t, float x)
# 700 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 704 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 706 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1D(texture< int4, 1, cudaReadModeElementType> t, float x)
# 707 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 711 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 713 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1D(texture< uint4, 1, cudaReadModeElementType> t, float x)
# 714 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 718 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 798 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< float, 1, cudaReadModeElementType> t, float x)
# 799 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 803 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 805 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< float1, 1, cudaReadModeElementType> t, float x)
# 806 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 810 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 812 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< float2, 1, cudaReadModeElementType> t, float x)
# 813 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 817 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 819 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< float4, 1, cudaReadModeElementType> t, float x)
# 820 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 824 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 832 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< char, 1, cudaReadModeNormalizedFloat> t, float x)
# 833 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 842 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 844 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< signed char, 1, cudaReadModeNormalizedFloat> t, float x)
# 845 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 850 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 852 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, float x)
# 853 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 858 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 860 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< char1, 1, cudaReadModeNormalizedFloat> t, float x)
# 861 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 866 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 868 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, float x)
# 869 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 874 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 876 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< char2, 1, cudaReadModeNormalizedFloat> t, float x)
# 877 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 882 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 884 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, float x)
# 885 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 890 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 892 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< char4, 1, cudaReadModeNormalizedFloat> t, float x)
# 893 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 898 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 900 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, float x)
# 901 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 906 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 914 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< short, 1, cudaReadModeNormalizedFloat> t, float x)
# 915 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 920 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 922 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, float x)
# 923 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 928 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 930 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< short1, 1, cudaReadModeNormalizedFloat> t, float x)
# 931 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 936 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 938 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, float x)
# 939 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 944 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 946 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< short2, 1, cudaReadModeNormalizedFloat> t, float x)
# 947 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 952 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 954 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, float x)
# 955 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 960 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 962 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< short4, 1, cudaReadModeNormalizedFloat> t, float x)
# 963 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 968 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 970 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, float x)
# 971 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 976 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 984 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex2D(texture< char, 2, cudaReadModeElementType> t, float x, float y)
# 985 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 993 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 995 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex2D(texture< signed char, 2, cudaReadModeElementType> t, float x, float y)
# 996 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1000 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1002 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex2D(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y)
# 1003 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1007 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1009 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex2D(texture< char1, 2, cudaReadModeElementType> t, float x, float y)
# 1010 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1014 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1016 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex2D(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y)
# 1017 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1021 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1023 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex2D(texture< char2, 2, cudaReadModeElementType> t, float x, float y)
# 1024 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1028 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1030 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex2D(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y)
# 1031 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1035 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1037 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2D(texture< char4, 2, cudaReadModeElementType> t, float x, float y)
# 1038 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1042 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1044 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2D(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y)
# 1045 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1049 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1057 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex2D(texture< short, 2, cudaReadModeElementType> t, float x, float y)
# 1058 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1062 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1064 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex2D(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y)
# 1065 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1069 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1071 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex2D(texture< short1, 2, cudaReadModeElementType> t, float x, float y)
# 1072 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1076 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1078 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex2D(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y)
# 1079 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1083 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1085 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex2D(texture< short2, 2, cudaReadModeElementType> t, float x, float y)
# 1086 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1090 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1092 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex2D(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y)
# 1093 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1097 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1099 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2D(texture< short4, 2, cudaReadModeElementType> t, float x, float y)
# 1100 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1104 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1106 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2D(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y)
# 1107 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1111 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex2D(texture< int, 2, cudaReadModeElementType> t, float x, float y)
# 1120 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1124 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1126 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex2D(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y)
# 1127 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1131 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1133 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex2D(texture< int1, 2, cudaReadModeElementType> t, float x, float y)
# 1134 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1138 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1140 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex2D(texture< uint1, 2, cudaReadModeElementType> t, float x, float y)
# 1141 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1145 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1147 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex2D(texture< int2, 2, cudaReadModeElementType> t, float x, float y)
# 1148 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1152 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1154 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex2D(texture< uint2, 2, cudaReadModeElementType> t, float x, float y)
# 1155 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1159 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1161 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2D(texture< int4, 2, cudaReadModeElementType> t, float x, float y)
# 1162 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1166 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1168 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2D(texture< uint4, 2, cudaReadModeElementType> t, float x, float y)
# 1169 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1173 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1247 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< float, 2, cudaReadModeElementType> t, float x, float y)
# 1248 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1252 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1254 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< float1, 2, cudaReadModeElementType> t, float x, float y)
# 1255 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1259 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1261 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< float2, 2, cudaReadModeElementType> t, float x, float y)
# 1262 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1266 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1268 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< float4, 2, cudaReadModeElementType> t, float x, float y)
# 1269 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1273 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1281 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1282 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1291 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1293 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< signed char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1294 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1299 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1301 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1302 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1307 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1309 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< char1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1310 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1315 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1317 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< uchar1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1318 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1323 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1325 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< char2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1326 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1331 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1333 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< uchar2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1334 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1339 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1341 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< char4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1342 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1347 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1349 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< uchar4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1350 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1355 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1363 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1364 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1369 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1371 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1372 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1377 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1379 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< short1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1380 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1385 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1387 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< ushort1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1388 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1393 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1395 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< short2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1396 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1401 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1403 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< ushort2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1404 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1409 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1411 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< short4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1412 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1417 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1419 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< ushort4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1420 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1425 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1433 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex3D(texture< char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1434 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1442 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1444 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex3D(texture< signed char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1445 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1449 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1451 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex3D(texture< unsigned char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1452 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1456 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1458 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex3D(texture< char1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1459 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1463 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1465 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex3D(texture< uchar1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1466 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1470 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1472 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex3D(texture< char2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1473 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1477 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1479 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex3D(texture< uchar2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1480 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1484 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1486 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex3D(texture< char4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1487 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1491 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1493 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex3D(texture< uchar4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1494 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1498 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1506 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex3D(texture< short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1507 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1511 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1513 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex3D(texture< unsigned short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1514 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1518 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1520 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex3D(texture< short1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1521 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1525 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1527 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex3D(texture< ushort1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1528 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1532 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1534 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex3D(texture< short2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1535 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1539 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1541 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex3D(texture< ushort2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1542 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1546 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1548 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex3D(texture< short4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1549 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1553 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1555 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex3D(texture< ushort4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1556 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1560 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1568 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex3D(texture< int, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1569 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1573 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1575 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex3D(texture< unsigned, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1576 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1580 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1582 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex3D(texture< int1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1583 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1587 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1589 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex3D(texture< uint1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1590 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1594 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1596 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex3D(texture< int2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1597 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1601 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1603 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex3D(texture< uint2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1604 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1608 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1610 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex3D(texture< int4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1611 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1615 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1617 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex3D(texture< uint4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1618 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1622 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1696 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< float, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1697 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1701 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1703 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< float1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1704 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1708 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1710 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< float2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1711 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1715 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1717 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< float4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 1718 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1722 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1730 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1731 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1740 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1742 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< signed char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1743 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1748 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1750 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1751 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1756 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1758 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< char1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1759 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1764 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1766 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< uchar1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1767 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1772 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1774 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< char2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1775 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1780 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1782 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< uchar2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1783 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1788 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1790 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< char4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1791 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1796 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1798 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< uchar4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1799 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1804 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1812 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1813 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1818 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1820 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1821 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1826 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1828 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< short1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1829 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1834 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1836 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< ushort1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1837 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1842 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1844 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< short2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1845 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1850 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1852 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< ushort2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1853 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1858 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1860 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< short4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1861 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1866 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1868 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< ushort4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 1869 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1874 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1930 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern int4 __itex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1932 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern uint4 __utex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1934 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern float4 __ftex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp);
# 1954 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1955 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1957 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1959 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< signed char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1960 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1962 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1964 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1965 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1967 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1969 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1970 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1972 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1974 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1975 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1977 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1979 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1980 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1982 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1984 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1985 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1987 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1989 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1990 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1992 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1994 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 1995 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 1997 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1999 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2000 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2002 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2004 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2005 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2007 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2009 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2010 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2012 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2014 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2015 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2017 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2019 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2020 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2022 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2024 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2025 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2027 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2029 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2030 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2032 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2034 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2035 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2037 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2039 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2040 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2042 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2044 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2045 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2047 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2049 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2050 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2052 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2054 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2055 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2057 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2059 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2060 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2062 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2064 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2065 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2067 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2069 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2070 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2072 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2074 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2075 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2077 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2079 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2080 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2082 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2084 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2085 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2087 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2089 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2090 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2092 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2094 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2095 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2097 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2099 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2100 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2102 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2104 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2105 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2107 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2109 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2110 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2112 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2114 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2115 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2117 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2120 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2122 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2124 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2125 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2127 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2129 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 2130 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;
# 2132 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 53 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const uint3 threadIdx; }
# 55 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const uint3 blockIdx; }
# 57 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const dim3 blockDim; }
# 59 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const dim3 gridDim; }
# 61 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const int warpSize; }
# 106 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 107 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaSetupArgument(T
# 108 "/usr/local/cuda/bin/../include/cuda_runtime.h"
arg, size_t
# 109 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset)
# 111 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 112 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset);
# 113 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 145 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 146 "/usr/local/cuda/bin/../include/cuda_runtime.h"
event, unsigned
# 147 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 149 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 150 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaEventCreateWithFlags(event, 0);
# 151 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 208 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMallocHost(void **
# 209 "/usr/local/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 210 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 211 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 213 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 214 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaHostAlloc(ptr, size, flags);
# 215 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 217 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 218 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaHostAlloc(T **
# 219 "/usr/local/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 220 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 221 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 223 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 224 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaHostAlloc((void **)((void *)ptr), size, flags);
# 225 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 227 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 228 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaHostGetDevicePointer(T **
# 229 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pDevice, void *
# 230 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pHost, unsigned
# 231 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 233 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 234 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags);
# 235 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 237 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 238 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMalloc(T **
# 239 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 240 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size)
# 242 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 243 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMalloc((void **)((void *)devPtr), size);
# 244 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 246 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 247 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMallocHost(T **
# 248 "/usr/local/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 249 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 250 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags = (0))
# 252 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 253 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMallocHost((void **)((void *)ptr), size, flags);
# 254 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 256 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 257 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMallocPitch(T **
# 258 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t *
# 259 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pitch, size_t
# 260 "/usr/local/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 261 "/usr/local/cuda/bin/../include/cuda_runtime.h"
height)
# 263 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 264 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMallocPitch((void **)((void *)devPtr), pitch, width, height);
# 265 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 275 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbol(char *
# 276 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 277 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 278 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 279 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 280 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 282 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 283 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind);
# 284 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 286 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 287 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyToSymbol(const T &
# 288 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 289 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 290 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 291 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 292 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 294 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 295 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind);
# 296 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 298 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbolAsync(char *
# 299 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 300 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 301 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 302 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 303 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 304 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 306 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 307 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream);
# 308 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 310 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 311 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyToSymbolAsync(const T &
# 312 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 313 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 314 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 315 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 316 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 317 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 319 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 320 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream);
# 321 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 329 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbol(void *
# 330 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, char *
# 331 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 332 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 333 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 334 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 336 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 337 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind);
# 338 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 340 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 341 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyFromSymbol(void *
# 342 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, const T &
# 343 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 344 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 345 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 346 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 348 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 349 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind);
# 350 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 352 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
# 353 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, char *
# 354 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 355 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 356 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 357 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 358 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 360 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 361 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream);
# 362 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 364 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 365 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyFromSymbolAsync(void *
# 366 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, const T &
# 367 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 368 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 369 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 370 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 371 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 373 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 374 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream);
# 375 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 377 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolAddress(void **
# 378 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, char *
# 379 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 381 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 382 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)symbol);
# 383 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 410 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 411 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetSymbolAddress(void **
# 412 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const T &
# 413 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 415 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 416 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol));
# 417 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 425 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolSize(size_t *
# 426 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, char *
# 427 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 429 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 430 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)symbol);
# 431 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 458 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 459 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetSymbolSize(size_t *
# 460 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, const T &
# 461 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 463 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 464 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)(&symbol));
# 465 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 507 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 508 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 509 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 510 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 511 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 512 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc, size_t
# 513 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 515 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 516 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture(offset, &tex, devPtr, &desc, size);
# 517 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 552 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 553 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 554 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 555 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 556 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 557 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 559 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 560 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size);
# 561 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 608 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 609 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 610 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 611 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 612 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 613 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc, size_t
# 614 "/usr/local/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 615 "/usr/local/cuda/bin/../include/cuda_runtime.h"
height, size_t
# 616 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pitch)
# 618 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 619 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch);
# 620 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 666 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 667 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 668 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 669 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 670 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 671 "/usr/local/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 672 "/usr/local/cuda/bin/../include/cuda_runtime.h"
height, size_t
# 673 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pitch)
# 675 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 676 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &(tex.texture< T, dim, readMode> ::channelDesc), width, height, pitch);
# 677 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 708 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 709 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 710 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const cudaArray *
# 711 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 712 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc)
# 714 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 715 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTextureToArray(&tex, array, &desc);
# 716 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 746 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 747 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 748 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const cudaArray *
# 749 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array)
# 751 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 752 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 753 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 755 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err;
# 756 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 785 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 786 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaUnbindTexture(const texture< T, dim, readMode> &
# 787 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex)
# 789 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 790 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaUnbindTexture(&tex);
# 791 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 825 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 826 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetTextureAlignmentOffset(size_t *
# 827 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 828 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex)
# 830 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 831 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetTextureAlignmentOffset(offset, &tex);
# 832 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 886 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 887 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaFuncSetCacheConfig(T *
# 888 "/usr/local/cuda/bin/../include/cuda_runtime.h"
func, cudaFuncCache
# 889 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cacheConfig)
# 891 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 892 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaFuncSetCacheConfig((const char *)func, cacheConfig);
# 893 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 930 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 931 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaLaunch(T *
# 932 "/usr/local/cuda/bin/../include/cuda_runtime.h"
entry)
# 934 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 935 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaLaunch((const char *)entry);
# 936 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 970 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 971 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaFuncGetAttributes(cudaFuncAttributes *
# 972 "/usr/local/cuda/bin/../include/cuda_runtime.h"
attr, T *
# 973 "/usr/local/cuda/bin/../include/cuda_runtime.h"
entry)
# 975 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 976 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaFuncGetAttributes(attr, (const char *)entry);
# 977 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 999 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1000 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1001 "/usr/local/cuda/bin/../include/cuda_runtime.h"
surf, const cudaArray *
# 1002 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 1003 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc)
# 1005 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 1006 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindSurfaceToArray(&surf, array, &desc);
# 1007 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 1028 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1029 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1030 "/usr/local/cuda/bin/../include/cuda_runtime.h"
surf, const cudaArray *
# 1031 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array)
# 1033 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 1034 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 1035 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 1037 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err;
# 1038 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 55 "support/common.h"
typedef
# 51 "support/common.h"
struct {
# 52 "support/common.h"
double x;
# 53 "support/common.h"
double y;
# 54 "support/common.h"
double z;
# 55 "support/common.h"
} XYZ;
# 71 "support/partitioner.h"
typedef
# 49 "support/partitioner.h"
struct Partitioner {
# 51 "support/partitioner.h"
int n_tasks;
# 52 "support/partitioner.h"
int cut;
# 53 "support/partitioner.h"
int current;
# 62 "support/partitioner.h"
int strategy;
# 64 "support/partitioner.h"
int *worklist;
# 65 "support/partitioner.h"
int *tmp;
# 71 "support/partitioner.h"
} Partitioner;
# 82 "support/partitioner.h"
__attribute__((unused)) inline Partitioner partitioner_create(int n_tasks, float alpha, int *
# 88 "support/partitioner.h"
worklist, int *
# 89 "support/partitioner.h"
tmp)
# 94 "support/partitioner.h"
{int volatile ___ = 1;
# 116 "support/partitioner.h"
exit(___);}
# 136 "support/partitioner.h"
__attribute__((unused)) inline int gpu_first(Partitioner *p) {int volatile ___ = 1;
# 150 "support/partitioner.h"
exit(___);}
# 171 "support/partitioner.h"
__attribute__((unused)) inline bool gpu_more(const Partitioner *p) {int volatile ___ = 1;
# 173 "support/partitioner.h"
exit(___);}
# 195 "support/partitioner.h"
__attribute__((unused)) inline int gpu_next(Partitioner *p) {int volatile ___ = 1;
# 209 "support/partitioner.h"
exit(___);}
# 42 "kernel.cu"
__attribute__((unused)) double BezierBlendGPU(int k, double mu, int n) {int volatile ___ = 1;
# 65 "kernel.cu"
exit(___);}
# 68 "kernel.cu"
void Bezier_surface(int n_tasks, float alpha, int in_size_i, int in_size_j, int out_size_i, int
# 69 "kernel.cu"
out_size_j, XYZ *in, XYZ *outp, int *
# 71 "kernel.cu"
worklist) ;
# 124 "kernel.cu"
cudaError_t call_Bezier_surface(int blocks, int threads, int n_tasks, float alpha, int
# 125 "kernel.cu"
in_size_i, int in_size_j, int out_size_i, int out_size_j, int
# 126 "kernel.cu"
l_mem_size, XYZ *d_in, XYZ *d_out, int *
# 128 "kernel.cu"
worklist)
# 130 "kernel.cu"
{
# 131 "kernel.cu"
dim3 dimGrid(blocks, 1);
# 132 "kernel.cu"
dim3 dimBlock(threads, threads);
# 133 "kernel.cu"
cudaConfigureCall(dimGrid, dimBlock, l_mem_size) ? ((void)0) : Bezier_surface(n_tasks, alpha, in_size_i, in_size_j, out_size_i, out_size_j, d_in, d_out, worklist);
# 139 "kernel.cu"
cudaError_t err = cudaGetLastError();
# 140 "kernel.cu"
return err;
# 141 "kernel.cu"
}
# 1 "kernel.cudafe1.stub.c"
# 1 "kernel.cudafe1.stub.c" 1 3
# 1 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 1 3
# 91 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 3
extern "C" {

extern void** __cudaRegisterFatBinary(
  void *fatCubin
);

extern void __cudaUnregisterFatBinary(
  void **fatCubinHandle
);

extern void __cudaRegisterVar(
        void **fatCubinHandle,
        char *hostVar,
        char *deviceAddress,
  const char *deviceName,
        int ext,
        int size,
        int constant,
        int global
);

extern void __cudaRegisterTexture(
        void **fatCubinHandle,
  const struct textureReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int norm,
        int ext
);

extern void __cudaRegisterSurface(
        void **fatCubinHandle,
  const struct surfaceReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int ext
);

extern void __cudaRegisterFunction(
        void **fatCubinHandle,
  const char *hostFun,
        char *deviceFun,
  const char *deviceName,
        int thread_limit,
        uint3 *tid,
        uint3 *bid,
        dim3 *bDim,
        dim3 *gDim,
        int *wSize
);



extern int atexit(void(*)(void)) throw();







}

static void **__cudaFatCubinHandle;

static void __cudaUnregisterBinaryUtil(void)
{
  __cudaUnregisterFatBinary(__cudaFatCubinHandle);
}
# 171 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 3
#pragma pack()
# 2 "kernel.cudafe1.stub.c" 2 3
# 1 "kernel.fatbin.c" 1 3
# 1 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 1 3
# 83 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 3
extern "C" {
# 97 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 3
typedef struct {
    char* gpuProfileName;
    char* cubin;
} __cudaFatCubinEntry;
# 113 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 3
typedef struct {
    char* gpuProfileName;
    char* ptx;
} __cudaFatPtxEntry;
# 125 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 3
typedef struct __cudaFatDebugEntryRec {
    char* gpuProfileName;
    char* debug;
    struct __cudaFatDebugEntryRec *next;
    unsigned int size;
} __cudaFatDebugEntry;

typedef struct __cudaFatElfEntryRec {
    char* gpuProfileName;
    char* elf;
    struct __cudaFatElfEntryRec *next;
    unsigned int size;
} __cudaFatElfEntry;

typedef enum {
      __cudaFatDontSearchFlag = (1 << 0),
      __cudaFatDontCacheFlag = (1 << 1),
      __cudaFatSassDebugFlag = (1 << 2)
} __cudaFatCudaBinaryFlag;
# 152 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 3
typedef struct {
    char* name;
} __cudaFatSymbol;
# 166 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 3
typedef struct __cudaFatCudaBinaryRec {
    unsigned long magic;
    unsigned long version;
    unsigned long gpuInfoVersion;
    char* key;
    char* ident;
    char* usageMode;
    __cudaFatPtxEntry *ptx;
    __cudaFatCubinEntry *cubin;
    __cudaFatDebugEntry *debug;
    void* debugInfo;
    unsigned int flags;
    __cudaFatSymbol *exported;
    __cudaFatSymbol *imported;
    struct __cudaFatCudaBinaryRec *dependends;
    unsigned int characteristic;
    __cudaFatElfEntry *elf;
} __cudaFatCudaBinary;
# 203 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 3
    typedef enum {
        __cudaFatAvoidPTX,
        __cudaFatPreferBestCode,
        __cudaFatForcePTX
    } __cudaFatCompilationPolicy;
# 227 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 3
void fatGetCubinForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *cubin, char* *dbgInfoFile );
# 240 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 3
unsigned char fatCheckJitForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *ptx );
# 250 "/usr/local/cuda/bin/../include/__cudaFatFormat.h" 3
void fatFreeCubin( char* cubin, char* dbgInfoFile );





void __cudaFatFreePTX( char* ptx );


}
# 2 "kernel.fatbin.c" 2 3

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$sm_20$:\n"
".quad 0x33010102464c457f,0x0000000000000004,0x0000000100be0002,0x0000000000000000\n"
".quad 0x0000000000003d28,0x0000000000000040,0x0038004000140114,0x0001000900400002\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000300000001,0x0000000000000000,0x0000000000000000,0x0000000000000280\n"
".quad 0x00000000000000f7,0x0000000000000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000030000000b,0x0000000000000000,0x0000000000000000,0x0000000000000377\n"
".quad 0x0000000000000082,0x0000000000000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000200000013,0x0000000000000000,0x0000000000000000,0x00000000000003f9\n"
".quad 0x0000000000000180,0x0000000b00000002,0x0000000000000001,0x0000000000000018\n"
".quad 0x0000000100000036,0x0000000000100006,0x0000000000000000,0x0000000000000579\n"
".quad 0x00000000000035f0,0x3f00000600000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000000c6,0x0000000000000002,0x0000000000000000,0x0000000000003b69\n"
".quad 0x0000000000000050,0x0000000400000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000094,0x0000000000000002,0x0000000000000000,0x0000000000003bb9\n"
".quad 0x0000000000000020,0x0000000400000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000010000005f,0x0000000000000002,0x0000000000000000,0x0000000000003bd9\n"
".quad 0x00000000000000d4,0x0000000400000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x000000010000008b,0x0000000000000002,0x0000000000000000,0x0000000000003cad\n"
".quad 0x0000000000000078,0x0000000000000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x7472747368732e00,0x747274732e006261,0x746d79732e006261,0x672e766e2e006261\n"
".quad 0x6e692e6c61626f6c,0x672e766e2e007469,0x742e006c61626f6c,0x34315a5f2e747865\n"
".quad 0x735f7265697a6542,0x6669656361667275,0x5958335069696969,0x2e0069505f30535a\n"
".quad 0x2e6f666e692e766e,0x697a654234315a5f,0x61667275735f7265,0x6969696966696563\n"
".quad 0x5f30535a59583350,0x692e766e2e006950,0x2e766e2e006f666e,0x746e6174736e6f63\n"
".quad 0x4234315a5f2e3631,0x75735f7265697a65,0x6966696563616672,0x5a59583350696969\n"
".quad 0x6e2e0069505f3053,0x6174736e6f632e76,0x34315a5f2e30746e,0x735f7265697a6542\n"
".quad 0x6669656361667275,0x5958335069696969,0x000069505f30535a,0x697a654234315a5f\n"
".quad 0x61667275735f7265,0x6969696966696563,0x5f30535a59583350,0x6475635f5f006950\n"
".quad 0x645f30326d735f61,0x5f003436665f7669,0x6d735f616475635f,0x725f7063725f3032\n"
".quad 0x5f5f003233665f6e,0x326d735f61647563,0x7063726c62645f30,0x776f6c735f6e725f\n"
".quad 0x635f5f0068746170,0x30326d735f616475,0x3436665f7063725f,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0100030000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0200030000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0300030000000000,0x0000000000000000,0x0000000000000000,0x0000030000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000030000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0400030000000000,0x0000000000000000,0x000000000035f000\n"
".quad 0x0700030000000000,0x0000000000000000,0x0000000000000000,0x0800030000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0600030000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0500030000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0410120000000100,0x0000000000000000,0x00000000002b6000,0x0400120000002400\n"
".quad 0x00000000002b6000,0x0000000000045000,0x0400120000003800,0x00000000002fb000\n"
".quad 0x0000000000023000,0x0400120000004f00,0x000000000031e000,0x0000000000034800\n"
".quad 0x0400120000006e00,0x0000000000352800,0x000000000000c800,0x00440400005de400\n"
".quad 0x00400091309c0428,0x0e0000fc21dc0110,0x000001600021e71b,0x8ecffc0021dc0140\n"
".quad 0x000001200021e719,0x00400081201e0440,0x00000004009de218,0x0e00001cf3dc0418\n"
".quad 0x00400090001c000c,0x004000a02d5c0358,0x004000b02c5c0348,0x06000001201c8448\n"
".quad 0x000000d7109ca314,0x000000c0001de750,0x00000004001de240,0x0e00001c73dc0418\n"
".quad 0x004000a00d5c030c,0x004000b00c5c0348,0x000000d7109ca348,0x00c000602e9ca350\n"
".quad 0x000000880f1c0450,0x000000840f5c042c,0x000003000000072c,0x7a400023c0dc0360\n"
".quad 0x8e00000c21dc2320,0x000002800001e719,0x00c0006031dca340,0x00400030011de450\n"
".quad 0x00c00060315ce328,0x014000e0721c0350,0x00400020411c0348,0x004000f0525c4350\n"
".quad 0x00c00060419c4348,0x00c00060415c0350,0x00000000839ca550,0x00000020831ca584\n"
".quad 0x00000040829ca584,0x0000001030dc0384,0x01000014821c0348,0x0e00000c21dc2348\n"
".quad 0x00000018925c431a,0x00000000739ca548,0x00000020731ca5c9,0x00000040729ca5c9\n"
".quad 0x0000001471dc03c9,0x03fffe800001e748,0x7e0000fc1fdc1340,0xee0000ffffdc0420\n"
".quad 0x0e00009c91dc0450,0x0e00001c0edc040c,0x000001600021e708,0x0e0000ffc1dc0340\n"
".quad 0x000000ffd1dc0319,0x000000a000a1e719,0x000000040001e240,0x004001200081e418\n"
".quad 0x0040013000c1e428,0x7e00000020020528,0x00000003a000855c,0xee0000ffffdc04c9\n"
".quad 0x00000003ad9c8550,0x00000040001de7c1,0x00000094009c0440,0x000000080d9c032c\n"
".quad 0x0e40008361dc2348,0x000000000001e71b,0x04400021201c0480,0x004000d000dde418\n"
".quad 0x8e400023f3dc0328,0x00000010001c001a,0x00fffffc3f9c03c8,0x3ffffff8001c0248\n"
".quad 0x86000001201c0408,0x00400020009c0314,0x00000009209f8450,0x00000008001c431c\n"
".quad 0x000000f8009c4320,0x7c400020201e0350,0x0e40002001dc0320,0x004000200001031b\n"
".quad 0x00c0000420800348,0x0e40002001dc0348,0x00400023f01dc31b,0x00c0000420800368\n"
".quad 0x12000008001c0448,0x00c000040ddc0320,0x000000dd20dec448,0x000000dd215ec41c\n"
".quad 0x000000d9211ec41c,0x0400000d201c041c,0x04000015209c0418,0x000000d9221ec418\n"
".quad 0x00000010001c001c,0x0e0000ff65dc23c8,0x00000010209c001b,0x3ffffff8001c02c8\n"
".quad 0x00009f0000000708,0x3ffffff8209c0260,0x86000001201c0408,0x86000009219c0414\n"
".quad 0x00000000309c0314,0x0000001851dc0350,0x00000009209f8450,0x0000001d21df841c\n"
".quad 0x00000008001c431c,0x0c00001c609c4320,0x00000010001c4320,0x000000df619c8350\n"
".quad 0x00000020209c4368,0x08000000301e0350,0x000000dff1ddc320,0x10000008511e0368\n"
".quad 0x8e00000031dc0320,0x8e00001053dc0319,0x0000000c00010319,0x0000001441050348\n"
".quad 0x8e00000031dc0348,0x00c0000420840319,0x0e00001443dc0348,0x0000000c0001031b\n"
".quad 0x0e0000fc61dc2348,0x00c000042084031b,0x00000001202b8448,0x000000dff0ddc31c\n"
".quad 0x0000000920a38468,0x6e000000711c231c,0x6e000008301c2331,0x7a4000204e1c0331\n"
".quad 0x784000300e5c0320,0x8e4000d381dc2320,0x804000c391dc2318,0x000000000021f418\n"
".quad 0x0e4000a3f1dc2340,0x000098a00001e71a,0x000000e1311e0440,0x000000f9319e0418\n"
".quad 0x00009c4001000718,0x004000c0001de450,0x000000e5319e0428,0x00000010009de418\n"
".quad 0x00fffffc001c0328,0x0000001400dde448,0x0000001c015de428,0x00000001321e0428\n"
".quad 0x00000018011de418,0x0000002401dde428,0x00000020019de428,0x00009ae001000728\n"
".quad 0x000000100c9de450,0x000000140cdde428,0x000000fc0d1de428,0x000000fc069de428\n"
".quad 0x000000fc06dde428,0x000000fc071de428,0x000000fc075de428,0x000000fc079de428\n"
".quad 0x000000fc07dde428,0x004000a3461e0328,0x8e4000a3f1dc2348,0x004000a0041de418\n"
".quad 0x000000d0045de428,0x00000060049de428,0x000003400021e728,0x000000fc051de440\n"
".quad 0xffc00000055de228,0x00000041311e0418,0x8ec0000511dc2318,0x00fffffd041c0319\n"
".quad 0x00000050451c0148,0x000000e00001e750,0x00000045319e0440,0x00000054015de418\n"
".quad 0x00000050011de428,0x000097a001000728,0x00000010051de450,0x00000014055de428\n"
".quad 0x00fffffd145c0328,0x8ec0000521dc2348,0x000000e00001e719,0x00000049319e0440\n"
".quad 0x00000054015de418,0x00000050011de428,0x0000968001000728,0x00000010051de450\n"
".quad 0x00000014055de428,0x00fffffd249c0328,0x8e0000fd01dc2348,0x03fffd200001e71a\n"
".quad 0x00000040001de740,0x000000fc051de440,0xffc00000055de228,0x8e0000ff41dc2318\n"
".quad 0x000022800001e719,0x0ecffc0321dc0140,0x000000d1341e0419,0x0000220000000718\n"
".quad 0x200000fd01dc0160,0x000000400021e719,0x000000fc019de440,0xffc0000001ddf228\n"
".quad 0x8edffc0321dc8118,0x000000c9b11c4419,0x000000400021e710,0x8edffc0101dc8140\n"
".quad 0x000000200001e719,0x000000c9019c1140,0x0edffc0321dc0148,0x000000400021e719\n"
".quad 0x220000fff19c2340,0xa2400007f1dc3333,0x0edffc0101dc8130,0x000001e00021e719\n"
".quad 0x0eeffc0321dc0140,0x000000400021e719,0x000000fc019de440,0xffc0000001ddf228\n"
".quad 0x0ecffc0321dc8118,0xffc00000001de21a,0x8e0000fd03dc0119,0x000000fff19c0418\n"
".quad 0x000000fc01dc0420,0x000000000025f420,0x0000001c015de440,0x00000018011de428\n"
".quad 0x0000b86001000728,0x00000010019de450,0x0000001401ddf428,0x0e0000ff21dc0128\n"
".quad 0x000001c00021e719,0x00cff801011c0140,0x8e0000fd03dc0150,0x06000011b11c8418\n"
".quad 0x00000010411c0110,0x00000011011d0148,0x0ecffc0041dc8148,0x000000ff219c0419\n"
".quad 0x000000ff31dc0420,0x000000000025f420,0x0000001c015de440,0x00000018011de428\n"
".quad 0x0000b66001000728,0x00000010019de450,0x0000001401ddf428,0x0efffc0321dc0128\n"
".quad 0x000002000021e719,0x8e0000fd01dc0140,0x000000a00021e718,0x000000cc015de440\n"
".quad 0x000000c8011de428,0x0000b54001000728,0x00000011b19d0450,0x00000020001de710\n"
".quad 0x000000c9b19d0440,0x00cff801011c0110,0x06000011b11c8450,0x00000010411c0110\n"
".quad 0x00000011011d0148,0x0ecffc0041dc8148,0x000000000021f419,0x000000fc619c8340\n"
".quad 0x0000000071dc9268,0x8e0000ff21dc013a,0x0e00001c0b1c0418,0x000000800021e708\n"
".quad 0x8e00004101dc0140,0x000000400021e71e,0x000000fc019de440,0xffe0000001ddf228\n"
".quad 0x00c00050501c231b,0x00c01ffc001c0358,0x8e0000fc01dc2368,0x000000a00081e71a\n"
".quad 0x000000c9b1204440,0x00d0d40041200110,0x00c0005050202350,0x00c01ffc00200358\n"
".quad 0x00ffff2800200368,0x003ffffc515c0248,0x00fff004065c033a,0xffc00000515c4248\n"
".quad 0x8e40001451dc0338,0xffc0000051600219,0x00c000059660030b,0x00cffc00459c0148\n"
".quad 0x00effc00449c0148,0x00000059a11c0448,0x00009ac001000710,0x00000011311c0450\n"
".quad 0x00000000019de210,0xffc0000001dde218,0xf4b2bf88021de218,0xfac3d7fc025de219\n"
".quad 0x0c000011619e0118,0x06b4ed68031de220,0xfb43d748035de219,0x0c000018619c0118\n"
".quad 0xd52228fc039de220,0xfbcec82803dde219,0x08000010611c0118,0x666677ec059de220\n"
".quad 0xfe26666405dde21a,0x00000011219c0118,0x0000134000000750,0x00000018619c0160\n"
".quad 0x00000018629c0148,0x18000028821c0150,0x93ebb354031de220,0xfc5d1734035de21b\n"
".quad 0x1c000028821c0118,0x96295e2c039de220,0xfcf1c71c03dde218,0x18000028821c0118\n"
".quad 0x490ae440031de220,0xfd892490035de21a,0x1c000028821c0118,0x55555554039de220\n"
".quad 0xfed5555403dde219,0x18000028821c0118,0x2c000028831c0120,0x02e79ec0059de220\n"
".quad 0xf11a932c05dde218,0x1c000030a21c011a,0x00000020e39d0120,0x1c000030a29c0148\n"
".quad 0x00000019231d0120,0x00000058a29c0148,0x00000030c39c0148,0x00000028831c0148\n"
".quad 0x1c000048639e0148,0x00000030849d0120,0x00000030621c0148,0x00000038411c0150\n"
".quad 0x00000048a29c0150,0x10000018c39d0148,0xc9e3b398049de220,0xf54f79a804dde21b\n"
".quad 0x1c000010a39c0118,0x1c000010c31c0120,0x18000018a31c0120,0x00000030829c0120\n"
".quad 0x00000028839d0148,0x00000028621c0148,0x00000038c31c0150,0x10000018a39d0148\n"
".quad 0x1c000010c39c0120,0x1c000010a29c0120,0x14000018c39c0120,0x00000038831c0120\n"
".quad 0x00000030821d0148,0x00000030629c0148,0x00000020e21c0150,0x14000018c39d0148\n"
".quad 0x1c000010839c0120,0x1c000010c31c0120,0x18000018839c0120,0x00000028e31c0120\n"
".quad 0x00000030621c0148,0x00000030a29d0148,0x00000020619d0148,0x00000028e29c0148\n"
".quad 0xfbe8c000039de248,0x00000018c19c011b,0xff98b90803dde248,0x00000018a29c0118\n"
".quad 0x00000065319e0448,0x00000028431c0118,0x00000030829c0148,0x14000038611c0148\n"
".quad 0x00000028821d0120,0x08000038639d0148,0x00000020c21c0120,0x00000038a31c0148\n"
".quad 0x90123e40029de248,0xfc34a86c02dde21b,0x00000030821c0119,0x00cfc801031c0148\n"
".quad 0x0e00002901dc8150,0x10000048619c011a,0x00000040c29c0420,0x00000018421c0120\n"
".quad 0x00000044d2dc0448,0x00000020411d0120,0x00000020a31c0148,0x00000010611c0150\n"
".quad 0x18000028819d0148,0x0c000028419c0120,0x00000018c11c0120,0x8e40002451dc0348\n"
".quad 0x00000010c21d0119,0xa040003451dc2348,0x00000020629c0118,0x000007800021e748\n"
".quad 0x94ae0bf8019de240,0xffdc551c01dde219,0xfbe8e7bc039de218,0xff98b90803dde21b\n"
".quad 0x00000018419c011a,0xece600fc031de250,0xf1eaf278035de218,0x00000019b21c841a\n"
".quad 0x33d62eb4019de210,0xf887c1fc01dde21b,0x08000038839c0118,0x69b0eebc011de220\n"
".quad 0xf96bf604015de21b,0x1c000030831c0118,0xd83e0398039de220,0xfa49f95403dde21b\n"
".quad 0x08000030619c0118,0x3c0b5998011de220,0xfb1c7768015de21a,0x1c000030639c0118\n"
".quad 0x4ee25380019de220,0xfbe8068001dde218,0x08000030e39c0118,0x74ebde20011de220\n"
".quad 0xfca80680015de218,0x0c000030e39c0118,0x5b0e87b0019de220,0xfd5b05b001dde218\n"
".quad 0x08000030e39c0118,0x44424584011de220,0xfe044444015de218,0x0c000030e39c0118\n"
".quad 0x55555304019de220,0xfe95555401dde219,0x08000030e39c0118,0x555555bc011de220\n"
".quad 0xff155554015de219,0x0c000030e19c0118,0x00000000039de220,0xff80000003dde218\n"
".quad 0x08000030611c0118,0x06000021a01c8420,0x1c000030411c0114,0x00c00ff0019c0320\n"
".quad 0xffc0000001de8248,0x00000010c11c0140,0x0ec01fe061dc0350,0x18000030411c011a\n"
".quad 0x000000400001e720,0x000000fc019de440,0x0c000018419c1128,0x0e0000fc01dc2320\n"
".quad 0x000000fc021de41b,0x000000fc019de428,0xf24000000261e228,0x0dc0000071e00218\n"
".quad 0x000000000241e208,0xffc0000071dc0219,0x10000020411c010b,0x00000018419c1120\n"
".quad 0x8edffc0041dc8150,0x0a0000fff19c2319,0x8a400007f1dc2333,0x0000001041a00130\n"
".quad 0x00000000001df448,0x00cff801011c0140,0x0edffc0061dc8150,0x8e0000fec3dc0319\n"
".quad 0x06000011b11c841a,0x0c00002861a00110,0x00000010411c0120,0x00000011011d0148\n"
".quad 0x02cffc0041dc8148,0x000000fc61808319,0x0000000071c08268,0x00000000001df43a\n"
".quad 0x00000050651c0140,0x8e0000fd81dc2350,0x000022a00001e719,0x00cffc03219e0140\n"
".quad 0x00000061341e0448,0x0000222000000718,0x0ecffc0061dc0160,0x200000fd01dc0119\n"
".quad 0x000000400021e719,0x000000fc019de440,0xffc0000001ddf228,0x8edffc0061dc8118\n"
".quad 0x00000019b11c4419,0x000000400021e710,0x8edffc0101dc8140,0x000000200001e719\n"
".quad 0x00000019019c1140,0x0edffc0061dc0148,0x000000400021e719,0x220000fff19c2340\n"
".quad 0xa2400007f1dc3333,0x0edffc0101dc8130,0x000001e00021e719,0x0eeffc0061dc0140\n"
".quad 0x000000400021e719,0x000000fc019de440,0xffc0000001ddf228,0x0ecffc0061dc8118\n"
".quad 0xffc00000001de21a,0x8e0000fd03dc0119,0x000000fff19c0418,0x000000fc01dc0420\n"
".quad 0x000000000025f420,0x0000001c015de440,0x00000018011de428,0x0000958001000728\n"
".quad 0x00000010019de450,0x0000001401ddf428,0x0e0000fc61dc0128,0x000001c00021e719\n"
".quad 0x00cff801011c0140,0x8e0000fd03dc0150,0x06000011b11c8418,0x00000010411c0110\n"
".quad 0x00000011011d0148,0x0ecffc0041dc8148,0x000000fc619c0419,0x000000fc71dc0420\n"
".quad 0x000000000025f420,0x0000001c015de440,0x00000018011de428,0x0000938001000728\n"
".quad 0x00000010019de450,0x0000001401ddf428,0x0efffc0061dc0128,0x000002000021e719\n"
".quad 0x8e0000fd01dc0140,0x000000a00021e718,0x0000001c015de440,0x00000018011de428\n"
".quad 0x0000926001000728,0x00000011b19d0450,0x00000020001de710,0x00effc03219c0140\n"
".quad 0x00cff801011c0148,0x06000011b11c8450,0x00000010411c0110,0x00000011011d0148\n"
".quad 0x0ecffc0041dc8148,0x000000000021f419,0x000000fc619c8340,0x0000000071dc9268\n"
".quad 0x8e0000fc61dc013a,0x0e00001c065c0418,0x000000800021e708,0x8e00004101dc0140\n"
".quad 0x000000400021e71e,0x000000fc019de440,0xffe0000001ddf228,0x00c00050501c231b\n"
".quad 0x00c01ffc021c0358,0x8e0000fc81dc2368,0x000000a00081e71a,0x00000019b1204440\n"
".quad 0x00d0d40041200110,0x00c0005050202350,0x00c01ffc00200358,0x00ffff2802200368\n"
".quad 0x003ffffc501c0248,0x00fff004861c033a,0xffc00000015c4248,0x8e40001451dc0338\n"
".quad 0xffc0000051600219,0x00c000058620030b,0x00cffc00459c0148,0x00effc00449c0148\n"
".quad 0x00000059a11c0448,0x000077e001000710,0x00000011319c0450,0x00000000011de210\n"
".quad 0xffc00000015de218,0xf4b2bf88029de218,0xfac3d7fc02dde219,0x08000019611e0118\n"
".quad 0x06b4ed68039de220,0xfb43d74803dde219,0x08000010411c0118,0xd52228fc031de220\n"
".quad 0xfbcec828035de219,0x0c000018411c0118,0x02e79ec0059de220,0xf11a932c05dde218\n"
".quad 0x00000011219c011a,0x0000134000000750,0x00000018619c0160,0x00000018621c0148\n"
".quad 0x1c000020a39c0150,0x93ebb354029de220,0xfc5d173402dde21b,0x18000020e39c0118\n"
".quad 0x96295e2c031de220,0xfcf1c71c035de218,0x14000020e39c0118,0x490ae440029de220\n"
".quad 0xfd89249002dde21a,0x18000020e39c0118,0x666677ec031de220,0xfe266664035de21a\n"
".quad 0x14000020e29c0118,0x55555554039de220,0xfed5555403dde219,0x18000020a29c0118\n"
".quad 0x1c000028831c0120,0x00000030e39d0120,0x1c000028821c0148,0x00000019229d0120\n"
".quad 0x00000058821c0148,0x00000028a39c0148,0x00000020c29c0148,0x1c000048639e0148\n"
".quad 0x00000028c49d0120,0x00000028631c0148,0x00000038411c0150,0x00000048821c0150\n"
".quad 0x18000018a39d0148,0xc9e3b398049de220,0xf54f79a804dde21b,0x1c000010839c0118\n"
".quad 0x1c000010a29c0120,0x14000018839c0120,0x00000038c21c0120,0x00000020c31d0148\n"
".quad 0x00000020629c0148,0x00000030e31c0150,0x14000018839d0148,0x1c000010c39c0120\n"
".quad 0x1c000010821c0120,0x10000018c31c0120,0x00000030a21c0120,0x00000020a39d0148\n"
".quad 0x00000020629c0148,0x00000038c31c0150,0x14000018839d0148,0x1c000010c39c0120\n"
".quad 0x1c000010821c0120,0x10000018c39c0120,0x00000028e31c0120,0x00000030621c0148\n"
".quad 0x00000030a29d0148,0x00000020619d0148,0x00000028e29c0148,0xfbe8c000039de248\n"
".quad 0x00000018c19c011b,0xff98b90803dde248,0x00000018a29c0118,0x00000061319e0448\n"
".quad 0x00000028431c0118,0x00000030829c0148,0x14000038611c0148,0x00000028821d0120\n"
".quad 0x08000038639d0148,0x00000020c21c0120,0x00000038a31c0148,0x90123e40029de248\n"
".quad 0xfc34a86c02dde21b,0x00000030821c0119,0x00cfc801031c0148,0x0e00002901dc8150\n"
".quad 0x10000048619c011a,0x00000040c29c0420,0x00000018421c0120,0x00000044d2dc0448\n"
".quad 0x00000020411d0120,0x00000020a31c0148,0x00000010611c0150,0x18000028819d0148\n"
".quad 0x0c000028419c0120,0x00000018c11c0120,0x8e40002451dc0348,0x00000010c21d0119\n"
".quad 0xa040003451dc2348,0x00000020629c0118,0x000007800021e748,0x94ae0bf8019de240\n"
".quad 0xffdc551c01dde219,0xfbe8e7bc039de218,0xff98b90803dde21b,0x00000018419c011a\n"
".quad 0xece600fc031de250,0xf1eaf278035de218,0x00000019b21c841a,0x33d62eb4019de210\n"
".quad 0xf887c1fc01dde21b,0x08000038839c0118,0x69b0eebc011de220,0xf96bf604015de21b\n"
".quad 0x1c000030831c0118,0xd83e0398039de220,0xfa49f95403dde21b,0x08000030619c0118\n"
".quad 0x3c0b5998011de220,0xfb1c7768015de21a,0x1c000030639c0118,0x4ee25380019de220\n"
".quad 0xfbe8068001dde218,0x08000030e39c0118,0x74ebde20011de220,0xfca80680015de218\n"
".quad 0x0c000030e39c0118,0x5b0e87b0019de220,0xfd5b05b001dde218,0x08000030e39c0118\n"
".quad 0x44424584011de220,0xfe044444015de218,0x0c000030e39c0118,0x55555304019de220\n"
".quad 0xfe95555401dde219,0x08000030e39c0118,0x555555bc011de220,0xff155554015de219\n"
".quad 0x0c000030e19c0118,0x00000000039de220,0xff80000003dde218,0x08000030611c0118\n"
".quad 0x06000021a01c8420,0x1c000030411c0114,0x00c00ff0019c0320,0xffc0000001de8248\n"
".quad 0x00000010c11c0140,0x0ec01fe061dc0350,0x18000030411c011a,0x000000400001e720\n"
".quad 0x000000fc019de440,0x0c000018419c1128,0x0e0000fc01dc2320,0x000000fc021de41b\n"
".quad 0x000000fc019de428,0xf24000000261e228,0x0dc0000071e00218,0x000000000241e208\n"
".quad 0xffc0000071dc0219,0x10000020411c010b,0x00000018419c1120,0x8edffc0041dc8150\n"
".quad 0x0a0000fff19c2319,0x8a400007f1dc2333,0x0000001041a00130,0x00000000001df448\n"
".quad 0x00cff801011c0140,0x0edffc0061dc8150,0x8e0000fd93dc0319,0x06000011b11c841a\n"
".quad 0x0c00002861a00110,0x00000010411c0120,0x00000011011d0148,0x02cffc0041dc8148\n"
".quad 0x000000fc61808319,0x0000000071c08268,0x00000000001df43a,0x00000050651c0140\n"
".quad 0x8e4000b3f1dc2350,0x00004b200021e719,0x000000d31c1ca340,0x000000fc0b1de450\n"
".quad 0x004000b2cb5e0328,0x8e4000b3f1dc2348,0x004000b0059de418,0x000000b004dde428\n"
".quad 0x000000b4049de428,0x000003400021e728,0x000000fc041de440,0xffc00000045de228\n"
".quad 0x00000059311e0418,0x8ec0000531dc2318,0x00fffffd659c0319,0x00000040441c0148\n"
".quad 0x000000e00001e750,0x0000004d319e0440,0x00000044015de418,0x00000040011de428\n"
".quad 0x00004d4001000728,0x00000010041de450,0x00000014045de428,0x00fffffd34dc0328\n"
".quad 0x8ec0000521dc2348,0x000000e00001e719,0x00000049319e0440,0x00000044015de418\n"
".quad 0x00000040011de428,0x00004c2001000728,0x00000010041de450,0x00000014045de428\n"
".quad 0x00fffffd249c0328,0x8e0000fd61dc2348,0x03fffd200001e71a,0x00000040001de740\n"
".quad 0x000000fc041de440,0xffc00000045de228,0x8e0000fec1dc2318,0x000021c00001e719\n"
".quad 0x0ecffc0021dc0140,0x000000b1349e0419,0x0000214000000718,0x200000fd21dc0160\n"
".quad 0x000000400021e719,0x000000fc011de440,0xffc00000015df228,0x8edffc0021dc8118\n"
".quad 0x00000009b11c4419,0x000000400021e710,0x8edffc0121dc8140,0x000000200001e719\n"
".quad 0x00000009211c1140,0x0edffc0021dc0148,0x000000400021e719,0x260000fff11c2340\n"
".quad 0xa6400007f15c3333,0x0edffc0121dc8130,0x000001800021e719,0x0eeffc0021dc0140\n"
".quad 0x000000400021e719,0x000000fc011de440,0xffc00000015df228,0x0ecffc0021dc8118\n"
".quad 0xffc00000001de21a,0x8e0000fd23dc0119,0x000000fff11c0418,0x000000fc015c0420\n"
".quad 0x000000000025f420,0x00006e4001000740,0x00000000001df450,0x0e0000fc21dc0140\n"
".quad 0x000001600021e719,0x00cff801211c0140,0x8e0000fd23dc0150,0x06000011b11c8418\n"
".quad 0x00000010411c0110,0x00000011211d0148,0x0ecffc0041dc8148,0x000000fc211c0419\n"
".quad 0x000000fc315c0420,0x000000000025f420,0x00006ca001000740,0x00000000001df450\n"
".quad 0x0efffc0021dc0140,0x000002000021e719,0x8e0000fd21dc0140,0x000000a00021e718\n"
".quad 0x0000000c015de440,0x00000008011de428,0x00006ba001000728,0x00000011b11d0450\n"
".quad 0x00000020001de710,0x00000009b11d0440,0x00cff801219c0110,0x06000019b19c8450\n"
".quad 0x00000018619c0110,0x00000019219d0148,0x0ecffc0061dc8148,0x000000000021f419\n"
".quad 0x000000fc411c8340,0x00000000515c9268,0x8e0000fc21dc013a,0x0e00001c0bdc0418\n"
".quad 0x000000800021e708,0x8e00004921dc0140,0x000000400021e71e,0x000000fc011de440\n"
".quad 0xffe00000015df228,0x00c00050501c231b,0x00c01ffc019c0358,0x8e0000fc61dc2368\n"
".quad 0x000000a00081e71a,0x00000009b1204440,0x00d0d40041200110,0x00c0005050202350\n"
".quad 0x00c01ffc00200358,0x00ffff2801a00368,0x003ffffc501c0248,0x00fff0046b9c033a\n"
".quad 0xffc00000015c4248,0x8e40001451dc0338,0xffc0000051600219,0x00c00006eba0030b\n"
".quad 0x00cffc00461c0148,0x00effc00459c0148,0x00000061a11c0448,0x0000512001000710\n"
".quad 0x00000011311c0450,0x00000000019de210,0xffc0000001dde218,0xf4b2bf88021de218\n"
".quad 0xfac3d7fc025de219,0x0c000011819e0118,0x06b4ed68029de220,0xfb43d74802dde219\n"
".quad 0x0c000018619c0118,0x666677ec039de220,0xfe26666403dde21a,0x08000010611c0118\n"
".quad 0x55555554061de220,0xfed55554065de219,0x00000011619c0118,0x0000134000000750\n"
".quad 0x00000018619c0160,0x00000018631c0148,0x14000030821c0150,0xd52228fc029de220\n"
".quad 0xfbcec82802dde219,0x14000030821c0118,0x93ebb354029de220,0xfc5d173402dde21b\n"
".quad 0x14000030821c0118,0x96295e2c029de220,0xfcf1c71c02dde218,0x14000030821c0118\n"
".quad 0x490ae440029de220,0xfd89249002dde21a,0x14000030829c0118,0x00000019621d0120\n"
".quad 0x1c000030a39c0148,0x00000020821c0120,0x30000038c29c0148,0x10000058621e0120\n"
".quad 0x00000029859d0120,0x00000020411c0148,0x2c000038c31c0150,0x02e79ec0039de220\n"
".quad 0xf11a932c03dde218,0x00000038c39c011a,0x00000038a31c0148,0x00000030a59d0148\n"
".quad 0x00000030629c0148,0x00000058e21c0150,0x14000018c39d0148,0x1c000010839c0120\n"
".quad 0x1c000010c31c0120,0x18000018831c0120,0x00000030a21c0120,0x00000020a39d0148\n"
".quad 0x00000020629c0148,0x00000038c31c0150,0x14000018839d0148,0x1c000010c39c0120\n"
".quad 0x1c000010821c0120,0x10000018c39c0120,0x00000038a31c0120,0x00000030a29d0148\n"
".quad 0x00000030621c0148,0x00000028e29c0150,0x10000018c39d0148,0x1c000010a39c0120\n"
".quad 0x1c000010c31c0120,0x18000018a39c0120,0x00000020e31c0120,0x00000030629c0148\n"
".quad 0x00000030821d0148,0x00000028619d0148,0x00000020e21c0148,0x00000018c19c0148\n"
".quad 0xfbe8c000031de248,0xff98b908035de21b,0x00000018819c0118,0x000000b9321e0448\n"
".quad 0x00000018411c0118,0x00000010a19c0148,0x00000018a39d0148,0x0c000030829c0148\n"
".quad 0x00000038411c0120,0x14000030831d0148,0xc9e3b398039de220,0xf54f79a803dde21b\n"
".quad 0x00000030631c0118,0x90123e40019de248,0xfc34a86c01dde21b,0x00000030431c0119\n"
".quad 0x00cfc801211c0148,0x0e00001921dc8150,0x18000038819c011a,0x00000048411c0420\n"
".quad 0x00000018a21c0120,0x0000004c515c0448,0x00000020a29d0120,0x00000020431c0148\n"
".quad 0x00000028619c0150,0x18000010821d0148,0x10000010611c0120,0x00000010c29c0120\n"
".quad 0x8e400024b1dc0348,0x00000028c19d0119,0xa0400034b1dc2348,0x00000018421c0118\n"
".quad 0x000007800021e748,0x94ae0bf8011de240,0xffdc551c015de219,0xfbe8e7bc031de218\n"
".quad 0xff98b908035de21b,0x00000010a19c011a,0xece600fc011de250,0xf1eaf278015de218\n"
".quad 0x00000019b19c841a,0x33d62eb4039de210,0xf887c1fc03dde21b,0x14000030631c0118\n"
".quad 0x69b0eebc029de220,0xf96bf60402dde21b,0x18000010611c0118,0xd83e0398031de220\n"
".quad 0xfa49f954035de21b,0x14000010e29c0118,0x3c0b5998039de220,0xfb1c776803dde21a\n"
".quad 0x18000010a29c0118,0x4ee25380031de220,0xfbe80680035de218,0x1c000010a29c0118\n"
".quad 0x74ebde20039de220,0xfca8068003dde218,0x18000010a29c0118,0x5b0e87b0031de220\n"
".quad 0xfd5b05b0035de218,0x1c000010a29c0118,0x44424584039de220,0xfe04444403dde218\n"
".quad 0x18000010a29c0118,0x55555304031de220,0xfe955554035de219,0x1c000010a29c0118\n"
".quad 0x555555bc039de220,0xff15555403dde219,0x18000010a31c0118,0x00000000029de220\n"
".quad 0xff80000002dde218,0x1c000010c31c0118,0x06000019a01c8420,0x14000010c19c0114\n"
".quad 0x00c00ff0031c0320,0x00000018429c0148,0x0ec01fe0c1dc0350,0xffc0000001de821a\n"
".quad 0x08000010a11c0140,0x000000400001e720,0x000000fc019de440,0x0c000018411c1128\n"
".quad 0x0e0000fc01dc2320,0x000000fc029de41b,0x000000fc019de428,0xf240000002e1e228\n"
".quad 0x0dc0000071e00218,0x0000000002c1e208,0xffc0000071dc0219,0x14000028411c010b\n"
".quad 0x00000018411c1120,0x8edffc00a1dc8150,0x160000fff11c2319,0x96400007f15c2333\n"
".quad 0x00000028a1200130,0x00000000001df448,0x00cff801219c0140,0x0edffc0041dc8150\n"
".quad 0x8e0000fef3dc0319,0x06000019b19c841a,0x0800002041200110,0x00000018619c0120\n"
".quad 0x00000019219d0148,0x02cffc0061dc8148,0x000000fc41008319,0x0000000051408268\n"
".quad 0x00000000001df43a,0x00000040441c0140,0x8e0000fed1dc2350,0x000022a00001e719\n"
".quad 0x00cffc00219e0140,0x000000b5349e0448,0x0000222000000718,0x0ecffc0061dc0160\n"
".quad 0x200000fd21dc0119,0x000000400021e719,0x000000fc019de440,0xffc0000001ddf228\n"
".quad 0x8edffc0061dc8118,0x00000019b11c4419,0x000000400021e710,0x8edffc0121dc8140\n"
".quad 0x000000200001e719,0x00000019219c1140,0x0edffc0061dc0148,0x000000400021e719\n"
".quad 0x260000fff19c2340,0xa6400007f1dc3333,0x0edffc0121dc8130,0x000001e00021e719\n"
".quad 0x0eeffc0061dc0140,0x000000400021e719,0x000000fc019de440,0xffc0000001ddf228\n"
".quad 0x0ecffc0061dc8118,0xffc00000001de21a,0x8e0000fd23dc0119,0x000000fff19c0418\n"
".quad 0x000000fc01dc0420,0x000000000025f420,0x0000001c015de440,0x00000018011de428\n"
".quad 0x00004be001000728,0x00000010019de450,0x0000001401ddf428,0x0e0000fc61dc0128\n"
".quad 0x000001c00021e719,0x00cff801211c0140,0x8e0000fd23dc0150,0x06000011b11c8418\n"
".quad 0x00000010411c0110,0x00000011211d0148,0x0ecffc0041dc8148,0x000000fc619c0419\n"
".quad 0x000000fc71dc0420,0x000000000025f420,0x0000001c015de440,0x00000018011de428\n"
".quad 0x000049e001000728,0x00000010019de450,0x0000001401ddf428,0x0efffc0061dc0128\n"
".quad 0x000002000021e719,0x8e0000fd21dc0140,0x000000a00021e718,0x0000001c015de440\n"
".quad 0x00000018011de428,0x000048c001000728,0x00000011b19d0450,0x00000020001de710\n"
".quad 0x00effc00219c0140,0x00cff801211c0148,0x06000011b11c8450,0x00000010411c0110\n"
".quad 0x00000011211d0148,0x0ecffc0041dc8148,0x000000000021f419,0x000000fc619c8340\n"
".quad 0x0000000071dc9268,0x8e0000fc61dc013a,0x0e00001c0b9c0418,0x000000800021e708\n"
".quad 0x8e00004921dc0140,0x000000400021e71e,0x000000fc019de440,0xffe0000001ddf228\n"
".quad 0x00c00050501c231b,0x00c01ffc021c0358,0x8e0000fc81dc2368,0x000000a00081e71a\n"
".quad 0x00000019b1204440,0x00d0d40041200110,0x00c0005050202350,0x00c01ffc00200358\n"
".quad 0x00ffff2802200368,0x003ffffc501c0248,0x00fff0048b5c033a,0xffc00000015c4248\n"
".quad 0x8e40001451dc0338,0xffc0000051600219,0x00c00006db60030b,0x00cffc00461c0148\n"
".quad 0x00effc00459c0148,0x00000061a11c0448,0x00002e4001000710,0x00000011311c0450\n"
".quad 0x00000000019de210,0xffc0000001dde218,0xf4b2bf88021de218,0xfac3d7fc025de219\n"
".quad 0x0c000011819e0118,0x06b4ed68029de220,0xfb43d74802dde219,0x0c000018619c0118\n"
".quad 0x666677ec039de220,0xfe26666403dde21a,0x08000010611c0118,0x55555554061de220\n"
".quad 0xfed55554065de219,0x00000011619c0118,0x0000134000000750,0x00000018619c0160\n"
".quad 0x00000018631c0148,0x14000030821c0150,0xd52228fc029de220,0xfbcec82802dde219\n"
".quad 0x14000030821c0118,0x93ebb354029de220,0xfc5d173402dde21b,0x14000030821c0118\n"
".quad 0x96295e2c029de220,0xfcf1c71c02dde218,0x14000030821c0118,0x490ae440029de220\n"
".quad 0xfd89249002dde21a,0x14000030829c0118,0x00000019621d0120,0x1c000030a39c0148\n"
".quad 0x00000020821c0120,0x30000038c29c0148,0x10000058621e0120,0x00000029859d0120\n"
".quad 0x00000020411c0148,0x2c000038c31c0150,0x02e79ec0039de220,0xf11a932c03dde218\n"
".quad 0x00000038c39c011a,0x00000038a31c0148,0x00000030a59d0148,0x00000030629c0148\n"
".quad 0x00000058e21c0150,0x14000018c39d0148,0xc9e3b398059de220,0xf54f79a805dde21b\n"
".quad 0x1c000010839c0118,0x1c000010c31c0120,0x18000018831c0120,0x00000030a21c0120\n"
".quad 0x00000020a39d0148,0x00000020629c0148,0x00000038c31c0150,0x14000018839d0148\n"
".quad 0x1c000010c39c0120,0x1c000010821c0120,0x10000018c39c0120,0x00000038a31c0120\n"
".quad 0x00000030a29d0148,0x00000030621c0148,0x00000028e29c0150,0x10000018c39d0148\n"
".quad 0x1c000010a39c0120,0x1c000010c31c0120,0x18000018a39c0120,0x00000020e31c0120\n"
".quad 0x00000030629c0148,0x00000030821d0148,0x00000028619d0148,0x00000020e21c0148\n"
".quad 0xfbe8c000039de248,0x00000018c19c011b,0xff98b90803dde248,0x00000018821c0118\n"
".quad 0x000000b5319e0448,0x00000020431c0118,0x00000030a21c0148,0x10000038611c0148\n"
".quad 0x00000020a29d0120,0x08000038639d0148,0x00000028c29c0120,0x00000038831c0148\n"
".quad 0x90123e40021de248,0xfc34a86c025de21b,0x00000030a29c0119,0x00cfc801231c0148\n"
".quad 0x0e00002121dc8150,0x14000058619c011a,0x00000048c29c0420,0x00000018421c0120\n"
".quad 0x0000004cd2dc0448,0x00000020411d0120,0x00000020a31c0148,0x00000010611c0150\n"
".quad 0x18000028819d0148,0x0c000028419c0120,0x00000018c11c0120,0x8e40002451dc0348\n"
".quad 0x00000010c21d0119,0xa040003451dc2348,0x00000020629c0118,0x000007800021e748\n"
".quad 0x94ae0bf8019de240,0xffdc551c01dde219,0xfbe8e7bc039de218,0xff98b90803dde21b\n"
".quad 0x00000018419c011a,0xece600fc031de250,0xf1eaf278035de218,0x00000019b21c841a\n"
".quad 0x33d62eb4019de210,0xf887c1fc01dde21b,0x08000038839c0118,0x69b0eebc011de220\n"
".quad 0xf96bf604015de21b,0x1c000030831c0118,0xd83e0398039de220,0xfa49f95403dde21b\n"
".quad 0x08000030619c0118,0x3c0b5998011de220,0xfb1c7768015de21a,0x1c000030639c0118\n"
".quad 0x4ee25380019de220,0xfbe8068001dde218,0x08000030e39c0118,0x74ebde20011de220\n"
".quad 0xfca80680015de218,0x0c000030e39c0118,0x5b0e87b0019de220,0xfd5b05b001dde218\n"
".quad 0x08000030e39c0118,0x44424584011de220,0xfe044444015de218,0x0c000030e39c0118\n"
".quad 0x55555304019de220,0xfe95555401dde219,0x08000030e39c0118,0x555555bc011de220\n"
".quad 0xff155554015de219,0x0c000030e19c0118,0x00000000039de220,0xff80000003dde218\n"
".quad 0x08000030611c0118,0x06000021a01c8420,0x1c000030411c0114,0x00c00ff0019c0320\n"
".quad 0xffc0000001de8248,0x00000010c11c0140,0x0ec01fe061dc0350,0x18000030411c011a\n"
".quad 0x000000400001e720,0x000000fc019de440,0x0c000018419c1128,0x0e0000fc01dc2320\n"
".quad 0x000000fc021de41b,0x000000fc019de428,0xf24000000261e228,0x0dc0000071e00218\n"
".quad 0x000000000241e208,0xffc0000071dc0219,0x10000020411c010b,0x00000018419c1120\n"
".quad 0x8edffc0041dc8150,0x0a0000fff19c2319,0x8a400007f1dc2333,0x0000001041a00130\n"
".quad 0x00000000001df448,0x00cff801211c0140,0x0edffc0061dc8150,0x8e0000fee3dc0319\n"
".quad 0x06000011b11c841a,0x0c00002861a00110,0x00000010411c0120,0x00000011211d0148\n"
".quad 0x02cffc0041dc8148,0x000000fc61808319,0x0000000071c08268,0x00000000001df43a\n"
".quad 0x00000040641c0140,0x000000b3001c0350,0x00c00006cb1c0348,0x00c00060001ca348\n"
".quad 0x8e0000b311dc2350,0x00000000021ca51a,0x00000020019ca5c1,0x00000040011ca5c1\n"
".quad 0x00000050821c01c1,0x00000050619c0150,0x00000050411c0150,0x3c000021079c0150\n"
".quad 0x38000019071c0120,0x34000011069c0120,0x03ffb5200001e720,0x00c000074d1c0340\n"
".quad 0x8e0000d351dc2348,0x03ff6a600001e71a,0x000000c0001de740,0x000000fc069de440\n"
".quad 0x000000fc06dde428,0x000000fc071de428,0x000000fc075de428,0x000000fc079de428\n"
".quad 0x000000fc07dde428,0x704000d3901ca328,0x00400100009de420,0x05c00060009ca328\n"
".quad 0x00c00060001ce320,0x0040011000dc4350,0x00000000279ca548,0x00000020271ca594\n"
".quad 0x00000040269cb594,0x8e0000ffb1dc0394,0x000001800021e71a,0x0e0000ffc1dc0340\n"
".quad 0x000000ffd1dc0319,0x000000a000a1e719,0x000000040001e240,0x004001200081e418\n"
".quad 0x0040013000c1e428,0x7e00000020020528,0x00000003a000855c,0x7e0000590fdc03c9\n"
".quad 0xee0000ffffdc0420,0x00000003ad9c8550,0x00000020001de7c1,0x004000536d9c0340\n"
".quad 0x8e40008361dc2348,0x03ff5d800001e718,0x00000000001de740,0x00c00004721c0380\n"
".quad 0x00c00004501c0360,0x00000010039de460,0x00c00054825c0328,0x00c00054021c0358\n"
".quad 0x0000001403dde458,0x00fffffc929c0328,0x00fffffc801c0348,0x00000018031de448\n"
".quad 0x0ec01ff4a1dc0328,0x0000001c035de41a,0x20c01ff401dc0328,0x000005600021e71a\n"
".quad 0x8edffc00e1dc8140,0x000000400001e719,0x00200000515c4240,0x00000f00001de738\n"
".quad 0x8edffc00c1dc8140,0x000000600001e719,0x00200000715c4240,0x00000018011de438\n"
".quad 0x00000e60001de728,0x0e0000fce3dc0140,0x0e0000fcc5dc0119,0x0e00000811dc0419\n"
".quad 0x000000800001e70c,0x0edffc00e7dc8140,0x0edffc00c1dc8119,0x00000080002de719\n"
".quad 0x000000600021e740,0x000000fc011de440,0xffe00000015de228,0x00000d00001de71b\n"
".quad 0x0e00004401dc0440,0x000000800021e70c,0x00000014701c8340,0x000000fc011de468\n"
".quad 0x00000000015c0228,0x00000c40001de73a,0x0e00004831dc0440,0x000000a00021e70c\n"
".quad 0x00000014701c8340,0x000000fc011de468,0x00000000001c0228,0xffc00000015c423a\n"
".quad 0x00000b60001de739,0x0e0000fc01dc2340,0x000000400081e71b,0x00d0d400e1200140\n"
".quad 0xffffff280021e250,0x000000fc0001e41b,0x0e0000fca1dc2328,0x000000800001e71b\n"
".quad 0x00d0d400c19c0140,0x00c000d8001c0350,0x00000020001de748,0x000000fc001de440\n"
".quad 0x00fff004929c0328,0x00000004031de248,0x00000000089de218,0x0000001ca1de8318\n"
".quad 0xffc0000008dde241,0x00fff004829c0318,0x00000018735c0048,0x00000014a15e83c8\n"
".quad 0x44000030639e0141,0x00000030481c0120,0x18000030e29c0150,0x00000038e39c0120\n"
".quad 0x14000028e29c0150,0x08000080639e0120,0x44000028631e0120,0x40000028e39c0120\n"
".quad 0x14000028c29c0120,0x08000038631e0120,0x00000024819d0320,0x1c000028c81c0148\n"
".quad 0x00c00006115c0320,0x00c00054515c0360,0x00000014619c0358,0x00000000619c0348\n"
".quad 0x00fffffc601c0348,0x0ec01ff401dc0348,0x000000800001e71a,0x00000014601d0340\n"
".quad 0x00000080011de448,0x00000084015e8328,0x00000620001de740,0x00fff004601c0340\n"
".quad 0x8ec00ffc01dc2348,0x000000800001e719,0x00000002101c0240,0x000000fc011de43a\n"
".quad 0xffc00000015c4228,0x00000540001de739,0x0effef3001dc2340,0x00000002115c021b\n"
".quad 0x000000400001e73a,0x000000fc011de440,0x000004a0001de728,0x9c000028c81c0140\n"
".quad 0x00000019201f8420,0x1c000028c89c011c,0x9c000028c29c0121,0x8ec0007c01dc2321\n"
".quad 0x8e00008a03dc0119,0x003ffffcb11c021a,0x00000028025de438,0x00400000421c4228\n"
".quad 0x000000a00081e738,0x00ffff8120228440,0x000000200261e41c,0xa20000fca3e02328\n"
".quad 0x000000006022031a,0x000000fc0221e448,0x0e0000fc01dc2328,0x000000e00081e719\n"
".quad 0x00c0008001220340,0x0000000091e00348,0x0000001091a00358,0x0000001081200360\n"
".quad 0x0000000082200360,0xa20000fc63e02358,0x000000107260431a,0x00c00004901c0368\n"
".quad 0x00c0007c811c0358,0x00000010011c4360,0x00c00004901c0368,0x00c00004419c0368\n"
".quad 0xa20000fc61dc2368,0x00c00004819c031a,0x800000fc01dc2358,0x0000006000a1e71a\n"
".quad 0x00c0000441000340,0x00c0000460000348,0x0800001801802348,0x00000018515c4331\n"
".quad 0x00000000001de768,0x00c00004401c0390,0x00c00060001c0360,0x00c0000c015c0358\n"
".quad 0x00000014215c0448,0x8ec0000c51dc031c,0x000000800001e719,0x00000010401c0040\n"
".quad 0x00800044411c00c8,0x00000010011e0030,0x00000760001de730,0x8e0000fc01dc0340\n"
".quad 0x000003000001e71a,0x01fffffc401c0240,0x00000000015c0338,0x00c0007c515e0378\n"
".quad 0x00ffffdc519c0348,0x8ec0000461dc0348,0x000000400001e719,0x00000010411c0040\n"
".quad 0x00000620001de7c8,0x00ffffe0519c0340,0x00000000411c0248,0x00000018001c033a\n"
".quad 0x01fffffc001c0260,0xfe000000001c4238,0x00000010019c0038,0x0c800044001c00c8\n"
".quad 0x0c000000601e0030,0x01fffffc001c0230,0x0e0000fc019c0338,0x00000018515d0311\n"
".quad 0x00c003d0515c0348,0x00c0005c515c0348,0x00000014411c4360,0x00000010011c4368\n"
".quad 0x00000420001de768,0x00fffc0c015c0340,0x0ec0000451dc0348,0x000003a00001e71a\n"
".quad 0x01fffffc419c0240,0x0000000c02dde238,0x00000000411c0218,0xfe00000061dc423a\n"
".quad 0x00000014b2dc0338,0x00000010721c0060,0x1080004471dc00c8,0x9000001c825e0030\n"
".quad 0x1000001c821e0030,0x01fffffc929c0231,0x8e00002091dc0038,0x02000000a29c422e\n"
".quad 0x10c00007f21c0438,0x00000028b1dc0320,0x0000001471dc0368,0x00000028515c0358\n"
".quad 0x00c00008725c0368,0x00000014815c4368,0x00fffc10021c0368,0x8e0000fc91dc0348\n"
".quad 0x00c00004701c031a,0xa00000fc51dc0368,0x00000020a15c031a,0x800000fc01dc2358\n"
".quad 0x00c000045140031a,0x00c00004501c0348,0x0c000014001c0360,0x00000010011c4331\n"
".quad 0x00000020001de768,0x00000010411c0040,0x00000000001de7c8,0x010000fc4fdd0390\n"
".quad 0xfffffffc501c0248,0x00000010019de439,0x00000c4000000728,0x0ed0000001dc4360\n"
".quad 0x000000600001e71a,0x00000000501c0240,0x000000fc019de43a,0xffc0000001dc5228\n"
".quad 0x01fffffc4fdd0339,0x0e40005401dc4348,0x000002c00001e71a,0x00dff400419c0140\n"
".quad 0x06000019a11c0450,0x8ec0200041dc8010,0x00000010401c0020,0x0000006000a1e7c8\n"
".quad 0x00d2e00040000040,0x0000001000000058,0x00d2e000000000c8,0x0edfa00041dc8058\n"
".quad 0x0000006000a1e722,0x00cfa00040000040,0x0000001000000058,0x00cfa000000000c8\n"
".quad 0x00000001311c0458,0x00000000029de210,0xffc0000002dde218,0x14000018421e0118\n"
".quad 0x10000020821c0120,0x08000020411c0120,0x14000018419e0120,0x08000018411c0120\n"
".quad 0x00dff400419c1120,0x01fffffc4fdd0350,0x0e40006401dc4348,0x000003000001e71a\n"
".quad 0x003ffffc501c0240,0xffc0000001dc4238,0x06000019a11c0438,0x8ec0200041dc8010\n"
".quad 0x00000010401c0020,0x0000006000a1e7c8,0x00d2e00040000040,0x0000001000000058\n"
".quad 0x00d2e000000000c8,0x0edfa00041dc8058,0x0000006000a1e722,0x00cfa00040000040\n"
".quad 0x0000001000000058,0x00cfa000000000c8,0x00000001321c0458,0x00000000031de210\n"
".quad 0xffc00000035de218,0x0000001c501e0318,0x18000018829e0148,0x14000028a29c0120\n"
".quad 0x10000028821c0120,0x18000018829e0120,0x10000028819c0120,0x0000000071dc1320\n"
".quad 0x01fffffc4fdd0348,0x0e40007401dc4348,0x000003e00001e71a,0x003ffffc501c0240\n"
".quad 0x00000010021de438,0xffc00000025c4228,0x06000021a19c0438,0x8ec0200061dc8010\n"
".quad 0x00000010601c0020,0x0000006000a1e7c8,0x00d2e00060000040,0x0000001000000058\n"
".quad 0x00d2e000000000c8,0x0edfa00061dc8058,0x0000006000a1e722,0x00cfa00060000040\n"
".quad 0x0000001000000058,0x00cfa000000000c8,0x00000001319c0458,0x00000000031de210\n"
".quad 0xffc00000035de218,0x00000014901d0318,0x18000020629e0148,0x14000028a29c0120\n"
".quad 0x0c000028619c0120,0x000000fc029de420,0x0000000002dc0228,0x18000020621e0109\n"
".quad 0x00cff800a29c0120,0x8c000020619c0150,0xfe000028619c0121,0x18000010611e0121\n"
".quad 0x08000010411c0120,0x0c000010619c1120,0x010000fc4fdd0320,0x8e40000401dc4348\n"
".quad 0x0000000051e0021a,0x000000fc01a1e43a,0x0020000051c04228,0x000000100181e438\n"
".quad 0x00000000001df428,0x00000018011de440,0x0000001c015de428,0x00000000001de728\n"
".quad 0x003ffffc501c0290,0x00000010021de438,0x00000000039de228,0xffc00000025c4218\n"
".quad 0xffc0000003dde238,0xf2400000001c4218,0x06000021a19c0438,0x00000010619c0010\n"
".quad 0x00000019329c04c8,0x1c000020a19e0110,0x0c000018631c0120,0x00000024519e0320\n"
".quad 0x14000030a21c0148,0x00000018925c0320,0x9c000010819e0148,0x010000184fdd0321\n"
".quad 0xfffffffc719c0248,0x8e00001801dc4339,0x000000600021e719,0x03fff06001000740\n"
".quad 0x00000010021de450,0x00000014025de428,0x00000020011de428,0x00000024015de428\n"
".quad 0x00000000001de728,0x0000000000000090,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0xf6a09e7ff0000000\n"
".quad 0x87491140862e423f,0x0fffffbf800000c0,0xefffff7fcfffff00,0x00000000240c047f\n"
".quad 0x0000080000000400,0x0000100000000c00,0x0000180000001400,0x0000280000002000\n"
".quad 0x00000a00080a0400,0x3019030030002000,0xffffff000c170400,0x21f00000280008ff\n"
".quad 0xffffff000c170400,0x21f00000200007ff,0xffffff000c170400,0x21f00000180006ff\n"
".quad 0xffffff000c170400,0x11f00000140005ff,0xffffff000c170400,0x11f00000100004ff\n"
".quad 0xffffff000c170400,0x11f000000c0003ff,0xffffff000c170400,0x11f00000080002ff\n"
".quad 0xffffff000c170400,0x11f00000040001ff,0xffffff000c170400,0x11f00000000000ff\n"
".quad 0x2601c800080d0400,0x0812040000002000,0x0000000000000f00,0x00000f0008110400\n"
".quad 0x0812040000000000,0x0000000000000e00,0x00000e0008110400,0x0812040000000000\n"
".quad 0x0000000000000d00,0x00000d0008110400,0x0812040000000000,0x0000000000000c00\n"
".quad 0x00000c0008110400,0x0812040000000000,0x0000000000000b00,0x00000b0008110400\n"
".quad 0x0000000000000000,0x0000000500000006,0x0000000000003d28,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000070,0x0000000000000070,0x0000000000000004\n"
".quad 0x00000b0560000000,0x0000000000000579,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000003734,0x0000000000003734,0x0000000000000004,0x0000000000000000\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$sm_20$[1972];

}

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$compute_20$:\n"
".quad 0x6f69737265762e09,0x2e090a322e32206e,0x7320746567726174,0x2f2f090a30325f6d\n"
".quad 0x656c69706d6f6320,0x2f20687469772064,0x61636f6c2f727375,0x6f2f616475632f6c\n"
".quad 0x696c2f34366e6570,0x2f090a65622f2f62,0x6e65706f766e202f,0x6220322e33206363\n"
".quad 0x206e6f20746c6975,0x2d31312d30313032,0x69762e090a0a3330,0x662e20656c626973\n"
".quad 0x61702e2820636e75,0x3436662e206d6172,0x72616475635f5f20,0x34315a5f5f667465\n"
".quad 0x6c427265697a6542,0x6469555047646e65,0x4234315a5f202969,0x656c427265697a65\n"
".quad 0x696469555047646e,0x6d617261702e2820,0x5f5f203233732e20,0x6d72617061647563\n"
".quad 0x4234315a5f5f3166,0x656c427265697a65,0x696469555047646e,0x6d617261702e202c\n"
".quad 0x5f5f203436662e20,0x6d72617061647563,0x4234315a5f5f3266,0x656c427265697a65\n"
".quad 0x696469555047646e,0x6d617261702e202c,0x5f5f203233732e20,0x6d72617061647563\n"
".quad 0x4234315a5f5f3366,0x656c427265697a65,0x696469555047646e,0x2d2d2f2f090a0a29\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x6f43202f2f090a2d\n"
".quad 0x20676e696c69706d,0x632e6c656e72656b,0x2f2820692e337070,0x494263632f706d74\n"
".quad 0x3774324e4f4e2e23,0x2d2d2d2f2f090a29,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2f2f090a0a,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x74704f202f2f090a,0x2f090a3a736e6f69,0x2d2d2d2d2d2d2d2f\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2f2f090a2d2d2d2d,0x7465677261542020\n"
".quad 0x5349202c7874703a,0x2c30325f6d733a41,0x3a6e6169646e4520,0x202c656c7474696c\n"
".quad 0x207265746e696f50,0x0a34363a657a6953,0x334f2d20202f2f09,0x696d6974704f2809\n"
".quad 0x6c206e6f6974617a,0x2f090a296c657665,0x280930672d20202f,0x656c206775626544\n"
".quad 0x2f2f090a296c6576,0x522809326d2d2020,0x64612074726f7065,0x736569726f736976\n"
".quad 0x2d2d2d2f2f090a29,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x656c69662e090a0a,0x6d6f633c22093109,0x6e696c2d646e616d,0x69662e090a223e65\n"
".quad 0x656b22093209656c,0x6475632e6c656e72,0x7570672e32656661,0x656c69662e090a22\n"
".quad 0x7070757322093309,0x6d6d6f632f74726f,0x2e090a22682e6e6f,0x22093409656c6966\n"
".quad 0x2f74726f70707573,0x6f69746974726170,0x090a22682e72656e,0x093509656c69662e\n"
".quad 0x696c2f7273752f22,0x38782f6363672f62,0x6e696c2d34365f36,0x342f756e672d7875\n"
".quad 0x756c636e692f362e,0x65646474732f6564,0x662e090a22682e66,0x2f22093609656c69\n"
".quad 0x61636f6c2f727375,0x622f616475632f6c,0x6e692f2e2e2f6e69,0x72632f6564756c63\n"
".quad 0x6563697665642f74,0x656d69746e75725f,0x69662e090a22682e,0x752f22093709656c\n"
".quad 0x6c61636f6c2f7273,0x69622f616475632f,0x636e692f2e2e2f6e,0x736f682f6564756c\n"
".quad 0x656e696665645f74,0x662e090a22682e73,0x2f22093809656c69,0x61636f6c2f727375\n"
".quad 0x622f616475632f6c,0x6e692f2e2e2f6e69,0x75622f6564756c63,0x79745f6e69746c69\n"
".quad 0x090a22682e736570,0x093909656c69662e,0x6f6c2f7273752f22,0x616475632f6c6163\n"
".quad 0x2f2e2e2f6e69622f,0x2f6564756c636e69,0x745f656369766564,0x0a22682e73657079\n"
".quad 0x3109656c69662e09,0x2f7273752f220930,0x75632f6c61636f6c,0x2e2f6e69622f6164\n"
".quad 0x64756c636e692f2e,0x7265766972642f65,0x682e73657079745f,0x656c69662e090a22\n"
".quad 0x73752f2209313109,0x2f6c61636f6c2f72,0x6e69622f61647563,0x6c636e692f2e2e2f\n"
".quad 0x667275732f656475,0x657079745f656361,0x662e090a22682e73,0x2209323109656c69\n"
".quad 0x636f6c2f7273752f,0x2f616475632f6c61,0x692f2e2e2f6e6962,0x742f6564756c636e\n"
".quad 0x745f657275747865,0x0a22682e73657079,0x3109656c69662e09,0x2f7273752f220933\n"
".quad 0x75632f6c61636f6c,0x2e2f6e69622f6164,0x64756c636e692f2e,0x726f746365762f65\n"
".quad 0x682e73657079745f,0x656c69662e090a22,0x73752f2209343109,0x2f6c61636f6c2f72\n"
".quad 0x6e69622f61647563,0x6c636e692f2e2e2f,0x697665642f656475,0x636e75616c5f6563\n"
".quad 0x656d617261705f68,0x0a22682e73726574,0x3109656c69662e09,0x2f7273752f220935\n"
".quad 0x75632f6c61636f6c,0x2e2f6e69622f6164,0x64756c636e692f2e,0x74732f7472632f65\n"
".quad 0x6c635f656761726f,0x090a22682e737361,0x363109656c69662e,0x692f7273752f2209\n"
".quad 0x782f6564756c636e,0x696c2d34365f3638,0x2f756e672d78756e,0x7079742f73746962\n"
".quad 0x2e090a22682e7365,0x09373109656c6966,0x6e692f7273752f22,0x69742f6564756c63\n"
".quad 0x2e090a22682e656d,0x09383109656c6966,0x2e6c656e72656b22,0x69662e090a227563\n"
".quad 0x2f2209393109656c,0x61636f6c2f727375,0x622f616475632f6c,0x6e692f2e2e2f6e69\n"
".quad 0x6f632f6564756c63,0x6e75665f6e6f6d6d,0x682e736e6f697463,0x656c69662e090a22\n"
".quad 0x73752f2209303209,0x2f6c61636f6c2f72,0x6e69622f61647563,0x6c636e692f2e2e2f\n"
".quad 0x6874616d2f656475,0x6f6974636e75665f,0x2e090a22682e736e,0x09313209656c6966\n"
".quad 0x6f6c2f7273752f22,0x616475632f6c6163,0x2f2e2e2f6e69622f,0x2f6564756c636e69\n"
".quad 0x6e6f635f6874616d,0x682e73746e617473,0x656c69662e090a22,0x73752f2209323209\n"
".quad 0x2f6c61636f6c2f72,0x6e69622f61647563,0x6c636e692f2e2e2f,0x697665642f656475\n"
".quad 0x74636e75665f6563,0x0a22682e736e6f69,0x3209656c69662e09,0x2f7273752f220933\n"
".quad 0x75632f6c61636f6c,0x2e2f6e69622f6164,0x64756c636e692f2e,0x5f31315f6d732f65\n"
".quad 0x665f63696d6f7461,0x736e6f6974636e75,0x69662e090a22682e,0x2f2209343209656c\n"
".quad 0x61636f6c2f727375,0x622f616475632f6c,0x6e692f2e2e2f6e69,0x6d732f6564756c63\n"
".quad 0x6d6f74615f32315f,0x74636e75665f6369,0x0a22682e736e6f69,0x3209656c69662e09\n"
".quad 0x2f7273752f220935,0x75632f6c61636f6c,0x2e2f6e69622f6164,0x64756c636e692f2e\n"
".quad 0x5f33315f6d732f65,0x665f656c62756f64,0x736e6f6974636e75,0x69662e090a22682e\n"
".quad 0x2f2209363209656c,0x61636f6c2f727375,0x622f616475632f6c,0x6e692f2e2e2f6e69\n"
".quad 0x6d732f6564756c63,0x6d6f74615f30325f,0x74636e75665f6369,0x0a22682e736e6f69\n"
".quad 0x3209656c69662e09,0x2f7273752f220937,0x75632f6c61636f6c,0x2e2f6e69622f6164\n"
".quad 0x64756c636e692f2e,0x5f30325f6d732f65,0x69736e6972746e69,0x2e090a22682e7363\n"
".quad 0x09383209656c6966,0x6f6c2f7273752f22,0x616475632f6c6163,0x2f2e2e2f6e69622f\n"
".quad 0x2f6564756c636e69,0x5f65636166727573,0x6e6f6974636e7566,0x662e090a22682e73\n"
".quad 0x2209393209656c69,0x636f6c2f7273752f,0x2f616475632f6c61,0x692f2e2e2f6e6962\n"
".quad 0x742f6564756c636e,0x665f657275747865,0x6e75665f68637465,0x682e736e6f697463\n"
".quad 0x656c69662e090a22,0x73752f2209303309,0x2f6c61636f6c2f72,0x6e69622f61647563\n"
".quad 0x6c636e692f2e2e2f,0x6874616d2f656475,0x6f6974636e75665f,0x705f6c62645f736e\n"
".quad 0x0a0a22682e337874,0x62697369762e090a,0x636e75662e20656c,0x6d617261702e2820\n"
".quad 0x5f5f203436662e20,0x6674657261647563,0x7a654234315a5f5f,0x646e656c42726569\n"
".quad 0x2029696469555047,0x697a654234315a5f,0x47646e656c427265,0x2e28206964695550\n"
".quad 0x732e206d61726170,0x6475635f5f203233,0x5f31666d72617061,0x697a654234315a5f\n"
".quad 0x47646e656c427265,0x2e202c6964695550,0x662e206d61726170,0x6475635f5f203436\n"
".quad 0x5f32666d72617061,0x697a654234315a5f,0x47646e656c427265,0x2e202c6964695550\n"
".quad 0x732e206d61726170,0x6475635f5f203233,0x5f33666d72617061,0x697a654234315a5f\n"
".quad 0x47646e656c427265,0x090a296964695550,0x206765722e090a7b,0x3c7225203233752e\n"
".quad 0x2e090a3b3e313331,0x3436752e20676572,0x3e30313c64722520,0x206765722e090a3b\n"
".quad 0x3c6625203233662e,0x65722e090a3b3e36,0x25203436662e2067,0x3b3e3639333c6466\n"
".quad 0x2e206765722e090a,0x3c70252064657270,0x6c2e090a3b3e3336,0x323409383109636f\n"
".quad 0x6257444c240a3009,0x315a5f5f6e696765,0x427265697a654234,0x69555047646e656c\n"
".quad 0x2e646c090a3a6964,0x33752e6d61726170,0x202c317225092032,0x70616475635f5f5b\n"
".quad 0x5a5f5f31666d7261,0x7265697a65423431,0x555047646e656c42,0x6d090a3b5d696469\n"
".quad 0x09203233732e766f,0x317225202c327225,0x61702e646c090a3b,0x203436662e6d6172\n"
".quad 0x5b202c3164662509,0x6170616475635f5f,0x315a5f5f32666d72,0x427265697a654234\n"
".quad 0x69555047646e656c,0x6f6d090a3b5d6964,0x2509203436662e76,0x646625202c326466\n"
".quad 0x702e646c090a3b31,0x3233752e6d617261,0x5b202c3372250920,0x6170616475635f5f\n"
".quad 0x315a5f5f33666d72,0x427265697a654234,0x69555047646e656c,0x6f6d090a3b5d6964\n"
".quad 0x2509203233732e76,0x3b337225202c3472,0x3109636f6c2e090a,0x090a300935340938\n"
".quad 0x203233732e766f6d,0x7225202c35722509,0x636f6c2e090a3b34,0x3009363409383109\n"
".quad 0x33732e766f6d090a,0x202c367225092032,0x6c2e090a3b327225,0x373409383109636f\n"
".quad 0x2e627573090a3009,0x3772250920323373,0x25202c347225202c,0x766f6d090a3b3272\n"
".quad 0x722509203233732e,0x0a3b377225202c38,0x3233752e766f6d09,0x30202c3972250920\n"
".quad 0x2e70746573090a3b,0x09203233732e656c,0x347225202c317025,0x090a3b397225202c\n"
".quad 0x6172622031702540,0x5f305f744c240920,0x090a3b3435333836,0x203233732e766f6d\n"
".quad 0x25202c3031722509,0x766f6d090a3b3472,0x662509203436662e,0x66336430202c3364\n"
".quad 0x3030303030303066,0x093b303030303030,0x6f6d090a31202f2f,0x2509203233732e76\n"
".quad 0x317225202c313172,0x305f744c240a3b30,0x0a3a36383338345f,0x706f6f6c3c2f2f20\n"
".quad 0x6220706f6f4c203e,0x656e696c2079646f,0x73656e202c373420,0x70656420676e6974\n"
".quad 0x65202c31203a6874,0x646574616d697473,0x6974617265746920,0x6b6e75203a736e6f\n"
".quad 0x6c2e090a6e776f6e,0x393409383109636f,0x2e747663090a3009,0x732e3436662e6e72\n"
".quad 0x3464662509203233,0x090a3b357225202c,0x203436662e6c756d,0x25202c3364662509\n"
".quad 0x646625202c346466,0x636f6c2e090a3b33,0x3009303509383109,0x33732e627573090a\n"
".quad 0x202c357225092032,0x0a3b31202c357225,0x3233752e766f6d09,0x202c323172250920\n"
".quad 0x70746573090a3b31,0x203233732e656c2e,0x7225202c32702509,0x3b32317225202c36\n"
".quad 0x622032702540090a,0x5f744c2409206172,0x3b32343638345f30,0x6f6f6c3c2f2f200a\n"
".quad 0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62,0x6568202c37342065\n"
".quad 0x6c6562616c206461,0x305f744c24206465,0x090a36383338345f,0x09383109636f6c2e\n"
".quad 0x7663090a30093235,0x3436662e6e722e74,0x662509203233732e,0x3b367225202c3564\n"
".quad 0x6e722e766964090a,0x662509203436662e,0x33646625202c3364,0x0a3b35646625202c\n"
".quad 0x383109636f6c2e09,0x73090a3009333509,0x09203233732e6275,0x367225202c367225\n"
".quad 0x744c240a3b31202c,0x32343638345f305f,0x6f6c3c2f2f200a3a,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x68202c373420656e,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x0a36383338345f30,0x3233752e766f6d09,0x202c333172250920\n"
".quad 0x70746573090a3b31,0x203233732e656c2e,0x7225202c33702509,0x3b33317225202c38\n"
".quad 0x622033702540090a,0x5f744c2409206172,0x3b34353139345f30,0x6f6f6c3c2f2f200a\n"
".quad 0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62,0x6568202c37342065\n"
".quad 0x6c6562616c206461,0x305f744c24206465,0x090a36383338345f,0x09383109636f6c2e\n"
".quad 0x7663090a30093635,0x3436662e6e722e74,0x662509203233732e,0x3b387225202c3664\n"
".quad 0x6e722e766964090a,0x662509203436662e,0x33646625202c3364,0x0a3b36646625202c\n"
".quad 0x383109636f6c2e09,0x73090a3009373509,0x09203233732e6275,0x387225202c387225\n"
".quad 0x744c240a3b31202c,0x34353139345f305f,0x6f6c3c2f2f200a3a,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x68202c373420656e,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x0a36383338345f30,0x3233752e766f6d09,0x202c343172250920\n"
".quad 0x70746573090a3b30,0x203233732e656e2e,0x7225202c34702509,0x3b34317225202c35\n"
".quad 0x622034702540090a,0x5f744c2409206172,0x3b36383338345f30,0x6e752e617262090a\n"
".quad 0x305f744c24092069,0x0a3b34373837345f,0x38365f305f744c24,0x6f6d090a3a343533\n"
".quad 0x2509203436662e76,0x336430202c336466,0x3030303030306666,0x3b30303030303030\n"
".quad 0x4c240a31202f2f09,0x373837345f305f74,0x2e766f6d090a3a34,0x3172250920323375\n"
".quad 0x73090a3b30202c35,0x732e656c2e707465,0x2c35702509203233,0x7225202c32722520\n"
".quad 0x702540090a3b3531,0x2409206172622035,0x3939345f305f744c,0x6f6c2e090a3b3232\n"
".quad 0x0931360938310963,0x722e747663090a30,0x33732e3436662e6e,0x2c37646625092032\n"
".quad 0x6d090a3b32722520,0x09203436662e766f,0x6430202c38646625,0x3030303030303030\n"
".quad 0x3030303030303030,0x090a30202f2f093b,0x752e71652e746573,0x09203436662e3233\n"
".quad 0x6625202c36317225,0x38646625202c3764,0x732e67656e090a3b,0x3731722509203233\n"
".quad 0x0a3b36317225202c,0x3436662e766f6d09,0x202c396466250920,0x3030306666336430\n"
".quad 0x3030303030303030,0x31202f2f093b3030,0x71652e746573090a,0x3436662e3233752e\n"
".quad 0x202c383172250920,0x6625202c32646625,0x67656e090a3b3964,0x722509203233732e\n"
".quad 0x38317225202c3931,0x33622e726f090a3b,0x2c30327225092032,0x25202c3731722520\n"
".quad 0x6f6d090a3b393172,0x2509203233752e76,0x0a3b30202c313272,0x71652e7074657309\n"
".quad 0x702509203233732e,0x2c30327225202c36,0x090a3b3132722520,0x6172622036702540\n"
".quad 0x5f305f744c240920,0x090a3b3433343035,0x09303309636f6c2e,0x090a300939363231\n"
".quad 0x203436662e766f6d,0x202c303164662509,0x3030306666336430,0x3030303030303030\n"
".quad 0x31202f2f093b3030,0x6e752e617262090a,0x6557444c24092069,0x73695f5f5f69646e\n"
".quad 0x5f3737315f6e616e,0x305f744c240a3b35,0x0a3a34333430355f,0x303309636f6c2e09\n"
".quad 0x0a30093137323109,0x3436662e73626109,0x2c31316466250920,0x090a3b3264662520\n"
".quad 0x203436662e766f6d,0x202c323164662509,0x3030306666376430,0x3030303030303030\n"
".quad 0x69202f2f093b3030,0x70746573090a666e,0x203436662e656c2e,0x6625202c37702509\n"
".quad 0x646625202c313164,0x252140090a3b3231,0x0920617262203770,0x36345f305f744c24\n"
".quad 0x736261090a3b3031,0x662509203436662e,0x646625202c333164,0x2e766f6d090a3b37\n"
".quad 0x6466250920343666,0x66376430202c3431,0x3030303030303066,0x093b303030303030\n"
".quad 0x090a666e69202f2f,0x2e656c2e70746573,0x3870250920343666,0x2c3331646625202c\n"
".quad 0x0a3b343164662520,0x7262203870254009,0x305f744c24092061,0x240a3b363638345f\n"
".quad 0x3136345f305f744c,0x636f6c2e090a3a30,0x3237323109303309,0x2e646461090a3009\n"
".quad 0x6466250920343666,0x37646625202c3031,0x0a3b32646625202c,0x696e752e61726209\n"
".quad 0x6e6557444c240920,0x6e73695f5f5f6964,0x355f3737315f6e61,0x5f305f744c240a3b\n"
".quad 0x2e090a3a36363834,0x3109303309636f6c,0x6d090a3009313732,0x09203436662e766f\n"
".quad 0x30202c3531646625,0x3030303066663764,0x3030303030303030,0x6e69202f2f093b30\n"
".quad 0x2e70746573090a66,0x09203436662e7165,0x646625202c397025,0x3531646625202c32\n"
".quad 0x3970252140090a3b,0x4c24092061726220,0x343930355f305f74,0x636f6c2e090a3b36\n"
".quad 0x3537323109303309,0x2e766f6d090a3009,0x6466250920343666,0x66376430202c3631\n"
".quad 0x3030303030303066,0x093b303030303030,0x090a666e69202f2f,0x203436662e766f6d\n"
".quad 0x202c373164662509,0x3030303030306430,0x3030303030303030,0x30202f2f093b3030\n"
".quad 0x36622e766f6d090a,0x323272257b092034,0x202c7d333272252c,0x6d090a3b37646625\n"
".quad 0x09203233732e766f,0x3b30202c34327225,0x672e70746573090a,0x2509203233732e65\n"
".quad 0x327225202c303170,0x3b34327225202c33,0x662e706c6573090a,0x3164662509203436\n"
".quad 0x3631646625202c30,0x2c3731646625202c,0x090a3b3031702520,0x20696e752e617262\n"
".quad 0x646e6557444c2409,0x616e73695f5f5f69,0x3b355f3737315f6e,0x355f305f744c240a\n"
".quad 0x2e090a3a36343930,0x3109303309636f6c,0x6d090a3009373732,0x09203436662e766f\n"
".quad 0x30202c3831646625,0x3030303066663764,0x3030303030303030,0x6e69202f2f093b30\n"
".quad 0x2e70746573090a66,0x09203436662e7165,0x6625202c31317025,0x646625202c333164\n"
".quad 0x252140090a3b3831,0x2061726220313170,0x355f305f744c2409,0x6d090a3b38353431\n"
".quad 0x09203436662e766f,0x30202c3931646625,0x3030303066666264,0x3030303030303030\n"
".quad 0x312d202f2f093b30,0x652e70746573090a,0x2509203436662e71,0x646625202c323170\n"
".quad 0x3931646625202c32,0x3170252140090a3b,0x2409206172622032,0x3931355f305f744c\n"
".quad 0x6f6c2e090a3b3037,0x3732310930330963,0x766f6d090a300939,0x662509203436662e\n"
".quad 0x336430202c303164,0x3030303030306666,0x3b30303030303030,0x62090a31202f2f09\n"
".quad 0x0920696e752e6172,0x69646e6557444c24,0x6e616e73695f5f5f,0x0a3b355f3737315f\n"
".quad 0x31355f305f744c24,0x6c2e090a3a303739,0x323109303309636f,0x6f6d090a30093138\n"
".quad 0x2509203436662e76,0x6430202c30326466,0x3030303030666637,0x3030303030303030\n"
".quad 0x666e69202f2f093b,0x36662e766f6d090a,0x3132646625092034,0x303030306430202c\n"
".quad 0x3030303030303030,0x2f2f093b30303030,0x2e766f6d090a3020,0x6466250920343666\n"
".quad 0x66336430202c3232,0x3030303030303066,0x093b303030303030,0x6573090a31202f2f\n"
".quad 0x36662e74672e7074,0x2c33317025092034,0x202c313164662520,0x090a3b3232646625\n"
".quad 0x3436662e706c6573,0x2c33326466250920,0x202c303264662520,0x25202c3132646625\n"
".quad 0x6f6d090a3b333170,0x2509203436662e76,0x6430202c34326466,0x3030303030303030\n"
".quad 0x3030303030303030,0x090a30202f2f093b,0x2e746c2e70746573,0x3170250920343666\n"
".quad 0x2c37646625202c34,0x0a3b343264662520,0x2034317025214009,0x744c240920617262\n"
".quad 0x32383432355f305f,0x09636f6c2e090a3b,0x0933383231093033,0x722e706372090a30\n"
".quad 0x2509203436662e6e,0x6625202c33326466,0x744c240a3b333264,0x32383432355f305f\n"
".quad 0x09636f6c2e090a3a,0x0935383231093033,0x662e766f6d090a30,0x3164662509203436\n"
".quad 0x3332646625202c30,0x752e617262090a3b,0x57444c240920696e,0x695f5f5f69646e65\n"
".quad 0x3737315f6e616e73,0x5f744c240a3b355f,0x3a38353431355f30,0x36662e766f6d090a\n"
".quad 0x3532646625092034,0x303030306430202c,0x3030303030303030,0x2f2f093b30303030\n"
".quad 0x70746573090a3020,0x203436662e71652e,0x25202c3531702509,0x646625202c326466\n"
".quad 0x252140090a3b3532,0x2061726220353170,0x355f305f744c2409,0x2e090a3b34393932\n"
".quad 0x3109303309636f6c,0x6d090a3009393832,0x09203436662e766f,0x30202c3632646625\n"
".quad 0x3030303065663364,0x3030303030303030,0x2e30202f2f093b30,0x662e6c756d090a35\n"
".quad 0x3264662509203436,0x2c37646625202c37,0x0a3b363264662520,0x697a722e74766309\n"
".quad 0x3436662e3436662e,0x2c38326466250920,0x0a3b373264662520,0x3436662e766f6d09\n"
".quad 0x2c39326466250920,0x3030303030643020,0x3030303030303030,0x202f2f093b303030\n"
".quad 0x662e646461090a30,0x3364662509203436,0x3832646625202c30,0x3b3832646625202c\n"
".quad 0x36662e627573090a,0x3133646625092034,0x202c37646625202c,0x090a3b3033646625\n"
".quad 0x203436662e736261,0x202c323364662509,0x090a3b3133646625,0x203436662e766f6d\n"
".quad 0x202c333364662509,0x3030306666336430,0x3030303030303030,0x31202f2f093b3030\n"
".quad 0x652e70746573090a,0x2509203436662e71,0x646625202c363170,0x33646625202c3233\n"
".quad 0x706c6573090a3b33,0x662509203436662e,0x646625202c333264,0x3932646625202c32\n"
".quad 0x0a3b36317025202c,0x3436662e766f6d09,0x2c34336466250920,0x3030303030643020\n"
".quad 0x3030303030303030,0x202f2f093b303030,0x2e70746573090a30,0x09203436662e746c\n"
".quad 0x6625202c37317025,0x33646625202c3764,0x70252140090a3b34,0x0920617262203731\n"
".quad 0x33355f305f744c24,0x6c2e090a3b363035,0x323109303309636f,0x6372090a30093139\n"
".quad 0x3436662e6e722e70,0x2c33326466250920,0x0a3b333264662520,0x33355f305f744c24\n"
".quad 0x6c2e090a3a363035,0x323109303309636f,0x6f6d090a30093339,0x2509203436662e76\n"
".quad 0x6625202c30316466,0x7262090a3b333264,0x240920696e752e61,0x5f69646e6557444c\n"
".quad 0x5f6e616e73695f5f,0x240a3b355f373731,0x3932355f305f744c,0x766f6d090a3a3439\n"
".quad 0x662509203436662e,0x666430202c353364,0x3030303030306666,0x3b30303030303030\n"
".quad 0x666e692d202f2f09,0x652e70746573090a,0x2509203436662e71,0x646625202c383170\n"
".quad 0x3533646625202c32,0x3170252140090a3b,0x2409206172622038,0x3034355f305f744c\n"
".quad 0x766f6d090a3b3831,0x662509203436662e,0x306430202c363364,0x3030303030303030\n"
".quad 0x3b30303030303030,0x73090a30202f2f09,0x662e746c2e707465,0x3931702509203436\n"
".quad 0x202c37646625202c,0x090a3b3633646625,0x6220393170252140,0x5f744c2409206172\n"
".quad 0x3b36383734355f30,0x3309636f6c2e090a,0x3009363932310930,0x6e722e706372090a\n"
".quad 0x662509203436662e,0x646625202c373364,0x2e67656e090a3b32,0x6466250920343666\n"
".quad 0x33646625202c3833,0x2e617262090a3b37,0x744c240920696e75,0x30333534355f305f\n"
".quad 0x5f305f744c240a3b,0x090a3a3638373435,0x203436662e67656e,0x202c383364662509\n"
".quad 0x4c240a3b32646625,0x333534355f305f74,0x2e766f6d090a3a30,0x6466250920343666\n"
".quad 0x33646625202c3332,0x2e766f6d090a3b38,0x6466250920343666,0x66336430202c3933\n"
".quad 0x3030303030303065,0x093b303030303030,0x090a352e30202f2f,0x203436662e6c756d\n"
".quad 0x202c303464662509,0x6625202c37646625,0x7663090a3b393364,0x36662e697a722e74\n"
".quad 0x2509203436662e34,0x6625202c31346466,0x6461090a3b303464,0x2509203436662e64\n"
".quad 0x6625202c32346466,0x646625202c313464,0x627573090a3b3134,0x662509203436662e\n"
".quad 0x646625202c333464,0x3234646625202c37,0x662e736261090a3b,0x3464662509203436\n"
".quad 0x3334646625202c34,0x662e766f6d090a3b,0x3464662509203436,0x6666336430202c35\n"
".quad 0x3030303030303030,0x2f093b3030303030,0x746573090a31202f,0x3436662e71652e70\n"
".quad 0x202c303270250920,0x25202c3434646625,0x40090a3b35346466,0x7262203032702521\n"
".quad 0x305f744c24092061,0x0a3b32343035355f,0x303309636f6c2e09,0x0a30093839323109\n"
".quad 0x3436622e766f6d09,0x202c316472250920,0x090a3b3332646625,0x203436622e726f78\n"
".quad 0x25202c3264722509,0x32392d202c316472,0x3633303237333332,0x3038353737343538\n"
".quad 0x2e766f6d090a3b38,0x6466250920343662,0x32647225202c3332,0x5f305f744c240a3b\n"
".quad 0x090a3a3234303535,0x09303309636f6c2e,0x090a300930303331,0x203436662e766f6d\n"
".quad 0x202c303164662509,0x090a3b3332646625,0x20696e752e617262,0x646e6557444c2409\n"
".quad 0x616e73695f5f5f69,0x3b355f3737315f6e,0x355f305f744c240a,0x2e090a3a38313034\n"
".quad 0x3109303309636f6c,0x6d090a3009323033,0x09203436662e766f,0x30202c3634646625\n"
".quad 0x3030303030303064,0x3030303030303030,0x0a30202f2f093b30,0x746c2e7074657309\n"
".quad 0x702509203436662e,0x32646625202c3132,0x3b3634646625202c,0x313270252140090a\n"
".quad 0x4c24092061726220,0x363838365f305f74,0x70746573090a3b36,0x3436662e75656e2e\n"
".quad 0x202c323270250920,0x6625202c37646625,0x252140090a3b3764,0x2061726220323270\n"
".quad 0x365f305f744c2409,0x2e090a3b36363838,0x3109303309636f6c,0x6d090a3009333033\n"
".quad 0x09203436662e766f,0x30202c3031646625,0x3030303866666664,0x3030303030303030\n"
".quad 0x6e2d202f2f093b30,0x2e617262090a6e61,0x444c240920696e75,0x5f5f5f69646e6557\n"
".quad 0x37315f6e616e7369,0x744c240a3b355f37,0x36363838365f305f,0x345f305f4c240a3a\n"
".quad 0x2e090a3a30353836,0x3509303309636f6c,0x6f6d090a30093939,0x7b09203436622e76\n"
".quad 0x3272252c35327225,0x31646625202c7d36,0x2e766f6d090a3b31,0x3272250920323373\n"
".quad 0x3b36327225202c37,0x3309636f6c2e090a,0x0a30093030360930,0x3436622e766f6d09\n"
".quad 0x2c383272257b0920,0x25202c7d39327225,0x2e090a3b31316466,0x3609303309636f6c\n"
".quad 0x6873090a30093130,0x2509203233732e72,0x327225202c303372,0x090a3b3032202c36\n"
".quad 0x203233622e646e61,0x25202c3133722509,0x343032202c303372,0x2e766f6d090a3b37\n"
".quad 0x3372250920323373,0x3b31337225202c32,0x33752e766f6d090a,0x2c33337225092032\n"
".quad 0x746573090a3b3020,0x3233732e656e2e70,0x202c333270250920,0x7225202c31337225\n"
".quad 0x702540090a3b3333,0x0920617262203332,0x35355f305f744c24,0x6c2e090a3b343535\n"
".quad 0x303609303309636f,0x766f6d090a300935,0x662509203436662e,0x346430202c373464\n"
".quad 0x3030303030303533,0x3b30303030303030,0x30382e31202f2f09,0x0a36312b65343431\n"
".quad 0x3436662e6c756d09,0x2c38346466250920,0x202c313164662520,0x090a3b3734646625\n"
".quad 0x203436622e766f6d,0x252c343372257b09,0x6625202c7d353372,0x6f6d090a3b383464\n"
".quad 0x2509203233732e76,0x337225202c373272,0x636f6c2e090a3b35,0x0936303609303309\n"
".quad 0x622e766f6d090a30,0x3272257b09203436,0x2c7d363372252c38,0x0a3b383464662520\n"
".quad 0x303309636f6c2e09,0x090a300938303609,0x203233732e726873,0x25202c3733722509\n"
".quad 0x3b3032202c353372,0x33622e646e61090a,0x2c38337225092032,0x32202c3733722520\n"
".quad 0x7573090a3b373430,0x2509203233732e62,0x337225202c323372,0x240a3b3435202c38\n"
".quad 0x3535355f305f744c,0x6f6c2e090a3a3435,0x3031360930330963,0x2e627573090a3009\n"
".quad 0x3372250920323373,0x2c32337225202c32,0x090a3b3332303120,0x09303309636f6c2e\n"
".quad 0x61090a3009363136,0x09203233622e646e,0x7225202c39337225,0x3431322d202c3732\n"
".quad 0x3b33373035333436,0x3233622e726f090a,0x202c303472250920,0x3031202c39337225\n"
".quad 0x3834323339363237,0x622e766f6d090a3b,0x3464662509203436,0x383272257b202c39\n"
".quad 0x0a3b7d303472252c,0x3233752e766f6d09,0x202c313472250920,0x3537323133373031\n"
".quad 0x746573090a3b3238,0x3233752e656c2e70,0x202c343270250920,0x7225202c30347225\n"
".quad 0x702540090a3b3134,0x0920617262203432,0x36355f305f744c24,0x6c2e090a3b363630\n"
".quad 0x313609303309636f,0x766f6d090a300938,0x257b09203436622e,0x333472252c323472\n"
".quad 0x3934646625202c7d,0x732e627573090a3b,0x3434722509203233,0x202c33347225202c\n"
".quad 0x3b36373538343031,0x36622e766f6d090a,0x353472257b092034,0x202c7d363472252c\n"
".quad 0x090a3b3934646625,0x203436622e766f6d,0x202c393464662509,0x72252c353472257b\n"
".quad 0x6c2e090a3b7d3434,0x313609303309636f,0x646461090a300939,0x722509203233732e\n"
".quad 0x32337225202c3233,0x744c240a3b31202c,0x36363036355f305f,0x09636f6c2e090a3a\n"
".quad 0x3009393236093033,0x36662e766f6d090a,0x3035646625092034,0x306666626430202c\n"
".quad 0x3030303030303030,0x2f2f093b30303030,0x646461090a312d20,0x662509203436662e\n"
".quad 0x646625202c313564,0x35646625202c3934,0x2e766f6d090a3b30,0x6466250920343666\n"
".quad 0x66336430202c3235,0x3030303030303066,0x093b303030303030,0x6461090a31202f2f\n"
".quad 0x2509203436662e64,0x6625202c33356466,0x646625202c393464,0x747663090a3b3235\n"
".quad 0x2e3233662e6e722e,0x3166250920343666,0x3b3335646625202c,0x6e722e706372090a\n"
".quad 0x662509203233662e,0x0a3b316625202c32,0x3436662e74766309,0x662509203233662e\n"
".quad 0x326625202c343564,0x662e67656e090a3b,0x3564662509203436,0x3335646625202c35\n"
".quad 0x662e766f6d090a3b,0x3564662509203436,0x6666336430202c36,0x3030303030303030\n"
".quad 0x2f093b3030303030,0x64616d090a31202f,0x203436662e6e722e,0x202c373564662509\n"
".quad 0x25202c3535646625,0x6625202c34356466,0x616d090a3b363564,0x3436662e6e722e64\n"
".quad 0x2c38356466250920,0x202c373564662520,0x25202c3735646625,0x6d090a3b37356466\n"
".quad 0x36662e6e722e6461,0x3935646625092034,0x2c3835646625202c,0x202c343564662520\n"
".quad 0x090a3b3435646625,0x203436662e6c756d,0x202c303664662509,0x25202c3135646625\n"
".quad 0x2e090a3b39356466,0x3609303309636f6c,0x6461090a30093933,0x2509203436662e64\n"
".quad 0x6625202c31366466,0x646625202c303664,0x6c756d090a3b3036,0x662509203436662e\n"
".quad 0x646625202c323664,0x36646625202c3136,0x2e766f6d090a3b31,0x6466250920343666\n"
".quad 0x65336430202c3336,0x6437666635663062,0x093b326566616332,0x3031302e31202f2f\n"
".quad 0x090a36302d653539,0x203436662e766f6d,0x202c343664662509,0x3566306465336430\n"
".quad 0x6233646131343264,0x34202f2f093b6135,0x2d6534363334302e,0x2e64616d090a3630\n"
".quad 0x09203436662e6e72,0x25202c3536646625,0x6625202c33366466,0x646625202c323664\n"
".quad 0x766f6d090a3b3436,0x662509203436662e,0x336430202c363664,0x3761303262336665\n"
".quad 0x3b66336138383435,0x37382e31202f2f09,0x0a35302d65313338,0x2e6e722e64616d09\n"
".quad 0x6466250920343666,0x36646625202c3736,0x3236646625202c35,0x3b3636646625202c\n"
".quad 0x36662e766f6d090a,0x3836646625092034,0x373166336430202c,0x6166346564633534\n"
".quad 0x2f2f093b35646365,0x32383737382e3820,0x616d090a35302d65,0x3436662e6e722e64\n"
".quad 0x2c39366466250920,0x202c373664662520,0x25202c3236646625,0x6d090a3b38366466\n"
".quad 0x09203436662e766f,0x30202c3037646625,0x6331376333663364,0x3837356138353237\n"
".quad 0x2e30202f2f093b62,0x3230343334303030,0x722e64616d090a38,0x2509203436662e6e\n"
".quad 0x6625202c31376466,0x646625202c393664,0x37646625202c3236,0x2e766f6d090a3b30\n"
".quad 0x6466250920343666,0x66336430202c3237,0x3239343239343236,0x093b303139623234\n"
".quad 0x3230302e30202f2f,0x6d090a3431323332,0x36662e6e722e6461,0x3337646625092034\n"
".quad 0x2c3137646625202c,0x202c323664662520,0x090a3b3237646625,0x203436662e766f6d\n"
".quad 0x202c343764662509,0x3939393866336430,0x6439393939393939,0x30202f2f093b6266\n"
".quad 0x6d090a353231302e,0x36662e6e722e6461,0x3537646625092034,0x2c3337646625202c\n"
".quad 0x202c323664662520,0x090a3b3437646625,0x09303309636f6c2e,0x6d090a3009303436\n"
".quad 0x09203436662e6c75,0x25202c3637646625,0x6625202c32366466,0x6c2e090a3b353764\n"
".quad 0x343609303309636f,0x627573090a300934,0x662509203436662e,0x646625202c373764\n"
".quad 0x36646625202c3135,0x2e67656e090a3b31,0x6466250920343666,0x36646625202c3837\n"
".quad 0x2e646461090a3b31,0x6466250920343666,0x37646625202c3937,0x3737646625202c37\n"
".quad 0x722e64616d090a3b,0x2509203436662e6e,0x6625202c30386466,0x646625202c383764\n"
".quad 0x37646625202c3135,0x2e6c756d090a3b39,0x6466250920343666,0x35646625202c3138\n"
".quad 0x3038646625202c39,0x09636f6c2e090a3b,0x3009353835093033,0x36662e766f6d090a\n"
".quad 0x3238646625092034,0x356266336430202c,0x3535353535353535,0x2f2f093b35353535\n"
".quad 0x33333338302e3020,0x2e646461090a3333,0x6466250920343666,0x37646625202c3338\n"
".quad 0x3238646625202c36,0x662e766f6d090a3b,0x3864662509203436,0x6266336430202c34\n"
".quad 0x3535353535353535,0x2f093b3535353535,0x333338302e30202f,0x627573090a333333\n"
".quad 0x662509203436662e,0x646625202c353864,0x38646625202c3438,0x2e646461090a3b33\n"
".quad 0x6466250920343666,0x37646625202c3638,0x3538646625202c36,0x662e766f6d090a3b\n"
".quad 0x3864662509203436,0x3463626430202c37,0x6230306263346136,0x2f093b3062376539\n"
".quad 0x3535342e322d202f,0x090a38312d653430,0x203436662e646461,0x202c383864662509\n"
".quad 0x25202c3638646625,0x61090a3b37386466,0x09203436662e6464,0x25202c3938646625\n"
".quad 0x6625202c33386466,0x756d090a3b383864,0x2509203436662e6c,0x6625202c30396466\n"
".quad 0x646625202c313664,0x627573090a3b3938,0x662509203436662e,0x646625202c313964\n"
".quad 0x38646625202c3338,0x2e646461090a3b39,0x6466250920343666,0x38646625202c3239\n"
".quad 0x3139646625202c38,0x662e67656e090a3b,0x3964662509203436,0x3039646625202c33\n"
".quad 0x722e64616d090a3b,0x2509203436662e6e,0x6625202c34396466,0x646625202c393864\n"
".quad 0x39646625202c3136,0x2e64616d090a3b33,0x09203436662e6e72,0x25202c3539646625\n"
".quad 0x6625202c32396466,0x646625202c313864,0x64616d090a3b3439,0x203436662e6e722e\n"
".quad 0x202c363964662509,0x25202c3938646625,0x6625202c31386466,0x6c2e090a3b353964\n"
".quad 0x383509303309636f,0x64616d090a300936,0x203436662e6e722e,0x202c373964662509\n"
".quad 0x25202c3239646625,0x6625202c31366466,0x6c2e090a3b363964,0x383509303309636f\n"
".quad 0x646461090a300937,0x662509203436662e,0x646625202c383964,0x39646625202c3039\n"
".quad 0x636f6c2e090a3b37,0x0938383509303309,0x662e627573090a30,0x3964662509203436\n"
".quad 0x3039646625202c39,0x3b3839646625202c,0x36662e646461090a,0x3031646625092034\n"
".quad 0x3739646625202c30,0x3b3939646625202c,0x3309636f6c2e090a,0x0a30093238350930\n"
".quad 0x3436662e6c756d09,0x3130316466250920,0x2c3136646625202c,0x0a3b383964662520\n"
".quad 0x303309636f6c2e09,0x090a300933383509,0x203436662e67656e,0x2c32303164662509\n"
".quad 0x3b31303164662520,0x6e722e64616d090a,0x662509203436662e,0x6625202c33303164\n"
".quad 0x646625202c383964,0x31646625202c3136,0x6f6c2e090a3b3230,0x3438350930330963\n"
".quad 0x2e64616d090a3009,0x09203436662e6e72,0x202c343031646625,0x202c303031646625\n"
".quad 0x25202c3138646625,0x090a3b3330316466,0x09303309636f6c2e,0x6d090a3009353835\n"
".quad 0x36662e6e722e6461,0x3031646625092034,0x3839646625202c35,0x2c3138646625202c\n"
".quad 0x3b34303164662520,0x3309636f6c2e090a,0x0a30093638350930,0x2e6e722e64616d09\n"
".quad 0x6466250920343666,0x646625202c363031,0x646625202c303031,0x31646625202c3136\n"
".quad 0x6f6c2e090a3b3530,0x3738350930330963,0x2e646461090a3009,0x6466250920343666\n"
".quad 0x646625202c373031,0x646625202c313031,0x6c2e090a3b363031,0x383509303309636f\n"
".quad 0x627573090a300938,0x662509203436662e,0x6625202c38303164,0x6625202c31303164\n"
".quad 0x61090a3b37303164,0x09203436662e6464,0x202c393031646625,0x202c363031646625\n"
".quad 0x0a3b383031646625,0x303309636f6c2e09,0x090a300932383509,0x203436662e6c756d\n"
".quad 0x2c30313164662509,0x202c313664662520,0x0a3b373031646625,0x303309636f6c2e09\n"
".quad 0x090a300936383509,0x203436662e67656e,0x2c31313164662509,0x3b30313164662520\n"
".quad 0x6e722e64616d090a,0x662509203436662e,0x6625202c32313164,0x6625202c37303164\n"
".quad 0x646625202c313664,0x616d090a3b313131,0x3436662e6e722e64,0x3331316466250920\n"
".quad 0x393031646625202c,0x2c3138646625202c,0x3b32313164662520,0x6e722e64616d090a\n"
".quad 0x662509203436662e,0x6625202c34313164,0x6625202c37303164,0x646625202c313864\n"
".quad 0x616d090a3b333131,0x3436662e6e722e64,0x3531316466250920,0x393031646625202c\n"
".quad 0x2c3136646625202c,0x3b34313164662520,0x3309636f6c2e090a,0x0a30093738350930\n"
".quad 0x3436662e64646109,0x3631316466250920,0x353131646625202c,0x303131646625202c\n"
".quad 0x09636f6c2e090a3b,0x3009323735093033,0x6e722e747663090a,0x3233732e3436662e\n"
".quad 0x3731316466250920,0x0a3b32337225202c,0x3436662e64646109,0x3831316466250920\n"
".quad 0x2c3136646625202c,0x3b36313164662520,0x36662e766f6d090a,0x3131646625092034\n"
".quad 0x6566336430202c39,0x6665663234653236,0x2f093b3030303361,0x313339362e30202f\n"
".quad 0x2e6c756d090a3734,0x6466250920343666,0x646625202c303231,0x646625202c373131\n"
".quad 0x7573090a3b393131,0x2509203436662e62,0x25202c3132316466,0x25202c3031316466\n"
".quad 0x090a3b3631316466,0x203436662e646461,0x2c32323164662509,0x2c35313164662520\n"
".quad 0x3b31323164662520,0x36662e627573090a,0x3231646625092034,0x3136646625202c33\n"
".quad 0x383131646625202c,0x662e646461090a3b,0x3164662509203436,0x31646625202c3432\n"
".quad 0x31646625202c3631,0x646461090a3b3332,0x662509203436662e,0x6625202c35323164\n"
".quad 0x6625202c32323164,0x61090a3b34323164,0x09203436662e6464,0x202c363231646625\n"
".quad 0x25202c3138646625,0x090a3b3532316466,0x203436662e646461,0x2c37323164662509\n"
".quad 0x2c38313164662520,0x3b36323164662520,0x36662e646461090a,0x3231646625092034\n"
".quad 0x3231646625202c38,0x3231646625202c30,0x2e627573090a3b37,0x6466250920343666\n"
".quad 0x646625202c393231,0x646625202c383131,0x6461090a3b373231,0x2509203436662e64\n"
".quad 0x25202c3033316466,0x25202c3632316466,0x090a3b3932316466,0x203436662e627573\n"
".quad 0x2c31333164662509,0x2c30323164662520,0x3b38323164662520,0x36662e646461090a\n"
".quad 0x3331646625092034,0x3231646625202c32,0x3331646625202c37,0x2e646461090a3b31\n"
".quad 0x6466250920343666,0x646625202c333331,0x646625202c303331,0x6f6d090a3b323331\n"
".quad 0x2509203436662e76,0x30202c3433316466,0x3665643335643364,0x6563653837326661\n"
".quad 0x2e32202f2f093b36,0x312d653335333238,0x722e64616d090a33,0x2509203436662e6e\n"
".quad 0x25202c3533316466,0x25202c3731316466,0x25202c3433316466,0x090a3b3333316466\n"
".quad 0x203436662e646461,0x2c36333164662509,0x2c38323164662520,0x3b35333164662520\n"
".quad 0x3309636f6c2e090a,0x0a30093337350930,0x3436662e62757309,0x3733316466250920\n"
".quad 0x383231646625202c,0x363331646625202c,0x662e646461090a3b,0x3164662509203436\n"
".quad 0x31646625202c3833,0x31646625202c3533,0x6f6c2e090a3b3733,0x3432310930330963\n"
".quad 0x766f6d090a300939,0x662509203436662e,0x6430202c39333164,0x3030303030326633\n"
".quad 0x3030303030303030,0x302e30202f2f093b,0x0a37303232313030,0x3436662e6c756d09\n"
".quad 0x3034316466250920,0x202c37646625202c,0x0a3b393331646625,0x3436662e766f6d09\n"
".quad 0x3134316466250920,0x643066376430202c,0x3430346562316132,0x2f2f093b30396638\n"
".quad 0x0a3430332b653120,0x74672e7074657309,0x702509203436662e,0x31646625202c3532\n"
".quad 0x3431646625202c33,0x706c6573090a3b31,0x662509203436662e,0x6625202c32343164\n"
".quad 0x6625202c30343164,0x35327025202c3764,0x662e6c756d090a3b,0x3164662509203436\n"
".quad 0x31646625202c3334,0x31646625202c3234,0x67656e090a3b3633,0x662509203436662e\n"
".quad 0x6625202c34343164,0x6d090a3b33343164,0x36662e6e722e6461,0x3431646625092034\n"
".quad 0x3331646625202c35,0x3431646625202c36,0x3431646625202c32,0x2e64616d090a3b34\n"
".quad 0x09203436662e6e72,0x202c363431646625,0x202c383331646625,0x202c323431646625\n"
".quad 0x0a3b353431646625,0x3436662e64646109,0x3734316466250920,0x333431646625202c\n"
".quad 0x363431646625202c,0x662e627573090a3b,0x3164662509203436,0x31646625202c3834\n"
".quad 0x31646625202c3334,0x646461090a3b3734,0x662509203436662e,0x6625202c39343164\n"
".quad 0x6625202c36343164,0x2e090a3b38343164,0x3709303309636f6c,0x6f6d090a30093133\n"
".quad 0x7b09203436622e76,0x3472252c37347225,0x31646625202c7d38,0x766f6d090a3b3734\n"
".quad 0x722509203233732e,0x3630312d202c3934,0x3b39353735373834,0x746c2e746573090a\n"
".quad 0x3233732e3233752e,0x202c303572250920,0x7225202c38347225,0x67656e090a3b3934\n"
".quad 0x722509203233732e,0x30357225202c3135,0x752e766f6d090a3b,0x3235722509203233\n"
".quad 0x333532383031202c,0x73090a3b30393435,0x33752e656c2e7465,0x2509203233752e32\n"
".quad 0x347225202c333572,0x3b32357225202c38,0x33732e67656e090a,0x2c34357225092032\n"
".quad 0x090a3b3335722520,0x09203233622e726f,0x7225202c35357225,0x34357225202c3135\n"
".quad 0x752e766f6d090a3b,0x3635722509203233,0x6573090a3b30202c,0x33732e71652e7074\n"
".quad 0x2c36327025092032,0x25202c3535722520,0x2540090a3b363572,0x2061726220363270\n"
".quad 0x355f305f744c2409,0x2e090a3b38373536,0x3709303309636f6c,0x6f6d090a30093330\n"
".quad 0x2509203436662e76,0x30202c3035316466,0x3435313766663364,0x6632386232353637\n"
".quad 0x2e31202f2f093b65,0x756d090a37323434,0x2509203436662e6c,0x25202c3135316466\n"
".quad 0x25202c3734316466,0x090a3b3035316466,0x09303309636f6c2e,0x63090a3009353037\n"
".quad 0x662e696e722e7476,0x09203436662e3436,0x202c323531646625,0x0a3b313531646625\n"
".quad 0x3436662e766f6d09,0x3335316466250920,0x366566626430202c,0x6166656632346532\n"
".quad 0x2f2f093b66653933,0x313339362e302d20,0x2e64616d090a3734,0x09203436662e6e72\n"
".quad 0x202c343531646625,0x202c323531646625,0x202c333531646625,0x0a3b373431646625\n"
".quad 0x303309636f6c2e09,0x090a300936303709,0x203436662e766f6d,0x2c35353164662509\n"
".quad 0x6261376362643020,0x3839336233653963,0x202f2f093b663330,0x35303931332e322d\n"
".quad 0x616d090a37312d65,0x3436662e6e722e64,0x3635316466250920,0x323531646625202c\n"
".quad 0x353531646625202c,0x343531646625202c,0x09636f6c2e090a3b,0x3009303233093033\n"
".quad 0x36662e766f6d090a,0x3531646625092034,0x3265336430202c37,0x6663636637306631\n"
".quad 0x2f093b6461623835,0x343838302e32202f,0x6d090a39302d6533,0x09203436662e766f\n"
".quad 0x202c383531646625,0x6466613565336430,0x6233633661643138,0x32202f2f093b6661\n"
".quad 0x2d6536363331352e,0x2e64616d090a3830,0x09203436662e6e72,0x202c393531646625\n"
".quad 0x202c373531646625,0x202c363531646625,0x0a3b383531646625,0x3436662e766f6d09\n"
".quad 0x3036316466250920,0x323965336430202c,0x6630366635356537,0x2f2f093b36653038\n"
".quad 0x35373535372e3220,0x616d090a37302d65,0x3436662e6e722e64,0x3136316466250920\n"
".quad 0x393531646625202c,0x363531646625202c,0x303631646625202c,0x662e766f6d090a3b\n"
".quad 0x3164662509203436,0x65336430202c3236,0x6638616464313763,0x093b363636643230\n"
".quad 0x3535372e32202f2f,0x090a36302d653237,0x662e6e722e64616d,0x3164662509203436\n"
".quad 0x31646625202c3336,0x31646625202c3136,0x31646625202c3635,0x766f6d090a3b3236\n"
".quad 0x662509203436662e,0x6430202c34363164,0x3061313061666533,0x3065343938623331\n"
".quad 0x342e32202f2f093b,0x35302d6536313038,0x6e722e64616d090a,0x662509203436662e\n"
".quad 0x6625202c35363164,0x6625202c33363164,0x6625202c36353164,0x6d090a3b34363164\n"
".quad 0x09203436662e766f,0x202c363631646625,0x3130613266336430,0x3766613364313061\n"
".quad 0x30202f2f093b3838,0x343839313030302e,0x2e64616d090a3331,0x09203436662e6e72\n"
".quad 0x202c373631646625,0x202c353631646625,0x202c363531646625,0x0a3b363631646625\n"
".quad 0x3436662e766f6d09,0x3836316466250920,0x363566336430202c,0x3363363163363163\n"
".quad 0x2f2f093b63653161,0x38333130302e3020,0x64616d090a393838,0x203436662e6e722e\n"
".quad 0x2c39363164662509,0x2c37363164662520,0x2c36353164662520,0x3b38363164662520\n"
".quad 0x3309636f6c2e090a,0x0a30093132330930,0x3436662e766f6d09,0x3037316466250920\n"
".quad 0x313866336430202c,0x3031313131313131,0x2f2f093b31363139,0x33333830302e3020\n"
".quad 0x64616d090a333333,0x203436662e6e722e,0x2c31373164662509,0x2c39363164662520\n"
".quad 0x2c36353164662520,0x3b30373164662520,0x3309636f6c2e090a,0x0a30093232330930\n"
".quad 0x3436662e766f6d09,0x3237316466250920,0x356166336430202c,0x3535353535353535\n"
".quad 0x2f2f093b31633435,0x36363134302e3020,0x2e64616d090a3736,0x09203436662e6e72\n"
".quad 0x202c333731646625,0x202c313731646625,0x202c363531646625,0x0a3b323731646625\n"
".quad 0x303309636f6c2e09,0x090a300933323309,0x203436662e766f6d,0x2c34373164662509\n"
".quad 0x3535636633643020,0x3535353535353535,0x202f2f093b663635,0x3736363636312e30\n"
".quad 0x6e722e64616d090a,0x662509203436662e,0x6625202c35373164,0x6625202c33373164\n"
".quad 0x6625202c36353164,0x2e090a3b34373164,0x3309303309636f6c,0x6f6d090a30093432\n"
".quad 0x2509203436662e76,0x30202c3637316466,0x3030303065663364,0x3030303030303030\n"
".quad 0x2e30202f2f093b30,0x722e64616d090a35,0x2509203436662e6e,0x25202c3737316466\n"
".quad 0x25202c3537316466,0x25202c3635316466,0x090a3b3637316466,0x09303309636f6c2e\n"
".quad 0x6d090a3009363233,0x09203436662e6c75,0x202c383731646625,0x202c363531646625\n"
".quad 0x0a3b373731646625,0x2e6e722e64616d09,0x6466250920343666,0x646625202c393731\n"
".quad 0x646625202c383731,0x646625202c363531,0x6c2e090a3b363531,0x303709303309636f\n"
".quad 0x747663090a300938,0x3233732e697a722e,0x722509203436662e,0x31646625202c3735\n"
".quad 0x6c6873090a3b3235,0x722509203233622e,0x37357225202c3835,0x61090a3b3032202c\n"
".quad 0x09203233732e6464,0x7225202c39357225,0x32373031202c3835,0x0a3b383432333936\n"
".quad 0x3233752e64646109,0x202c303672250920,0x3031202c37357225,0x766f6d090a3b3032\n"
".quad 0x722509203233752e,0x30343032202c3136,0x2e70746573090a3b,0x09203233752e7467\n"
".quad 0x7225202c37327025,0x31367225202c3036,0x3732702540090a3b,0x4c24092061726220\n"
".quad 0x343337355f305f74,0x636f6c2e090a3b36,0x0931313709303309,0x732e766f6d090a30\n"
".quad 0x3236722509203233,0x6f6d090a3b30202c,0x2509203436622e76,0x7b202c3038316466\n"
".quad 0x3572252c32367225,0x64616d090a3b7d39,0x203436662e6e722e,0x2c36353164662509\n"
".quad 0x2c39373164662520,0x2c30383164662520,0x3b30383164662520,0x6e752e617262090a\n"
".quad 0x305f744c24092069,0x0a3b30393037355f,0x37355f305f744c24,0x6f6d090a3a363433\n"
".quad 0x2509203233752e76,0x0a3b30202c333672,0x65672e7074657309,0x702509203233732e\n"
".quad 0x37357225202c3832,0x0a3b33367225202c,0x6220383270254009,0x5f744c2409206172\n"
".quad 0x3b38353837355f30,0x3309636f6c2e090a,0x0a30093531370930,0x3233732e64646109\n"
".quad 0x202c393572250920,0x3735202c39357225,0x0a3b303836313736,0x3233732e766f6d09\n"
".quad 0x202c343672250920,0x3130373036313031,0x617262090a3b3434,0x4c240920696e752e\n"
".quad 0x303637355f305f74,0x305f744c240a3b32,0x0a3a38353837355f,0x3233732e766f6d09\n"
".quad 0x202c343672250920,0x3831343733373031,0x5f744c240a3b3432,0x3a32303637355f30\n"
".quad 0x3309636f6c2e090a,0x0a30093232370930,0x3233732e766f6d09,0x202c353672250920\n"
".quad 0x2e766f6d090a3b30,0x6466250920343662,0x72257b202c313831,0x7d343672252c3536\n"
".quad 0x722e64616d090a3b,0x2509203436662e6e,0x25202c3238316466,0x25202c3937316466\n"
".quad 0x25202c3138316466,0x090a3b3138316466,0x203233732e627573,0x25202c3636722509\n"
".quad 0x343031202c393572,0x6d090a3b36373538,0x09203233732e766f,0x3b30202c37367225\n"
".quad 0x36622e766f6d090a,0x3831646625092034,0x373672257b202c33,0x0a3b7d363672252c\n"
".quad 0x3436662e6c756d09,0x3635316466250920,0x323831646625202c,0x333831646625202c\n"
".quad 0x5f305f744c240a3b,0x090a3a3039303735,0x09303309636f6c2e,0x6d090a3009343337\n"
".quad 0x09203436662e766f,0x202c343831646625,0x0a3b363531646625,0x696e752e61726209\n"
".quad 0x6e6557444c240920,0x5f746e69725f6964,0x240a3b365f373731,0x3536355f305f744c\n"
".quad 0x6f6c2e090a3a3837,0x0936390930330963,0x662e736261090a30,0x3164662509203436\n"
".quad 0x31646625202c3538,0x766f6d090a3b3734,0x662509203436662e,0x6430202c36383164\n"
".quad 0x3030303030666637,0x3030303030303030,0x666e69202f2f093b,0x6c2e70746573090a\n"
".quad 0x2509203436662e65,0x646625202c393270,0x646625202c353831,0x6573090a3b363831\n"
".quad 0x09203233732e706c,0x2c30202c38367225,0x39327025202c3120,0x09636f6c2e090a3b\n"
".quad 0x3009303437093033,0x36662e646461090a,0x3831646625092034,0x3431646625202c37\n"
".quad 0x3431646625202c37,0x2e766f6d090a3b37,0x6466250920343666,0x376430202c383831\n"
".quad 0x3030303030306666,0x3b30303030303030,0x0a666e69202f2f09,0x3436662e766f6d09\n"
".quad 0x3938316466250920,0x303030306430202c,0x3030303030303030,0x2f2f093b30303030\n"
".quad 0x2e766f6d090a3020,0x3672250920323373,0x73090a3b30202c39,0x732e65672e707465\n"
".quad 0x3033702509203233,0x202c38347225202c,0x73090a3b39367225,0x203436662e706c65\n"
".quad 0x2c30393164662509,0x2c38383164662520,0x2c39383164662520,0x090a3b3033702520\n"
".quad 0x203233732e766f6d,0x30202c3037722509,0x2e70746573090a3b,0x09203233732e656e\n"
".quad 0x7225202c31337025,0x30377225202c3836,0x2e706c6573090a3b,0x6466250920343666\n"
".quad 0x646625202c343831,0x646625202c373831,0x337025202c303931,0x6557444c240a3b31\n"
".quad 0x746e69725f69646e,0x0a3a365f3737315f,0x303309636f6c2e09,0x0a30093235323109\n"
".quad 0x3436662e766f6d09,0x3139316466250920,0x343831646625202c,0x662e766f6d090a3b\n"
".quad 0x3164662509203436,0x31646625202c3239,0x6f6c2e090a3b3139,0x3532310930330963\n"
".quad 0x736261090a300934,0x662509203436662e,0x6625202c33393164,0x6d090a3b31393164\n"
".quad 0x09203436662e766f,0x202c343931646625,0x3030306666376430,0x3030303030303030\n"
".quad 0x69202f2f093b3030,0x70746573090a666e,0x203436662e71652e,0x25202c3233702509\n"
".quad 0x25202c3339316466,0x090a3b3439316466,0x7262203233702540,0x305f744c24092061\n"
".quad 0x0a3b34313138355f,0x303309636f6c2e09,0x0a30093835323109,0x2e6e722e64616d09\n"
".quad 0x6466250920343666,0x646625202c323931,0x646625202c313931,0x646625202c393431\n"
".quad 0x744c240a3b313931,0x34313138355f305f,0x09636f6c2e090a3a,0x0936303331093033\n"
".quad 0x662e766f6d090a30,0x3264662509203436,0x3931646625202c33,0x2e766f6d090a3b32\n"
".quad 0x6466250920343666,0x336430202c353931,0x3030303030306566,0x3b30303030303030\n"
".quad 0x0a352e30202f2f09,0x3436662e6c756d09,0x3639316466250920,0x202c37646625202c\n"
".quad 0x0a3b353931646625,0x697a722e74766309,0x3436662e3436662e,0x3739316466250920\n"
".quad 0x363931646625202c,0x2e706c6573090a3b,0x3772250920323373,0x2c30202c31202c31\n"
".quad 0x090a3b3132702520,0x203436662e646461,0x2c38393164662509,0x2c37393164662520\n"
".quad 0x3b37393164662520,0x36662e627573090a,0x3931646625092034,0x2c37646625202c39\n"
".quad 0x3b38393164662520,0x36662e736261090a,0x3032646625092034,0x3931646625202c30\n"
".quad 0x2e766f6d090a3b39,0x6466250920343666,0x336430202c313032,0x3030303030306666\n"
".quad 0x3b30303030303030,0x73090a31202f2f09,0x33752e71652e7465,0x2509203436662e32\n"
".quad 0x646625202c323772,0x646625202c303032,0x656e090a3b313032,0x2509203233732e67\n"
".quad 0x377225202c333772,0x2e646e61090a3b32,0x3772250920323362,0x2c31377225202c34\n"
".quad 0x090a3b3337722520,0x203233752e766f6d,0x30202c3537722509,0x2e70746573090a3b\n"
".quad 0x09203233732e7165,0x7225202c33337025,0x35377225202c3437,0x3333702540090a3b\n"
".quad 0x4c24092061726220,0x323638355f305f74,0x636f6c2e090a3b36,0x3830333109303309\n"
".quad 0x2e766f6d090a3009,0x6472250920343662,0x3332646625202c33,0x622e726f78090a3b\n"
".quad 0x3464722509203436,0x202c33647225202c,0x323733333232392d,0x3737343538363330\n"
".quad 0x6d090a3b38303835,0x09203436622e766f,0x25202c3332646625,0x744c240a3b346472\n"
".quad 0x36323638355f305f,0x09636f6c2e090a3a,0x0930313331093033,0x662e766f6d090a30\n"
".quad 0x3164662509203436,0x3332646625202c30,0x6e6557444c240a3b,0x6e73695f5f5f6964\n"
".quad 0x355f3737315f6e61,0x09636f6c2e090a3a,0x0a30093136093831,0x3436662e6c756d09\n"
".quad 0x202c336466250920,0x25202c3031646625,0x744c240a3b336466,0x32323939345f305f\n"
".quad 0x752e766f6d090a3a,0x3637722509203233,0x6573090a3b30202c,0x33732e656c2e7074\n"
".quad 0x2c34337025092032,0x7225202c37722520,0x702540090a3b3637,0x0920617262203433\n"
".quad 0x39355f305f744c24,0x6c2e090a3b383331,0x333609383109636f,0x2e766f6d090a3009\n"
".quad 0x6466250920343666,0x336430202c323032,0x3030303030306666,0x3b30303030303030\n"
".quad 0x73090a31202f2f09,0x09203436662e6275,0x202c333032646625,0x202c323032646625\n"
".quad 0x63090a3b32646625,0x36662e6e722e7476,0x2509203233732e34,0x25202c3430326466\n"
".quad 0x766f6d090a3b3772,0x662509203436662e,0x6430202c35303264,0x3030303030666633\n"
".quad 0x3030303030303030,0x090a31202f2f093b,0x752e71652e746573,0x09203436662e3233\n"
".quad 0x6625202c37377225,0x6625202c33303264,0x6e090a3b35303264,0x09203233732e6765\n"
".quad 0x7225202c38377225,0x766f6d090a3b3737,0x662509203436662e,0x6430202c36303264\n"
".quad 0x3030303030303030,0x3030303030303030,0x090a30202f2f093b,0x752e71652e746573\n"
".quad 0x09203436662e3233,0x6625202c39377225,0x6625202c34303264,0x6e090a3b36303264\n"
".quad 0x09203233732e6765,0x7225202c30387225,0x2e726f090a3b3937,0x3872250920323362\n"
".quad 0x2c38377225202c31,0x090a3b3038722520,0x203233752e766f6d,0x30202c3238722509\n"
".quad 0x2e70746573090a3b,0x09203233732e7165,0x7225202c35337025,0x32387225202c3138\n"
".quad 0x3533702540090a3b,0x4c24092061726220,0x353639355f305f74,0x636f6c2e090a3b30\n"
".quad 0x3936323109303309,0x2e766f6d090a3009,0x6466250920343666,0x336430202c373032\n"
".quad 0x3030303030306666,0x3b30303030303030,0x62090a31202f2f09,0x0920696e752e6172\n"
".quad 0x69646e6557444c24,0x6e616e73695f5f5f,0x0a3b315f3737315f,0x39355f305f744c24\n"
".quad 0x6c2e090a3a303536,0x323109303309636f,0x6261090a30093137,0x2509203436662e73\n"
".quad 0x25202c3830326466,0x090a3b3330326466,0x203436662e766f6d,0x2c39303264662509\n"
".quad 0x3030666637643020,0x3030303030303030,0x202f2f093b303030,0x746573090a666e69\n"
".quad 0x3436662e656c2e70,0x202c363370250920,0x202c383032646625,0x0a3b393032646625\n"
".quad 0x2036337025214009,0x744c240920617262,0x32303239315f305f,0x662e736261090a3b\n"
".quad 0x3264662509203436,0x32646625202c3031,0x766f6d090a3b3430,0x662509203436662e\n"
".quad 0x6430202c31313264,0x3030303030666637,0x3030303030303030,0x666e69202f2f093b\n"
".quad 0x6c2e70746573090a,0x2509203436662e65,0x646625202c373370,0x646625202c303132\n"
".quad 0x2540090a3b313132,0x2061726220373370,0x315f305f744c2409,0x4c240a3b38353439\n"
".quad 0x303239315f305f74,0x636f6c2e090a3a32,0x3237323109303309,0x2e646461090a3009\n"
".quad 0x6466250920343666,0x646625202c373032,0x646625202c333032,0x7262090a3b343032\n"
".quad 0x240920696e752e61,0x5f69646e6557444c,0x5f6e616e73695f5f,0x240a3b315f373731\n"
".quad 0x3439315f305f744c,0x6f6c2e090a3a3835,0x3732310930330963,0x766f6d090a300931\n"
".quad 0x662509203436662e,0x6430202c32313264,0x3030303030666637,0x3030303030303030\n"
".quad 0x666e69202f2f093b,0x652e70746573090a,0x2509203436662e71,0x646625202c383370\n"
".quad 0x646625202c333032,0x2140090a3b323132,0x6172622038337025,0x5f305f744c240920\n"
".quad 0x090a3b3236313036,0x09303309636f6c2e,0x090a300935373231,0x203436662e766f6d\n"
".quad 0x2c33313264662509,0x3030666637643020,0x3030303030303030,0x202f2f093b303030\n"
".quad 0x766f6d090a666e69,0x662509203436662e,0x6430202c34313264,0x3030303030303030\n"
".quad 0x3030303030303030,0x090a30202f2f093b,0x203436622e766f6d,0x252c333872257b09\n"
".quad 0x6625202c7d343872,0x6d090a3b34303264,0x09203233732e766f,0x3b30202c35387225\n"
".quad 0x672e70746573090a,0x2509203233732e65,0x387225202c393370,0x3b35387225202c34\n"
".quad 0x662e706c6573090a,0x3264662509203436,0x32646625202c3730,0x32646625202c3331\n"
".quad 0x39337025202c3431,0x752e617262090a3b,0x57444c240920696e,0x695f5f5f69646e65\n"
".quad 0x3737315f6e616e73,0x5f744c240a3b315f,0x3a32363130365f30,0x3309636f6c2e090a\n"
".quad 0x3009373732310930,0x36662e766f6d090a,0x3132646625092034,0x6666376430202c35\n"
".quad 0x3030303030303030,0x2f093b3030303030,0x73090a666e69202f,0x662e71652e707465\n"
".quad 0x3034702509203436,0x303132646625202c,0x353132646625202c,0x3470252140090a3b\n"
".quad 0x2409206172622030,0x3630365f305f744c,0x766f6d090a3b3437,0x662509203436662e\n"
".quad 0x6430202c36313264,0x3030303030666662,0x3030303030303030,0x0a312d202f2f093b\n"
".quad 0x71652e7074657309,0x702509203436662e,0x32646625202c3134,0x32646625202c3330\n"
".quad 0x252140090a3b3631,0x2061726220313470,0x365f305f744c2409,0x2e090a3b36383131\n"
".quad 0x3109303309636f6c,0x6d090a3009393732,0x09203436662e766f,0x202c373032646625\n"
".quad 0x3030306666336430,0x3030303030303030,0x31202f2f093b3030,0x6e752e617262090a\n"
".quad 0x6557444c24092069,0x73695f5f5f69646e,0x5f3737315f6e616e,0x305f744c240a3b31\n"
".quad 0x0a3a36383131365f,0x303309636f6c2e09,0x0a30093138323109,0x3436662e766f6d09\n"
".quad 0x3731326466250920,0x306666376430202c,0x3030303030303030,0x2f2f093b30303030\n"
".quad 0x6f6d090a666e6920,0x2509203436662e76,0x30202c3831326466,0x3030303030303064\n"
".quad 0x3030303030303030,0x0a30202f2f093b30,0x3436662e766f6d09,0x3931326466250920\n"
".quad 0x306666336430202c,0x3030303030303030,0x2f2f093b30303030,0x70746573090a3120\n"
".quad 0x203436662e74672e,0x25202c3234702509,0x25202c3830326466,0x090a3b3931326466\n"
".quad 0x3436662e706c6573,0x2c33326466250920,0x2c37313264662520,0x2c38313264662520\n"
".quad 0x090a3b3234702520,0x203436662e766f6d,0x2c30323264662509,0x3030303030643020\n"
".quad 0x3030303030303030,0x202f2f093b303030,0x2e70746573090a30,0x09203436662e746c\n"
".quad 0x6625202c33347025,0x6625202c34303264,0x40090a3b30323264,0x7262203334702521\n"
".quad 0x305f744c24092061,0x0a3b38393631365f,0x303309636f6c2e09,0x0a30093338323109\n"
".quad 0x2e6e722e70637209,0x6466250920343666,0x32646625202c3332,0x305f744c240a3b33\n"
".quad 0x0a3a38393631365f,0x303309636f6c2e09,0x0a30093538323109,0x3436662e766f6d09\n"
".quad 0x3730326466250920,0x3b3332646625202c,0x6e752e617262090a,0x6557444c24092069\n"
".quad 0x73695f5f5f69646e,0x5f3737315f6e616e,0x305f744c240a3b31,0x0a3a34373630365f\n"
".quad 0x3436662e766f6d09,0x3132326466250920,0x303030306430202c,0x3030303030303030\n"
".quad 0x2f2f093b30303030,0x70746573090a3020,0x203436662e71652e,0x25202c3434702509\n"
".quad 0x25202c3330326466,0x090a3b3132326466,0x6220343470252140,0x5f744c2409206172\n"
".quad 0x3b30313232365f30,0x3309636f6c2e090a,0x3009393832310930,0x36662e766f6d090a\n"
".quad 0x3232646625092034,0x6566336430202c32,0x3030303030303030,0x2f093b3030303030\n"
".quad 0x6d090a352e30202f,0x09203436662e6c75,0x202c333232646625,0x202c343032646625\n"
".quad 0x0a3b323232646625,0x697a722e74766309,0x3436662e3436662e,0x3432326466250920\n"
".quad 0x333232646625202c,0x662e766f6d090a3b,0x3264662509203436,0x30306430202c3532\n"
".quad 0x3030303030303030,0x093b303030303030,0x6461090a30202f2f,0x2509203436662e64\n"
".quad 0x25202c3632326466,0x25202c3432326466,0x090a3b3432326466,0x203436662e627573\n"
".quad 0x2c37323264662509,0x2c34303264662520,0x3b36323264662520,0x36662e736261090a\n"
".quad 0x3232646625092034,0x3232646625202c38,0x2e766f6d090a3b37,0x6466250920343666\n"
".quad 0x336430202c393232,0x3030303030306666,0x3b30303030303030,0x73090a31202f2f09\n"
".quad 0x662e71652e707465,0x3534702509203436,0x383232646625202c,0x393232646625202c\n"
".quad 0x2e706c6573090a3b,0x6466250920343666,0x32646625202c3332,0x32646625202c3330\n"
".quad 0x35347025202c3532,0x662e766f6d090a3b,0x3264662509203436,0x30306430202c3033\n"
".quad 0x3030303030303030,0x093b303030303030,0x6573090a30202f2f,0x36662e746c2e7074\n"
".quad 0x2c36347025092034,0x2c34303264662520,0x3b30333264662520,0x363470252140090a\n"
".quad 0x4c24092061726220,0x323732365f305f74,0x636f6c2e090a3b32,0x3139323109303309\n"
".quad 0x2e706372090a3009,0x09203436662e6e72,0x25202c3332646625,0x4c240a3b33326466\n"
".quad 0x323732365f305f74,0x636f6c2e090a3a32,0x3339323109303309,0x2e766f6d090a3009\n"
".quad 0x6466250920343666,0x646625202c373032,0x617262090a3b3332,0x4c240920696e752e\n"
".quad 0x5f5f69646e655744,0x315f6e616e73695f,0x4c240a3b315f3737,0x313232365f305f74\n"
".quad 0x2e766f6d090a3a30,0x6466250920343666,0x666430202c313332,0x3030303030306666\n"
".quad 0x3b30303030303030,0x666e692d202f2f09,0x652e70746573090a,0x2509203436662e71\n"
".quad 0x646625202c373470,0x646625202c333032,0x2140090a3b313332,0x6172622037347025\n"
".quad 0x5f305f744c240920,0x090a3b3433323336,0x203436662e766f6d,0x2c32333264662509\n"
".quad 0x3030303030643020,0x3030303030303030,0x202f2f093b303030,0x2e70746573090a30\n"
".quad 0x09203436662e746c,0x6625202c38347025,0x6625202c34303264,0x40090a3b32333264\n"
".quad 0x7262203834702521,0x305f744c24092061,0x0a3b32303034365f,0x303309636f6c2e09\n"
".quad 0x0a30093639323109,0x2e6e722e70637209,0x6466250920343666,0x646625202c333332\n"
".quad 0x656e090a3b333032,0x2509203436662e67,0x25202c3433326466,0x090a3b3333326466\n"
".quad 0x20696e752e617262,0x365f305f744c2409,0x4c240a3b36343733,0x303034365f305f74\n"
".quad 0x2e766f6d090a3a32,0x6466250920343666,0x626430202c353332,0x3030303030306666\n"
".quad 0x3b30303030303030,0x090a312d202f2f09,0x203436662e646461,0x2c34333264662509\n"
".quad 0x25202c3264662520,0x240a3b3533326466,0x3733365f305f744c,0x766f6d090a3a3634\n"
".quad 0x662509203436662e,0x646625202c333264,0x6f6d090a3b343332,0x2509203436662e76\n"
".quad 0x30202c3633326466,0x3030303065663364,0x3030303030303030,0x2e30202f2f093b30\n"
".quad 0x662e6c756d090a35,0x3264662509203436,0x32646625202c3733,0x32646625202c3430\n"
".quad 0x747663090a3b3633,0x3436662e697a722e,0x662509203436662e,0x6625202c38333264\n"
".quad 0x61090a3b37333264,0x09203436662e6464,0x202c393332646625,0x202c383332646625\n"
".quad 0x0a3b383332646625,0x3436662e62757309,0x3034326466250920,0x343032646625202c\n"
".quad 0x393332646625202c,0x662e736261090a3b,0x3264662509203436,0x32646625202c3134\n"
".quad 0x766f6d090a3b3034,0x662509203436662e,0x6430202c32343264,0x3030303030666633\n"
".quad 0x3030303030303030,0x090a31202f2f093b,0x2e71652e70746573,0x3470250920343666\n"
".quad 0x3432646625202c39,0x3432646625202c31,0x70252140090a3b32,0x0920617262203934\n"
".quad 0x34365f305f744c24,0x6c2e090a3b383532,0x323109303309636f,0x6f6d090a30093839\n"
".quad 0x2509203436622e76,0x646625202c356472,0x726f78090a3b3332,0x722509203436622e\n"
".quad 0x35647225202c3664,0x33333232392d202c,0x3435383633303237,0x0a3b383038353737\n"
".quad 0x3436622e766f6d09,0x2c33326466250920,0x240a3b3664722520,0x3234365f305f744c\n"
".quad 0x6f6c2e090a3a3835,0x3033310930330963,0x766f6d090a300930,0x662509203436662e\n"
".quad 0x6625202c37303264,0x7262090a3b333264,0x240920696e752e61,0x5f69646e6557444c\n"
".quad 0x5f6e616e73695f5f,0x240a3b315f373731,0x3233365f305f744c,0x6f6c2e090a3a3433\n"
".quad 0x3033310930330963,0x766f6d090a300932,0x662509203436662e,0x6430202c33343264\n"
".quad 0x3030303030303030,0x3030303030303030,0x090a30202f2f093b,0x2e746c2e70746573\n"
".quad 0x3570250920343666,0x3032646625202c30,0x3432646625202c33,0x70252140090a3b33\n"
".quad 0x0920617262203035,0x39365f305f744c24,0x6573090a3b343336,0x662e75656e2e7074\n"
".quad 0x3135702509203436,0x343032646625202c,0x343032646625202c,0x3570252140090a3b\n"
".quad 0x2409206172622031,0x3639365f305f744c,0x6f6c2e090a3b3433,0x3033310930330963\n"
".quad 0x766f6d090a300933,0x662509203436662e,0x6430202c37303264,0x3030303038666666\n"
".quad 0x3030303030303030,0x616e2d202f2f093b,0x752e617262090a6e,0x57444c240920696e\n"
".quad 0x695f5f5f69646e65,0x3737315f6e616e73,0x5f744c240a3b315f,0x3a34333639365f30\n"
".quad 0x37345f305f4c240a,0x6c2e090a3a323633,0x393509303309636f,0x766f6d090a300939\n"
".quad 0x257b09203436622e,0x373872252c363872,0x3032646625202c7d,0x2e766f6d090a3b38\n"
".quad 0x3272250920323373,0x3b37387225202c37,0x3309636f6c2e090a,0x0a30093030360930\n"
".quad 0x3436622e766f6d09,0x2c383272257b0920,0x25202c7d38387225,0x090a3b3830326466\n"
".quad 0x09303309636f6c2e,0x73090a3009313036,0x09203233732e7268,0x7225202c39387225\n"
".quad 0x0a3b3032202c3738,0x3233622e646e6109,0x202c303972250920,0x3032202c39387225\n"
".quad 0x766f6d090a3b3734,0x722509203233732e,0x30397225202c3233,0x752e766f6d090a3b\n"
".quad 0x3139722509203233,0x6573090a3b30202c,0x33732e656e2e7074,0x2c32357025092032\n"
".quad 0x25202c3039722520,0x2540090a3b313972,0x2061726220323570,0x365f305f744c2409\n"
".quad 0x2e090a3b30373734,0x3609303309636f6c,0x6f6d090a30093530,0x2509203436662e76\n"
".quad 0x30202c3434326466,0x3030303035333464,0x3030303030303030,0x2e31202f2f093b30\n"
".quad 0x312b653434313038,0x662e6c756d090a36,0x3264662509203436,0x32646625202c3534\n"
".quad 0x32646625202c3830,0x766f6d090a3b3434,0x257b09203436622e,0x333972252c323972\n"
".quad 0x3432646625202c7d,0x2e766f6d090a3b35,0x3272250920323373,0x3b33397225202c37\n"
".quad 0x3309636f6c2e090a,0x0a30093630360930,0x3436622e766f6d09,0x2c383272257b0920\n"
".quad 0x25202c7d34397225,0x090a3b3534326466,0x09303309636f6c2e,0x73090a3009383036\n"
".quad 0x09203233732e7268,0x7225202c35397225,0x0a3b3032202c3339,0x3233622e646e6109\n"
".quad 0x202c363972250920,0x3032202c35397225,0x627573090a3b3734,0x722509203233732e\n"
".quad 0x36397225202c3233,0x4c240a3b3435202c,0x373734365f305f74,0x636f6c2e090a3a30\n"
".quad 0x0930313609303309,0x732e627573090a30,0x3233722509203233,0x202c32337225202c\n"
".quad 0x2e090a3b33323031,0x3609303309636f6c,0x6e61090a30093631,0x2509203233622e64\n"
".quad 0x327225202c373972,0x363431322d202c37,0x0a3b333730353334,0x203233622e726f09\n"
".quad 0x25202c3839722509,0x373031202c373972,0x3b38343233393632,0x36622e766f6d090a\n"
".quad 0x3934646625092034,0x2c383272257b202c,0x090a3b7d38397225,0x203233752e766f6d\n"
".quad 0x31202c3939722509,0x3835373231333730,0x70746573090a3b32,0x203233752e656c2e\n"
".quad 0x25202c3335702509,0x397225202c383972,0x35702540090a3b39,0x2409206172622033\n"
".quad 0x3235365f305f744c,0x6f6c2e090a3b3238,0x3831360930330963,0x2e766f6d090a3009\n"
".quad 0x72257b0920343662,0x303172252c303031,0x34646625202c7d31,0x2e627573090a3b39\n"
".quad 0x3172250920323373,0x30317225202c3230,0x3538343031202c31,0x766f6d090a3b3637\n"
".quad 0x257b09203436622e,0x3172252c33303172,0x646625202c7d3430,0x766f6d090a3b3934\n"
".quad 0x662509203436622e,0x72257b202c393464,0x303172252c333031,0x6f6c2e090a3b7d32\n"
".quad 0x3931360930330963,0x2e646461090a3009,0x3372250920323373,0x2c32337225202c32\n"
".quad 0x5f744c240a3b3120,0x3a32383235365f30,0x3309636f6c2e090a,0x0a30093932360930\n"
".quad 0x3436662e766f6d09,0x3634326466250920,0x306666626430202c,0x3030303030303030\n"
".quad 0x2f2f093b30303030,0x646461090a312d20,0x662509203436662e,0x6625202c37343264\n"
".quad 0x646625202c393464,0x6f6d090a3b363432,0x2509203436662e76,0x30202c3834326466\n"
".quad 0x3030303066663364,0x3030303030303030,0x0a31202f2f093b30,0x3436662e64646109\n"
".quad 0x3934326466250920,0x2c3934646625202c,0x3b38343264662520,0x6e722e747663090a\n"
".quad 0x3436662e3233662e,0x25202c3366250920,0x090a3b3934326466,0x662e6e722e706372\n"
".quad 0x2c34662509203233,0x63090a3b33662520,0x662e3436662e7476,0x3264662509203233\n"
".quad 0x3b346625202c3035,0x36662e67656e090a,0x3532646625092034,0x3432646625202c31\n"
".quad 0x2e766f6d090a3b39,0x6466250920343666,0x336430202c323532,0x3030303030306666\n"
".quad 0x3b30303030303030,0x6d090a31202f2f09,0x36662e6e722e6461,0x3532646625092034\n"
".quad 0x3532646625202c33,0x3532646625202c31,0x3532646625202c30,0x2e64616d090a3b32\n"
".quad 0x09203436662e6e72,0x202c343532646625,0x202c333532646625,0x202c333532646625\n"
".quad 0x0a3b333532646625,0x2e6e722e64616d09,0x6466250920343666,0x646625202c353532\n"
".quad 0x646625202c343532,0x646625202c303532,0x756d090a3b303532,0x2509203436662e6c\n"
".quad 0x25202c3635326466,0x25202c3734326466,0x090a3b3535326466,0x09303309636f6c2e\n"
".quad 0x61090a3009393336,0x09203436662e6464,0x202c373532646625,0x202c363532646625\n"
".quad 0x0a3b363532646625,0x3436662e6c756d09,0x3835326466250920,0x373532646625202c\n"
".quad 0x373532646625202c,0x662e766f6d090a3b,0x3264662509203436,0x65336430202c3935\n"
".quad 0x6437666635663062,0x093b326566616332,0x3031302e31202f2f,0x090a36302d653539\n"
".quad 0x203436662e766f6d,0x2c30363264662509,0x6630646533643020,0x3364613134326435\n"
".quad 0x202f2f093b613562,0x6534363334302e34,0x64616d090a36302d,0x203436662e6e722e\n"
".quad 0x2c31363264662509,0x2c39353264662520,0x2c38353264662520,0x3b30363264662520\n"
".quad 0x36662e766f6d090a,0x3632646625092034,0x6665336430202c32,0x3435376130326233\n"
".quad 0x2f093b6633613838,0x333837382e31202f,0x6d090a35302d6531,0x36662e6e722e6461\n"
".quad 0x3632646625092034,0x3632646625202c33,0x3532646625202c31,0x3632646625202c38\n"
".quad 0x2e766f6d090a3b32,0x6466250920343666,0x336430202c343632,0x6564633534373166\n"
".quad 0x3b35646365616634,0x37382e38202f2f09,0x0a35302d65323837,0x2e6e722e64616d09\n"
".quad 0x6466250920343666,0x646625202c353632,0x646625202c333632,0x646625202c383532\n"
".quad 0x6f6d090a3b343632,0x2509203436662e76,0x30202c3636326466,0x6331376333663364\n"
".quad 0x3837356138353237,0x2e30202f2f093b62,0x3230343334303030,0x722e64616d090a38\n"
".quad 0x2509203436662e6e,0x25202c3736326466,0x25202c3536326466,0x25202c3835326466\n"
".quad 0x090a3b3636326466,0x203436662e766f6d,0x2c38363264662509,0x3432366633643020\n"
".quad 0x6232343239343239,0x202f2f093b303139,0x3233323230302e30,0x2e64616d090a3431\n"
".quad 0x09203436662e6e72,0x202c393632646625,0x202c373632646625,0x202c383532646625\n"
".quad 0x0a3b383632646625,0x3436662e766f6d09,0x3037326466250920,0x393866336430202c\n"
".quad 0x3939393939393939,0x2f2f093b62666439,0x0a353231302e3020,0x2e6e722e64616d09\n"
".quad 0x6466250920343666,0x646625202c313732,0x646625202c393632,0x646625202c383532\n"
".quad 0x6c2e090a3b303732,0x343609303309636f,0x6c756d090a300930,0x662509203436662e\n"
".quad 0x6625202c32373264,0x6625202c38353264,0x2e090a3b31373264,0x3609303309636f6c\n"
".quad 0x7573090a30093434,0x2509203436662e62,0x25202c3337326466,0x25202c3734326466\n"
".quad 0x090a3b3735326466,0x203436662e67656e,0x2c34373264662509,0x3b37353264662520\n"
".quad 0x36662e646461090a,0x3732646625092034,0x3732646625202c35,0x3732646625202c33\n"
".quad 0x2e64616d090a3b33,0x09203436662e6e72,0x202c363732646625,0x202c343732646625\n"
".quad 0x202c373432646625,0x0a3b353732646625,0x3436662e6c756d09,0x3737326466250920\n"
".quad 0x353532646625202c,0x363732646625202c,0x09636f6c2e090a3b,0x3009353835093033\n"
".quad 0x36662e766f6d090a,0x3732646625092034,0x6266336430202c38,0x3535353535353535\n"
".quad 0x2f093b3535353535,0x333338302e30202f,0x646461090a333333,0x662509203436662e\n"
".quad 0x6625202c39373264,0x6625202c32373264,0x6d090a3b38373264,0x09203436662e766f\n"
".quad 0x202c303832646625,0x3535356266336430,0x3535353535353535,0x30202f2f093b3535\n"
".quad 0x333333333338302e,0x36662e627573090a,0x3832646625092034,0x3832646625202c31\n"
".quad 0x3732646625202c30,0x2e646461090a3b39,0x6466250920343666,0x646625202c323832\n"
".quad 0x646625202c323732,0x6f6d090a3b313832,0x2509203436662e76,0x30202c3338326466\n"
".quad 0x6334613634636264,0x6237653962303062,0x322d202f2f093b30,0x2d6534303535342e\n"
".quad 0x2e646461090a3831,0x6466250920343666,0x646625202c343832,0x646625202c323832\n"
".quad 0x6461090a3b333832,0x2509203436662e64,0x25202c3538326466,0x25202c3937326466\n"
".quad 0x090a3b3438326466,0x203436662e6c756d,0x2c36383264662509,0x2c37353264662520\n"
".quad 0x3b35383264662520,0x36662e627573090a,0x3832646625092034,0x3732646625202c37\n"
".quad 0x3832646625202c39,0x2e646461090a3b35,0x6466250920343666,0x646625202c383832\n"
".quad 0x646625202c343832,0x656e090a3b373832,0x2509203436662e67,0x25202c3938326466\n"
".quad 0x090a3b3638326466,0x662e6e722e64616d,0x3264662509203436,0x32646625202c3039\n"
".quad 0x32646625202c3538,0x32646625202c3735,0x64616d090a3b3938,0x203436662e6e722e\n"
".quad 0x2c31393264662509,0x2c38383264662520,0x2c37373264662520,0x3b30393264662520\n"
".quad 0x6e722e64616d090a,0x662509203436662e,0x6625202c32393264,0x6625202c35383264\n"
".quad 0x6625202c37373264,0x2e090a3b31393264,0x3509303309636f6c,0x616d090a30093638\n"
".quad 0x3436662e6e722e64,0x3339326466250920,0x383832646625202c,0x373532646625202c\n"
".quad 0x323932646625202c,0x09636f6c2e090a3b,0x3009373835093033,0x36662e646461090a\n"
".quad 0x3932646625092034,0x3832646625202c34,0x3932646625202c36,0x636f6c2e090a3b33\n"
".quad 0x0938383509303309,0x662e627573090a30,0x3264662509203436,0x32646625202c3539\n"
".quad 0x32646625202c3638,0x646461090a3b3439,0x662509203436662e,0x6625202c36393264\n"
".quad 0x6625202c33393264,0x2e090a3b35393264,0x3509303309636f6c,0x756d090a30093238\n"
".quad 0x2509203436662e6c,0x25202c3739326466,0x25202c3735326466,0x090a3b3439326466\n"
".quad 0x09303309636f6c2e,0x6e090a3009333835,0x09203436662e6765,0x202c383932646625\n"
".quad 0x0a3b373932646625,0x2e6e722e64616d09,0x6466250920343666,0x646625202c393932\n"
".quad 0x646625202c343932,0x646625202c373532,0x6c2e090a3b383932,0x383509303309636f\n"
".quad 0x64616d090a300934,0x203436662e6e722e,0x2c30303364662509,0x2c36393264662520\n"
".quad 0x2c37373264662520,0x3b39393264662520,0x3309636f6c2e090a,0x0a30093538350930\n"
".quad 0x2e6e722e64616d09,0x6466250920343666,0x646625202c313033,0x646625202c343932\n"
".quad 0x646625202c373732,0x6c2e090a3b303033,0x383509303309636f,0x64616d090a300936\n"
".quad 0x203436662e6e722e,0x2c32303364662509,0x2c36393264662520,0x2c37353264662520\n"
".quad 0x3b31303364662520,0x3309636f6c2e090a,0x0a30093738350930,0x3436662e64646109\n"
".quad 0x3330336466250920,0x373932646625202c,0x323033646625202c,0x09636f6c2e090a3b\n"
".quad 0x3009383835093033,0x36662e627573090a,0x3033646625092034,0x3932646625202c34\n"
".quad 0x3033646625202c37,0x2e646461090a3b33,0x6466250920343666,0x646625202c353033\n"
".quad 0x646625202c323033,0x6c2e090a3b343033,0x383509303309636f,0x6c756d090a300932\n"
".quad 0x662509203436662e,0x6625202c36303364,0x6625202c37353264,0x2e090a3b33303364\n"
".quad 0x3509303309636f6c,0x656e090a30093638,0x2509203436662e67,0x25202c3730336466\n"
".quad 0x090a3b3630336466,0x662e6e722e64616d,0x3364662509203436,0x33646625202c3830\n"
".quad 0x32646625202c3330,0x33646625202c3735,0x64616d090a3b3730,0x203436662e6e722e\n"
".quad 0x2c39303364662509,0x2c35303364662520,0x2c37373264662520,0x3b38303364662520\n"
".quad 0x6e722e64616d090a,0x662509203436662e,0x6625202c30313364,0x6625202c33303364\n"
".quad 0x6625202c37373264,0x6d090a3b39303364,0x36662e6e722e6461,0x3133646625092034\n"
".quad 0x3033646625202c31,0x3532646625202c35,0x3133646625202c37,0x636f6c2e090a3b30\n"
".quad 0x0937383509303309,0x662e646461090a30,0x3364662509203436,0x33646625202c3231\n"
".quad 0x33646625202c3131,0x6f6c2e090a3b3630,0x3237350930330963,0x2e747663090a3009\n"
".quad 0x732e3436662e6e72,0x3364662509203233,0x32337225202c3331,0x662e646461090a3b\n"
".quad 0x3364662509203436,0x32646625202c3431,0x33646625202c3735,0x766f6d090a3b3231\n"
".quad 0x662509203436662e,0x6430202c35313364,0x3234653236656633,0x3030303361666566\n"
".quad 0x362e30202f2f093b,0x6d090a3734313339,0x09203436662e6c75,0x202c363133646625\n"
".quad 0x202c333133646625,0x0a3b353133646625,0x3436662e62757309,0x3731336466250920\n"
".quad 0x363033646625202c,0x323133646625202c,0x662e646461090a3b,0x3364662509203436\n"
".quad 0x33646625202c3831,0x33646625202c3131,0x627573090a3b3731,0x662509203436662e\n"
".quad 0x6625202c39313364,0x6625202c37353264,0x61090a3b34313364,0x09203436662e6464\n"
".quad 0x202c303233646625,0x202c323133646625,0x0a3b393133646625,0x3436662e64646109\n"
".quad 0x3132336466250920,0x383133646625202c,0x303233646625202c,0x662e646461090a3b\n"
".quad 0x3364662509203436,0x32646625202c3232,0x33646625202c3737,0x646461090a3b3132\n"
".quad 0x662509203436662e,0x6625202c33323364,0x6625202c34313364,0x61090a3b32323364\n"
".quad 0x09203436662e6464,0x202c343233646625,0x202c363133646625,0x0a3b333233646625\n"
".quad 0x3436662e62757309,0x3532336466250920,0x343133646625202c,0x333233646625202c\n"
".quad 0x662e646461090a3b,0x3364662509203436,0x33646625202c3632,0x33646625202c3232\n"
".quad 0x627573090a3b3532,0x662509203436662e,0x6625202c37323364,0x6625202c36313364\n"
".quad 0x61090a3b34323364,0x09203436662e6464,0x202c383233646625,0x202c333233646625\n"
".quad 0x0a3b373233646625,0x3436662e64646109,0x3932336466250920,0x363233646625202c\n"
".quad 0x383233646625202c,0x662e766f6d090a3b,0x3364662509203436,0x64336430202c3033\n"
".quad 0x3266613665643335,0x093b366563653837,0x3332382e32202f2f,0x090a33312d653335\n"
".quad 0x662e6e722e64616d,0x3364662509203436,0x33646625202c3133,0x33646625202c3331\n"
".quad 0x33646625202c3033,0x646461090a3b3932,0x662509203436662e,0x6625202c32333364\n"
".quad 0x6625202c34323364,0x2e090a3b31333364,0x3509303309636f6c,0x7573090a30093337\n"
".quad 0x2509203436662e62,0x25202c3333336466,0x25202c3432336466,0x090a3b3233336466\n"
".quad 0x203436662e646461,0x2c34333364662509,0x2c31333364662520,0x3b33333364662520\n"
".quad 0x3309636f6c2e090a,0x3009383432310930,0x36662e766f6d090a,0x3333646625092034\n"
".quad 0x3266336430202c35,0x3030303030303030,0x2f093b3030303030,0x313030302e30202f\n"
".quad 0x756d090a37303232,0x2509203436662e6c,0x25202c3633336466,0x25202c3430326466\n"
".quad 0x090a3b3533336466,0x203436662e766f6d,0x2c37333364662509,0x3264306637643020\n"
".quad 0x3834303465623161,0x202f2f093b303966,0x090a3430332b6531,0x2e74672e70746573\n"
".quad 0x3570250920343666,0x3132646625202c34,0x3333646625202c30,0x706c6573090a3b37\n"
".quad 0x662509203436662e,0x6625202c38333364,0x6625202c36333364,0x7025202c34303264\n"
".quad 0x6c756d090a3b3435,0x662509203436662e,0x6625202c39333364,0x6625202c38333364\n"
".quad 0x6e090a3b32333364,0x09203436662e6765,0x202c303433646625,0x0a3b393333646625\n"
".quad 0x2e6e722e64616d09,0x6466250920343666,0x646625202c313433,0x646625202c323333\n"
".quad 0x646625202c383333,0x616d090a3b303433,0x3436662e6e722e64,0x3234336466250920\n"
".quad 0x343333646625202c,0x383333646625202c,0x313433646625202c,0x662e646461090a3b\n"
".quad 0x3364662509203436,0x33646625202c3334,0x33646625202c3933,0x6f6c2e090a3b3234\n"
".quad 0x3432310930330963,0x627573090a300939,0x662509203436662e,0x6625202c34343364\n"
".quad 0x6625202c39333364,0x61090a3b33343364,0x09203436662e6464,0x202c393431646625\n"
".quad 0x202c323433646625,0x0a3b343433646625,0x303309636f6c2e09,0x0a30093235323109\n"
".quad 0x3436622e766f6d09,0x35303172257b0920,0x2c7d36303172252c,0x3b33343364662520\n"
".quad 0x33732e766f6d090a,0x3730317225092032,0x38343630312d202c,0x090a3b3935373537\n"
".quad 0x752e746c2e746573,0x09203233732e3233,0x25202c3830317225,0x7225202c36303172\n"
".quad 0x656e090a3b373031,0x2509203233732e67,0x7225202c39303172,0x6f6d090a3b383031\n"
".quad 0x2509203233752e76,0x3031202c30313172,0x3039343533353238,0x6c2e746573090a3b\n"
".quad 0x33752e3233752e65,0x3131317225092032,0x2c3630317225202c,0x0a3b303131722520\n"
".quad 0x3233732e67656e09,0x2c32313172250920,0x0a3b313131722520,0x203233622e726f09\n"
".quad 0x202c333131722509,0x25202c3930317225,0x6d090a3b32313172,0x09203233752e766f\n"
".quad 0x30202c3431317225,0x2e70746573090a3b,0x09203233732e7165,0x7225202c35357025\n"
".quad 0x317225202c333131,0x702540090a3b3431,0x0920617262203535,0x35365f305f744c24\n"
".quad 0x6c2e090a3b343937,0x313309303309636f,0x766f6d090a300937,0x662509203436662e\n"
".quad 0x6430202c35343364,0x3734353137666633,0x6566323862323536,0x342e31202f2f093b\n"
".quad 0x6c756d090a373234,0x662509203436662e,0x6625202c36343364,0x6625202c33343364\n"
".quad 0x63090a3b35343364,0x662e696e722e7476,0x09203436662e3436,0x202c373433646625\n"
".quad 0x0a3b363433646625,0x3436662e766f6d09,0x3834336466250920,0x366566626430202c\n"
".quad 0x6166656632346532,0x2f2f093b66653933,0x313339362e302d20,0x2e64616d090a3734\n"
".quad 0x09203436662e6e72,0x202c393433646625,0x202c373433646625,0x202c383433646625\n"
".quad 0x0a3b333433646625,0x3436662e766f6d09,0x3035336466250920,0x613763626430202c\n"
".quad 0x3933623365396362,0x2f2f093b66333038,0x303931332e322d20,0x6d090a37312d6535\n"
".quad 0x36662e6e722e6461,0x3533646625092034,0x3433646625202c31,0x3533646625202c37\n"
".quad 0x3433646625202c30,0x2e766f6d090a3b39,0x6466250920343666,0x336430202c323533\n"
".quad 0x6366373066313265,0x3b64616238356663,0x38302e32202f2f09,0x0a39302d65333438\n"
".quad 0x3436662e766f6d09,0x3335336466250920,0x613565336430202c,0x6336616431386466\n"
".quad 0x2f2f093b66616233,0x36363331352e3220,0x616d090a38302d65,0x3436662e6e722e64\n"
".quad 0x3435336466250920,0x323533646625202c,0x313533646625202c,0x333533646625202c\n"
".quad 0x662e766f6d090a3b,0x3364662509203436,0x65336430202c3535,0x3666353565373239\n"
".quad 0x093b366530386630,0x3535372e32202f2f,0x090a37302d653537,0x662e6e722e64616d\n"
".quad 0x3364662509203436,0x33646625202c3635,0x33646625202c3435,0x33646625202c3135\n"
".quad 0x766f6d090a3b3535,0x662509203436662e,0x6430202c37353364,0x6164643137636533\n"
".quad 0x3636366432306638,0x372e32202f2f093b,0x36302d6532373535,0x6e722e64616d090a\n"
".quad 0x662509203436662e,0x6625202c38353364,0x6625202c36353364,0x6625202c31353364\n"
".quad 0x2e090a3b37353364,0x3309303309636f6c,0x6f6d090a30093831,0x2509203436662e76\n"
".quad 0x30202c3935336466,0x6131306166653364,0x6534393862333130,0x2e32202f2f093b30\n"
".quad 0x302d653631303834,0x722e64616d090a35,0x2509203436662e6e,0x25202c3036336466\n"
".quad 0x25202c3835336466,0x25202c3135336466,0x090a3b3935336466,0x09303309636f6c2e\n"
".quad 0x6d090a3009393133,0x09203436662e766f,0x202c313633646625,0x3130613266336430\n"
".quad 0x3766613364313061,0x30202f2f093b3838,0x343839313030302e,0x2e64616d090a3331\n"
".quad 0x09203436662e6e72,0x202c323633646625,0x202c303633646625,0x202c313533646625\n"
".quad 0x0a3b313633646625,0x303309636f6c2e09,0x090a300930323309,0x203436662e766f6d\n"
".quad 0x2c33363364662509,0x6336356633643020,0x6133633631633631,0x202f2f093b636531\n"
".quad 0x3838333130302e30,0x2e64616d090a3938,0x09203436662e6e72,0x202c343633646625\n"
".quad 0x202c323633646625,0x202c313533646625,0x0a3b333633646625,0x303309636f6c2e09\n"
".quad 0x090a300931323309,0x203436662e766f6d,0x2c35363364662509,0x3131386633643020\n"
".quad 0x3930313131313131,0x202f2f093b313631,0x3333333830302e30,0x2e64616d090a3333\n"
".quad 0x09203436662e6e72,0x202c363633646625,0x202c343633646625,0x202c313533646625\n"
".quad 0x0a3b353633646625,0x303309636f6c2e09,0x090a300932323309,0x203436662e766f6d\n"
".quad 0x2c37363364662509,0x3535616633643020,0x3535353535353535,0x202f2f093b316334\n"
".quad 0x3636363134302e30,0x722e64616d090a37,0x2509203436662e6e,0x25202c3836336466\n"
".quad 0x25202c3636336466,0x25202c3135336466,0x090a3b3736336466,0x09303309636f6c2e\n"
".quad 0x6d090a3009333233,0x09203436662e766f,0x202c393633646625,0x3535356366336430\n"
".quad 0x3535353535353535,0x30202f2f093b6636,0x0a3736363636312e,0x2e6e722e64616d09\n"
".quad 0x6466250920343666,0x646625202c303733,0x646625202c383633,0x646625202c313533\n"
".quad 0x6c2e090a3b393633,0x323309303309636f,0x766f6d090a300934,0x662509203436662e\n"
".quad 0x6430202c31373364,0x3030303030656633,0x3030303030303030,0x352e30202f2f093b\n"
".quad 0x6e722e64616d090a,0x662509203436662e,0x6625202c32373364,0x6625202c30373364\n"
".quad 0x6625202c31353364,0x2e090a3b31373364,0x3309303309636f6c,0x756d090a30093632\n"
".quad 0x2509203436662e6c,0x25202c3337336466,0x25202c3135336466,0x090a3b3237336466\n"
".quad 0x662e6e722e64616d,0x3164662509203436,0x33646625202c3937,0x33646625202c3337\n"
".quad 0x33646625202c3135,0x6f6c2e090a3b3135,0x3830370930330963,0x2e747663090a3009\n"
".quad 0x2e3233732e697a72,0x3172250920343666,0x33646625202c3531,0x6c6873090a3b3734\n"
".quad 0x722509203233622e,0x317225202c363131,0x0a3b3032202c3531,0x3233732e64646109\n"
".quad 0x202c393572250920,0x31202c3631317225,0x3432333936323730,0x2e646461090a3b38\n"
".quad 0x3172250920323375,0x31317225202c3731,0x3b30323031202c35,0x33752e766f6d090a\n"
".quad 0x3831317225092032,0x0a3b30343032202c,0x74672e7074657309,0x702509203233752e\n"
".quad 0x31317225202c3635,0x3831317225202c37,0x3635702540090a3b,0x4c24092061726220\n"
".quad 0x363536365f305f74,0x636f6c2e090a3b32,0x0931313709303309,0x732e766f6d090a30\n"
".quad 0x3131722509203233,0x6d090a3b30202c39,0x09203436622e766f,0x202c343733646625\n"
".quad 0x252c39313172257b,0x6d090a3b7d393572,0x36662e6e722e6461,0x3531646625092034\n"
".quad 0x3731646625202c36,0x3733646625202c39,0x3733646625202c34,0x2e617262090a3b34\n"
".quad 0x744c240920696e75,0x36303336365f305f,0x5f305f744c240a3b,0x090a3a3236353636\n"
".quad 0x203233752e766f6d,0x202c303231722509,0x70746573090a3b30,0x203233732e65672e\n"
".quad 0x25202c3735702509,0x7225202c35313172,0x2540090a3b303231,0x2061726220373570\n"
".quad 0x365f305f744c2409,0x2e090a3b34373037,0x3709303309636f6c,0x6461090a30093531\n"
".quad 0x2509203233732e64,0x357225202c393572,0x3137363735202c39,0x6f6d090a3b303836\n"
".quad 0x2509203233732e76,0x313031202c343672,0x3b34343130373036,0x6e752e617262090a\n"
".quad 0x305f744c24092069,0x0a3b38313836365f,0x37365f305f744c24,0x6f6d090a3a343730\n"
".quad 0x2509203233732e76,0x373031202c343672,0x3b34323831343733,0x365f305f744c240a\n"
".quad 0x2e090a3a38313836,0x3709303309636f6c,0x6f6d090a30093232,0x2509203233732e76\n"
".quad 0x3b30202c31323172,0x36622e766f6d090a,0x3733646625092034,0x323172257b202c35\n"
".quad 0x3b7d343672252c31,0x6e722e64616d090a,0x662509203436662e,0x6625202c36373364\n"
".quad 0x6625202c39373164,0x6625202c35373364,0x73090a3b35373364,0x09203233732e6275\n"
".quad 0x25202c3232317225,0x343031202c393572,0x6d090a3b36373538,0x09203233732e766f\n"
".quad 0x30202c3332317225,0x622e766f6d090a3b,0x3364662509203436,0x3172257b202c3737\n"
".quad 0x32323172252c3332,0x2e6c756d090a3b7d,0x6466250920343666,0x646625202c363531\n"
".quad 0x646625202c363733,0x744c240a3b373733,0x36303336365f305f,0x09636f6c2e090a3a\n"
".quad 0x3009343337093033,0x36662e766f6d090a,0x3831646625092034,0x3531646625202c34\n"
".quad 0x2e617262090a3b36,0x444c240920696e75,0x69725f69646e6557,0x325f3737315f746e\n"
".quad 0x5f305f744c240a3b,0x090a3a3439373536,0x09303309636f6c2e,0x6d090a3009303437\n"
".quad 0x09203436662e766f,0x202c383733646625,0x3030306666376430,0x3030303030303030\n"
".quad 0x69202f2f093b3030,0x2e766f6d090a666e,0x6466250920343666,0x306430202c393733\n"
".quad 0x3030303030303030,0x3b30303030303030,0x6d090a30202f2f09,0x09203233732e766f\n"
".quad 0x30202c3432317225,0x2e70746573090a3b,0x09203233732e6567,0x7225202c38357025\n"
".quad 0x317225202c363031,0x6c6573090a3b3432,0x2509203436662e70,0x25202c3038336466\n"
".quad 0x25202c3837336466,0x25202c3937336466,0x6461090a3b383570,0x2509203436662e64\n"
".quad 0x25202c3138336466,0x25202c3334336466,0x090a3b3334336466,0x203436662e736261\n"
".quad 0x2c32383364662509,0x3b33343364662520,0x36662e766f6d090a,0x3833646625092034\n"
".quad 0x6666376430202c33,0x3030303030303030,0x2f093b3030303030,0x73090a666e69202f\n"
".quad 0x662e656c2e707465,0x3935702509203436,0x323833646625202c,0x333833646625202c\n"
".quad 0x2e706c6573090a3b,0x6466250920343666,0x646625202c343831,0x646625202c303833\n"
".quad 0x357025202c313833,0x6557444c240a3b39,0x746e69725f69646e,0x0a3a325f3737315f\n"
".quad 0x303309636f6c2e09,0x0a30093235323109,0x3436662e766f6d09,0x3438336466250920\n"
".quad 0x343831646625202c,0x662e766f6d090a3b,0x3164662509203436,0x33646625202c3239\n"
".quad 0x6f6c2e090a3b3438,0x3532310930330963,0x736261090a300934,0x662509203436662e\n"
".quad 0x6625202c35383364,0x6d090a3b34383364,0x09203436662e766f,0x202c363833646625\n"
".quad 0x3030306666376430,0x3030303030303030,0x69202f2f093b3030,0x70746573090a666e\n"
".quad 0x203436662e71652e,0x25202c3036702509,0x25202c3538336466,0x090a3b3638336466\n"
".quad 0x7262203036702540,0x305f744c24092061,0x0a3b30333337365f,0x303309636f6c2e09\n"
".quad 0x0a30093835323109,0x2e6e722e64616d09,0x6466250920343666,0x646625202c323931\n"
".quad 0x646625202c343833,0x646625202c393431,0x744c240a3b343833,0x30333337365f305f\n"
".quad 0x09636f6c2e090a3a,0x0936303331093033,0x662e766f6d090a30,0x3264662509203436\n"
".quad 0x3931646625202c33,0x2e766f6d090a3b32,0x6466250920343666,0x336430202c373833\n"
".quad 0x3030303030306566,0x3b30303030303030,0x0a352e30202f2f09,0x3436662e6c756d09\n"
".quad 0x3838336466250920,0x343032646625202c,0x373833646625202c,0x722e747663090a3b\n"
".quad 0x662e3436662e697a,0x3364662509203436,0x33646625202c3938,0x6c6573090a3b3838\n"
".quad 0x2509203233732e70,0x2c31202c35323172,0x30357025202c3020,0x662e646461090a3b\n"
".quad 0x3364662509203436,0x33646625202c3039,0x33646625202c3938,0x627573090a3b3938\n"
".quad 0x662509203436662e,0x6625202c31393364,0x6625202c34303264,0x61090a3b30393364\n"
".quad 0x09203436662e7362,0x202c323933646625,0x0a3b313933646625,0x3436662e766f6d09\n"
".quad 0x3339336466250920,0x306666336430202c,0x3030303030303030,0x2f2f093b30303030\n"
".quad 0x2e746573090a3120,0x662e3233752e7165,0x3231722509203436,0x3933646625202c36\n"
".quad 0x3933646625202c32,0x2e67656e090a3b33,0x3172250920323373,0x32317225202c3732\n"
".quad 0x2e646e61090a3b36,0x3172250920323362,0x32317225202c3832,0x3732317225202c35\n"
".quad 0x752e766f6d090a3b,0x3231722509203233,0x73090a3b30202c39,0x732e71652e707465\n"
".quad 0x3136702509203233,0x2c3832317225202c,0x0a3b393231722520,0x6220313670254009\n"
".quad 0x5f744c2409206172,0x3b32343837365f30,0x3309636f6c2e090a,0x3009383033310930\n"
".quad 0x36622e766f6d090a,0x2c37647225092034,0x0a3b333264662520,0x3436622e726f7809\n"
".quad 0x202c386472250920,0x392d202c37647225,0x3330323733333232,0x3835373734353836\n"
".quad 0x766f6d090a3b3830,0x662509203436622e,0x647225202c333264,0x305f744c240a3b38\n"
".quad 0x0a3a32343837365f,0x303309636f6c2e09,0x0a30093031333109,0x3436662e766f6d09\n"
".quad 0x3730326466250920,0x3b3332646625202c,0x646e6557444c240a,0x616e73695f5f5f69\n"
".quad 0x3a315f3737315f6e,0x3109636f6c2e090a,0x090a300933360938,0x203436662e6c756d\n"
".quad 0x25202c3364662509,0x25202c3730326466,0x744c240a3b336466,0x38333139355f305f\n"
".quad 0x09636f6c2e090a3a,0x0a30093436093831,0x3436662e766f6d09,0x3439336466250920\n"
".quad 0x0a3b33646625202c,0x617261702e747309,0x5b09203436662e6d,0x6572616475635f5f\n"
".quad 0x4234315a5f5f6674,0x656c427265697a65,0x696469555047646e,0x3933646625202c5d\n"
".quad 0x3b746572090a3b34,0x646e6557444c240a,0x7a654234315a5f5f,0x646e656c42726569\n"
".quad 0x0a3a696469555047,0x5a5f202f2f207d09,0x7265697a65423431,0x555047646e656c42\n"
".quad 0x78652e090a696469,0x68732e096e726574,0x6c612e2064657261,0x622e2038206e6769\n"
".quad 0x5b6d656d5f6c2038,0x6e652e090a0a3b5d,0x34315a5f20797274,0x735f7265697a6542\n"
".quad 0x6669656361667275,0x5958335069696969,0x282069505f30535a,0x617261702e09090a\n"
".quad 0x5f203233732e206d,0x726170616475635f,0x654234315a5f5f6d,0x7275735f7265697a\n"
".quad 0x6969666965636166,0x535a595833506969,0x745f6e5f69505f30,0x09090a2c736b7361\n"
".quad 0x2e206d617261702e,0x75635f5f20323366,0x5f5f6d7261706164,0x65697a654234315a\n"
".quad 0x6361667275735f72,0x5069696969666965,0x505f30535a595833,0x2c6168706c615f69\n"
".quad 0x617261702e09090a,0x5f203233732e206d,0x726170616475635f,0x654234315a5f5f6d\n"
".quad 0x7275735f7265697a,0x6969666965636166,0x535a595833506969,0x5f6e695f69505f30\n"
".quad 0x0a2c695f657a6973,0x6d617261702e0909,0x5f5f203233732e20,0x6d72617061647563\n"
".quad 0x7a654234315a5f5f,0x667275735f726569,0x6969696669656361,0x30535a5958335069\n"
".quad 0x735f6e695f69505f,0x090a2c6a5f657a69,0x206d617261702e09,0x635f5f203233732e\n"
".quad 0x5f6d726170616475,0x697a654234315a5f,0x61667275735f7265,0x6969696966696563\n"
".quad 0x5f30535a59583350,0x735f74756f5f6950,0x090a2c695f657a69,0x206d617261702e09\n"
".quad 0x635f5f203233732e,0x5f6d726170616475,0x697a654234315a5f,0x61667275735f7265\n"
".quad 0x6969696966696563,0x5f30535a59583350,0x735f74756f5f6950,0x090a2c6a5f657a69\n"
".quad 0x206d617261702e09,0x635f5f203436752e,0x5f6d726170616475,0x697a654234315a5f\n"
".quad 0x61667275735f7265,0x6969696966696563,0x5f30535a59583350,0x090a2c6e695f6950\n"
".quad 0x206d617261702e09,0x635f5f203436752e,0x5f6d726170616475,0x697a654234315a5f\n"
".quad 0x61667275735f7265,0x6969696966696563,0x5f30535a59583350,0x2c7074756f5f6950\n"
".quad 0x617261702e09090a,0x5f203436752e206d,0x726170616475635f,0x654234315a5f5f6d\n"
".quad 0x7275735f7265697a,0x6969666965636166,0x535a595833506969,0x726f775f69505f30\n"
".quad 0x090a297473696c6b,0x206765722e090a7b,0x3c7225203233752e,0x2e090a3b3e353033\n"
".quad 0x3436752e20676572,0x3e32343c64722520,0x206765722e090a3b,0x3c6625203233662e\n"
".quad 0x722e090a3b3e3031,0x203436662e206765,0x3e3438363c646625,0x206765722e090a3b\n"
".quad 0x702520646572702e,0x090a3b3e3034313c,0x3532545f5f202f2f,0x2e090a3233203d20\n"
".quad 0x3709383109636f6c,0x57444c240a300931,0x5a5f5f6e69676562,0x7265697a65423431\n"
".quad 0x656361667275735f,0x3350696969696669,0x69505f30535a5958,0x61702e646c090a3a\n"
".quad 0x203233662e6d6172,0x5f5b202c31662509,0x726170616475635f,0x654234315a5f5f6d\n"
".quad 0x7275735f7265697a,0x6969666965636166,0x535a595833506969,0x706c615f69505f30\n"
".quad 0x7663090a3b5d6168,0x33662e3436662e74,0x2c31646625092032,0x6d090a3b31662520\n"
".quad 0x09203436662e766f,0x6430202c32646625,0x3030303030303030,0x3030303030303030\n"
".quad 0x090a30202f2f093b,0x2e65672e70746573,0x3170250920343666,0x202c31646625202c\n"
".quad 0x40090a3b32646625,0x6172622031702521,0x5f315f744c240920,0x0a3b323036333531\n"
".quad 0x3436662e766f6d09,0x202c336466250920,0x3030306666336430,0x3030303030303030\n"
".quad 0x31202f2f093b3030,0x6c2e70746573090a,0x2509203436662e65,0x31646625202c3270\n"
".quad 0x0a3b33646625202c,0x6220327025214009,0x5f744c2409206172,0x3230363335315f31\n"
".quad 0x09636f6c2e090a3b,0x0a30093038093831,0x617261702e646c09,0x2509203233732e6d\n"
".quad 0x635f5f5b202c3172,0x5f6d726170616475,0x697a654234315a5f,0x61667275735f7265\n"
".quad 0x6969696966696563,0x5f30535a59583350,0x7361745f6e5f6950,0x7663090a3b5d736b\n"
".quad 0x3233662e6e722e74,0x662509203233732e,0x0a3b317225202c32,0x3233662e6c756d09\n"
".quad 0x25202c3366250920,0x3b316625202c3266,0x7a722e747663090a,0x33662e3233732e69\n"
".quad 0x202c327225092032,0x6f6d090a3b336625,0x2509203233732e76,0x3b327225202c3372\n"
".quad 0x7261702e646c090a,0x09203233732e6d61,0x5f5f5b202c347225,0x6d72617061647563\n"
".quad 0x7a654234315a5f5f,0x667275735f726569,0x6969696669656361,0x30535a5958335069\n"
".quad 0x735f6e695f69505f,0x0a3b5d695f657a69,0x3233732e64646109,0x25202c3572250920\n"
".quad 0x090a3b31202c3472,0x6d617261702e646c,0x722509203233732e,0x75635f5f5b202c36\n"
".quad 0x5f5f6d7261706164,0x65697a654234315a,0x6361667275735f72,0x5069696969666965\n"
".quad 0x505f30535a595833,0x7a69735f6e695f69,0x61090a3b5d6a5f65,0x09203233732e6464\n"
".quad 0x367225202c377225,0x756d090a3b31202c,0x3233732e6f6c2e6c,0x25202c3872250920\n"
".quad 0x3b357225202c3772,0x33732e766f6d090a,0x202c397225092032,0x2e766f6d090a3b30\n"
".quad 0x6472250920343675,0x6d656d5f6c202c31,0x752e617262090a3b,0x315f4c240920696e\n"
".quad 0x3b3037313330315f,0x315f315f744c240a,0x240a3a3230363335,0x343330315f315f4c\n"
".quad 0x766f6d090a3a3632,0x722509203436752e,0x656d5f6c202c3164,0x702e646c090a3b6d\n"
".quad 0x3436752e6d617261,0x202c326472250920,0x70616475635f5f5b,0x34315a5f5f6d7261\n"
".quad 0x735f7265697a6542,0x6669656361667275,0x5958335069696969,0x775f69505f30535a\n"
".quad 0x5d7473696c6b726f,0x732e766f6d090a3b,0x3364722509203436,0x0a3b32647225202c\n"
".quad 0x617261702e646c09,0x2509203233732e6d,0x635f5f5b202c3472,0x5f6d726170616475\n"
".quad 0x697a654234315a5f,0x61667275735f7265,0x6969696966696563,0x5f30535a59583350\n"
".quad 0x69735f6e695f6950,0x090a3b5d695f657a,0x203233732e646461,0x7225202c35722509\n"
".quad 0x6c090a3b31202c34,0x2e6d617261702e64,0x3672250920323373,0x6475635f5f5b202c\n"
".quad 0x5a5f5f6d72617061,0x7265697a65423431,0x656361667275735f,0x3350696969696669\n"
".quad 0x69505f30535a5958,0x657a69735f6e695f,0x6461090a3b5d6a5f,0x2509203233732e64\n"
".quad 0x2c367225202c3772,0x6c756d090a3b3120,0x203233732e6f6c2e,0x7225202c38722509\n"
".quad 0x0a3b357225202c37,0x3436732e74766309,0x722509203233732e,0x3b387225202c3464\n"
".quad 0x69772e6c756d090a,0x09203233732e6564,0x7225202c35647225,0x090a3b3432202c38\n"
".quad 0x203436752e646461,0x25202c3664722509,0x647225202c316472,0x2e766f6d090a3b35\n"
".quad 0x6472250920343673,0x3b36647225202c37,0x7261702e646c090a,0x09203233732e6d61\n"
".quad 0x5f5f5b202c317225,0x6d72617061647563,0x7a654234315a5f5f,0x667275735f726569\n"
".quad 0x6969696669656361,0x30535a5958335069,0x61745f6e5f69505f,0x6d090a3b5d736b73\n"
".quad 0x09203233732e766f,0x0a3b31202c397225,0x3330315f315f4c24,0x6c2e090a3a303731\n"
".quad 0x383809383109636f,0x2e766f6d090a3009,0x3172250920323375,0x2e64697425202c30\n"
".quad 0x2e766f6d090a3b79,0x3172250920323375,0x6469746e25202c31,0x6c756d090a3b782e\n"
".quad 0x203233752e6f6c2e,0x25202c3231722509,0x317225202c303172,0x2e766f6d090a3b31\n"
".quad 0x3172250920323375,0x2e64697425202c33,0x2e646461090a3b78,0x3172250920323375\n"
".quad 0x2c32317225202c34,0x090a3b3331722520,0x203233732e766f6d,0x25202c3531722509\n"
".quad 0x6573090a3b343172,0x33732e656c2e7074,0x202c337025092032,0x317225202c387225\n"
".quad 0x33702540090a3b34,0x4c24092061726220,0x393530315f315f74,0x766f6d090a3b3638\n"
".quad 0x722509203233752e,0x69746e25202c3631,0x756d090a3b792e64,0x3233752e6f6c2e6c\n"
".quad 0x202c373172250920,0x7225202c36317225,0x747663090a3b3131,0x3233732e3436732e\n"
".quad 0x202c386472250920,0x6d090a3b34317225,0x2e656469772e6c75,0x6472250920323373\n"
".quad 0x2c34317225202c39,0x7663090a3b343220,0x33752e3436732e74,0x3031647225092032\n"
".quad 0x0a3b37317225202c,0x617261702e646c09,0x2509203436752e6d,0x5f5b202c31316472\n"
".quad 0x726170616475635f,0x654234315a5f5f6d,0x7275735f7265697a,0x6969666965636166\n"
".quad 0x535a595833506969,0x5d6e695f69505f30,0x752e646461090a3b,0x3164722509203436\n"
".quad 0x3131647225202c32,0x0a3b39647225202c,0x6469772e6c756d09,0x2509203233752e65\n"
".quad 0x7225202c33316472,0x0a3b3432202c3731,0x3436752e64646109,0x2c34316472250920\n"
".quad 0x25202c3964722520,0x744c240a3b316472,0x39343630315f315f,0x6c3c2f2f200a3a38\n"
".quad 0x6f6f4c203e706f6f,0x6c2079646f622070,0x202c383820656e69,0x20676e697473656e\n"
".quad 0x31203a6874706564,0x616d69747365202c,0x7265746920646574,0x203a736e6f697461\n"
".quad 0x0a6e776f6e6b6e75,0x383109636f6c2e09,0x6c090a3009303909,0x6c61626f6c672e64\n"
".quad 0x662509203436662e,0x6472255b202c3464,0x090a3b5d302b3231,0x65726168732e7473\n"
".quad 0x5b09203436662e64,0x5d302b3431647225,0x0a3b34646625202c,0x626f6c672e646c09\n"
".quad 0x09203436662e6c61,0x255b202c35646625,0x3b5d382b32316472,0x6168732e7473090a\n"
".quad 0x203436662e646572,0x2b34316472255b09,0x35646625202c5d38,0x6c672e646c090a3b\n"
".quad 0x3436662e6c61626f,0x202c366466250920,0x312b32316472255b,0x2e7473090a3b5d36\n"
".quad 0x662e646572616873,0x6472255b09203436,0x202c5d36312b3431,0x61090a3b36646625\n"
".quad 0x09203233752e6464,0x7225202c35317225,0x37317225202c3531,0x752e646461090a3b\n"
".quad 0x3164722509203436,0x3431647225202c34,0x3b3331647225202c,0x36752e646461090a\n"
".quad 0x3231647225092034,0x2c3231647225202c,0x0a3b333164722520,0x74672e7074657309\n"
".quad 0x702509203233732e,0x202c387225202c34,0x40090a3b35317225,0x2061726220347025\n"
".quad 0x315f315f744c2409,0x240a3b3839343630,0x3530315f315f744c,0x6c2e090a3a363839\n"
".quad 0x323909383109636f,0x2e726162090a3009,0x3b300920636e7973,0x33732e766f6d090a\n"
".quad 0x2c38317225092032,0x746573090a3b3120,0x3233732e71652e70,0x25202c3570250920\n"
".quad 0x38317225202c3972,0x3570252140090a3b,0x4c24092061726220,0x323730315f315f74\n"
".quad 0x766f6d090a3b3636,0x722509203436732e,0x647225202c353164,0x2e766f6d090a3b37\n"
".quad 0x3172250920323375,0x73090a3b30202c39,0x33752e71652e7465,0x2509203233752e32\n"
".quad 0x317225202c303272,0x3b39317225202c33,0x33732e67656e090a,0x2c31327225092032\n"
".quad 0x090a3b3032722520,0x203233752e766f6d,0x30202c3232722509,0x652e746573090a3b\n"
".quad 0x33752e3233752e71,0x2c33327225092032,0x25202c3031722520,0x656e090a3b323272\n"
".quad 0x2509203233732e67,0x327225202c343272,0x2e646e61090a3b33,0x3272250920323362\n"
".quad 0x2c31327225202c35,0x090a3b3432722520,0x203233752e766f6d,0x30202c3632722509\n"
".quad 0x2e70746573090a3b,0x09203233732e7165,0x327225202c367025,0x3b36327225202c35\n"
".quad 0x622036702540090a,0x5f744c2409206172,0x3232353730315f31,0x09636f6c2e090a3b\n"
".quad 0x0a30093439093831,0x3436732e766f6d09,0x2c36316472250920,0x090a3b3364722520\n"
".quad 0x203233732e766f6d,0x31202c3732722509,0x2e6d6f7461090a3b,0x612e6c61626f6c67\n"
".quad 0x09203233732e6464,0x255b202c38327225,0x25202c5d36316472,0x6f6d090a3b373272\n"
".quad 0x2509203233732e76,0x327225202c393272,0x732e7473090a3b38,0x33732e6465726168\n"
".quad 0x316472255b092032,0x7225202c5d302b35,0x5f744c240a3b3932,0x3232353730315f31\n"
".quad 0x732e726162090a3a,0x0a3b300920636e79,0x726168732e646c09,0x09203233732e6465\n"
".quad 0x255b202c30337225,0x3b5d302b35316472,0x6e752e617262090a,0x315f744c24092069\n"
".quad 0x3b3031303730315f,0x315f315f744c240a,0x090a3a3636323730,0x203233732e766f6d\n"
".quad 0x25202c3133722509,0x766f6d090a3b3372,0x722509203233752e,0x61746325202c3233\n"
".quad 0x61090a3b782e6469,0x09203233752e6464,0x7225202c30337225,0x32337225202c3133\n"
".quad 0x5f315f744c240a3b,0x0a3a303130373031,0x656c2e7074657309,0x702509203233732e\n"
".quad 0x202c317225202c37,0x40090a3b30337225,0x2061726220377025,0x315f315f744c2409\n"
".quad 0x090a3b3433303830,0x6d617261702e646c,0x722509203233732e,0x635f5f5b202c3333\n"
".quad 0x5f6d726170616475,0x697a654234315a5f,0x61667275735f7265,0x6969696966696563\n"
".quad 0x5f30535a59583350,0x735f74756f5f6950,0x0a3b5d6a5f657a69,0x3233752e62757309\n"
".quad 0x202c343372250920,0x3b31202c33337225,0x33752e766964090a,0x2c35337225092032\n"
".quad 0x25202c3433722520,0x6461090a3b313172,0x2509203233732e64,0x337225202c363372\n"
".quad 0x6c090a3b31202c35,0x2e6d617261702e64,0x3372250920323373,0x75635f5f5b202c37\n"
".quad 0x5f5f6d7261706164,0x65697a654234315a,0x6361667275735f72,0x5069696969666965\n"
".quad 0x505f30535a595833,0x69735f74756f5f69,0x090a3b5d695f657a,0x203233752e766f6d\n"
".quad 0x25202c3833722509,0x0a3b792e6469746e,0x30315f315f744c24,0x2f200a3a36343538\n"
".quad 0x203e706f6f6c3c2f,0x646f6220706f6f4c,0x3120656e696c2079,0x636f6c2e090a3330\n"
".quad 0x0933303109383109,0x732e6d6572090a30,0x3933722509203233,0x202c30337225202c\n"
".quad 0x64090a3b36337225,0x09203233732e7669,0x7225202c30347225,0x36337225202c3033\n"
".quad 0x6c2e6c756d090a3b,0x2509203233752e6f,0x337225202c313472,0x3b31317225202c39\n"
".quad 0x6f6c2e6c756d090a,0x722509203233752e,0x30347225202c3234,0x0a3b38337225202c\n"
".quad 0x3233752e64646109,0x202c333472250920,0x7225202c31347225,0x646461090a3b3331\n"
".quad 0x722509203233752e,0x32347225202c3434,0x0a3b30317225202c,0x2e74672e74657309\n"
".quad 0x203233732e323375,0x25202c3534722509,0x347225202c373372,0x2e67656e090a3b34\n"
".quad 0x3472250920323373,0x3b35347225202c36,0x74672e746573090a,0x3233732e3233752e\n"
".quad 0x202c373472250920,0x7225202c33337225,0x67656e090a3b3334,0x722509203233732e\n"
".quad 0x37347225202c3834,0x622e646e61090a3b,0x3934722509203233,0x202c36347225202c\n"
".quad 0x6d090a3b38347225,0x09203233752e766f,0x3b30202c30357225,0x652e70746573090a\n"
".quad 0x2509203233732e71,0x39347225202c3870,0x0a3b30357225202c,0x7262203870254009\n"
".quad 0x315f744c24092061,0x3b3230383830315f,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x68202c3330312065,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x3634353830315f31,0x3109636f6c2e090a,0x090a300934320938\n"
".quad 0x203233752e766f6d,0x30202c3135722509,0x2e70746573090a3b,0x09203233732e746c\n"
".quad 0x347225202c397025,0x0a3b31357225202c,0x7262203970254009,0x315f744c24092061\n"
".quad 0x3b3632363435315f,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x68202c3330312065,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x3634353830315f31,0x6e722e747663090a,0x3233732e3436662e,0x202c376466250920\n"
".quad 0x63090a3b33347225,0x36662e6e722e7476,0x2509203233732e34,0x337225202c386466\n"
".quad 0x2e766964090a3b34,0x09203436662e6e72,0x6625202c39646625,0x38646625202c3764\n"
".quad 0x722e747663090a3b,0x33732e3436662e6e,0x3031646625092032,0x0a3b34347225202c\n"
".quad 0x3233732e62757309,0x202c323572250920,0x3b31202c37337225,0x6e722e747663090a\n"
".quad 0x3233732e3436662e,0x2c31316466250920,0x090a3b3235722520,0x662e6e722e766964\n"
".quad 0x3164662509203436,0x3031646625202c32,0x3b3131646625202c,0x33732e766f6d090a\n"
".quad 0x2c33357225092032,0x6d090a3b35722520,0x09203233732e766f,0x3b30202c34357225\n"
".quad 0x672e70746573090a,0x2509203233732e74,0x347225202c303170,0x0a3b34357225202c\n"
".quad 0x3233732e766f6d09,0x202c353572250920,0x70746573090a3b30,0x203233732e65672e\n"
".quad 0x25202c3131702509,0x35357225202c3672,0x732e766f6d090a3b,0x3635722509203233\n"
".quad 0x6f6d090a3b30202c,0x2509203436662e76,0x6430202c33316466,0x3030303030303030\n"
".quad 0x3030303030303030,0x090a30202f2f093b,0x203436662e766f6d,0x202c343164662509\n"
".quad 0x3030303030306430,0x3030303030303030,0x30202f2f093b3030,0x36662e766f6d090a\n"
".quad 0x3531646625092034,0x303030306430202c,0x3030303030303030,0x2f2f093b30303030\n"
".quad 0x6c3c2f2f200a3020,0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070\n"
".quad 0x2c33303120656e69,0x616c206461656820,0x4c242064656c6562,0x353830315f315f74\n"
".quad 0x2e766f6d090a3634,0x3572250920323373,0x3b33357225202c37,0x315f315f744c240a\n"
".quad 0x090a3a3632383930,0x20616d676172702e,0x6c6f726e756f6e22,0x3c2f2f200a3b226c\n"
".quad 0x6f4c203e706f6f6c,0x2079646f6220706f,0x2c343220656e696c,0x676e697473656e20\n"
".quad 0x203a687470656420,0x6d69747365202c31,0x6574692064657461,0x3a736e6f69746172\n"
".quad 0x6e776f6e6b6e7520,0x3109636f6c2e090a,0x090a300935340938,0x203233732e766f6d\n"
".quad 0x25202c3835722509,0x6f6c2e090a3b3472,0x0936340938310963,0x732e766f6d090a30\n"
".quad 0x3935722509203233,0x0a3b36357225202c,0x383109636f6c2e09,0x73090a3009373409\n"
".quad 0x09203233732e6275,0x7225202c30367225,0x3b36357225202c34,0x33732e766f6d090a\n"
".quad 0x2c31367225092032,0x090a3b3036722520,0x6220303170252140,0x5f744c2409206172\n"
".quad 0x3238383435315f31,0x6f6c3c2f2f200a3b,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x68202c343220656e,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x3632383930315f31,0x33732e766f6d090a,0x2c32367225092032,0x6d090a3b34722520\n"
".quad 0x09203436662e766f,0x30202c3631646625,0x3030303066663364,0x3030303030303030\n"
".quad 0x0a31202f2f093b30,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x616568202c343220,0x656c6562616c2064,0x5f315f744c242064\n"
".quad 0x090a363238393031,0x203233732e766f6d,0x25202c3336722509,0x744c240a3b323672\n"
".quad 0x39353031315f315f,0x6c3c2f2f200a3a34,0x6f6f4c203e706f6f,0x6c2079646f622070\n"
".quad 0x202c373420656e69,0x20676e697473656e,0x33203a6874706564,0x616d69747365202c\n"
".quad 0x7265746920646574,0x203a736e6f697461,0x0a6e776f6e6b6e75,0x383109636f6c2e09\n"
".quad 0x63090a3009393409,0x36662e6e722e7476,0x2509203233732e34,0x7225202c37316466\n"
".quad 0x6c756d090a3b3835,0x662509203436662e,0x646625202c363164,0x31646625202c3731\n"
".quad 0x636f6c2e090a3b36,0x3009303509383109,0x33732e627573090a,0x2c38357225092032\n"
".quad 0x31202c3835722520,0x752e766f6d090a3b,0x3436722509203233,0x6573090a3b31202c\n"
".quad 0x33732e656c2e7074,0x2c32317025092032,0x25202c3935722520,0x2540090a3b343672\n"
".quad 0x2061726220323170,0x315f315f744c2409,0x200a3b3035383031,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x64616568202c3734\n"
".quad 0x64656c6562616c20,0x315f315f744c2420,0x2e090a3439353031,0x3509383109636f6c\n"
".quad 0x747663090a300932,0x2e3436662e6e722e,0x6466250920323373,0x39357225202c3831\n"
".quad 0x722e766964090a3b,0x2509203436662e6e,0x6625202c36316466,0x646625202c363164\n"
".quad 0x6f6c2e090a3b3831,0x0933350938310963,0x732e627573090a30,0x3935722509203233\n"
".quad 0x202c39357225202c,0x315f744c240a3b31,0x3a3035383031315f,0x6f6f6c3c2f2f200a\n"
".quad 0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62,0x6568202c37342065\n"
".quad 0x6c6562616c206461,0x315f744c24206465,0x0a3439353031315f,0x3233752e766f6d09\n"
".quad 0x202c353672250920,0x70746573090a3b31,0x203233732e656c2e,0x25202c3331702509\n"
".quad 0x367225202c313672,0x31702540090a3b35,0x2409206172622033,0x3131315f315f744c\n"
".quad 0x2f2f200a3b323633,0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f\n"
".quad 0x373420656e696c20,0x6c2064616568202c,0x242064656c656261,0x3031315f315f744c\n"
".quad 0x6f6c2e090a343935,0x0936350938310963,0x722e747663090a30,0x33732e3436662e6e\n"
".quad 0x3931646625092032,0x0a3b31367225202c,0x2e6e722e76696409,0x6466250920343666\n"
".quad 0x31646625202c3631,0x3931646625202c36,0x09636f6c2e090a3b,0x0a30093735093831\n"
".quad 0x3233732e62757309,0x202c313672250920,0x3b31202c31367225,0x315f315f744c240a\n"
".quad 0x200a3a3236333131,0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20\n"
".quad 0x20656e696c207964,0x64616568202c3734,0x64656c6562616c20,0x315f315f744c2420\n"
".quad 0x6d090a3439353031,0x09203233752e766f,0x3b30202c36367225,0x6e2e70746573090a\n"
".quad 0x2509203233732e65,0x357225202c343170,0x3b36367225202c38,0x203431702540090a\n"
".quad 0x744c240920617262,0x39353031315f315f,0x6c3c2f2f200a3b34,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x202c343220656e69,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x32383930315f315f,0x752e617262090a36,0x5f744c240920696e\n"
".quad 0x3238303031315f31,0x5f315f744c240a3b,0x0a3a323838343531,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x616568202c343220\n"
".quad 0x656c6562616c2064,0x5f315f744c242064,0x090a363238393031,0x203436662e766f6d\n"
".quad 0x202c363164662509,0x3030306666336430,0x3030303030303030,0x31202f2f093b3030\n"
".quad 0x315f315f744c240a,0x200a3a3238303031,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x64616568202c3432,0x64656c6562616c20\n"
".quad 0x315f315f744c2420,0x6d090a3632383930,0x09203233752e766f,0x3b30202c37367225\n"
".quad 0x6c2e70746573090a,0x2509203233732e65,0x357225202c353170,0x3b37367225202c36\n"
".quad 0x203531702540090a,0x744c240920617262,0x33313231315f315f,0x6c3c2f2f200a3b30\n"
".quad 0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070,0x202c343220656e69\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x32383930315f315f,0x09636f6c2e090a36\n"
".quad 0x0a30093136093831,0x2e6e722e74766309,0x203233732e343666,0x202c303264662509\n"
".quad 0x6d090a3b36357225,0x09203436662e766f,0x30202c3132646625,0x3030303030303064\n"
".quad 0x3030303030303030,0x0a30202f2f093b30,0x2e71652e74657309,0x203436662e323375\n"
".quad 0x25202c3836722509,0x6625202c30326466,0x656e090a3b313264,0x2509203233732e67\n"
".quad 0x367225202c393672,0x2e766f6d090a3b38,0x6466250920343666,0x66336430202c3232\n"
".quad 0x3030303030303066,0x093b303030303030,0x6573090a31202f2f,0x3233752e71652e74\n"
".quad 0x722509203436662e,0x31646625202c3037,0x3232646625202c32,0x732e67656e090a3b\n"
".quad 0x3137722509203233,0x0a3b30377225202c,0x203233622e726f09,0x25202c3237722509\n"
".quad 0x377225202c393672,0x2e766f6d090a3b31,0x3772250920323375,0x73090a3b30202c33\n"
".quad 0x732e71652e707465,0x3631702509203233,0x202c32377225202c,0x40090a3b33377225\n"
".quad 0x6172622036317025,0x5f315f744c240920,0x0a3b323436323131,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x616568202c343220\n"
".quad 0x656c6562616c2064,0x5f315f744c242064,0x090a363238393031,0x09303309636f6c2e\n"
".quad 0x090a300939363231,0x203436662e766f6d,0x202c333264662509,0x3030306666336430\n"
".quad 0x3030303030303030,0x31202f2f093b3030,0x6e752e617262090a,0x6557444c24092069\n"
".quad 0x73695f5f5f69646e,0x5f3837315f6e616e,0x5f744c240a3b3331,0x3234363231315f31\n"
".quad 0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x68202c343220656e,0x6562616c20646165,0x5f744c242064656c,0x3632383930315f31\n"
".quad 0x3309636f6c2e090a,0x3009313732310930,0x36662e736261090a,0x3432646625092034\n"
".quad 0x3b3231646625202c,0x36662e766f6d090a,0x3532646625092034,0x306666376430202c\n"
".quad 0x3030303030303030,0x2f2f093b30303030,0x6573090a666e6920,0x36662e656c2e7074\n"
".quad 0x2c37317025092034,0x202c343264662520,0x090a3b3532646625,0x6220373170252140\n"
".quad 0x5f744c2409206172,0x0a3b383132395f31,0x706f6f6c3c2f2f20,0x6f2074726150203e\n"
".quad 0x6220706f6f6c2066,0x656e696c2079646f,0x616568202c343220,0x656c6562616c2064\n"
".quad 0x5f315f744c242064,0x090a363238393031,0x203436662e736261,0x202c363264662509\n"
".quad 0x090a3b3032646625,0x203436662e766f6d,0x202c373264662509,0x3030306666376430\n"
".quad 0x3030303030303030,0x69202f2f093b3030,0x70746573090a666e,0x203436662e656c2e\n"
".quad 0x25202c3831702509,0x6625202c36326466,0x2540090a3b373264,0x2061726220383170\n"
".quad 0x395f315f744c2409,0x744c240a3b343734,0x3a383132395f315f,0x6f6f6c3c2f2f200a\n"
".quad 0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62,0x6568202c34322065\n"
".quad 0x6c6562616c206461,0x315f744c24206465,0x0a3632383930315f,0x303309636f6c2e09\n"
".quad 0x0a30093237323109,0x3436662e64646109,0x2c33326466250920,0x202c303264662520\n"
".quad 0x090a3b3231646625,0x20696e752e617262,0x646e6557444c2409,0x616e73695f5f5f69\n"
".quad 0x33315f3837315f6e,0x5f315f744c240a3b,0x2f200a3a34373439,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3220656e696c2079,0x2064616568202c34\n"
".quad 0x2064656c6562616c,0x30315f315f744c24,0x6c2e090a36323839,0x323109303309636f\n"
".quad 0x6f6d090a30093137,0x2509203436662e76,0x6430202c38326466,0x3030303030666637\n"
".quad 0x3030303030303030,0x666e69202f2f093b,0x652e70746573090a,0x2509203436662e71\n"
".quad 0x646625202c393170,0x32646625202c3231,0x70252140090a3b38,0x0920617262203931\n"
".quad 0x31315f315f744c24,0x2f200a3b34353133,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3220656e696c2079,0x2064616568202c34,0x2064656c6562616c\n"
".quad 0x30315f315f744c24,0x6c2e090a36323839,0x323109303309636f,0x6f6d090a30093537\n"
".quad 0x2509203436662e76,0x6430202c39326466,0x3030303030666637,0x3030303030303030\n"
".quad 0x666e69202f2f093b,0x36662e766f6d090a,0x3033646625092034,0x303030306430202c\n"
".quad 0x3030303030303030,0x2f2f093b30303030,0x2e766f6d090a3020,0x72257b0920343662\n"
".quad 0x7d353772252c3437,0x3b3032646625202c,0x33732e766f6d090a,0x2c36377225092032\n"
".quad 0x746573090a3b3020,0x3233732e65672e70,0x202c303270250920,0x7225202c35377225\n"
".quad 0x6c6573090a3b3637,0x2509203436662e70,0x6625202c33326466,0x646625202c393264\n"
".quad 0x30327025202c3033,0x752e617262090a3b,0x57444c240920696e,0x695f5f5f69646e65\n"
".quad 0x3837315f6e616e73,0x744c240a3b33315f,0x35313331315f315f,0x6c3c2f2f200a3a34\n"
".quad 0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070,0x202c343220656e69\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x32383930315f315f,0x09636f6c2e090a36\n"
".quad 0x0937373231093033,0x662e766f6d090a30,0x3364662509203436,0x6666376430202c31\n"
".quad 0x3030303030303030,0x2f093b3030303030,0x73090a666e69202f,0x662e71652e707465\n"
".quad 0x3132702509203436,0x2c3632646625202c,0x0a3b313364662520,0x2031327025214009\n"
".quad 0x744c240920617262,0x36363331315f315f,0x6c3c2f2f200a3b36,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x202c343220656e69,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x32383930315f315f,0x662e766f6d090a36,0x3364662509203436\n"
".quad 0x6666626430202c32,0x3030303030303030,0x2f093b3030303030,0x6573090a312d202f\n"
".quad 0x36662e71652e7074,0x2c32327025092034,0x202c323164662520,0x090a3b3233646625\n"
".quad 0x6220323270252140,0x5f744c2409206172,0x3837313431315f31,0x6f6c3c2f2f200a3b\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x68202c343220656e\n"
".quad 0x6562616c20646165,0x5f744c242064656c,0x3632383930315f31,0x3309636f6c2e090a\n"
".quad 0x3009393732310930,0x36662e766f6d090a,0x3332646625092034,0x306666336430202c\n"
".quad 0x3030303030303030,0x2f2f093b30303030,0x2e617262090a3120,0x444c240920696e75\n"
".quad 0x5f5f5f69646e6557,0x37315f6e616e7369,0x4c240a3b33315f38,0x313431315f315f74\n"
".quad 0x3c2f2f200a3a3837,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x2c343220656e696c,0x616c206461656820,0x4c242064656c6562,0x383930315f315f74\n"
".quad 0x636f6c2e090a3632,0x3138323109303309,0x2e766f6d090a3009,0x6466250920343666\n"
".quad 0x66376430202c3333,0x3030303030303066,0x093b303030303030,0x090a666e69202f2f\n"
".quad 0x203436662e766f6d,0x202c343364662509,0x3030303030306430,0x3030303030303030\n"
".quad 0x30202f2f093b3030,0x36662e766f6d090a,0x3533646625092034,0x306666336430202c\n"
".quad 0x3030303030303030,0x2f2f093b30303030,0x70746573090a3120,0x203436662e74672e\n"
".quad 0x25202c3332702509,0x6625202c34326466,0x6573090a3b353364,0x09203436662e706c\n"
".quad 0x25202c3633646625,0x6625202c33336466,0x327025202c343364,0x2e766f6d090a3b33\n"
".quad 0x6466250920343666,0x30306430202c3733,0x3030303030303030,0x093b303030303030\n"
".quad 0x6573090a30202f2f,0x36662e746c2e7074,0x2c34327025092034,0x202c303264662520\n"
".quad 0x090a3b3733646625,0x6220343270252140,0x5f744c2409206172,0x3039363431315f31\n"
".quad 0x6f6c3c2f2f200a3b,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x68202c343220656e,0x6562616c20646165,0x5f744c242064656c,0x3632383930315f31\n"
".quad 0x3309636f6c2e090a,0x3009333832310930,0x6e722e706372090a,0x662509203436662e\n"
".quad 0x646625202c363364,0x5f744c240a3b3633,0x3039363431315f31,0x6f6c3c2f2f200a3a\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x68202c343220656e\n"
".quad 0x6562616c20646165,0x5f744c242064656c,0x3632383930315f31,0x3309636f6c2e090a\n"
".quad 0x3009353832310930,0x36662e766f6d090a,0x3332646625092034,0x3b3633646625202c\n"
".quad 0x6e752e617262090a,0x6557444c24092069,0x73695f5f5f69646e,0x5f3837315f6e616e\n"
".quad 0x5f744c240a3b3331,0x3636363331315f31,0x6f6c3c2f2f200a3a,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x68202c343220656e,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x3632383930315f31,0x36662e766f6d090a,0x3833646625092034\n"
".quad 0x303030306430202c,0x3030303030303030,0x2f2f093b30303030,0x70746573090a3020\n"
".quad 0x203436662e71652e,0x25202c3532702509,0x6625202c32316466,0x2140090a3b383364\n"
".quad 0x6172622035327025,0x5f315f744c240920,0x0a3b323032353131,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x616568202c343220\n"
".quad 0x656c6562616c2064,0x5f315f744c242064,0x090a363238393031,0x09303309636f6c2e\n"
".quad 0x090a300939383231,0x203436662e766f6d,0x202c393364662509,0x3030306566336430\n"
".quad 0x3030303030303030,0x30202f2f093b3030,0x2e6c756d090a352e,0x6466250920343666\n"
".quad 0x32646625202c3034,0x3933646625202c30,0x722e747663090a3b,0x662e3436662e697a\n"
".quad 0x3464662509203436,0x3034646625202c31,0x662e766f6d090a3b,0x3464662509203436\n"
".quad 0x3030306430202c32,0x3030303030303030,0x2f093b3030303030,0x646461090a30202f\n"
".quad 0x662509203436662e,0x646625202c333464,0x34646625202c3134,0x2e627573090a3b31\n"
".quad 0x6466250920343666,0x32646625202c3434,0x3334646625202c30,0x662e736261090a3b\n"
".quad 0x3464662509203436,0x3434646625202c35,0x662e766f6d090a3b,0x3464662509203436\n"
".quad 0x6666336430202c36,0x3030303030303030,0x2f093b3030303030,0x746573090a31202f\n"
".quad 0x3436662e71652e70,0x202c363270250920,0x25202c3534646625,0x73090a3b36346466\n"
".quad 0x203436662e706c65,0x202c363364662509,0x25202c3231646625,0x7025202c32346466\n"
".quad 0x766f6d090a3b3632,0x662509203436662e,0x306430202c373464,0x3030303030303030\n"
".quad 0x3b30303030303030,0x73090a30202f2f09,0x662e746c2e707465,0x3732702509203436\n"
".quad 0x2c3032646625202c,0x0a3b373464662520,0x2037327025214009,0x744c240920617262\n"
".quad 0x31373531315f315f,0x6c3c2f2f200a3b34,0x726150203e706f6f,0x6f6f6c20666f2074\n"
".quad 0x6c2079646f622070,0x202c343220656e69,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x32383930315f315f,0x09636f6c2e090a36,0x0931393231093033,0x722e706372090a30\n"
".quad 0x2509203436662e6e,0x6625202c36336466,0x744c240a3b363364,0x31373531315f315f\n"
".quad 0x6c3c2f2f200a3a34,0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070\n"
".quad 0x202c343220656e69,0x62616c2064616568,0x744c242064656c65,0x32383930315f315f\n"
".quad 0x09636f6c2e090a36,0x0933393231093033,0x662e766f6d090a30,0x3264662509203436\n"
".quad 0x3633646625202c33,0x752e617262090a3b,0x57444c240920696e,0x695f5f5f69646e65\n"
".quad 0x3837315f6e616e73,0x744c240a3b33315f,0x30323531315f315f,0x6c3c2f2f200a3a32\n"
".quad 0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070,0x202c343220656e69\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x32383930315f315f,0x662e766f6d090a36\n"
".quad 0x3464662509203436,0x6666666430202c38,0x3030303030303030,0x2f093b3030303030\n"
".quad 0x090a666e692d202f,0x2e71652e70746573,0x3270250920343666,0x3231646625202c38\n"
".quad 0x3b3834646625202c,0x383270252140090a,0x4c24092061726220,0x323631315f315f74\n"
".quad 0x3c2f2f200a3b3632,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x2c343220656e696c,0x616c206461656820,0x4c242064656c6562,0x383930315f315f74\n"
".quad 0x2e766f6d090a3632,0x6466250920343666,0x30306430202c3934,0x3030303030303030\n"
".quad 0x093b303030303030,0x6573090a30202f2f,0x36662e746c2e7074,0x2c39327025092034\n"
".quad 0x202c303264662520,0x090a3b3934646625,0x6220393270252140,0x5f744c2409206172\n"
".quad 0x3439393631315f31,0x6f6c3c2f2f200a3b,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x68202c343220656e,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x3632383930315f31,0x3309636f6c2e090a,0x3009363932310930,0x6e722e706372090a\n"
".quad 0x662509203436662e,0x646625202c303564,0x67656e090a3b3231,0x662509203436662e\n"
".quad 0x646625202c313564,0x617262090a3b3035,0x4c240920696e752e,0x373631315f315f74\n"
".quad 0x5f744c240a3b3833,0x3439393631315f31,0x6f6c3c2f2f200a3a,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x68202c343220656e,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x3632383930315f31,0x36662e67656e090a,0x3135646625092034\n"
".quad 0x3b3231646625202c,0x315f315f744c240a,0x200a3a3833373631,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x64616568202c3432\n"
".quad 0x64656c6562616c20,0x315f315f744c2420,0x6d090a3632383930,0x09203436662e766f\n"
".quad 0x25202c3633646625,0x6d090a3b31356466,0x09203436662e766f,0x30202c3235646625\n"
".quad 0x3030303065663364,0x3030303030303030,0x2e30202f2f093b30,0x662e6c756d090a35\n"
".quad 0x3564662509203436,0x3032646625202c33,0x3b3235646625202c,0x7a722e747663090a\n"
".quad 0x36662e3436662e69,0x3134646625092034,0x3b3335646625202c,0x36662e646461090a\n"
".quad 0x3435646625092034,0x2c3134646625202c,0x0a3b313464662520,0x3436662e62757309\n"
".quad 0x2c35356466250920,0x202c303264662520,0x090a3b3435646625,0x203436662e736261\n"
".quad 0x202c363564662509,0x090a3b3535646625,0x203436662e766f6d,0x202c373564662509\n"
".quad 0x3030306666336430,0x3030303030303030,0x31202f2f093b3030,0x652e70746573090a\n"
".quad 0x2509203436662e71,0x646625202c303370,0x35646625202c3635,0x70252140090a3b37\n"
".quad 0x0920617262203033,0x31315f315f744c24,0x2f200a3b30353237,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3220656e696c2079,0x2064616568202c34\n"
".quad 0x2064656c6562616c,0x30315f315f744c24,0x6c2e090a36323839,0x323109303309636f\n"
".quad 0x6f6d090a30093839,0x2509203436622e76,0x6625202c37316472,0x6f78090a3b363364\n"
".quad 0x2509203436622e72,0x7225202c38316472,0x32392d202c373164,0x3633303237333332\n"
".quad 0x3038353737343538,0x2e766f6d090a3b38,0x6466250920343662,0x31647225202c3633\n"
".quad 0x315f744c240a3b38,0x3a3035323731315f,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x6568202c34322065,0x6c6562616c206461\n"
".quad 0x315f744c24206465,0x0a3632383930315f,0x303309636f6c2e09,0x0a30093030333109\n"
".quad 0x3436662e766f6d09,0x2c33326466250920,0x0a3b363364662520,0x696e752e61726209\n"
".quad 0x6e6557444c240920,0x6e73695f5f5f6964,0x315f3837315f6e61,0x315f744c240a3b33\n"
".quad 0x3a3632323631315f,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x6568202c34322065,0x6c6562616c206461,0x315f744c24206465\n"
".quad 0x0a3632383930315f,0x303309636f6c2e09,0x0a30093230333109,0x3436662e766f6d09\n"
".quad 0x2c38356466250920,0x3030303030643020,0x3030303030303030,0x202f2f093b303030\n"
".quad 0x2e70746573090a30,0x09203436662e746c,0x6625202c31337025,0x646625202c323164\n"
".quad 0x252140090a3b3835,0x2061726220313370,0x315f315f744c2409,0x200a3b3439333535\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x64616568202c3432,0x64656c6562616c20,0x315f315f744c2420,0x73090a3632383930\n"
".quad 0x2e75656e2e707465,0x3370250920343666,0x3032646625202c32,0x3b3032646625202c\n"
".quad 0x323370252140090a,0x4c24092061726220,0x333535315f315f74,0x3c2f2f200a3b3439\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x2c343220656e696c\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x383930315f315f74,0x636f6c2e090a3632\n"
".quad 0x3330333109303309,0x2e766f6d090a3009,0x6466250920343666,0x66666430202c3332\n"
".quad 0x3030303030303866,0x093b303030303030,0x0a6e616e2d202f2f,0x696e752e61726209\n"
".quad 0x6e6557444c240920,0x6e73695f5f5f6964,0x315f3837315f6e61,0x315f744c240a3b33\n"
".quad 0x3a3439333535315f,0x30315f315f4c240a,0x2f200a3a38333933,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3220656e696c2079,0x2064616568202c34\n"
".quad 0x2064656c6562616c,0x30315f315f744c24,0x6c2e090a36323839,0x393509303309636f\n"
".quad 0x766f6d090a300939,0x257b09203436622e,0x383772252c373772,0x3432646625202c7d\n"
".quad 0x732e766f6d090a3b,0x3937722509203233,0x0a3b38377225202c,0x303309636f6c2e09\n"
".quad 0x090a300930303609,0x203436622e766f6d,0x252c303872257b09,0x6625202c7d313872\n"
".quad 0x6c2e090a3b343264,0x303609303309636f,0x726873090a300931,0x722509203233732e\n"
".quad 0x38377225202c3238,0x61090a3b3032202c,0x09203233622e646e,0x7225202c33387225\n"
".quad 0x37343032202c3238,0x752e766f6d090a3b,0x3438722509203233,0x6573090a3b30202c\n"
".quad 0x33732e656e2e7074,0x2c33337025092032,0x25202c3338722520,0x2540090a3b343872\n"
".quad 0x2061726220333370,0x315f315f744c2409,0x200a3b3236373731,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x64616568202c3432\n"
".quad 0x64656c6562616c20,0x315f315f744c2420,0x2e090a3632383930,0x3609303309636f6c\n"
".quad 0x6f6d090a30093530,0x2509203436662e76,0x6430202c39356466,0x3030303030353334\n"
".quad 0x3030303030303030,0x382e31202f2f093b,0x36312b6534343130,0x36662e6c756d090a\n"
".quad 0x3036646625092034,0x2c3432646625202c,0x0a3b393564662520,0x3436622e766f6d09\n"
".quad 0x2c353872257b0920,0x25202c7d39377225,0x2e090a3b30366466,0x3609303309636f6c\n"
".quad 0x6f6d090a30093630,0x7b09203436622e76,0x3872252c30387225,0x36646625202c7d36\n"
".quad 0x636f6c2e090a3b30,0x0938303609303309,0x732e726873090a30,0x3738722509203233\n"
".quad 0x202c39377225202c,0x646e61090a3b3032,0x722509203233622e,0x37387225202c3838\n"
".quad 0x0a3b37343032202c,0x3233732e62757309,0x202c333872250920,0x3435202c38387225\n"
".quad 0x5f315f744c240a3b,0x0a3a323637373131,0x706f6f6c3c2f2f20,0x6f2074726150203e\n"
".quad 0x6220706f6f6c2066,0x656e696c2079646f,0x616568202c343220,0x656c6562616c2064\n"
".quad 0x5f315f744c242064,0x090a363238393031,0x09303309636f6c2e,0x73090a3009303136\n"
".quad 0x09203233732e6275,0x7225202c33387225,0x33323031202c3338,0x09636f6c2e090a3b\n"
".quad 0x3009363136093033,0x33622e646e61090a,0x2c39387225092032,0x2d202c3937722520\n"
".quad 0x3035333436343132,0x2e726f090a3b3337,0x3972250920323362,0x2c39387225202c30\n"
".quad 0x3339363237303120,0x6f6d090a3b383432,0x2509203436622e76,0x257b202c31366466\n"
".quad 0x303972252c303872,0x2e766f6d090a3b7d,0x3972250920323375,0x3133373031202c31\n"
".quad 0x090a3b3238353732,0x2e656c2e70746573,0x3370250920323375,0x2c30397225202c34\n"
".quad 0x090a3b3139722520,0x7262203433702540,0x315f744c24092061,0x3b3437323831315f\n"
".quad 0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62\n"
".quad 0x6568202c34322065,0x6c6562616c206461,0x315f744c24206465,0x0a3632383930315f\n"
".quad 0x303309636f6c2e09,0x090a300938313609,0x203436622e766f6d,0x252c323972257b09\n"
".quad 0x6625202c7d333972,0x7573090a3b313664,0x2509203233732e62,0x397225202c343972\n"
".quad 0x3538343031202c33,0x766f6d090a3b3637,0x257b09203436622e,0x363972252c353972\n"
".quad 0x3136646625202c7d,0x622e766f6d090a3b,0x3664662509203436,0x353972257b202c31\n"
".quad 0x0a3b7d343972252c,0x303309636f6c2e09,0x090a300939313609,0x203233732e646461\n"
".quad 0x25202c3338722509,0x0a3b31202c333872,0x31315f315f744c24,0x2f200a3a34373238\n"
".quad 0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c,0x3220656e696c2079\n"
".quad 0x2064616568202c34,0x2064656c6562616c,0x30315f315f744c24,0x6c2e090a36323839\n"
".quad 0x323609303309636f,0x766f6d090a300939,0x662509203436662e,0x626430202c323664\n"
".quad 0x3030303030306666,0x3b30303030303030,0x090a312d202f2f09,0x203436662e646461\n"
".quad 0x202c333664662509,0x25202c3136646625,0x6d090a3b32366466,0x09203436662e766f\n"
".quad 0x30202c3436646625,0x3030303066663364,0x3030303030303030,0x0a31202f2f093b30\n"
".quad 0x3436662e64646109,0x2c35366466250920,0x202c313664662520,0x090a3b3436646625\n"
".quad 0x662e6e722e747663,0x09203436662e3233,0x646625202c346625,0x706372090a3b3536\n"
".quad 0x203233662e6e722e,0x6625202c35662509,0x2e747663090a3b34,0x203233662e343666\n"
".quad 0x202c363664662509,0x656e090a3b356625,0x2509203436662e67,0x6625202c37366466\n"
".quad 0x6f6d090a3b353664,0x2509203436662e76,0x6430202c38366466,0x3030303030666633\n"
".quad 0x3030303030303030,0x090a31202f2f093b,0x662e6e722e64616d,0x3664662509203436\n"
".quad 0x3736646625202c39,0x2c3636646625202c,0x0a3b383664662520,0x2e6e722e64616d09\n"
".quad 0x6466250920343666,0x36646625202c3037,0x3936646625202c39,0x3b3936646625202c\n"
".quad 0x6e722e64616d090a,0x662509203436662e,0x646625202c313764,0x36646625202c3037\n"
".quad 0x3636646625202c36,0x662e6c756d090a3b,0x3764662509203436,0x3336646625202c32\n"
".quad 0x3b3137646625202c,0x3309636f6c2e090a,0x0a30093933360930,0x3436662e64646109\n"
".quad 0x2c33376466250920,0x202c323764662520,0x090a3b3237646625,0x203436662e6c756d\n"
".quad 0x202c343764662509,0x25202c3337646625,0x6d090a3b33376466,0x09203436662e766f\n"
".quad 0x30202c3537646625,0x6635663062653364,0x6566616332643766,0x2e31202f2f093b32\n"
".quad 0x302d653539303130,0x662e766f6d090a36,0x3764662509203436,0x6465336430202c36\n"
".quad 0x6131343264356630,0x2f093b6135623364,0x363334302e34202f,0x6d090a36302d6534\n"
".quad 0x36662e6e722e6461,0x3737646625092034,0x2c3537646625202c,0x202c343764662520\n"
".quad 0x090a3b3637646625,0x203436662e766f6d,0x202c383764662509,0x3262336665336430\n"
".quad 0x6138383435376130,0x31202f2f093b6633,0x2d6531333837382e,0x2e64616d090a3530\n"
".quad 0x09203436662e6e72,0x25202c3937646625,0x6625202c37376466,0x646625202c343764\n"
".quad 0x766f6d090a3b3837,0x662509203436662e,0x336430202c303864,0x6564633534373166\n"
".quad 0x3b35646365616634,0x37382e38202f2f09,0x0a35302d65323837,0x2e6e722e64616d09\n"
".quad 0x6466250920343666,0x37646625202c3138,0x3437646625202c39,0x3b3038646625202c\n"
".quad 0x36662e766f6d090a,0x3238646625092034,0x633366336430202c,0x6138353237633137\n"
".quad 0x2f2f093b62383735,0x33343030302e3020,0x616d090a38323034,0x3436662e6e722e64\n"
".quad 0x2c33386466250920,0x202c313864662520,0x25202c3437646625,0x6d090a3b32386466\n"
".quad 0x09203436662e766f,0x30202c3438646625,0x3239343236663364,0x3139623234323934\n"
".quad 0x2e30202f2f093b30,0x3431323332323030,0x6e722e64616d090a,0x662509203436662e\n"
".quad 0x646625202c353864,0x37646625202c3338,0x3438646625202c34,0x662e766f6d090a3b\n"
".quad 0x3864662509203436,0x3866336430202c36,0x3939393939393939,0x2f093b6266643939\n"
".quad 0x353231302e30202f,0x6e722e64616d090a,0x662509203436662e,0x646625202c373864\n"
".quad 0x37646625202c3538,0x3638646625202c34,0x09636f6c2e090a3b,0x3009303436093033\n"
".quad 0x36662e6c756d090a,0x3838646625092034,0x2c3437646625202c,0x0a3b373864662520\n"
".quad 0x303309636f6c2e09,0x090a300934343609,0x203436662e627573,0x202c393864662509\n"
".quad 0x25202c3336646625,0x6e090a3b33376466,0x09203436662e6765,0x25202c3039646625\n"
".quad 0x61090a3b33376466,0x09203436662e6464,0x25202c3139646625,0x6625202c39386466\n"
".quad 0x616d090a3b393864,0x3436662e6e722e64,0x2c32396466250920,0x202c303964662520\n"
".quad 0x25202c3336646625,0x6d090a3b31396466,0x09203436662e6c75,0x25202c3339646625\n"
".quad 0x6625202c31376466,0x6c2e090a3b323964,0x383509303309636f,0x766f6d090a300935\n"
".quad 0x662509203436662e,0x336430202c343964,0x3535353535356266,0x3b35353535353535\n"
".quad 0x38302e30202f2f09,0x61090a3333333333,0x09203436662e6464,0x25202c3539646625\n"
".quad 0x6625202c38386466,0x6f6d090a3b343964,0x2509203436662e76,0x6430202c36396466\n"
".quad 0x3535353535626633,0x3535353535353535,0x302e30202f2f093b,0x090a333333333338\n"
".quad 0x203436662e627573,0x202c373964662509,0x25202c3639646625,0x61090a3b35396466\n"
".quad 0x09203436662e6464,0x25202c3839646625,0x6625202c38386466,0x6f6d090a3b373964\n"
".quad 0x2509203436662e76,0x6430202c39396466,0x6263346136346362,0x3062376539623030\n"
".quad 0x2e322d202f2f093b,0x312d653430353534,0x662e646461090a38,0x3164662509203436\n"
".quad 0x39646625202c3030,0x3939646625202c38,0x662e646461090a3b,0x3164662509203436\n"
".quad 0x39646625202c3130,0x3031646625202c35,0x2e6c756d090a3b30,0x6466250920343666\n"
".quad 0x646625202c323031,0x31646625202c3337,0x627573090a3b3130,0x662509203436662e\n"
".quad 0x6625202c33303164,0x646625202c353964,0x6461090a3b313031,0x2509203436662e64\n"
".quad 0x25202c3430316466,0x25202c3030316466,0x090a3b3330316466,0x203436662e67656e\n"
".quad 0x2c35303164662509,0x3b32303164662520,0x6e722e64616d090a,0x662509203436662e\n"
".quad 0x6625202c36303164,0x6625202c31303164,0x646625202c333764,0x616d090a3b353031\n"
".quad 0x3436662e6e722e64,0x3730316466250920,0x343031646625202c,0x2c3339646625202c\n"
".quad 0x3b36303164662520,0x6e722e64616d090a,0x662509203436662e,0x6625202c38303164\n"
".quad 0x6625202c31303164,0x646625202c333964,0x6c2e090a3b373031,0x383509303309636f\n"
".quad 0x64616d090a300936,0x203436662e6e722e,0x2c39303164662509,0x2c34303164662520\n"
".quad 0x202c333764662520,0x0a3b383031646625,0x303309636f6c2e09,0x090a300937383509\n"
".quad 0x203436662e646461,0x2c30313164662509,0x2c32303164662520,0x3b39303164662520\n"
".quad 0x3309636f6c2e090a,0x0a30093838350930,0x3436662e62757309,0x3131316466250920\n"
".quad 0x323031646625202c,0x303131646625202c,0x662e646461090a3b,0x3164662509203436\n"
".quad 0x31646625202c3231,0x31646625202c3930,0x6f6c2e090a3b3131,0x3238350930330963\n"
".quad 0x2e6c756d090a3009,0x6466250920343666,0x646625202c333131,0x31646625202c3337\n"
".quad 0x6f6c2e090a3b3031,0x3338350930330963,0x2e67656e090a3009,0x6466250920343666\n"
".quad 0x646625202c343131,0x616d090a3b333131,0x3436662e6e722e64,0x3531316466250920\n"
".quad 0x303131646625202c,0x2c3337646625202c,0x3b34313164662520,0x3309636f6c2e090a\n"
".quad 0x0a30093438350930,0x2e6e722e64616d09,0x6466250920343666,0x646625202c363131\n"
".quad 0x646625202c323131,0x31646625202c3339,0x6f6c2e090a3b3531,0x3538350930330963\n"
".quad 0x2e64616d090a3009,0x09203436662e6e72,0x202c373131646625,0x202c303131646625\n"
".quad 0x25202c3339646625,0x090a3b3631316466,0x09303309636f6c2e,0x6d090a3009363835\n"
".quad 0x36662e6e722e6461,0x3131646625092034,0x3131646625202c38,0x3337646625202c32\n"
".quad 0x373131646625202c,0x09636f6c2e090a3b,0x3009373835093033,0x36662e646461090a\n"
".quad 0x3131646625092034,0x3131646625202c39,0x3131646625202c33,0x636f6c2e090a3b38\n"
".quad 0x0938383509303309,0x662e627573090a30,0x3164662509203436,0x31646625202c3032\n"
".quad 0x31646625202c3331,0x646461090a3b3931,0x662509203436662e,0x6625202c31323164\n"
".quad 0x6625202c38313164,0x2e090a3b30323164,0x3509303309636f6c,0x756d090a30093238\n"
".quad 0x2509203436662e6c,0x25202c3232316466,0x6625202c33376466,0x2e090a3b39313164\n"
".quad 0x3509303309636f6c,0x656e090a30093638,0x2509203436662e67,0x25202c3332316466\n"
".quad 0x090a3b3232316466,0x662e6e722e64616d,0x3164662509203436,0x31646625202c3432\n"
".quad 0x37646625202c3931,0x3231646625202c33,0x2e64616d090a3b33,0x09203436662e6e72\n"
".quad 0x202c353231646625,0x202c313231646625,0x25202c3339646625,0x090a3b3432316466\n"
".quad 0x662e6e722e64616d,0x3164662509203436,0x31646625202c3632,0x39646625202c3931\n"
".quad 0x3231646625202c33,0x2e64616d090a3b35,0x09203436662e6e72,0x202c373231646625\n"
".quad 0x202c313231646625,0x25202c3337646625,0x090a3b3632316466,0x09303309636f6c2e\n"
".quad 0x61090a3009373835,0x09203436662e6464,0x202c383231646625,0x202c373231646625\n"
".quad 0x0a3b323231646625,0x303309636f6c2e09,0x090a300932373509,0x662e6e722e747663\n"
".quad 0x09203233732e3436,0x202c393231646625,0x61090a3b33387225,0x09203436662e6464\n"
".quad 0x202c303331646625,0x25202c3337646625,0x090a3b3832316466,0x203436662e766f6d\n"
".quad 0x2c31333164662509,0x3236656633643020,0x3361666566323465,0x202f2f093b303030\n"
".quad 0x3734313339362e30,0x36662e6c756d090a,0x3331646625092034,0x3231646625202c32\n"
".quad 0x3331646625202c39,0x2e627573090a3b31,0x6466250920343666,0x646625202c333331\n"
".quad 0x646625202c323231,0x6461090a3b383231,0x2509203436662e64,0x25202c3433316466\n"
".quad 0x25202c3732316466,0x090a3b3333316466,0x203436662e627573,0x2c35333164662509\n"
".quad 0x202c333764662520,0x0a3b303331646625,0x3436662e64646109,0x3633316466250920\n"
".quad 0x383231646625202c,0x353331646625202c,0x662e646461090a3b,0x3164662509203436\n"
".quad 0x31646625202c3733,0x31646625202c3433,0x646461090a3b3633,0x662509203436662e\n"
".quad 0x6625202c38333164,0x646625202c333964,0x6461090a3b373331,0x2509203436662e64\n"
".quad 0x25202c3933316466,0x25202c3033316466,0x090a3b3833316466,0x203436662e646461\n"
".quad 0x2c30343164662509,0x2c32333164662520,0x3b39333164662520,0x36662e627573090a\n"
".quad 0x3431646625092034,0x3331646625202c31,0x3331646625202c30,0x2e646461090a3b39\n"
".quad 0x6466250920343666,0x646625202c323431,0x646625202c383331,0x7573090a3b313431\n"
".quad 0x2509203436662e62,0x25202c3334316466,0x25202c3233316466,0x090a3b3034316466\n"
".quad 0x203436662e646461,0x2c34343164662509,0x2c39333164662520,0x3b33343164662520\n"
".quad 0x36662e646461090a,0x3431646625092034,0x3431646625202c35,0x3431646625202c32\n"
".quad 0x2e766f6d090a3b34,0x6466250920343666,0x336430202c363431,0x6661366564333564\n"
".quad 0x3b36656365383732,0x32382e32202f2f09,0x0a33312d65333533,0x2e6e722e64616d09\n"
".quad 0x6466250920343666,0x646625202c373431,0x646625202c393231,0x646625202c363431\n"
".quad 0x6461090a3b353431,0x2509203436662e64,0x25202c3834316466,0x25202c3034316466\n"
".quad 0x090a3b3734316466,0x09303309636f6c2e,0x73090a3009333735,0x09203436662e6275\n"
".quad 0x202c393431646625,0x202c303431646625,0x0a3b383431646625,0x3436662e64646109\n"
".quad 0x3035316466250920,0x373431646625202c,0x393431646625202c,0x09636f6c2e090a3b\n"
".quad 0x0939343231093033,0x662e766f6d090a30,0x3164662509203436,0x66336430202c3135\n"
".quad 0x3030303030303032,0x093b303030303030,0x3030302e30202f2f,0x6d090a3730323231\n"
".quad 0x09203436662e6c75,0x202c323531646625,0x25202c3032646625,0x090a3b3135316466\n"
".quad 0x203436662e766f6d,0x2c33353164662509,0x3264306637643020,0x3834303465623161\n"
".quad 0x202f2f093b303966,0x090a3430332b6531,0x2e74672e70746573,0x3370250920343666\n"
".quad 0x3632646625202c35,0x333531646625202c,0x2e706c6573090a3b,0x6466250920343666\n"
".quad 0x646625202c343531,0x646625202c323531,0x35337025202c3032,0x662e6c756d090a3b\n"
".quad 0x3164662509203436,0x31646625202c3535,0x31646625202c3435,0x67656e090a3b3834\n"
".quad 0x662509203436662e,0x6625202c36353164,0x6d090a3b35353164,0x36662e6e722e6461\n"
".quad 0x3531646625092034,0x3431646625202c37,0x3531646625202c38,0x3531646625202c34\n"
".quad 0x2e64616d090a3b36,0x09203436662e6e72,0x202c383531646625,0x202c303531646625\n"
".quad 0x202c343531646625,0x0a3b373531646625,0x3436662e64646109,0x3935316466250920\n"
".quad 0x353531646625202c,0x383531646625202c,0x662e627573090a3b,0x3164662509203436\n"
".quad 0x31646625202c3036,0x31646625202c3535,0x646461090a3b3935,0x662509203436662e\n"
".quad 0x6625202c31363164,0x6625202c38353164,0x2e090a3b30363164,0x3709303309636f6c\n"
".quad 0x6f6d090a30093133,0x7b09203436622e76,0x3972252c37397225,0x31646625202c7d38\n"
".quad 0x766f6d090a3b3935,0x722509203233732e,0x3630312d202c3939,0x3b39353735373834\n"
".quad 0x746c2e746573090a,0x3233732e3233752e,0x2c30303172250920,0x25202c3839722520\n"
".quad 0x656e090a3b393972,0x2509203233732e67,0x7225202c31303172,0x6f6d090a3b303031\n"
".quad 0x2509203233752e76,0x3031202c32303172,0x3039343533353238,0x6c2e746573090a3b\n"
".quad 0x33752e3233752e65,0x3330317225092032,0x202c38397225202c,0x090a3b3230317225\n"
".quad 0x203233732e67656e,0x202c343031722509,0x090a3b3330317225,0x09203233622e726f\n"
".quad 0x25202c3530317225,0x7225202c31303172,0x6f6d090a3b343031,0x2509203233752e76\n"
".quad 0x3b30202c36303172,0x652e70746573090a,0x2509203233732e71,0x317225202c363370\n"
".quad 0x30317225202c3530,0x33702540090a3b36,0x2409206172622036,0x3831315f315f744c\n"
".quad 0x2f2f200a3b363837,0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f\n"
".quad 0x343220656e696c20,0x6c2064616568202c,0x242064656c656261,0x3930315f315f744c\n"
".quad 0x6f6c2e090a363238,0x3330370930330963,0x2e766f6d090a3009,0x6466250920343666\n"
".quad 0x336430202c323631,0x3637343531376666,0x3b65663238623235,0x34342e31202f2f09\n"
".quad 0x2e6c756d090a3732,0x6466250920343666,0x646625202c333631,0x646625202c393531\n"
".quad 0x6c2e090a3b323631,0x303709303309636f,0x747663090a300935,0x3436662e696e722e\n"
".quad 0x662509203436662e,0x6625202c34363164,0x6d090a3b33363164,0x09203436662e766f\n"
".quad 0x202c353631646625,0x6532366566626430,0x3933616665663234,0x2d202f2f093b6665\n"
".quad 0x3734313339362e30,0x6e722e64616d090a,0x662509203436662e,0x6625202c36363164\n"
".quad 0x6625202c34363164,0x6625202c35363164,0x2e090a3b39353164,0x3709303309636f6c\n"
".quad 0x6f6d090a30093630,0x2509203436662e76,0x30202c3736316466,0x3963626137636264\n"
".quad 0x3330383933623365,0x322d202f2f093b66,0x2d6535303931332e,0x2e64616d090a3731\n"
".quad 0x09203436662e6e72,0x202c383631646625,0x202c343631646625,0x202c373631646625\n"
".quad 0x0a3b363631646625,0x303309636f6c2e09,0x090a300930323309,0x203436662e766f6d\n"
".quad 0x2c39363164662509,0x6631326533643020,0x3835666363663730,0x202f2f093b646162\n"
".quad 0x6533343838302e32,0x766f6d090a39302d,0x662509203436662e,0x6430202c30373164\n"
".quad 0x3138646661356533,0x6661623363366164,0x352e32202f2f093b,0x38302d6536363331\n"
".quad 0x6e722e64616d090a,0x662509203436662e,0x6625202c31373164,0x6625202c39363164\n"
".quad 0x6625202c38363164,0x6d090a3b30373164,0x09203436662e766f,0x202c323731646625\n"
".quad 0x6537323965336430,0x3038663036663535,0x32202f2f093b3665,0x2d6535373535372e\n"
".quad 0x2e64616d090a3730,0x09203436662e6e72,0x202c333731646625,0x202c313731646625\n"
".quad 0x202c383631646625,0x0a3b323731646625,0x3436662e766f6d09,0x3437316466250920\n"
".quad 0x376365336430202c,0x3230663861646431,0x2f2f093b36363664,0x32373535372e3220\n"
".quad 0x616d090a36302d65,0x3436662e6e722e64,0x3537316466250920,0x333731646625202c\n"
".quad 0x383631646625202c,0x343731646625202c,0x662e766f6d090a3b,0x3164662509203436\n"
".quad 0x65336430202c3637,0x3331306131306166,0x093b306534393862,0x3038342e32202f2f\n"
".quad 0x090a35302d653631,0x662e6e722e64616d,0x3164662509203436,0x31646625202c3737\n"
".quad 0x31646625202c3537,0x31646625202c3836,0x766f6d090a3b3637,0x662509203436662e\n"
".quad 0x6430202c38373164,0x3061313061326633,0x3838376661336431,0x302e30202f2f093b\n"
".quad 0x3331343839313030,0x6e722e64616d090a,0x662509203436662e,0x6625202c39373164\n"
".quad 0x6625202c37373164,0x6625202c38363164,0x6d090a3b38373164,0x09203436662e766f\n"
".quad 0x202c303831646625,0x3163363566336430,0x3161336336316336,0x30202f2f093b6365\n"
".quad 0x383838333130302e,0x722e64616d090a39,0x2509203436662e6e,0x25202c3138316466\n"
".quad 0x25202c3937316466,0x25202c3836316466,0x090a3b3038316466,0x09303309636f6c2e\n"
".quad 0x6d090a3009313233,0x09203436662e766f,0x202c323831646625,0x3131313866336430\n"
".quad 0x3139303131313131,0x30202f2f093b3136,0x333333333830302e,0x722e64616d090a33\n"
".quad 0x2509203436662e6e,0x25202c3338316466,0x25202c3138316466,0x25202c3836316466\n"
".quad 0x090a3b3238316466,0x09303309636f6c2e,0x6d090a3009323233,0x09203436662e766f\n"
".quad 0x202c343831646625,0x3535356166336430,0x3435353535353535,0x30202f2f093b3163\n"
".quad 0x373636363134302e,0x6e722e64616d090a,0x662509203436662e,0x6625202c35383164\n"
".quad 0x6625202c33383164,0x6625202c38363164,0x2e090a3b34383164,0x3309303309636f6c\n"
".quad 0x6f6d090a30093332,0x2509203436662e76,0x30202c3638316466,0x3535353563663364\n"
".quad 0x3635353535353535,0x2e30202f2f093b66,0x090a373636363631,0x662e6e722e64616d\n"
".quad 0x3164662509203436,0x31646625202c3738,0x31646625202c3538,0x31646625202c3836\n"
".quad 0x6f6c2e090a3b3638,0x3432330930330963,0x2e766f6d090a3009,0x6466250920343666\n"
".quad 0x336430202c383831,0x3030303030306566,0x3b30303030303030,0x0a352e30202f2f09\n"
".quad 0x2e6e722e64616d09,0x6466250920343666,0x646625202c393831,0x646625202c373831\n"
".quad 0x646625202c383631,0x6c2e090a3b383831,0x323309303309636f,0x6c756d090a300936\n"
".quad 0x662509203436662e,0x6625202c30393164,0x6625202c38363164,0x6d090a3b39383164\n"
".quad 0x36662e6e722e6461,0x3931646625092034,0x3931646625202c31,0x3631646625202c30\n"
".quad 0x3631646625202c38,0x636f6c2e090a3b38,0x0938303709303309,0x722e747663090a30\n"
".quad 0x662e3233732e697a,0x3031722509203436,0x3631646625202c37,0x2e6c6873090a3b34\n"
".quad 0x3172250920323362,0x30317225202c3830,0x090a3b3032202c37,0x203233732e646461\n"
".quad 0x202c393031722509,0x31202c3830317225,0x3432333936323730,0x2e646461090a3b38\n"
".quad 0x3172250920323375,0x30317225202c3031,0x3b30323031202c37,0x33752e766f6d090a\n"
".quad 0x3131317225092032,0x0a3b30343032202c,0x74672e7074657309,0x702509203233752e\n"
".quad 0x31317225202c3733,0x3131317225202c30,0x3733702540090a3b,0x4c24092061726220\n"
".quad 0x353931315f315f74,0x3c2f2f200a3b3435,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x2c343220656e696c,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x383930315f315f74,0x636f6c2e090a3632,0x0931313709303309,0x732e766f6d090a30\n"
".quad 0x3131722509203233,0x6d090a3b30202c32,0x09203436622e766f,0x202c323931646625\n"
".quad 0x252c32313172257b,0x090a3b7d39303172,0x662e6e722e64616d,0x3164662509203436\n"
".quad 0x31646625202c3836,0x31646625202c3139,0x31646625202c3239,0x617262090a3b3239\n"
".quad 0x4c240920696e752e,0x323931315f315f74,0x5f744c240a3b3839,0x3435353931315f31\n"
".quad 0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x68202c343220656e,0x6562616c20646165,0x5f744c242064656c,0x3632383930315f31\n"
".quad 0x33752e766f6d090a,0x3331317225092032,0x6573090a3b30202c,0x33732e65672e7074\n"
".quad 0x2c38337025092032,0x202c373031722520,0x090a3b3331317225,0x7262203833702540\n"
".quad 0x315f744c24092061,0x3b3636303032315f,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x6568202c34322065,0x6c6562616c206461\n"
".quad 0x315f744c24206465,0x0a3632383930315f,0x303309636f6c2e09,0x090a300935313709\n"
".quad 0x203233732e646461,0x202c393031722509,0x35202c3930317225,0x3b30383631373637\n"
".quad 0x33732e766f6d090a,0x3431317225092032,0x373036313031202c,0x62090a3b34343130\n"
".quad 0x0920696e752e6172,0x31315f315f744c24,0x4c240a3b30313839,0x303032315f315f74\n"
".quad 0x3c2f2f200a3a3636,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x2c343220656e696c,0x616c206461656820,0x4c242064656c6562,0x383930315f315f74\n"
".quad 0x2e766f6d090a3632,0x3172250920323373,0x33373031202c3431,0x0a3b343238313437\n"
".quad 0x31315f315f744c24,0x2f200a3a30313839,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3220656e696c2079,0x2064616568202c34,0x2064656c6562616c\n"
".quad 0x30315f315f744c24,0x6c2e090a36323839,0x323709303309636f,0x766f6d090a300932\n"
".quad 0x722509203233732e,0x0a3b30202c353131,0x3436622e766f6d09,0x3339316466250920\n"
".quad 0x35313172257b202c,0x3b7d34313172252c,0x6e722e64616d090a,0x662509203436662e\n"
".quad 0x6625202c34393164,0x6625202c31393164,0x6625202c33393164,0x73090a3b33393164\n"
".quad 0x09203233732e6275,0x25202c3631317225,0x3031202c39303172,0x090a3b3637353834\n"
".quad 0x203233732e766f6d,0x202c373131722509,0x2e766f6d090a3b30,0x6466250920343662\n"
".quad 0x72257b202c353931,0x313172252c373131,0x6c756d090a3b7d36,0x662509203436662e\n"
".quad 0x6625202c38363164,0x6625202c34393164,0x4c240a3b35393164,0x323931315f315f74\n"
".quad 0x3c2f2f200a3a3839,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x2c343220656e696c,0x616c206461656820,0x4c242064656c6562,0x383930315f315f74\n"
".quad 0x636f6c2e090a3632,0x0934333709303309,0x662e766f6d090a30,0x3164662509203436\n"
".quad 0x31646625202c3639,0x617262090a3b3836,0x4c240920696e752e,0x725f69646e655744\n"
".quad 0x5f3837315f746e69,0x5f744c240a3b3431,0x3638373831315f31,0x6f6c3c2f2f200a3a\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x68202c343220656e\n"
".quad 0x6562616c20646165,0x5f744c242064656c,0x3632383930315f31,0x3309636f6c2e090a\n"
".quad 0x090a300936390930,0x203436662e736261,0x2c37393164662509,0x3b39353164662520\n"
".quad 0x36662e766f6d090a,0x3931646625092034,0x6666376430202c38,0x3030303030303030\n"
".quad 0x2f093b3030303030,0x73090a666e69202f,0x662e656c2e707465,0x3933702509203436\n"
".quad 0x373931646625202c,0x383931646625202c,0x2e706c6573090a3b,0x3172250920323373\n"
".quad 0x31202c30202c3831,0x0a3b39337025202c,0x303309636f6c2e09,0x090a300930343709\n"
".quad 0x203436662e646461,0x2c39393164662509,0x2c39353164662520,0x3b39353164662520\n"
".quad 0x36662e766f6d090a,0x3032646625092034,0x6666376430202c30,0x3030303030303030\n"
".quad 0x2f093b3030303030,0x6d090a666e69202f,0x09203436662e766f,0x202c313032646625\n"
".quad 0x3030303030306430,0x3030303030303030,0x30202f2f093b3030,0x33732e766f6d090a\n"
".quad 0x3931317225092032,0x6573090a3b30202c,0x33732e65672e7074,0x2c30347025092032\n"
".quad 0x25202c3839722520,0x73090a3b39313172,0x203436662e706c65,0x2c32303264662509\n"
".quad 0x2c30303264662520,0x2c31303264662520,0x090a3b3034702520,0x203233732e766f6d\n"
".quad 0x202c303231722509,0x70746573090a3b30,0x203233732e656e2e,0x25202c3134702509\n"
".quad 0x7225202c38313172,0x6573090a3b303231,0x09203436662e706c,0x202c363931646625\n"
".quad 0x202c393931646625,0x202c323032646625,0x4c240a3b31347025,0x725f69646e655744\n"
".quad 0x5f3837315f746e69,0x3c2f2f200a3a3431,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x2c343220656e696c,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x383930315f315f74,0x636f6c2e090a3632,0x3235323109303309,0x2e766f6d090a3009\n"
".quad 0x6466250920343666,0x646625202c333032,0x6f6d090a3b363931,0x2509203436662e76\n"
".quad 0x25202c3430326466,0x090a3b3330326466,0x09303309636f6c2e,0x090a300934353231\n"
".quad 0x203436662e736261,0x2c35303264662509,0x3b33303264662520,0x36662e766f6d090a\n"
".quad 0x3032646625092034,0x6666376430202c36,0x3030303030303030,0x2f093b3030303030\n"
".quad 0x73090a666e69202f,0x662e71652e707465,0x3234702509203436,0x353032646625202c\n"
".quad 0x363032646625202c,0x3234702540090a3b,0x4c24092061726220,0x333032315f315f74\n"
".quad 0x3c2f2f200a3b3232,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x2c343220656e696c,0x616c206461656820,0x4c242064656c6562,0x383930315f315f74\n"
".quad 0x636f6c2e090a3632,0x3835323109303309,0x2e64616d090a3009,0x09203436662e6e72\n"
".quad 0x202c343032646625,0x202c333032646625,0x202c313631646625,0x0a3b333032646625\n"
".quad 0x32315f315f744c24,0x2f200a3a32323330,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3220656e696c2079,0x2064616568202c34,0x2064656c6562616c\n"
".quad 0x30315f315f744c24,0x6c2e090a36323839,0x333109303309636f,0x6f6d090a30093630\n"
".quad 0x2509203436662e76,0x6625202c36336466,0x6d090a3b34303264,0x09203436662e766f\n"
".quad 0x202c373032646625,0x3030306566336430,0x3030303030303030,0x30202f2f093b3030\n"
".quad 0x2e6c756d090a352e,0x6466250920343666,0x646625202c383032,0x32646625202c3032\n"
".quad 0x747663090a3b3730,0x3436662e697a722e,0x662509203436662e,0x646625202c313464\n"
".quad 0x6573090a3b383032,0x09203233732e706c,0x31202c3132317225,0x337025202c30202c\n"
".quad 0x2e646461090a3b31,0x6466250920343666,0x646625202c393032,0x34646625202c3134\n"
".quad 0x2e627573090a3b31,0x6466250920343666,0x646625202c303132,0x32646625202c3032\n"
".quad 0x736261090a3b3930,0x662509203436662e,0x6625202c31313264,0x6d090a3b30313264\n"
".quad 0x09203436662e766f,0x202c323132646625,0x3030306666336430,0x3030303030303030\n"
".quad 0x31202f2f093b3030,0x71652e746573090a,0x3436662e3233752e,0x2c32323172250920\n"
".quad 0x2c31313264662520,0x3b32313264662520,0x33732e67656e090a,0x3332317225092032\n"
".quad 0x3b3232317225202c,0x33622e646e61090a,0x3432317225092032,0x2c3132317225202c\n"
".quad 0x0a3b333231722520,0x3233752e766f6d09,0x2c35323172250920,0x746573090a3b3020\n"
".quad 0x3233732e71652e70,0x202c333470250920,0x25202c3432317225,0x40090a3b35323172\n"
".quad 0x6172622033347025,0x5f315f744c240920,0x0a3b343338303231,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x616568202c343220\n"
".quad 0x656c6562616c2064,0x5f315f744c242064,0x090a363238393031,0x09303309636f6c2e\n"
".quad 0x090a300938303331,0x203436622e766f6d,0x202c393164722509,0x090a3b3633646625\n"
".quad 0x203436622e726f78,0x202c303264722509,0x2d202c3931647225,0x3032373333323239\n"
".quad 0x3537373435383633,0x6f6d090a3b383038,0x2509203436622e76,0x7225202c36336466\n"
".quad 0x744c240a3b303264,0x33383032315f315f,0x6c3c2f2f200a3a34,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x202c343220656e69,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x32383930315f315f,0x09636f6c2e090a36,0x0930313331093033\n"
".quad 0x662e766f6d090a30,0x3264662509203436,0x3633646625202c33,0x6e6557444c240a3b\n"
".quad 0x6e73695f5f5f6964,0x315f3837315f6e61,0x6c3c2f2f200a3a33,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x202c343220656e69,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x32383930315f315f,0x09636f6c2e090a36,0x0a30093136093831\n"
".quad 0x3436662e6c756d09,0x2c36316466250920,0x202c333264662520,0x240a3b3631646625\n"
".quad 0x3231315f315f744c,0x2f2f200a3a303331,0x50203e706f6f6c3c,0x6c20666f20747261\n"
".quad 0x79646f6220706f6f,0x343220656e696c20,0x6c2064616568202c,0x242064656c656261\n"
".quad 0x3930315f315f744c,0x766f6d090a363238,0x722509203233752e,0x0a3b30202c363231\n"
".quad 0x656c2e7074657309,0x702509203233732e,0x30367225202c3434,0x3b3632317225202c\n"
".quad 0x203434702540090a,0x744c240920617262,0x34333132315f315f,0x6c3c2f2f200a3b36\n"
".quad 0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070,0x202c343220656e69\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x32383930315f315f,0x09636f6c2e090a36\n"
".quad 0x0a30093336093831,0x2e6e722e74766309,0x203233732e343666,0x2c33313264662509\n"
".quad 0x090a3b3036722520,0x203436662e766f6d,0x2c34313264662509,0x3030666633643020\n"
".quad 0x3030303030303030,0x202f2f093b303030,0x662e627573090a31,0x3264662509203436\n"
".quad 0x32646625202c3531,0x31646625202c3431,0x2e766f6d090a3b32,0x6466250920343666\n"
".quad 0x306430202c363132,0x3030303030303030,0x3b30303030303030,0x73090a30202f2f09\n"
".quad 0x33752e71652e7465,0x2509203436662e32,0x6625202c37323172,0x6625202c33313264\n"
".quad 0x6e090a3b36313264,0x09203233732e6765,0x25202c3832317225,0x6d090a3b37323172\n"
".quad 0x09203436662e766f,0x202c373132646625,0x3030306666336430,0x3030303030303030\n"
".quad 0x31202f2f093b3030,0x71652e746573090a,0x3436662e3233752e,0x2c39323172250920\n"
".quad 0x2c35313264662520,0x3b37313264662520,0x33732e67656e090a,0x3033317225092032\n"
".quad 0x3b3932317225202c,0x3233622e726f090a,0x2c31333172250920,0x202c383231722520\n"
".quad 0x090a3b3033317225,0x203233752e766f6d,0x202c323331722509,0x70746573090a3b30\n"
".quad 0x203233732e71652e,0x25202c3534702509,0x7225202c31333172,0x2540090a3b323331\n"
".quad 0x2061726220353470,0x315f315f744c2409,0x200a3b3835383132,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x64616568202c3432\n"
".quad 0x64656c6562616c20,0x315f315f744c2420,0x2e090a3632383930,0x3109303309636f6c\n"
".quad 0x6d090a3009393632,0x09203436662e766f,0x202c383132646625,0x3030306666336430\n"
".quad 0x3030303030303030,0x31202f2f093b3030,0x6e752e617262090a,0x6557444c24092069\n"
".quad 0x73695f5f5f69646e,0x5f3837315f6e616e,0x315f744c240a3b39,0x3a3835383132315f\n"
".quad 0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62\n"
".quad 0x6568202c34322065,0x6c6562616c206461,0x315f744c24206465,0x0a3632383930315f\n"
".quad 0x303309636f6c2e09,0x61090a3009363909,0x09203436662e7362,0x202c393132646625\n"
".quad 0x0a3b353132646625,0x3436662e766f6d09,0x3032326466250920,0x306666376430202c\n"
".quad 0x3030303030303030,0x2f2f093b30303030,0x6573090a666e6920,0x36662e656c2e7074\n"
".quad 0x2c36347025092034,0x2c39313264662520,0x3b30323264662520,0x732e706c6573090a\n"
".quad 0x3331722509203233,0x2c31202c30202c33,0x090a3b3634702520,0x09303309636f6c2e\n"
".quad 0x090a300931373231,0x203233752e766f6d,0x202c343331722509,0x70746573090a3b30\n"
".quad 0x203233732e656e2e,0x25202c3734702509,0x7225202c33333172,0x2540090a3b343331\n"
".quad 0x2061726220373470,0x325f315f744c2409,0x2f200a3b30313833,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3220656e696c2079,0x2064616568202c34\n"
".quad 0x2064656c6562616c,0x30315f315f744c24,0x6261090a36323839,0x2509203436662e73\n"
".quad 0x25202c3132326466,0x090a3b3331326466,0x203436662e766f6d,0x2c32323264662509\n"
".quad 0x3030666637643020,0x3030303030303030,0x202f2f093b303030,0x746573090a666e69\n"
".quad 0x3436662e656c2e70,0x202c383470250920,0x202c313232646625,0x0a3b323232646625\n"
".quad 0x6220383470254009,0x5f744c2409206172,0x3b36363034325f31,0x325f315f744c240a\n"
".quad 0x2f200a3a30313833,0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c\n"
".quad 0x3220656e696c2079,0x2064616568202c34,0x2064656c6562616c,0x30315f315f744c24\n"
".quad 0x6c2e090a36323839,0x323109303309636f,0x6461090a30093237,0x2509203436662e64\n"
".quad 0x25202c3831326466,0x25202c3331326466,0x090a3b3531326466,0x20696e752e617262\n"
".quad 0x646e6557444c2409,0x616e73695f5f5f69,0x3b395f3837315f6e,0x325f315f744c240a\n"
".quad 0x2f200a3a36363034,0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c\n"
".quad 0x3220656e696c2079,0x2064616568202c34,0x2064656c6562616c,0x30315f315f744c24\n"
".quad 0x6c2e090a36323839,0x323109303309636f,0x6f6d090a30093137,0x2509203436662e76\n"
".quad 0x30202c3332326466,0x3030303066663764,0x3030303030303030,0x6e69202f2f093b30\n"
".quad 0x2e70746573090a66,0x09203436662e7165,0x6625202c39347025,0x6625202c35313264\n"
".quad 0x40090a3b33323264,0x7262203934702521,0x315f744c24092061,0x3b3037333232315f\n"
".quad 0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62\n"
".quad 0x6568202c34322065,0x6c6562616c206461,0x315f744c24206465,0x0a3632383930315f\n"
".quad 0x303309636f6c2e09,0x0a30093537323109,0x3436662e766f6d09,0x3432326466250920\n"
".quad 0x306666376430202c,0x3030303030303030,0x2f2f093b30303030,0x6f6d090a666e6920\n"
".quad 0x2509203436662e76,0x30202c3532326466,0x3030303030303064,0x3030303030303030\n"
".quad 0x0a30202f2f093b30,0x3436622e766f6d09,0x35333172257b0920,0x2c7d36333172252c\n"
".quad 0x3b33313264662520,0x33732e766f6d090a,0x3733317225092032,0x6573090a3b30202c\n"
".quad 0x33732e65672e7074,0x2c30357025092032,0x202c363331722520,0x090a3b3733317225\n"
".quad 0x3436662e706c6573,0x3831326466250920,0x343232646625202c,0x353232646625202c\n"
".quad 0x0a3b30357025202c,0x696e752e61726209,0x6e6557444c240920,0x6e73695f5f5f6964\n"
".quad 0x395f3837315f6e61,0x5f315f744c240a3b,0x0a3a303733323231,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x616568202c343220\n"
".quad 0x656c6562616c2064,0x5f315f744c242064,0x090a363238393031,0x09303309636f6c2e\n"
".quad 0x090a300937373231,0x203436662e766f6d,0x2c36323264662509,0x3030666637643020\n"
".quad 0x3030303030303030,0x202f2f093b303030,0x746573090a666e69,0x3436662e71652e70\n"
".quad 0x202c313570250920,0x202c313232646625,0x0a3b363232646625,0x2031357025214009\n"
".quad 0x744c240920617262,0x38383232315f315f,0x6c3c2f2f200a3b32,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x202c343220656e69,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x32383930315f315f,0x662e766f6d090a36,0x3264662509203436\n"
".quad 0x66626430202c3732,0x3030303030303066,0x093b303030303030,0x73090a312d202f2f\n"
".quad 0x662e71652e707465,0x3235702509203436,0x353132646625202c,0x373232646625202c\n"
".quad 0x3570252140090a3b,0x2409206172622032,0x3332315f315f744c,0x2f2f200a3b343933\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x343220656e696c20\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3930315f315f744c,0x6f6c2e090a363238\n"
".quad 0x3732310930330963,0x766f6d090a300939,0x662509203436662e,0x6430202c38313264\n"
".quad 0x3030303030666633,0x3030303030303030,0x090a31202f2f093b,0x20696e752e617262\n"
".quad 0x646e6557444c2409,0x616e73695f5f5f69,0x3b395f3837315f6e,0x315f315f744c240a\n"
".quad 0x200a3a3439333332,0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20\n"
".quad 0x20656e696c207964,0x64616568202c3432,0x64656c6562616c20,0x315f315f744c2420\n"
".quad 0x2e090a3632383930,0x3109303309636f6c,0x6d090a3009313832,0x09203436662e766f\n"
".quad 0x202c383232646625,0x3030306666376430,0x3030303030303030,0x69202f2f093b3030\n"
".quad 0x2e766f6d090a666e,0x6466250920343666,0x306430202c393232,0x3030303030303030\n"
".quad 0x3b30303030303030,0x6d090a30202f2f09,0x09203436662e766f,0x202c303332646625\n"
".quad 0x3030306666336430,0x3030303030303030,0x31202f2f093b3030,0x672e70746573090a\n"
".quad 0x2509203436662e74,0x646625202c333570,0x646625202c393132,0x6573090a3b303332\n"
".quad 0x09203436662e706c,0x202c313332646625,0x202c383232646625,0x202c393232646625\n"
".quad 0x6d090a3b33357025,0x09203436662e766f,0x25202c3633646625,0x090a3b3133326466\n"
".quad 0x203436662e766f6d,0x2c32333264662509,0x3030303030643020,0x3030303030303030\n"
".quad 0x202f2f093b303030,0x2e70746573090a30,0x09203436662e746c,0x6625202c34357025\n"
".quad 0x6625202c33313264,0x40090a3b32333264,0x7262203435702521,0x315f744c24092061\n"
".quad 0x3b3630393332315f,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x6568202c34322065,0x6c6562616c206461,0x315f744c24206465\n"
".quad 0x0a3632383930315f,0x303309636f6c2e09,0x0a30093338323109,0x2e6e722e70637209\n"
".quad 0x6466250920343666,0x32646625202c3633,0x5f744c240a3b3133,0x3630393332315f31\n"
".quad 0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x68202c343220656e,0x6562616c20646165,0x5f744c242064656c,0x3632383930315f31\n"
".quad 0x3309636f6c2e090a,0x3009353832310930,0x36662e766f6d090a,0x3132646625092034\n"
".quad 0x3633646625202c38,0x752e617262090a3b,0x57444c240920696e,0x695f5f5f69646e65\n"
".quad 0x3837315f6e616e73,0x5f744c240a3b395f,0x3238383232315f31,0x6f6c3c2f2f200a3a\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x68202c343220656e\n"
".quad 0x6562616c20646165,0x5f744c242064656c,0x3632383930315f31,0x36662e766f6d090a\n"
".quad 0x3332646625092034,0x3030306430202c33,0x3030303030303030,0x2f093b3030303030\n"
".quad 0x746573090a30202f,0x3436662e71652e70,0x202c353570250920,0x202c353132646625\n"
".quad 0x0a3b333332646625,0x2035357025214009,0x744c240920617262,0x31343432315f315f\n"
".quad 0x6c3c2f2f200a3b38,0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070\n"
".quad 0x202c343220656e69,0x62616c2064616568,0x744c242064656c65,0x32383930315f315f\n"
".quad 0x09636f6c2e090a36,0x0939383231093033,0x662e766f6d090a30,0x3264662509203436\n"
".quad 0x66336430202c3433,0x3030303030303065,0x093b303030303030,0x090a352e30202f2f\n"
".quad 0x203436662e6c756d,0x2c35333264662509,0x2c33313264662520,0x3b34333264662520\n"
".quad 0x7a722e747663090a,0x36662e3436662e69,0x3332646625092034,0x3332646625202c36\n"
".quad 0x2e766f6d090a3b35,0x6466250920343666,0x306430202c373332,0x3030303030303030\n"
".quad 0x3b30303030303030,0x61090a30202f2f09,0x09203436662e6464,0x202c383332646625\n"
".quad 0x202c363332646625,0x0a3b363332646625,0x3436662e62757309,0x3933326466250920\n"
".quad 0x333132646625202c,0x383332646625202c,0x662e736261090a3b,0x3264662509203436\n"
".quad 0x32646625202c3034,0x766f6d090a3b3933,0x662509203436662e,0x6430202c31343264\n"
".quad 0x3030303030666633,0x3030303030303030,0x090a31202f2f093b,0x2e71652e70746573\n"
".quad 0x3570250920343666,0x3432646625202c36,0x3432646625202c30,0x706c6573090a3b31\n"
".quad 0x662509203436662e,0x646625202c363364,0x646625202c353132,0x357025202c373332\n"
".quad 0x2e766f6d090a3b36,0x6466250920343666,0x306430202c323432,0x3030303030303030\n"
".quad 0x3b30303030303030,0x73090a30202f2f09,0x662e746c2e707465,0x3735702509203436\n"
".quad 0x333132646625202c,0x323432646625202c,0x3570252140090a3b,0x2409206172622037\n"
".quad 0x3432315f315f744c,0x2f2f200a3b303339,0x50203e706f6f6c3c,0x6c20666f20747261\n"
".quad 0x79646f6220706f6f,0x343220656e696c20,0x6c2064616568202c,0x242064656c656261\n"
".quad 0x3930315f315f744c,0x6f6c2e090a363238,0x3932310930330963,0x706372090a300931\n"
".quad 0x203436662e6e722e,0x202c363364662509,0x240a3b3633646625,0x3432315f315f744c\n"
".quad 0x2f2f200a3a303339,0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f\n"
".quad 0x343220656e696c20,0x6c2064616568202c,0x242064656c656261,0x3930315f315f744c\n"
".quad 0x6f6c2e090a363238,0x3932310930330963,0x766f6d090a300933,0x662509203436662e\n"
".quad 0x6625202c38313264,0x7262090a3b363364,0x240920696e752e61,0x5f69646e6557444c\n"
".quad 0x5f6e616e73695f5f,0x240a3b395f383731,0x3432315f315f744c,0x2f2f200a3a383134\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x343220656e696c20\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3930315f315f744c,0x766f6d090a363238\n"
".quad 0x662509203436662e,0x6430202c33343264,0x3030303030666666,0x3030303030303030\n"
".quad 0x6e692d202f2f093b,0x2e70746573090a66,0x09203436662e7165,0x6625202c38357025\n"
".quad 0x6625202c35313264,0x40090a3b33343264,0x7262203835702521,0x315f744c24092061\n"
".quad 0x3b3234343532315f,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x6568202c34322065,0x6c6562616c206461,0x315f744c24206465\n"
".quad 0x0a3632383930315f,0x3436662e766f6d09,0x3434326466250920,0x303030306430202c\n"
".quad 0x3030303030303030,0x2f2f093b30303030,0x70746573090a3020,0x203436662e746c2e\n"
".quad 0x25202c3935702509,0x25202c3331326466,0x090a3b3434326466,0x6220393570252140\n"
".quad 0x5f744c2409206172,0x3031323632315f31,0x6f6c3c2f2f200a3b,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x68202c343220656e,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x3632383930315f31,0x3309636f6c2e090a,0x3009363932310930\n"
".quad 0x6e722e706372090a,0x662509203436662e,0x6625202c35343264,0x6e090a3b35313264\n"
".quad 0x09203436662e6765,0x202c363432646625,0x0a3b353432646625,0x696e752e61726209\n"
".quad 0x5f315f744c240920,0x0a3b343539353231,0x32315f315f744c24,0x2f200a3a30313236\n"
".quad 0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c,0x3220656e696c2079\n"
".quad 0x2064616568202c34,0x2064656c6562616c,0x30315f315f744c24,0x6f6d090a36323839\n"
".quad 0x2509203436662e76,0x30202c3734326466,0x3030303066666264,0x3030303030303030\n"
".quad 0x312d202f2f093b30,0x36662e646461090a,0x3432646625092034,0x3231646625202c36\n"
".quad 0x373432646625202c,0x5f315f744c240a3b,0x0a3a343539353231,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x616568202c343220\n"
".quad 0x656c6562616c2064,0x5f315f744c242064,0x090a363238393031,0x203436662e766f6d\n"
".quad 0x202c363364662509,0x0a3b363432646625,0x3436662e766f6d09,0x3834326466250920\n"
".quad 0x306566336430202c,0x3030303030303030,0x2f2f093b30303030,0x756d090a352e3020\n"
".quad 0x2509203436662e6c,0x25202c3934326466,0x25202c3331326466,0x090a3b3834326466\n"
".quad 0x2e697a722e747663,0x203436662e343666,0x2c36333264662509,0x3b39343264662520\n"
".quad 0x36662e646461090a,0x3532646625092034,0x3332646625202c30,0x3332646625202c36\n"
".quad 0x2e627573090a3b36,0x6466250920343666,0x646625202c313532,0x646625202c333132\n"
".quad 0x6261090a3b303532,0x2509203436662e73,0x25202c3235326466,0x090a3b3135326466\n"
".quad 0x203436662e766f6d,0x2c33353264662509,0x3030666633643020,0x3030303030303030\n"
".quad 0x202f2f093b303030,0x2e70746573090a31,0x09203436662e7165,0x6625202c30367025\n"
".quad 0x6625202c32353264,0x40090a3b33353264,0x7262203036702521,0x315f744c24092061\n"
".quad 0x3b3636343632315f,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x6568202c34322065,0x6c6562616c206461,0x315f744c24206465\n"
".quad 0x0a3632383930315f,0x303309636f6c2e09,0x0a30093839323109,0x3436622e766f6d09\n"
".quad 0x2c31326472250920,0x0a3b363364662520,0x3436622e726f7809,0x2c32326472250920\n"
".quad 0x202c313264722520,0x323733333232392d,0x3737343538363330,0x6d090a3b38303835\n"
".quad 0x09203436622e766f,0x25202c3633646625,0x4c240a3b32326472,0x343632315f315f74\n"
".quad 0x3c2f2f200a3a3636,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x2c343220656e696c,0x616c206461656820,0x4c242064656c6562,0x383930315f315f74\n"
".quad 0x636f6c2e090a3632,0x3030333109303309,0x2e766f6d090a3009,0x6466250920343666\n"
".quad 0x646625202c383132,0x617262090a3b3633,0x4c240920696e752e,0x5f5f69646e655744\n"
".quad 0x315f6e616e73695f,0x4c240a3b395f3837,0x343532315f315f74,0x3c2f2f200a3a3234\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x2c343220656e696c\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x383930315f315f74,0x636f6c2e090a3632\n"
".quad 0x3230333109303309,0x2e766f6d090a3009,0x6466250920343666,0x306430202c343532\n"
".quad 0x3030303030303030,0x3b30303030303030,0x73090a30202f2f09,0x662e746c2e707465\n"
".quad 0x3136702509203436,0x353132646625202c,0x343532646625202c,0x3670252140090a3b\n"
".quad 0x2409206172622031,0x3635315f315f744c,0x2f2f200a3b323631,0x50203e706f6f6c3c\n"
".quad 0x6c20666f20747261,0x79646f6220706f6f,0x343220656e696c20,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3930315f315f744c,0x746573090a363238,0x36662e75656e2e70\n"
".quad 0x2c32367025092034,0x2c33313264662520,0x3b33313264662520,0x323670252140090a\n"
".quad 0x4c24092061726220,0x313635315f315f74,0x3c2f2f200a3b3236,0x6150203e706f6f6c\n"
".quad 0x6f6c20666f207472,0x2079646f6220706f,0x2c343220656e696c,0x616c206461656820\n"
".quad 0x4c242064656c6562,0x383930315f315f74,0x636f6c2e090a3632,0x3330333109303309\n"
".quad 0x2e766f6d090a3009,0x6466250920343666,0x666430202c383132,0x3030303030386666\n"
".quad 0x3b30303030303030,0x6e616e2d202f2f09,0x6e752e617262090a,0x6557444c24092069\n"
".quad 0x73695f5f5f69646e,0x5f3837315f6e616e,0x315f744c240a3b39,0x3a3236313635315f\n"
".quad 0x30315f315f4c240a,0x2f200a3a30353434,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3220656e696c2079,0x2064616568202c34,0x2064656c6562616c\n"
".quad 0x30315f315f744c24,0x6c2e090a36323839,0x393509303309636f,0x766f6d090a300939\n"
".quad 0x257b09203436622e,0x3772252c38333172,0x32646625202c7d39,0x6f6c2e090a3b3931\n"
".quad 0x3030360930330963,0x2e766f6d090a3009,0x72257b0920343662,0x39333172252c3038\n"
".quad 0x3132646625202c7d,0x636f6c2e090a3b39,0x0931303609303309,0x732e726873090a30\n"
".quad 0x3431722509203233,0x2c39377225202c30,0x6e61090a3b303220,0x2509203233622e64\n"
".quad 0x7225202c31343172,0x343032202c303431,0x2e766f6d090a3b37,0x3872250920323373\n"
".quad 0x3134317225202c33,0x752e766f6d090a3b,0x3431722509203233,0x73090a3b30202c32\n"
".quad 0x732e656e2e707465,0x3336702509203233,0x2c3134317225202c,0x0a3b323431722520\n"
".quad 0x6220333670254009,0x5f744c2409206172,0x3837393632315f31,0x6f6c3c2f2f200a3b\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x68202c343220656e\n"
".quad 0x6562616c20646165,0x5f744c242064656c,0x3632383930315f31,0x3309636f6c2e090a\n"
".quad 0x0a30093530360930,0x3436662e766f6d09,0x3535326466250920,0x303533346430202c\n"
".quad 0x3030303030303030,0x2f2f093b30303030,0x34343130382e3120,0x756d090a36312b65\n"
".quad 0x2509203436662e6c,0x25202c3635326466,0x25202c3931326466,0x090a3b3535326466\n"
".quad 0x203436622e766f6d,0x2c33343172257b09,0x25202c7d39377225,0x090a3b3635326466\n"
".quad 0x09303309636f6c2e,0x6d090a3009363036,0x09203436622e766f,0x72252c303872257b\n"
".quad 0x6625202c7d343431,0x2e090a3b36353264,0x3609303309636f6c,0x6873090a30093830\n"
".quad 0x2509203233732e72,0x7225202c35343172,0x0a3b3032202c3937,0x3233622e646e6109\n"
".quad 0x2c36343172250920,0x202c353431722520,0x73090a3b37343032,0x09203233732e6275\n"
".quad 0x7225202c33387225,0x3b3435202c363431,0x315f315f744c240a,0x200a3a3837393632\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x64616568202c3432,0x64656c6562616c20,0x315f315f744c2420,0x2e090a3632383930\n"
".quad 0x3609303309636f6c,0x7573090a30093031,0x2509203233732e62,0x387225202c333872\n"
".quad 0x3b33323031202c33,0x3309636f6c2e090a,0x0a30093631360930,0x3233622e646e6109\n"
".quad 0x202c393872250920,0x322d202c39377225,0x3730353334363431,0x622e726f090a3b33\n"
".quad 0x3039722509203233,0x202c39387225202c,0x3233393632373031,0x766f6d090a3b3834\n"
".quad 0x662509203436622e,0x72257b202c313664,0x7d303972252c3038,0x752e766f6d090a3b\n"
".quad 0x3431722509203233,0x3133373031202c37,0x090a3b3238353732,0x2e656c2e70746573\n"
".quad 0x3670250920323375,0x2c30397225202c34,0x0a3b373431722520,0x6220343670254009\n"
".quad 0x5f744c2409206172,0x3039343732315f31,0x6f6c3c2f2f200a3b,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x68202c343220656e,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x3632383930315f31,0x3309636f6c2e090a,0x0a30093831360930\n"
".quad 0x3436622e766f6d09,0x38343172257b0920,0x2c7d39343172252c,0x0a3b313664662520\n"
".quad 0x3233732e62757309,0x2c30353172250920,0x202c393431722520,0x3b36373538343031\n"
".quad 0x36622e766f6d090a,0x353172257b092034,0x7d32353172252c31,0x3b3136646625202c\n"
".quad 0x36622e766f6d090a,0x3136646625092034,0x31353172257b202c,0x3b7d30353172252c\n"
".quad 0x3309636f6c2e090a,0x0a30093931360930,0x3233732e64646109,0x202c333872250920\n"
".quad 0x3b31202c33387225,0x315f315f744c240a,0x200a3a3039343732,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x64616568202c3432\n"
".quad 0x64656c6562616c20,0x315f315f744c2420,0x2e090a3632383930,0x3609303309636f6c\n"
".quad 0x6f6d090a30093932,0x2509203436662e76,0x30202c3735326466,0x3030303066666264\n"
".quad 0x3030303030303030,0x312d202f2f093b30,0x36662e646461090a,0x3336646625092034\n"
".quad 0x2c3136646625202c,0x3b37353264662520,0x36662e766f6d090a,0x3532646625092034\n"
".quad 0x6666336430202c38,0x3030303030303030,0x2f093b3030303030,0x646461090a31202f\n"
".quad 0x662509203436662e,0x646625202c353664,0x32646625202c3136,0x747663090a3b3835\n"
".quad 0x2e3233662e6e722e,0x3466250920343666,0x3b3536646625202c,0x6e722e706372090a\n"
".quad 0x662509203233662e,0x0a3b346625202c36,0x3436662e74766309,0x662509203233662e\n"
".quad 0x366625202c363664,0x662e67656e090a3b,0x3264662509203436,0x36646625202c3935\n"
".quad 0x2e766f6d090a3b35,0x6466250920343666,0x336430202c303632,0x3030303030306666\n"
".quad 0x3b30303030303030,0x6d090a31202f2f09,0x36662e6e722e6461,0x3936646625092034\n"
".quad 0x393532646625202c,0x2c3636646625202c,0x3b30363264662520,0x6e722e64616d090a\n"
".quad 0x662509203436662e,0x646625202c303764,0x36646625202c3936,0x3936646625202c39\n"
".quad 0x722e64616d090a3b,0x2509203436662e6e,0x6625202c31376466,0x646625202c303764\n"
".quad 0x36646625202c3636,0x2e6c756d090a3b36,0x6466250920343666,0x36646625202c3237\n"
".quad 0x3137646625202c33,0x09636f6c2e090a3b,0x3009393336093033,0x36662e646461090a\n"
".quad 0x3337646625092034,0x2c3237646625202c,0x0a3b323764662520,0x3436662e6c756d09\n"
".quad 0x2c34376466250920,0x202c333764662520,0x090a3b3337646625,0x203436662e766f6d\n"
".quad 0x2c31363264662509,0x6630626533643020,0x6163326437666635,0x202f2f093b326566\n"
".quad 0x6535393031302e31,0x766f6d090a36302d,0x662509203436662e,0x6430202c32363264\n"
".quad 0x3264356630646533,0x6135623364613134,0x302e34202f2f093b,0x36302d6534363334\n"
".quad 0x6e722e64616d090a,0x662509203436662e,0x6625202c33363264,0x6625202c31363264\n"
".quad 0x646625202c343764,0x6f6d090a3b323632,0x2509203436662e76,0x30202c3436326466\n"
".quad 0x3032623366653364,0x3361383834353761,0x2e31202f2f093b66,0x302d653133383738\n"
".quad 0x722e64616d090a35,0x2509203436662e6e,0x25202c3536326466,0x25202c3336326466\n"
".quad 0x6625202c34376466,0x6d090a3b34363264,0x09203436662e766f,0x202c363632646625\n"
".quad 0x3534373166336430,0x6365616634656463,0x38202f2f093b3564,0x2d6532383737382e\n"
".quad 0x2e64616d090a3530,0x09203436662e6e72,0x202c373632646625,0x202c353632646625\n"
".quad 0x25202c3437646625,0x090a3b3636326466,0x203436662e766f6d,0x2c38363264662509\n"
".quad 0x3763336633643020,0x3561383532376331,0x202f2f093b623837,0x3433343030302e30\n"
".quad 0x64616d090a383230,0x203436662e6e722e,0x2c39363264662509,0x2c37363264662520\n"
".quad 0x202c343764662520,0x0a3b383632646625,0x3436662e766f6d09,0x3037326466250920\n"
".quad 0x323666336430202c,0x3234323934323934,0x2f2f093b30313962,0x33323230302e3020\n"
".quad 0x64616d090a343132,0x203436662e6e722e,0x2c31373264662509,0x2c39363264662520\n"
".quad 0x202c343764662520,0x0a3b303732646625,0x3436662e766f6d09,0x3237326466250920\n"
".quad 0x393866336430202c,0x3939393939393939,0x2f2f093b62666439,0x0a353231302e3020\n"
".quad 0x2e6e722e64616d09,0x6466250920343666,0x646625202c333732,0x646625202c313732\n"
".quad 0x32646625202c3437,0x6f6c2e090a3b3237,0x3034360930330963,0x2e6c756d090a3009\n"
".quad 0x6466250920343666,0x37646625202c3838,0x3732646625202c34,0x636f6c2e090a3b33\n"
".quad 0x0934343609303309,0x662e627573090a30,0x3864662509203436,0x3336646625202c39\n"
".quad 0x3b3337646625202c,0x36662e67656e090a,0x3732646625092034,0x3337646625202c34\n"
".quad 0x662e646461090a3b,0x3264662509203436,0x38646625202c3537,0x3938646625202c39\n"
".quad 0x722e64616d090a3b,0x2509203436662e6e,0x25202c3637326466,0x25202c3437326466\n"
".quad 0x6625202c33366466,0x6d090a3b35373264,0x09203436662e6c75,0x25202c3339646625\n"
".quad 0x6625202c31376466,0x2e090a3b36373264,0x3509303309636f6c,0x6f6d090a30093538\n"
".quad 0x2509203436662e76,0x30202c3737326466,0x3535353562663364,0x3535353535353535\n"
".quad 0x2e30202f2f093b35,0x0a33333333333830,0x3436662e64646109,0x2c35396466250920\n"
".quad 0x202c383864662520,0x0a3b373732646625,0x3436662e766f6d09,0x3837326466250920\n"
".quad 0x356266336430202c,0x3535353535353535,0x2f2f093b35353535,0x33333338302e3020\n"
".quad 0x2e627573090a3333,0x6466250920343666,0x646625202c393732,0x646625202c383732\n"
".quad 0x646461090a3b3539,0x662509203436662e,0x6625202c30383264,0x646625202c383864\n"
".quad 0x6f6d090a3b393732,0x2509203436662e76,0x30202c3138326466,0x6334613634636264\n"
".quad 0x6237653962303062,0x322d202f2f093b30,0x2d6534303535342e,0x2e646461090a3831\n"
".quad 0x6466250920343666,0x646625202c303031,0x646625202c303832,0x6461090a3b313832\n"
".quad 0x2509203436662e64,0x25202c3130316466,0x6625202c35396466,0x6d090a3b30303164\n"
".quad 0x09203436662e6c75,0x202c323031646625,0x25202c3337646625,0x090a3b3130316466\n"
".quad 0x203436662e627573,0x2c32383264662509,0x202c353964662520,0x0a3b313031646625\n"
".quad 0x3436662e64646109,0x3430316466250920,0x303031646625202c,0x323832646625202c\n"
".quad 0x662e67656e090a3b,0x3264662509203436,0x31646625202c3338,0x64616d090a3b3230\n"
".quad 0x203436662e6e722e,0x2c34383264662509,0x2c31303164662520,0x202c333764662520\n"
".quad 0x0a3b333832646625,0x2e6e722e64616d09,0x6466250920343666,0x646625202c353832\n"
".quad 0x646625202c343031,0x32646625202c3339,0x64616d090a3b3438,0x203436662e6e722e\n"
".quad 0x2c36383264662509,0x2c31303164662520,0x202c333964662520,0x0a3b353832646625\n"
".quad 0x303309636f6c2e09,0x090a300936383509,0x662e6e722e64616d,0x3264662509203436\n"
".quad 0x31646625202c3738,0x37646625202c3430,0x3832646625202c33,0x636f6c2e090a3b36\n"
".quad 0x0937383509303309,0x662e646461090a30,0x3264662509203436,0x31646625202c3838\n"
".quad 0x32646625202c3230,0x6f6c2e090a3b3738,0x3838350930330963,0x2e627573090a3009\n"
".quad 0x6466250920343666,0x646625202c393832,0x646625202c323031,0x6461090a3b383832\n"
".quad 0x2509203436662e64,0x25202c3039326466,0x25202c3738326466,0x090a3b3938326466\n"
".quad 0x09303309636f6c2e,0x6d090a3009323835,0x09203436662e6c75,0x202c313932646625\n"
".quad 0x25202c3337646625,0x090a3b3838326466,0x09303309636f6c2e,0x6e090a3009333835\n"
".quad 0x09203436662e6765,0x202c323932646625,0x0a3b313932646625,0x2e6e722e64616d09\n"
".quad 0x6466250920343666,0x646625202c333932,0x646625202c383832,0x32646625202c3337\n"
".quad 0x6f6c2e090a3b3239,0x3438350930330963,0x2e64616d090a3009,0x09203436662e6e72\n"
".quad 0x202c343932646625,0x202c303932646625,0x25202c3339646625,0x090a3b3339326466\n"
".quad 0x09303309636f6c2e,0x6d090a3009353835,0x36662e6e722e6461,0x3932646625092034\n"
".quad 0x3832646625202c35,0x3339646625202c38,0x343932646625202c,0x09636f6c2e090a3b\n"
".quad 0x3009363835093033,0x6e722e64616d090a,0x662509203436662e,0x6625202c38313164\n"
".quad 0x6625202c30393264,0x646625202c333764,0x6c2e090a3b353932,0x383509303309636f\n"
".quad 0x646461090a300937,0x662509203436662e,0x6625202c36393264,0x6625202c31393264\n"
".quad 0x2e090a3b38313164,0x3509303309636f6c,0x7573090a30093838,0x2509203436662e62\n"
".quad 0x25202c3739326466,0x25202c3139326466,0x090a3b3639326466,0x203436662e646461\n"
".quad 0x2c31323164662509,0x2c38313164662520,0x3b37393264662520,0x3309636f6c2e090a\n"
".quad 0x0a30093238350930,0x3436662e6c756d09,0x3232316466250920,0x2c3337646625202c\n"
".quad 0x3b36393264662520,0x3309636f6c2e090a,0x0a30093638350930,0x3436662e67656e09\n"
".quad 0x3839326466250920,0x323231646625202c,0x722e64616d090a3b,0x2509203436662e6e\n"
".quad 0x25202c3432316466,0x25202c3639326466,0x6625202c33376466,0x6d090a3b38393264\n"
".quad 0x36662e6e722e6461,0x3231646625092034,0x3231646625202c35,0x3339646625202c31\n"
".quad 0x343231646625202c,0x722e64616d090a3b,0x2509203436662e6e,0x25202c3632316466\n"
".quad 0x25202c3639326466,0x6625202c33396466,0x6d090a3b35323164,0x36662e6e722e6461\n"
".quad 0x3932646625092034,0x3231646625202c39,0x3337646625202c31,0x363231646625202c\n"
".quad 0x09636f6c2e090a3b,0x3009373835093033,0x36662e646461090a,0x3231646625092034\n"
".quad 0x3932646625202c38,0x3231646625202c39,0x636f6c2e090a3b32,0x0932373509303309\n"
".quad 0x722e747663090a30,0x33732e3436662e6e,0x3231646625092032,0x3b33387225202c39\n"
".quad 0x36662e646461090a,0x3331646625092034,0x3337646625202c30,0x383231646625202c\n"
".quad 0x662e766f6d090a3b,0x3364662509203436,0x66336430202c3030,0x6566323465323665\n"
".quad 0x093b303030336166,0x3339362e30202f2f,0x6c756d090a373431,0x662509203436662e\n"
".quad 0x6625202c32333164,0x6625202c39323164,0x73090a3b30303364,0x09203436662e6275\n"
".quad 0x202c313033646625,0x202c323231646625,0x0a3b383231646625,0x3436662e64646109\n"
".quad 0x3230336466250920,0x393932646625202c,0x313033646625202c,0x662e627573090a3b\n"
".quad 0x3364662509203436,0x37646625202c3330,0x3331646625202c33,0x2e646461090a3b30\n"
".quad 0x6466250920343666,0x646625202c343033,0x646625202c383231,0x6461090a3b333033\n"
".quad 0x2509203436662e64,0x25202c3530336466,0x25202c3230336466,0x090a3b3430336466\n"
".quad 0x203436662e646461,0x2c38333164662509,0x202c333964662520,0x0a3b353033646625\n"
".quad 0x3436662e64646109,0x3933316466250920,0x303331646625202c,0x383331646625202c\n"
".quad 0x662e646461090a3b,0x3164662509203436,0x31646625202c3034,0x31646625202c3233\n"
".quad 0x627573090a3b3933,0x662509203436662e,0x6625202c36303364,0x6625202c30333164\n"
".quad 0x61090a3b39333164,0x09203436662e6464,0x202c373033646625,0x202c383331646625\n"
".quad 0x0a3b363033646625,0x3436662e62757309,0x3830336466250920,0x323331646625202c\n"
".quad 0x303431646625202c,0x662e646461090a3b,0x3364662509203436,0x31646625202c3930\n"
".quad 0x33646625202c3933,0x646461090a3b3830,0x662509203436662e,0x6625202c30313364\n"
".quad 0x6625202c37303364,0x6d090a3b39303364,0x09203436662e766f,0x202c313133646625\n"
".quad 0x6564333564336430,0x6365383732666136,0x32202f2f093b3665,0x2d6533353332382e\n"
".quad 0x2e64616d090a3331,0x09203436662e6e72,0x202c373431646625,0x202c393231646625\n"
".quad 0x202c313133646625,0x0a3b303133646625,0x3436662e64646109,0x3834316466250920\n"
".quad 0x303431646625202c,0x373431646625202c,0x09636f6c2e090a3b,0x3009333735093033\n"
".quad 0x36662e627573090a,0x3133646625092034,0x3431646625202c32,0x3431646625202c30\n"
".quad 0x2e646461090a3b38,0x6466250920343666,0x646625202c303531,0x646625202c373431\n"
".quad 0x6c2e090a3b323133,0x323109303309636f,0x6f6d090a30093834,0x2509203436662e76\n"
".quad 0x30202c3331336466,0x3030303032663364,0x3030303030303030,0x2e30202f2f093b30\n"
".quad 0x3730323231303030,0x36662e6c756d090a,0x3133646625092034,0x3132646625202c34\n"
".quad 0x3133646625202c33,0x2e766f6d090a3b33,0x6466250920343666,0x376430202c353133\n"
".quad 0x6562316132643066,0x3b30396638343034,0x332b6531202f2f09,0x70746573090a3430\n"
".quad 0x203436662e74672e,0x25202c3536702509,0x25202c3132326466,0x090a3b3531336466\n"
".quad 0x3436662e706c6573,0x3631336466250920,0x343133646625202c,0x333132646625202c\n"
".quad 0x0a3b35367025202c,0x3436662e6c756d09,0x3731336466250920,0x363133646625202c\n"
".quad 0x383431646625202c,0x662e67656e090a3b,0x3364662509203436,0x33646625202c3831\n"
".quad 0x64616d090a3b3731,0x203436662e6e722e,0x2c39313364662509,0x2c38343164662520\n"
".quad 0x2c36313364662520,0x3b38313364662520,0x6e722e64616d090a,0x662509203436662e\n"
".quad 0x6625202c30323364,0x6625202c30353164,0x6625202c36313364,0x61090a3b39313364\n"
".quad 0x09203436662e6464,0x202c313233646625,0x202c373133646625,0x0a3b303233646625\n"
".quad 0x303309636f6c2e09,0x0a30093934323109,0x3436662e62757309,0x3232336466250920\n"
".quad 0x373133646625202c,0x313233646625202c,0x662e646461090a3b,0x3164662509203436\n"
".quad 0x33646625202c3136,0x33646625202c3032,0x6f6c2e090a3b3232,0x3532310930330963\n"
".quad 0x766f6d090a300932,0x257b09203436622e,0x3172252c33353172,0x646625202c7d3435\n"
".quad 0x6f6d090a3b313233,0x2509203233732e76,0x312d202c35353172,0x3537353738343630\n"
".quad 0x2e746573090a3b39,0x732e3233752e746c,0x3531722509203233,0x3435317225202c36\n"
".quad 0x3b3535317225202c,0x33732e67656e090a,0x3735317225092032,0x3b3635317225202c\n"
".quad 0x33752e766f6d090a,0x3835317225092032,0x333532383031202c,0x73090a3b30393435\n"
".quad 0x33752e656c2e7465,0x2509203233752e32,0x7225202c39353172,0x317225202c343531\n"
".quad 0x67656e090a3b3835,0x722509203233732e,0x317225202c303631,0x2e726f090a3b3935\n"
".quad 0x3172250920323362,0x35317225202c3136,0x3036317225202c37,0x752e766f6d090a3b\n"
".quad 0x3631722509203233,0x73090a3b30202c32,0x732e71652e707465,0x3636702509203233\n"
".quad 0x2c3136317225202c,0x0a3b323631722520,0x6220363670254009,0x5f744c2409206172\n"
".quad 0x3230303832315f31,0x6f6c3c2f2f200a3b,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x68202c343220656e,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x3632383930315f31,0x3309636f6c2e090a,0x0a30093731330930,0x3436662e766f6d09\n"
".quad 0x3332336466250920,0x376666336430202c,0x6232353637343531,0x2f2f093b65663238\n"
".quad 0x0a373234342e3120,0x3436662e6c756d09,0x3432336466250920,0x313233646625202c\n"
".quad 0x333233646625202c,0x722e747663090a3b,0x662e3436662e696e,0x3364662509203436\n"
".quad 0x33646625202c3532,0x766f6d090a3b3432,0x662509203436662e,0x6430202c36323364\n"
".quad 0x3234653236656662,0x6665393361666566,0x2e302d202f2f093b,0x090a373431333936\n"
".quad 0x662e6e722e64616d,0x3364662509203436,0x33646625202c3732,0x33646625202c3532\n"
".quad 0x33646625202c3632,0x766f6d090a3b3132,0x662509203436662e,0x6430202c38323364\n"
".quad 0x6539636261376362,0x6633303839336233,0x2e322d202f2f093b,0x312d653530393133\n"
".quad 0x722e64616d090a37,0x2509203436662e6e,0x25202c3932336466,0x25202c3532336466\n"
".quad 0x25202c3832336466,0x090a3b3732336466,0x203436662e766f6d,0x2c30333364662509\n"
".quad 0x6631326533643020,0x3835666363663730,0x202f2f093b646162,0x6533343838302e32\n"
".quad 0x766f6d090a39302d,0x662509203436662e,0x6430202c31333364,0x3138646661356533\n"
".quad 0x6661623363366164,0x352e32202f2f093b,0x38302d6536363331,0x6e722e64616d090a\n"
".quad 0x662509203436662e,0x6625202c32333364,0x6625202c30333364,0x6625202c39323364\n"
".quad 0x6d090a3b31333364,0x09203436662e766f,0x202c333333646625,0x6537323965336430\n"
".quad 0x3038663036663535,0x32202f2f093b3665,0x2d6535373535372e,0x2e64616d090a3730\n"
".quad 0x09203436662e6e72,0x202c343333646625,0x202c323333646625,0x202c393233646625\n"
".quad 0x0a3b333333646625,0x3436662e766f6d09,0x3533336466250920,0x376365336430202c\n"
".quad 0x3230663861646431,0x2f2f093b36363664,0x32373535372e3220,0x616d090a36302d65\n"
".quad 0x3436662e6e722e64,0x3633336466250920,0x343333646625202c,0x393233646625202c\n"
".quad 0x353333646625202c,0x09636f6c2e090a3b,0x3009383133093033,0x36662e766f6d090a\n"
".quad 0x3333646625092034,0x6665336430202c37,0x6233313061313061,0x2f093b3065343938\n"
".quad 0x313038342e32202f,0x6d090a35302d6536,0x36662e6e722e6461,0x3333646625092034\n"
".quad 0x3333646625202c38,0x3233646625202c36,0x3333646625202c39,0x636f6c2e090a3b37\n"
".quad 0x0939313309303309,0x662e766f6d090a30,0x3364662509203436,0x66336430202c3933\n"
".quad 0x6431306131306132,0x093b383837666133,0x3030302e30202f2f,0x090a333134383931\n"
".quad 0x662e6e722e64616d,0x3364662509203436,0x33646625202c3034,0x33646625202c3833\n"
".quad 0x33646625202c3932,0x6f6c2e090a3b3933,0x3032330930330963,0x2e766f6d090a3009\n"
".quad 0x6466250920343666,0x336430202c313433,0x3163363163363566,0x3b63653161336336\n"
".quad 0x30302e30202f2f09,0x090a393838383331,0x662e6e722e64616d,0x3364662509203436\n"
".quad 0x33646625202c3234,0x33646625202c3034,0x33646625202c3932,0x6f6c2e090a3b3134\n"
".quad 0x3132330930330963,0x2e766f6d090a3009,0x6466250920343666,0x336430202c333433\n"
".quad 0x3131313131313866,0x3b31363139303131,0x30302e30202f2f09,0x090a333333333338\n"
".quad 0x662e6e722e64616d,0x3364662509203436,0x33646625202c3434,0x33646625202c3234\n"
".quad 0x33646625202c3932,0x6f6c2e090a3b3334,0x3232330930330963,0x2e766f6d090a3009\n"
".quad 0x6466250920343666,0x336430202c353433,0x3535353535356166,0x3b31633435353535\n"
".quad 0x34302e30202f2f09,0x6d090a3736363631,0x36662e6e722e6461,0x3433646625092034\n"
".quad 0x3433646625202c36,0x3233646625202c34,0x3433646625202c39,0x636f6c2e090a3b35\n"
".quad 0x0933323309303309,0x662e766f6d090a30,0x3364662509203436,0x66336430202c3734\n"
".quad 0x3535353535353563,0x093b663635353535,0x3636312e30202f2f,0x64616d090a373636\n"
".quad 0x203436662e6e722e,0x2c38343364662509,0x2c36343364662520,0x2c39323364662520\n"
".quad 0x3b37343364662520,0x3309636f6c2e090a,0x0a30093432330930,0x3436662e766f6d09\n"
".quad 0x3934336466250920,0x306566336430202c,0x3030303030303030,0x2f2f093b30303030\n"
".quad 0x616d090a352e3020,0x3436662e6e722e64,0x3035336466250920,0x383433646625202c\n"
".quad 0x393233646625202c,0x393433646625202c,0x09636f6c2e090a3b,0x3009363233093033\n"
".quad 0x36662e6c756d090a,0x3533646625092034,0x3233646625202c31,0x3533646625202c39\n"
".quad 0x2e64616d090a3b30,0x09203436662e6e72,0x202c313931646625,0x202c313533646625\n"
".quad 0x202c393233646625,0x0a3b393233646625,0x303309636f6c2e09,0x090a300938303709\n"
".quad 0x2e697a722e747663,0x203436662e323373,0x202c333631722509,0x0a3b353233646625\n"
".quad 0x3233622e6c687309,0x2c34363172250920,0x202c333631722520,0x646461090a3b3032\n"
".quad 0x722509203233732e,0x317225202c393031,0x32373031202c3436,0x0a3b383432333936\n"
".quad 0x3233752e64646109,0x2c35363172250920,0x202c333631722520,0x6d090a3b30323031\n"
".quad 0x09203233752e766f,0x32202c3636317225,0x6573090a3b303430,0x33752e74672e7074\n"
".quad 0x2c37367025092032,0x202c353631722520,0x090a3b3636317225,0x7262203736702540\n"
".quad 0x315f744c24092061,0x3b3037373832315f,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x6568202c34322065,0x6c6562616c206461\n"
".quad 0x315f744c24206465,0x0a3632383930315f,0x303309636f6c2e09,0x090a300931313709\n"
".quad 0x203233732e766f6d,0x202c373631722509,0x2e766f6d090a3b30,0x6466250920343662\n"
".quad 0x72257b202c323931,0x303172252c373631,0x64616d090a3b7d39,0x203436662e6e722e\n"
".quad 0x2c38363164662509,0x2c31393164662520,0x2c32393164662520,0x3b32393164662520\n"
".quad 0x6e752e617262090a,0x315f744c24092069,0x3b3431353832315f,0x315f315f744c240a\n"
".quad 0x200a3a3037373832,0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20\n"
".quad 0x20656e696c207964,0x64616568202c3432,0x64656c6562616c20,0x315f315f744c2420\n"
".quad 0x6d090a3632383930,0x09203233752e766f,0x30202c3836317225,0x2e70746573090a3b\n"
".quad 0x09203233732e6567,0x7225202c38367025,0x317225202c333631,0x702540090a3b3836\n"
".quad 0x0920617262203836,0x32315f315f744c24,0x2f200a3b32383239,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3220656e696c2079,0x2064616568202c34\n"
".quad 0x2064656c6562616c,0x30315f315f744c24,0x6c2e090a36323839,0x313709303309636f\n"
".quad 0x646461090a300935,0x722509203233732e,0x317225202c393031,0x37363735202c3930\n"
".quad 0x6d090a3b30383631,0x09203233732e766f,0x31202c3431317225,0x3431303730363130\n"
".quad 0x2e617262090a3b34,0x744c240920696e75,0x32303932315f315f,0x315f744c240a3b36\n"
".quad 0x3a3238323932315f,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x6568202c34322065,0x6c6562616c206461,0x315f744c24206465\n"
".quad 0x0a3632383930315f,0x3233732e766f6d09,0x2c34313172250920,0x3134373337303120\n"
".quad 0x744c240a3b343238,0x32303932315f315f,0x6c3c2f2f200a3a36,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x202c343220656e69,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x32383930315f315f,0x09636f6c2e090a36,0x3009323237093033\n"
".quad 0x33732e766f6d090a,0x3936317225092032,0x6f6d090a3b30202c,0x2509203436622e76\n"
".quad 0x7b202c3339316466,0x72252c3936317225,0x6d090a3b7d343131,0x36662e6e722e6461\n"
".quad 0x3533646625092034,0x3931646625202c32,0x3931646625202c31,0x3931646625202c33\n"
".quad 0x2e627573090a3b33,0x3172250920323373,0x30317225202c3037,0x3538343031202c39\n"
".quad 0x766f6d090a3b3637,0x722509203233732e,0x0a3b30202c313731,0x3436622e766f6d09\n"
".quad 0x3335336466250920,0x31373172257b202c,0x3b7d30373172252c,0x36662e6c756d090a\n"
".quad 0x3631646625092034,0x3533646625202c38,0x3533646625202c32,0x315f744c240a3b33\n"
".quad 0x3a3431353832315f,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x6568202c34322065,0x6c6562616c206461,0x315f744c24206465\n"
".quad 0x0a3632383930315f,0x303309636f6c2e09,0x090a300934333709,0x203436662e766f6d\n"
".quad 0x2c36393164662509,0x3b38363164662520,0x6e752e617262090a,0x6557444c24092069\n"
".quad 0x746e69725f69646e,0x3b30315f3837315f,0x315f315f744c240a,0x200a3a3230303832\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x64616568202c3432,0x64656c6562616c20,0x315f315f744c2420,0x2e090a3632383930\n"
".quad 0x3709303309636f6c,0x6f6d090a30093034,0x2509203436662e76,0x30202c3435336466\n"
".quad 0x3030303066663764,0x3030303030303030,0x6e69202f2f093b30,0x662e766f6d090a66\n"
".quad 0x3364662509203436,0x30306430202c3535,0x3030303030303030,0x093b303030303030\n"
".quad 0x6f6d090a30202f2f,0x2509203233732e76,0x3b30202c32373172,0x672e70746573090a\n"
".quad 0x2509203233732e65,0x317225202c393670,0x37317225202c3435,0x706c6573090a3b32\n"
".quad 0x662509203436662e,0x6625202c36353364,0x6625202c34353364,0x7025202c35353364\n"
".quad 0x646461090a3b3936,0x662509203436662e,0x6625202c37353364,0x6625202c31323364\n"
".quad 0x61090a3b31323364,0x09203436662e7362,0x202c383533646625,0x0a3b313233646625\n"
".quad 0x3436662e766f6d09,0x3935336466250920,0x306666376430202c,0x3030303030303030\n"
".quad 0x2f2f093b30303030,0x6573090a666e6920,0x36662e656c2e7074,0x2c30377025092034\n"
".quad 0x2c38353364662520,0x3b39353364662520,0x662e706c6573090a,0x3164662509203436\n"
".quad 0x33646625202c3639,0x33646625202c3635,0x30377025202c3735,0x6e6557444c240a3b\n"
".quad 0x5f746e69725f6964,0x0a3a30315f383731,0x706f6f6c3c2f2f20,0x6f2074726150203e\n"
".quad 0x6220706f6f6c2066,0x656e696c2079646f,0x616568202c343220,0x656c6562616c2064\n"
".quad 0x5f315f744c242064,0x090a363238393031,0x09303309636f6c2e,0x090a300932353231\n"
".quad 0x203436662e766f6d,0x2c30363364662509,0x3b36393164662520,0x36662e766f6d090a\n"
".quad 0x3032646625092034,0x3633646625202c34,0x636f6c2e090a3b30,0x3435323109303309\n"
".quad 0x2e736261090a3009,0x6466250920343666,0x646625202c313633,0x6f6d090a3b303633\n"
".quad 0x2509203436662e76,0x30202c3236336466,0x3030303066663764,0x3030303030303030\n"
".quad 0x6e69202f2f093b30,0x2e70746573090a66,0x09203436662e7165,0x6625202c31377025\n"
".quad 0x6625202c31363364,0x40090a3b32363364,0x6172622031377025,0x5f315f744c240920\n"
".quad 0x0a3b383335393231,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x616568202c343220,0x656c6562616c2064,0x5f315f744c242064\n"
".quad 0x090a363238393031,0x09303309636f6c2e,0x090a300938353231,0x662e6e722e64616d\n"
".quad 0x3264662509203436,0x33646625202c3430,0x31646625202c3036,0x33646625202c3136\n"
".quad 0x5f744c240a3b3036,0x3833353932315f31,0x6f6c3c2f2f200a3a,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x68202c343220656e,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x3632383930315f31,0x3309636f6c2e090a,0x3009363033310930\n"
".quad 0x36662e766f6d090a,0x3633646625092034,0x343032646625202c,0x662e766f6d090a3b\n"
".quad 0x3364662509203436,0x66336430202c3336,0x3030303030303065,0x093b303030303030\n"
".quad 0x090a352e30202f2f,0x203436662e6c756d,0x2c34363364662509,0x2c33313264662520\n"
".quad 0x3b33363364662520,0x7a722e747663090a,0x36662e3436662e69,0x3332646625092034\n"
".quad 0x3633646625202c36,0x706c6573090a3b34,0x722509203233732e,0x202c31202c333731\n"
".quad 0x3b31367025202c30,0x36662e646461090a,0x3633646625092034,0x3332646625202c35\n"
".quad 0x3332646625202c36,0x2e627573090a3b36,0x6466250920343666,0x646625202c363633\n"
".quad 0x646625202c333132,0x6261090a3b353633,0x2509203436662e73,0x25202c3736336466\n"
".quad 0x090a3b3636336466,0x203436662e766f6d,0x2c38363364662509,0x3030666633643020\n"
".quad 0x3030303030303030,0x202f2f093b303030,0x652e746573090a31,0x36662e3233752e71\n"
".quad 0x3437317225092034,0x373633646625202c,0x383633646625202c,0x732e67656e090a3b\n"
".quad 0x3731722509203233,0x3437317225202c35,0x622e646e61090a3b,0x3731722509203233\n"
".quad 0x3337317225202c36,0x3b3537317225202c,0x33752e766f6d090a,0x3737317225092032\n"
".quad 0x6573090a3b30202c,0x33732e71652e7074,0x2c32377025092032,0x202c363731722520\n"
".quad 0x090a3b3737317225,0x7262203237702540,0x315f744c24092061,0x3b3035303033315f\n"
".quad 0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62\n"
".quad 0x6568202c34322065,0x6c6562616c206461,0x315f744c24206465,0x0a3632383930315f\n"
".quad 0x303309636f6c2e09,0x0a30093830333109,0x3436622e766f6d09,0x2c33326472250920\n"
".quad 0x0a3b363364662520,0x3436622e726f7809,0x2c34326472250920,0x202c333264722520\n"
".quad 0x323733333232392d,0x3737343538363330,0x6d090a3b38303835,0x09203436622e766f\n"
".quad 0x25202c3633646625,0x4c240a3b34326472,0x303033315f315f74,0x3c2f2f200a3a3035\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x2c343220656e696c\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x383930315f315f74,0x636f6c2e090a3632\n"
".quad 0x3031333109303309,0x2e766f6d090a3009,0x6466250920343666,0x646625202c383132\n"
".quad 0x57444c240a3b3633,0x695f5f5f69646e65,0x3837315f6e616e73,0x3c2f2f200a3a395f\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x2c343220656e696c\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x383930315f315f74,0x636f6c2e090a3632\n"
".quad 0x3009333609383109,0x36662e6c756d090a,0x3631646625092034,0x383132646625202c\n"
".quad 0x3b3631646625202c,0x315f315f744c240a,0x200a3a3634333132,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x64616568202c3432\n"
".quad 0x64656c6562616c20,0x315f315f744c2420,0x2e090a3632383930,0x3109383109636f6c\n"
".quad 0x6f6d090a30093930,0x2509203436662e76,0x25202c3936336466,0x2e090a3b36316466\n"
".quad 0x3209383109636f6c,0x252140090a300934,0x2061726220313170,0x315f315f744c2409\n"
".quad 0x200a3b3236353033,0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20\n"
".quad 0x20656e696c207964,0x64616568202c3432,0x64656c6562616c20,0x315f315f744c2420\n"
".quad 0x6d090a3632383930,0x09203233732e766f,0x25202c3837317225,0x766f6d090a3b3772\n"
".quad 0x722509203233732e,0x0a3b30202c393731,0x74672e7074657309,0x702509203233732e\n"
".quad 0x2c367225202c3337,0x0a3b393731722520,0x2e6f6c2e6c756d09,0x3172250920323373\n"
".quad 0x2c377225202c3038,0x090a3b3635722520,0x203233732e766f6d,0x202c313831722509\n"
".quad 0x6c3c2f2f200a3b30,0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070\n"
".quad 0x202c343220656e69,0x62616c2064616568,0x744c242064656c65,0x32383930315f315f\n"
".quad 0x732e766f6d090a36,0x3831722509203233,0x3837317225202c32,0x5f315f744c240a3b\n"
".quad 0x0a3a343730313331,0x616d676172702e09,0x6f726e756f6e2220,0x2f2f200a3b226c6c\n"
".quad 0x4c203e706f6f6c3c,0x79646f6220706f6f,0x343220656e696c20,0x6e697473656e202c\n"
".quad 0x3a68747065642067,0x69747365202c3220,0x746920646574616d,0x736e6f6974617265\n"
".quad 0x776f6e6b6e75203a,0x09636f6c2e090a6e,0x0a30093534093831,0x3233732e766f6d09\n"
".quad 0x202c383572250920,0x6c2e090a3b367225,0x363409383109636f,0x2e766f6d090a3009\n"
".quad 0x3572250920323373,0x3138317225202c39,0x09636f6c2e090a3b,0x0a30093734093831\n"
".quad 0x3233732e62757309,0x2c33383172250920,0x7225202c36722520,0x6f6d090a3b313831\n"
".quad 0x2509203233732e76,0x317225202c313672,0x252140090a3b3338,0x2061726220333770\n"
".quad 0x315f315f744c2409,0x200a3b3033393635,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x64616568202c3432,0x64656c6562616c20\n"
".quad 0x315f315f744c2420,0x6d090a3437303133,0x09203233732e766f,0x25202c3438317225\n"
".quad 0x766f6d090a3b3672,0x662509203436662e,0x336430202c363164,0x3030303030306666\n"
".quad 0x3b30303030303030,0x2f200a31202f2f09,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3220656e696c2079,0x2064616568202c34,0x2064656c6562616c\n"
".quad 0x33315f315f744c24,0x6f6d090a34373031,0x2509203233732e76,0x7225202c35383172\n"
".quad 0x744c240a3b343831,0x34383133315f315f,0x6c3c2f2f200a3a32,0x6f6f4c203e706f6f\n"
".quad 0x6c2079646f622070,0x202c373420656e69,0x20676e697473656e,0x34203a6874706564\n"
".quad 0x616d69747365202c,0x7265746920646574,0x203a736e6f697461,0x0a6e776f6e6b6e75\n"
".quad 0x383109636f6c2e09,0x63090a3009393409,0x36662e6e722e7476,0x2509203233732e34\n"
".quad 0x25202c3037336466,0x756d090a3b383572,0x2509203436662e6c,0x6625202c36316466\n"
".quad 0x6625202c30373364,0x6c2e090a3b363164,0x303509383109636f,0x2e627573090a3009\n"
".quad 0x3572250920323373,0x2c38357225202c38,0x766f6d090a3b3120,0x722509203233752e\n"
".quad 0x0a3b31202c363831,0x656c2e7074657309,0x702509203233732e,0x39357225202c3437\n"
".quad 0x3b3638317225202c,0x203437702540090a,0x744c240920617262,0x39303233315f315f\n"
".quad 0x6c3c2f2f200a3b38,0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070\n"
".quad 0x202c373420656e69,0x62616c2064616568,0x744c242064656c65,0x34383133315f315f\n"
".quad 0x09636f6c2e090a32,0x0a30093235093831,0x2e6e722e74766309,0x203233732e343666\n"
".quad 0x2c31373364662509,0x090a3b3935722520,0x662e6e722e766964,0x3164662509203436\n"
".quad 0x3631646625202c36,0x313733646625202c,0x09636f6c2e090a3b,0x0a30093335093831\n"
".quad 0x3233732e62757309,0x202c393572250920,0x3b31202c39357225,0x315f315f744c240a\n"
".quad 0x200a3a3839303233,0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20\n"
".quad 0x20656e696c207964,0x64616568202c3734,0x64656c6562616c20,0x315f315f744c2420\n"
".quad 0x6d090a3234383133,0x09203233752e766f,0x31202c3738317225,0x2e70746573090a3b\n"
".quad 0x09203233732e656c,0x7225202c35377025,0x38317225202c3136,0x37702540090a3b37\n"
".quad 0x2409206172622035,0x3233315f315f744c,0x2f2f200a3b303136,0x50203e706f6f6c3c\n"
".quad 0x6c20666f20747261,0x79646f6220706f6f,0x373420656e696c20,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3133315f315f744c,0x6f6c2e090a323438,0x0936350938310963\n"
".quad 0x722e747663090a30,0x33732e3436662e6e,0x3733646625092032,0x3b31367225202c32\n"
".quad 0x6e722e766964090a,0x662509203436662e,0x646625202c363164,0x33646625202c3631\n"
".quad 0x6f6c2e090a3b3237,0x0937350938310963,0x732e627573090a30,0x3136722509203233\n"
".quad 0x202c31367225202c,0x315f744c240a3b31,0x3a3031363233315f,0x6f6f6c3c2f2f200a\n"
".quad 0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62,0x6568202c37342065\n"
".quad 0x6c6562616c206461,0x315f744c24206465,0x0a3234383133315f,0x3233752e766f6d09\n"
".quad 0x2c38383172250920,0x746573090a3b3020,0x3233732e656e2e70,0x202c363770250920\n"
".quad 0x7225202c38357225,0x2540090a3b383831,0x2061726220363770,0x315f315f744c2409\n"
".quad 0x200a3b3234383133,0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20\n"
".quad 0x20656e696c207964,0x64616568202c3432,0x64656c6562616c20,0x315f315f744c2420\n"
".quad 0x62090a3437303133,0x0920696e752e6172,0x33315f315f744c24,0x4c240a3b30333331\n"
".quad 0x393635315f315f74,0x3c2f2f200a3a3033,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x2c343220656e696c,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x303133315f315f74,0x2e766f6d090a3437,0x6466250920343666,0x66336430202c3631\n"
".quad 0x3030303030303066,0x093b303030303030,0x744c240a31202f2f,0x33333133315f315f\n"
".quad 0x6c3c2f2f200a3a30,0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070\n"
".quad 0x202c343220656e69,0x62616c2064616568,0x744c242064656c65,0x37303133315f315f\n"
".quad 0x752e766f6d090a34,0x3831722509203233,0x73090a3b30202c39,0x732e656c2e707465\n"
".quad 0x3737702509203233,0x2c3138317225202c,0x0a3b393831722520,0x6220373770254009\n"
".quad 0x5f744c2409206172,0x3837333333315f31,0x6f6c3c2f2f200a3b,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x68202c343220656e,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x3437303133315f31,0x3109636f6c2e090a,0x090a300931360938\n"
".quad 0x662e6e722e747663,0x09203233732e3436,0x202c333733646625,0x090a3b3138317225\n"
".quad 0x203436662e766f6d,0x2c34373364662509,0x3030303030643020,0x3030303030303030\n"
".quad 0x202f2f093b303030,0x652e746573090a30,0x36662e3233752e71,0x3039317225092034\n"
".quad 0x333733646625202c,0x343733646625202c,0x732e67656e090a3b,0x3931722509203233\n"
".quad 0x3039317225202c31,0x662e766f6d090a3b,0x3364662509203436,0x66336430202c3537\n"
".quad 0x3030303030303066,0x093b303030303030,0x6573090a31202f2f,0x3233752e71652e74\n"
".quad 0x722509203436662e,0x646625202c323931,0x3733646625202c39,0x2e67656e090a3b35\n"
".quad 0x3172250920323373,0x39317225202c3339,0x622e726f090a3b32,0x3931722509203233\n"
".quad 0x3139317225202c34,0x3b3339317225202c,0x33752e766f6d090a,0x3539317225092032\n"
".quad 0x6573090a3b30202c,0x33732e71652e7074,0x2c38377025092032,0x202c343931722520\n"
".quad 0x090a3b3539317225,0x7262203837702540,0x315f744c24092061,0x3b3039383333315f\n"
".quad 0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62\n"
".quad 0x6568202c34322065,0x6c6562616c206461,0x315f744c24206465,0x0a3437303133315f\n"
".quad 0x303309636f6c2e09,0x0a30093936323109,0x3436662e766f6d09,0x2c33326466250920\n"
".quad 0x3030666633643020,0x3030303030303030,0x202f2f093b303030,0x752e617262090a31\n"
".quad 0x57444c240920696e,0x695f5f5f69646e65,0x3837315f6e616e73,0x5f744c240a3b355f\n"
".quad 0x3039383333315f31,0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x68202c343220656e,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x3437303133315f31,0x3309636f6c2e090a,0x3009313732310930,0x36662e736261090a\n"
".quad 0x3733646625092034,0x3b39646625202c36,0x36662e766f6d090a,0x3733646625092034\n"
".quad 0x6666376430202c37,0x3030303030303030,0x2f093b3030303030,0x73090a666e69202f\n"
".quad 0x662e656c2e707465,0x3937702509203436,0x363733646625202c,0x373733646625202c\n"
".quad 0x3770252140090a3b,0x2409206172622039,0x3939335f315f744c,0x3c2f2f200a3b3833\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x2c343220656e696c\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x303133315f315f74,0x2e736261090a3437\n"
".quad 0x6466250920343666,0x646625202c383733,0x6f6d090a3b333733,0x2509203436662e76\n"
".quad 0x30202c3937336466,0x3030303066663764,0x3030303030303030,0x6e69202f2f093b30\n"
".quad 0x2e70746573090a66,0x09203436662e656c,0x6625202c30387025,0x6625202c38373364\n"
".quad 0x40090a3b39373364,0x6172622030387025,0x5f315f744c240920,0x240a3b3439313034\n"
".quad 0x3939335f315f744c,0x3c2f2f200a3a3833,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x2c343220656e696c,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x303133315f315f74,0x636f6c2e090a3437,0x3237323109303309,0x2e646461090a3009\n"
".quad 0x6466250920343666,0x33646625202c3332,0x39646625202c3337,0x752e617262090a3b\n"
".quad 0x57444c240920696e,0x695f5f5f69646e65,0x3837315f6e616e73,0x5f744c240a3b355f\n"
".quad 0x3a34393130345f31,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x6568202c34322065,0x6c6562616c206461,0x315f744c24206465\n"
".quad 0x0a3437303133315f,0x303309636f6c2e09,0x0a30093137323109,0x3436662e766f6d09\n"
".quad 0x3038336466250920,0x306666376430202c,0x3030303030303030,0x2f2f093b30303030\n"
".quad 0x6573090a666e6920,0x36662e71652e7074,0x2c31387025092034,0x25202c3964662520\n"
".quad 0x090a3b3038336466,0x6220313870252140,0x5f744c2409206172,0x3230343433315f31\n"
".quad 0x6f6c3c2f2f200a3b,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x68202c343220656e,0x6562616c20646165,0x5f744c242064656c,0x3437303133315f31\n"
".quad 0x3309636f6c2e090a,0x3009353732310930,0x36662e766f6d090a,0x3833646625092034\n"
".quad 0x6666376430202c31,0x3030303030303030,0x2f093b3030303030,0x6d090a666e69202f\n"
".quad 0x09203436662e766f,0x202c323833646625,0x3030303030306430,0x3030303030303030\n"
".quad 0x30202f2f093b3030,0x36622e766f6d090a,0x393172257b092034,0x7d37393172252c36\n"
".quad 0x333733646625202c,0x732e766f6d090a3b,0x3931722509203233,0x73090a3b30202c38\n"
".quad 0x732e65672e707465,0x3238702509203233,0x2c3739317225202c,0x0a3b383931722520\n"
".quad 0x36662e706c657309,0x3332646625092034,0x313833646625202c,0x323833646625202c\n"
".quad 0x0a3b32387025202c,0x696e752e61726209,0x6e6557444c240920,0x6e73695f5f5f6964\n"
".quad 0x355f3837315f6e61,0x5f315f744c240a3b,0x0a3a323034343331,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x616568202c343220\n"
".quad 0x656c6562616c2064,0x5f315f744c242064,0x090a343730313331,0x09303309636f6c2e\n"
".quad 0x090a300937373231,0x203436662e766f6d,0x2c33383364662509,0x3030666637643020\n"
".quad 0x3030303030303030,0x202f2f093b303030,0x746573090a666e69,0x3436662e71652e70\n"
".quad 0x202c333870250920,0x202c383733646625,0x0a3b333833646625,0x2033387025214009\n"
".quad 0x744c240920617262,0x31393433315f315f,0x6c3c2f2f200a3b34,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x202c343220656e69,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x37303133315f315f,0x662e766f6d090a34,0x3364662509203436\n"
".quad 0x66626430202c3438,0x3030303030303066,0x093b303030303030,0x73090a312d202f2f\n"
".quad 0x662e71652e707465,0x3438702509203436,0x202c39646625202c,0x0a3b343833646625\n"
".quad 0x2034387025214009,0x744c240920617262,0x32343533315f315f,0x6c3c2f2f200a3b36\n"
".quad 0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070,0x202c343220656e69\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x37303133315f315f,0x09636f6c2e090a34\n"
".quad 0x0939373231093033,0x662e766f6d090a30,0x3264662509203436,0x6666336430202c33\n"
".quad 0x3030303030303030,0x2f093b3030303030,0x617262090a31202f,0x4c240920696e752e\n"
".quad 0x5f5f69646e655744,0x315f6e616e73695f,0x4c240a3b355f3837,0x343533315f315f74\n"
".quad 0x3c2f2f200a3a3632,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x2c343220656e696c,0x616c206461656820,0x4c242064656c6562,0x303133315f315f74\n"
".quad 0x636f6c2e090a3437,0x3138323109303309,0x2e766f6d090a3009,0x6466250920343666\n"
".quad 0x376430202c353833,0x3030303030306666,0x3b30303030303030,0x0a666e69202f2f09\n"
".quad 0x3436662e766f6d09,0x3638336466250920,0x303030306430202c,0x3030303030303030\n"
".quad 0x2f2f093b30303030,0x2e766f6d090a3020,0x6466250920343666,0x336430202c373833\n"
".quad 0x3030303030306666,0x3b30303030303030,0x73090a31202f2f09,0x662e74672e707465\n"
".quad 0x3538702509203436,0x363733646625202c,0x373833646625202c,0x2e706c6573090a3b\n"
".quad 0x6466250920343666,0x33646625202c3633,0x33646625202c3538,0x35387025202c3638\n"
".quad 0x662e766f6d090a3b,0x3364662509203436,0x30306430202c3838,0x3030303030303030\n"
".quad 0x093b303030303030,0x6573090a30202f2f,0x36662e746c2e7074,0x2c36387025092034\n"
".quad 0x2c33373364662520,0x3b38383364662520,0x363870252140090a,0x4c24092061726220\n"
".quad 0x393533315f315f74,0x3c2f2f200a3b3833,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x2c343220656e696c,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x303133315f315f74,0x636f6c2e090a3437,0x3338323109303309,0x2e706372090a3009\n"
".quad 0x09203436662e6e72,0x25202c3633646625,0x4c240a3b36336466,0x393533315f315f74\n"
".quad 0x3c2f2f200a3a3833,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x2c343220656e696c,0x616c206461656820,0x4c242064656c6562,0x303133315f315f74\n"
".quad 0x636f6c2e090a3437,0x3538323109303309,0x2e766f6d090a3009,0x6466250920343666\n"
".quad 0x33646625202c3332,0x2e617262090a3b36,0x444c240920696e75,0x5f5f5f69646e6557\n"
".quad 0x37315f6e616e7369,0x744c240a3b355f38,0x31393433315f315f,0x6c3c2f2f200a3a34\n"
".quad 0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070,0x202c343220656e69\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x37303133315f315f,0x662e766f6d090a34\n"
".quad 0x3364662509203436,0x30306430202c3938,0x3030303030303030,0x093b303030303030\n"
".quad 0x6573090a30202f2f,0x36662e71652e7074,0x2c37387025092034,0x25202c3964662520\n"
".quad 0x090a3b3938336466,0x6220373870252140,0x5f744c2409206172,0x3035343633315f31\n"
".quad 0x6f6c3c2f2f200a3b,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x68202c343220656e,0x6562616c20646165,0x5f744c242064656c,0x3437303133315f31\n"
".quad 0x3309636f6c2e090a,0x3009393832310930,0x36662e766f6d090a,0x3933646625092034\n"
".quad 0x6566336430202c30,0x3030303030303030,0x2f093b3030303030,0x6d090a352e30202f\n"
".quad 0x09203436662e6c75,0x202c313933646625,0x202c333733646625,0x0a3b303933646625\n"
".quad 0x697a722e74766309,0x3436662e3436662e,0x3239336466250920,0x313933646625202c\n"
".quad 0x662e766f6d090a3b,0x3364662509203436,0x30306430202c3339,0x3030303030303030\n"
".quad 0x093b303030303030,0x6461090a30202f2f,0x2509203436662e64,0x25202c3439336466\n"
".quad 0x25202c3239336466,0x090a3b3239336466,0x203436662e627573,0x2c35393364662509\n"
".quad 0x2c33373364662520,0x3b34393364662520,0x36662e736261090a,0x3933646625092034\n"
".quad 0x3933646625202c36,0x2e766f6d090a3b35,0x6466250920343666,0x336430202c373933\n"
".quad 0x3030303030306666,0x3b30303030303030,0x73090a31202f2f09,0x662e71652e707465\n"
".quad 0x3838702509203436,0x363933646625202c,0x373933646625202c,0x2e706c6573090a3b\n"
".quad 0x6466250920343666,0x39646625202c3633,0x333933646625202c,0x0a3b38387025202c\n"
".quad 0x3436662e766f6d09,0x3839336466250920,0x303030306430202c,0x3030303030303030\n"
".quad 0x2f2f093b30303030,0x70746573090a3020,0x203436662e746c2e,0x25202c3938702509\n"
".quad 0x25202c3337336466,0x090a3b3839336466,0x6220393870252140,0x5f744c2409206172\n"
".quad 0x3236393633315f31,0x6f6c3c2f2f200a3b,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x68202c343220656e,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x3437303133315f31,0x3309636f6c2e090a,0x3009313932310930,0x6e722e706372090a\n"
".quad 0x662509203436662e,0x646625202c363364,0x5f744c240a3b3633,0x3236393633315f31\n"
".quad 0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x68202c343220656e,0x6562616c20646165,0x5f744c242064656c,0x3437303133315f31\n"
".quad 0x3309636f6c2e090a,0x3009333932310930,0x36662e766f6d090a,0x3332646625092034\n"
".quad 0x3b3633646625202c,0x6e752e617262090a,0x6557444c24092069,0x73695f5f5f69646e\n"
".quad 0x5f3837315f6e616e,0x315f744c240a3b35,0x3a3035343633315f,0x6f6f6c3c2f2f200a\n"
".quad 0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62,0x6568202c34322065\n"
".quad 0x6c6562616c206461,0x315f744c24206465,0x0a3437303133315f,0x3436662e766f6d09\n"
".quad 0x3939336466250920,0x306666666430202c,0x3030303030303030,0x2f2f093b30303030\n"
".quad 0x73090a666e692d20,0x662e71652e707465,0x3039702509203436,0x202c39646625202c\n"
".quad 0x0a3b393933646625,0x2030397025214009,0x744c240920617262,0x37343733315f315f\n"
".quad 0x6c3c2f2f200a3b34,0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070\n"
".quad 0x202c343220656e69,0x62616c2064616568,0x744c242064656c65,0x37303133315f315f\n"
".quad 0x662e766f6d090a34,0x3464662509203436,0x30306430202c3030,0x3030303030303030\n"
".quad 0x093b303030303030,0x6573090a30202f2f,0x36662e746c2e7074,0x2c31397025092034\n"
".quad 0x2c33373364662520,0x3b30303464662520,0x313970252140090a,0x4c24092061726220\n"
".quad 0x323833315f315f74,0x3c2f2f200a3b3234,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x2c343220656e696c,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x303133315f315f74,0x636f6c2e090a3437,0x3639323109303309,0x2e706372090a3009\n"
".quad 0x09203436662e6e72,0x202c313034646625,0x6e090a3b39646625,0x09203436662e6765\n"
".quad 0x202c323034646625,0x0a3b313034646625,0x696e752e61726209,0x5f315f744c240920\n"
".quad 0x0a3b363839373331,0x33315f315f744c24,0x2f200a3a32343238,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3220656e696c2079,0x2064616568202c34\n"
".quad 0x2064656c6562616c,0x33315f315f744c24,0x656e090a34373031,0x2509203436662e67\n"
".quad 0x25202c3230346466,0x744c240a3b396466,0x38393733315f315f,0x6c3c2f2f200a3a36\n"
".quad 0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070,0x202c343220656e69\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x37303133315f315f,0x662e766f6d090a34\n"
".quad 0x3364662509203436,0x3034646625202c36,0x2e766f6d090a3b32,0x6466250920343666\n"
".quad 0x336430202c333034,0x3030303030306566,0x3b30303030303030,0x0a352e30202f2f09\n"
".quad 0x3436662e6c756d09,0x3430346466250920,0x333733646625202c,0x333034646625202c\n"
".quad 0x722e747663090a3b,0x662e3436662e697a,0x3364662509203436,0x34646625202c3239\n"
".quad 0x646461090a3b3430,0x662509203436662e,0x6625202c35303464,0x6625202c32393364\n"
".quad 0x73090a3b32393364,0x09203436662e6275,0x202c363034646625,0x202c333733646625\n"
".quad 0x0a3b353034646625,0x3436662e73626109,0x3730346466250920,0x363034646625202c\n"
".quad 0x662e766f6d090a3b,0x3464662509203436,0x66336430202c3830,0x3030303030303066\n"
".quad 0x093b303030303030,0x6573090a31202f2f,0x36662e71652e7074,0x2c32397025092034\n"
".quad 0x2c37303464662520,0x3b38303464662520,0x323970252140090a,0x4c24092061726220\n"
".quad 0x343833315f315f74,0x3c2f2f200a3b3839,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x2c343220656e696c,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x303133315f315f74,0x636f6c2e090a3437,0x3839323109303309,0x2e766f6d090a3009\n"
".quad 0x6472250920343662,0x33646625202c3532,0x2e726f78090a3b36,0x6472250920343662\n"
".quad 0x32647225202c3632,0x333232392d202c35,0x3538363330323733,0x3b38303835373734\n"
".quad 0x36622e766f6d090a,0x3633646625092034,0x3b3632647225202c,0x315f315f744c240a\n"
".quad 0x200a3a3839343833,0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20\n"
".quad 0x20656e696c207964,0x64616568202c3432,0x64656c6562616c20,0x315f315f744c2420\n"
".quad 0x2e090a3437303133,0x3109303309636f6c,0x6d090a3009303033,0x09203436662e766f\n"
".quad 0x25202c3332646625,0x62090a3b36336466,0x0920696e752e6172,0x69646e6557444c24\n"
".quad 0x6e616e73695f5f5f,0x0a3b355f3837315f,0x33315f315f744c24,0x2f200a3a34373437\n"
".quad 0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c,0x3220656e696c2079\n"
".quad 0x2064616568202c34,0x2064656c6562616c,0x33315f315f744c24,0x6c2e090a34373031\n"
".quad 0x333109303309636f,0x6f6d090a30093230,0x2509203436662e76,0x30202c3930346466\n"
".quad 0x3030303030303064,0x3030303030303030,0x0a30202f2f093b30,0x746c2e7074657309\n"
".quad 0x702509203436662e,0x39646625202c3339,0x393034646625202c,0x3970252140090a3b\n"
".quad 0x2409206172622033,0x3735315f315f744c,0x2f2f200a3b323434,0x50203e706f6f6c3c\n"
".quad 0x6c20666f20747261,0x79646f6220706f6f,0x343220656e696c20,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3133315f315f744c,0x746573090a343730,0x36662e75656e2e70\n"
".quad 0x2c34397025092034,0x2c33373364662520,0x3b33373364662520,0x343970252140090a\n"
".quad 0x4c24092061726220,0x343735315f315f74,0x3c2f2f200a3b3234,0x6150203e706f6f6c\n"
".quad 0x6f6c20666f207472,0x2079646f6220706f,0x2c343220656e696c,0x616c206461656820\n"
".quad 0x4c242064656c6562,0x303133315f315f74,0x636f6c2e090a3437,0x3330333109303309\n"
".quad 0x2e766f6d090a3009,0x6466250920343666,0x66666430202c3332,0x3030303030303866\n"
".quad 0x093b303030303030,0x0a6e616e2d202f2f,0x696e752e61726209,0x6e6557444c240920\n"
".quad 0x6e73695f5f5f6964,0x355f3837315f6e61,0x5f315f744c240a3b,0x0a3a323434373531\n"
".quad 0x3430315f315f4c24,0x2f2f200a3a323639,0x50203e706f6f6c3c,0x6c20666f20747261\n"
".quad 0x79646f6220706f6f,0x343220656e696c20,0x6c2064616568202c,0x242064656c656261\n"
".quad 0x3133315f315f744c,0x6f6c2e090a343730,0x3939350930330963,0x2e766f6d090a3009\n"
".quad 0x72257b0920343662,0x303272252c393931,0x33646625202c7d30,0x766f6d090a3b3637\n"
".quad 0x722509203233732e,0x30327225202c3937,0x636f6c2e090a3b30,0x0930303609303309\n"
".quad 0x622e766f6d090a30,0x3872257b09203436,0x7d31303272252c30,0x363733646625202c\n"
".quad 0x09636f6c2e090a3b,0x3009313036093033,0x33732e726873090a,0x3230327225092032\n"
".quad 0x2c3030327225202c,0x6e61090a3b303220,0x2509203233622e64,0x327225202c333872\n"
".quad 0x37343032202c3230,0x752e766f6d090a3b,0x3032722509203233,0x73090a3b30202c33\n"
".quad 0x732e656e2e707465,0x3539702509203233,0x202c33387225202c,0x090a3b3330327225\n"
".quad 0x7262203539702540,0x315f744c24092061,0x3b3031303933315f,0x6f6f6c3c2f2f200a\n"
".quad 0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62,0x6568202c34322065\n"
".quad 0x6c6562616c206461,0x315f744c24206465,0x0a3437303133315f,0x303309636f6c2e09\n"
".quad 0x090a300935303609,0x203436662e766f6d,0x2c30313464662509,0x3030353334643020\n"
".quad 0x3030303030303030,0x202f2f093b303030,0x6534343130382e31,0x6c756d090a36312b\n"
".quad 0x662509203436662e,0x6625202c31313464,0x6625202c36373364,0x6d090a3b30313464\n"
".quad 0x09203436622e766f,0x252c34303272257b,0x6625202c7d393772,0x2e090a3b31313464\n"
".quad 0x3609303309636f6c,0x6f6d090a30093630,0x7b09203436622e76,0x3272252c30387225\n"
".quad 0x646625202c7d3530,0x6c2e090a3b313134,0x303609303309636f,0x726873090a300938\n"
".quad 0x722509203233732e,0x377225202c363032,0x090a3b3032202c39,0x203233622e646e61\n"
".quad 0x202c373032722509,0x32202c3630327225,0x7573090a3b373430,0x2509203233732e62\n"
".quad 0x327225202c333872,0x0a3b3435202c3730,0x33315f315f744c24,0x2f200a3a30313039\n"
".quad 0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c,0x3220656e696c2079\n"
".quad 0x2064616568202c34,0x2064656c6562616c,0x33315f315f744c24,0x6c2e090a34373031\n"
".quad 0x313609303309636f,0x627573090a300930,0x722509203233732e,0x33387225202c3338\n"
".quad 0x0a3b33323031202c,0x303309636f6c2e09,0x090a300936313609,0x203233622e646e61\n"
".quad 0x25202c3938722509,0x31322d202c393772,0x3337303533343634,0x33622e726f090a3b\n"
".quad 0x2c30397225092032,0x31202c3938722520,0x3432333936323730,0x2e766f6d090a3b38\n"
".quad 0x6466250920343662,0x3872257b202c3136,0x3b7d303972252c30,0x33752e766f6d090a\n"
".quad 0x3830327225092032,0x323133373031202c,0x73090a3b32383537,0x752e656c2e707465\n"
".quad 0x3639702509203233,0x202c30397225202c,0x090a3b3830327225,0x7262203639702540\n"
".quad 0x315f744c24092061,0x3b3232353933315f,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x6568202c34322065,0x6c6562616c206461\n"
".quad 0x315f744c24206465,0x0a3437303133315f,0x303309636f6c2e09,0x090a300938313609\n"
".quad 0x203436622e766f6d,0x2c39303272257b09,0x202c7d3031327225,0x090a3b3136646625\n"
".quad 0x203233732e627573,0x202c313132722509,0x31202c3031327225,0x0a3b363735383430\n"
".quad 0x3436622e766f6d09,0x32313272257b0920,0x2c7d33313272252c,0x0a3b313664662520\n"
".quad 0x3436622e766f6d09,0x2c31366466250920,0x2c32313272257b20,0x0a3b7d3131327225\n"
".quad 0x303309636f6c2e09,0x090a300939313609,0x203233732e646461,0x25202c3338722509\n"
".quad 0x0a3b31202c333872,0x33315f315f744c24,0x2f200a3a32323539,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3220656e696c2079,0x2064616568202c34\n"
".quad 0x2064656c6562616c,0x33315f315f744c24,0x6c2e090a34373031,0x323609303309636f\n"
".quad 0x766f6d090a300939,0x662509203436662e,0x6430202c32313464,0x3030303030666662\n"
".quad 0x3030303030303030,0x0a312d202f2f093b,0x3436662e64646109,0x2c33366466250920\n"
".quad 0x202c313664662520,0x0a3b323134646625,0x3436662e766f6d09,0x3331346466250920\n"
".quad 0x306666336430202c,0x3030303030303030,0x2f2f093b30303030,0x2e646461090a3120\n"
".quad 0x6466250920343666,0x36646625202c3536,0x3134646625202c31,0x2e747663090a3b33\n"
".quad 0x662e3233662e6e72,0x2c34662509203436,0x0a3b353664662520,0x2e6e722e70637209\n"
".quad 0x3766250920323366,0x090a3b346625202c,0x2e3436662e747663,0x6466250920323366\n"
".quad 0x3b376625202c3636,0x36662e67656e090a,0x3134646625092034,0x3536646625202c34\n"
".quad 0x662e766f6d090a3b,0x3464662509203436,0x66336430202c3531,0x3030303030303066\n"
".quad 0x093b303030303030,0x616d090a31202f2f,0x3436662e6e722e64,0x2c39366466250920\n"
".quad 0x2c34313464662520,0x202c363664662520,0x0a3b353134646625,0x2e6e722e64616d09\n"
".quad 0x6466250920343666,0x36646625202c3037,0x3936646625202c39,0x3b3936646625202c\n"
".quad 0x6e722e64616d090a,0x662509203436662e,0x646625202c313764,0x36646625202c3037\n"
".quad 0x3636646625202c36,0x662e6c756d090a3b,0x3764662509203436,0x3336646625202c32\n"
".quad 0x3b3137646625202c,0x3309636f6c2e090a,0x0a30093933360930,0x3436662e64646109\n"
".quad 0x2c33376466250920,0x202c323764662520,0x090a3b3237646625,0x203436662e6c756d\n"
".quad 0x202c343764662509,0x25202c3337646625,0x6d090a3b33376466,0x09203436662e766f\n"
".quad 0x202c363134646625,0x3566306265336430,0x6661633264376666,0x31202f2f093b3265\n"
".quad 0x2d6535393031302e,0x2e766f6d090a3630,0x6466250920343666,0x336430202c373134\n"
".quad 0x3432643566306465,0x3b61356233646131,0x34302e34202f2f09,0x0a36302d65343633\n"
".quad 0x2e6e722e64616d09,0x6466250920343666,0x646625202c383134,0x646625202c363134\n"
".quad 0x34646625202c3437,0x766f6d090a3b3731,0x662509203436662e,0x6430202c39313464\n"
".quad 0x6130326233666533,0x6633613838343537,0x382e31202f2f093b,0x35302d6531333837\n"
".quad 0x6e722e64616d090a,0x662509203436662e,0x6625202c30323464,0x6625202c38313464\n"
".quad 0x646625202c343764,0x6f6d090a3b393134,0x2509203436662e76,0x30202c3132346466\n"
".quad 0x6335343731663364,0x6463656166346564,0x2e38202f2f093b35,0x302d653238373738\n"
".quad 0x722e64616d090a35,0x2509203436662e6e,0x25202c3232346466,0x25202c3032346466\n"
".quad 0x6625202c34376466,0x6d090a3b31323464,0x09203436662e766f,0x202c333234646625\n"
".quad 0x3137633366336430,0x3735613835323763,0x30202f2f093b6238,0x303433343030302e\n"
".quad 0x2e64616d090a3832,0x09203436662e6e72,0x202c343234646625,0x202c323234646625\n"
".quad 0x25202c3437646625,0x090a3b3332346466,0x203436662e766f6d,0x2c35323464662509\n"
".quad 0x3432366633643020,0x6232343239343239,0x202f2f093b303139,0x3233323230302e30\n"
".quad 0x2e64616d090a3431,0x09203436662e6e72,0x202c363234646625,0x202c343234646625\n"
".quad 0x25202c3437646625,0x090a3b3532346466,0x203436662e766f6d,0x2c37323464662509\n"
".quad 0x3939386633643020,0x3939393939393939,0x202f2f093b626664,0x090a353231302e30\n"
".quad 0x662e6e722e64616d,0x3464662509203436,0x34646625202c3832,0x37646625202c3632\n"
".quad 0x3234646625202c34,0x636f6c2e090a3b37,0x0930343609303309,0x662e6c756d090a30\n"
".quad 0x3864662509203436,0x3437646625202c38,0x383234646625202c,0x09636f6c2e090a3b\n"
".quad 0x3009343436093033,0x36662e627573090a,0x3938646625092034,0x2c3336646625202c\n"
".quad 0x0a3b333764662520,0x3436662e67656e09,0x3932346466250920,0x3b3337646625202c\n"
".quad 0x36662e646461090a,0x3334646625092034,0x3938646625202c30,0x3b3938646625202c\n"
".quad 0x6e722e64616d090a,0x662509203436662e,0x6625202c31333464,0x6625202c39323464\n"
".quad 0x646625202c333664,0x756d090a3b303334,0x2509203436662e6c,0x6625202c33396466\n"
".quad 0x646625202c313764,0x6c2e090a3b313334,0x383509303309636f,0x766f6d090a300935\n"
".quad 0x662509203436662e,0x6430202c32333464,0x3535353535626633,0x3535353535353535\n"
".quad 0x302e30202f2f093b,0x090a333333333338,0x203436662e646461,0x202c353964662509\n"
".quad 0x25202c3838646625,0x090a3b3233346466,0x203436662e766f6d,0x2c33333464662509\n"
".quad 0x3535626633643020,0x3535353535353535,0x202f2f093b353535,0x3333333338302e30\n"
".quad 0x662e627573090a33,0x3464662509203436,0x34646625202c3433,0x39646625202c3333\n"
".quad 0x2e646461090a3b35,0x6466250920343666,0x646625202c353334,0x34646625202c3838\n"
".quad 0x766f6d090a3b3433,0x662509203436662e,0x6430202c36333464,0x6263346136346362\n"
".quad 0x3062376539623030,0x2e322d202f2f093b,0x312d653430353534,0x662e646461090a38\n"
".quad 0x3164662509203436,0x34646625202c3030,0x34646625202c3533,0x646461090a3b3633\n"
".quad 0x662509203436662e,0x6625202c31303164,0x646625202c353964,0x756d090a3b303031\n"
".quad 0x2509203436662e6c,0x25202c3230316466,0x6625202c33376466,0x73090a3b31303164\n"
".quad 0x09203436662e6275,0x202c373334646625,0x25202c3539646625,0x090a3b3130316466\n"
".quad 0x203436662e646461,0x2c34303164662509,0x2c30303164662520,0x3b37333464662520\n"
".quad 0x36662e67656e090a,0x3334646625092034,0x3031646625202c38,0x2e64616d090a3b32\n"
".quad 0x09203436662e6e72,0x202c393334646625,0x202c313031646625,0x25202c3337646625\n"
".quad 0x090a3b3833346466,0x662e6e722e64616d,0x3464662509203436,0x31646625202c3034\n"
".quad 0x39646625202c3430,0x3334646625202c33,0x2e64616d090a3b39,0x09203436662e6e72\n"
".quad 0x202c313434646625,0x202c313031646625,0x25202c3339646625,0x090a3b3034346466\n"
".quad 0x09303309636f6c2e,0x6d090a3009363835,0x36662e6e722e6461,0x3434646625092034\n"
".quad 0x3031646625202c32,0x3337646625202c34,0x313434646625202c,0x09636f6c2e090a3b\n"
".quad 0x3009373835093033,0x36662e646461090a,0x3434646625092034,0x3031646625202c33\n"
".quad 0x3434646625202c32,0x636f6c2e090a3b32,0x0938383509303309,0x662e627573090a30\n"
".quad 0x3464662509203436,0x31646625202c3434,0x34646625202c3230,0x646461090a3b3334\n"
".quad 0x662509203436662e,0x6625202c35343464,0x6625202c32343464,0x2e090a3b34343464\n"
".quad 0x3509303309636f6c,0x756d090a30093238,0x2509203436662e6c,0x25202c3634346466\n"
".quad 0x6625202c33376466,0x2e090a3b33343464,0x3509303309636f6c,0x656e090a30093338\n"
".quad 0x2509203436662e67,0x25202c3734346466,0x090a3b3634346466,0x662e6e722e64616d\n"
".quad 0x3464662509203436,0x34646625202c3834,0x37646625202c3334,0x3434646625202c33\n"
".quad 0x636f6c2e090a3b37,0x0934383509303309,0x722e64616d090a30,0x2509203436662e6e\n"
".quad 0x25202c3934346466,0x25202c3534346466,0x6625202c33396466,0x2e090a3b38343464\n"
".quad 0x3509303309636f6c,0x616d090a30093538,0x3436662e6e722e64,0x3035346466250920\n"
".quad 0x333434646625202c,0x2c3339646625202c,0x3b39343464662520,0x3309636f6c2e090a\n"
".quad 0x0a30093638350930,0x2e6e722e64616d09,0x6466250920343666,0x646625202c383131\n"
".quad 0x646625202c353434,0x34646625202c3337,0x6f6c2e090a3b3035,0x3738350930330963\n"
".quad 0x2e646461090a3009,0x6466250920343666,0x646625202c313534,0x646625202c363434\n"
".quad 0x6c2e090a3b383131,0x383509303309636f,0x627573090a300938,0x662509203436662e\n"
".quad 0x6625202c32353464,0x6625202c36343464,0x61090a3b31353464,0x09203436662e6464\n"
".quad 0x202c313231646625,0x202c383131646625,0x0a3b323534646625,0x303309636f6c2e09\n"
".quad 0x090a300932383509,0x203436662e6c756d,0x2c32323164662509,0x202c333764662520\n"
".quad 0x0a3b313534646625,0x303309636f6c2e09,0x090a300936383509,0x203436662e67656e\n"
".quad 0x2c33353464662509,0x3b32323164662520,0x6e722e64616d090a,0x662509203436662e\n"
".quad 0x6625202c34323164,0x6625202c31353464,0x646625202c333764,0x616d090a3b333534\n"
".quad 0x3436662e6e722e64,0x3532316466250920,0x313231646625202c,0x2c3339646625202c\n"
".quad 0x3b34323164662520,0x6e722e64616d090a,0x662509203436662e,0x6625202c36323164\n"
".quad 0x6625202c31353464,0x646625202c333964,0x616d090a3b353231,0x3436662e6e722e64\n"
".quad 0x3435346466250920,0x313231646625202c,0x2c3337646625202c,0x3b36323164662520\n"
".quad 0x3309636f6c2e090a,0x0a30093738350930,0x3436662e64646109,0x3832316466250920\n"
".quad 0x343534646625202c,0x323231646625202c,0x09636f6c2e090a3b,0x3009323735093033\n"
".quad 0x6e722e747663090a,0x3233732e3436662e,0x3932316466250920,0x0a3b33387225202c\n"
".quad 0x3436662e64646109,0x3033316466250920,0x2c3337646625202c,0x3b38323164662520\n"
".quad 0x36662e766f6d090a,0x3534646625092034,0x6566336430202c35,0x6665663234653236\n"
".quad 0x2f093b3030303361,0x313339362e30202f,0x2e6c756d090a3734,0x6466250920343666\n"
".quad 0x646625202c323331,0x646625202c393231,0x7573090a3b353534,0x2509203436662e62\n"
".quad 0x25202c3635346466,0x25202c3232316466,0x090a3b3832316466,0x203436662e646461\n"
".quad 0x2c37353464662509,0x2c34353464662520,0x3b36353464662520,0x36662e627573090a\n"
".quad 0x3534646625092034,0x3337646625202c38,0x303331646625202c,0x662e646461090a3b\n"
".quad 0x3464662509203436,0x31646625202c3935,0x34646625202c3832,0x646461090a3b3835\n"
".quad 0x662509203436662e,0x6625202c30363464,0x6625202c37353464,0x61090a3b39353464\n"
".quad 0x09203436662e6464,0x202c383331646625,0x25202c3339646625,0x090a3b3036346466\n"
".quad 0x203436662e646461,0x2c39333164662509,0x2c30333164662520,0x3b38333164662520\n"
".quad 0x36662e646461090a,0x3431646625092034,0x3331646625202c30,0x3331646625202c32\n"
".quad 0x2e627573090a3b39,0x6466250920343666,0x646625202c313634,0x646625202c303331\n"
".quad 0x6461090a3b393331,0x2509203436662e64,0x25202c3236346466,0x25202c3833316466\n"
".quad 0x090a3b3136346466,0x203436662e627573,0x2c33363464662509,0x2c32333164662520\n"
".quad 0x3b30343164662520,0x36662e646461090a,0x3634646625092034,0x3331646625202c34\n"
".quad 0x3634646625202c39,0x2e646461090a3b33,0x6466250920343666,0x646625202c353634\n"
".quad 0x646625202c323634,0x6f6d090a3b343634,0x2509203436662e76,0x30202c3636346466\n"
".quad 0x3665643335643364,0x6563653837326661,0x2e32202f2f093b36,0x312d653335333238\n"
".quad 0x722e64616d090a33,0x2509203436662e6e,0x25202c3734316466,0x25202c3932316466\n"
".quad 0x25202c3636346466,0x090a3b3536346466,0x203436662e646461,0x2c38343164662509\n"
".quad 0x2c30343164662520,0x3b37343164662520,0x3309636f6c2e090a,0x0a30093337350930\n"
".quad 0x3436662e62757309,0x3736346466250920,0x303431646625202c,0x383431646625202c\n"
".quad 0x662e646461090a3b,0x3164662509203436,0x31646625202c3035,0x34646625202c3734\n"
".quad 0x6f6c2e090a3b3736,0x3432310930330963,0x766f6d090a300939,0x662509203436662e\n"
".quad 0x6430202c38363464,0x3030303030326633,0x3030303030303030,0x302e30202f2f093b\n"
".quad 0x0a37303232313030,0x3436662e6c756d09,0x3936346466250920,0x333733646625202c\n"
".quad 0x383634646625202c,0x662e766f6d090a3b,0x3464662509203436,0x66376430202c3037\n"
".quad 0x3465623161326430,0x093b303966383430,0x30332b6531202f2f,0x2e70746573090a34\n"
".quad 0x09203436662e7467,0x6625202c37397025,0x6625202c38373364,0x73090a3b30373464\n"
".quad 0x203436662e706c65,0x2c31373464662509,0x2c39363464662520,0x2c33373364662520\n"
".quad 0x090a3b3739702520,0x203436662e6c756d,0x2c32373464662509,0x2c31373464662520\n"
".quad 0x3b38343164662520,0x36662e67656e090a,0x3734646625092034,0x3734646625202c33\n"
".quad 0x2e64616d090a3b32,0x09203436662e6e72,0x202c343734646625,0x202c383431646625\n"
".quad 0x202c313734646625,0x0a3b333734646625,0x2e6e722e64616d09,0x6466250920343666\n"
".quad 0x646625202c353734,0x646625202c303531,0x646625202c313734,0x6461090a3b343734\n"
".quad 0x2509203436662e64,0x25202c3637346466,0x25202c3237346466,0x090a3b3537346466\n"
".quad 0x203436662e627573,0x2c37373464662509,0x2c32373464662520,0x3b36373464662520\n"
".quad 0x36662e646461090a,0x3631646625092034,0x3734646625202c31,0x3734646625202c35\n"
".quad 0x636f6c2e090a3b37,0x0931333709303309,0x622e766f6d090a30,0x3272257b09203436\n"
".quad 0x7d383972252c3431,0x363734646625202c,0x732e766f6d090a3b,0x3132722509203233\n"
".quad 0x343630312d202c35,0x0a3b393537353738,0x2e746c2e74657309,0x203233732e323375\n"
".quad 0x202c363132722509,0x7225202c38397225,0x656e090a3b353132,0x2509203233732e67\n"
".quad 0x7225202c37313272,0x6f6d090a3b363132,0x2509203233752e76,0x3031202c38313272\n"
".quad 0x3039343533353238,0x6c2e746573090a3b,0x33752e3233752e65,0x3931327225092032\n"
".quad 0x202c38397225202c,0x090a3b3831327225,0x203233732e67656e,0x202c303232722509\n"
".quad 0x090a3b3931327225,0x09203233622e726f,0x25202c3132327225,0x7225202c37313272\n"
".quad 0x6f6d090a3b303232,0x2509203233752e76,0x3b30202c32323272,0x652e70746573090a\n"
".quad 0x2509203233732e71,0x327225202c383970,0x32327225202c3132,0x39702540090a3b32\n"
".quad 0x2409206172622038,0x3034315f315f744c,0x2f2f200a3b343330,0x50203e706f6f6c3c\n"
".quad 0x6c20666f20747261,0x79646f6220706f6f,0x343220656e696c20,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3133315f315f744c,0x6f6c2e090a343730,0x3330370930330963\n"
".quad 0x2e766f6d090a3009,0x6466250920343666,0x336430202c383734,0x3637343531376666\n"
".quad 0x3b65663238623235,0x34342e31202f2f09,0x2e6c756d090a3732,0x6466250920343666\n"
".quad 0x646625202c393734,0x646625202c363734,0x6c2e090a3b383734,0x303709303309636f\n"
".quad 0x747663090a300935,0x3436662e696e722e,0x662509203436662e,0x6625202c30383464\n"
".quad 0x6d090a3b39373464,0x09203436662e766f,0x202c313834646625,0x6532366566626430\n"
".quad 0x3933616665663234,0x2d202f2f093b6665,0x3734313339362e30,0x6e722e64616d090a\n"
".quad 0x662509203436662e,0x6625202c32383464,0x6625202c30383464,0x6625202c31383464\n"
".quad 0x2e090a3b36373464,0x3709303309636f6c,0x6f6d090a30093630,0x2509203436662e76\n"
".quad 0x30202c3338346466,0x3963626137636264,0x3330383933623365,0x322d202f2f093b66\n"
".quad 0x2d6535303931332e,0x2e64616d090a3731,0x09203436662e6e72,0x202c383631646625\n"
".quad 0x202c303834646625,0x202c333834646625,0x0a3b323834646625,0x303309636f6c2e09\n"
".quad 0x090a300930323309,0x203436662e766f6d,0x2c34383464662509,0x6631326533643020\n"
".quad 0x3835666363663730,0x202f2f093b646162,0x6533343838302e32,0x766f6d090a39302d\n"
".quad 0x662509203436662e,0x6430202c35383464,0x3138646661356533,0x6661623363366164\n"
".quad 0x352e32202f2f093b,0x38302d6536363331,0x6e722e64616d090a,0x662509203436662e\n"
".quad 0x6625202c36383464,0x6625202c34383464,0x6625202c38363164,0x6d090a3b35383464\n"
".quad 0x09203436662e766f,0x202c373834646625,0x6537323965336430,0x3038663036663535\n"
".quad 0x32202f2f093b3665,0x2d6535373535372e,0x2e64616d090a3730,0x09203436662e6e72\n"
".quad 0x202c383834646625,0x202c363834646625,0x202c383631646625,0x0a3b373834646625\n"
".quad 0x3436662e766f6d09,0x3938346466250920,0x376365336430202c,0x3230663861646431\n"
".quad 0x2f2f093b36363664,0x32373535372e3220,0x616d090a36302d65,0x3436662e6e722e64\n"
".quad 0x3039346466250920,0x383834646625202c,0x383631646625202c,0x393834646625202c\n"
".quad 0x662e766f6d090a3b,0x3464662509203436,0x65336430202c3139,0x3331306131306166\n"
".quad 0x093b306534393862,0x3038342e32202f2f,0x090a35302d653631,0x662e6e722e64616d\n"
".quad 0x3464662509203436,0x34646625202c3239,0x31646625202c3039,0x34646625202c3836\n"
".quad 0x766f6d090a3b3139,0x662509203436662e,0x6430202c33393464,0x3061313061326633\n"
".quad 0x3838376661336431,0x302e30202f2f093b,0x3331343839313030,0x6e722e64616d090a\n"
".quad 0x662509203436662e,0x6625202c34393464,0x6625202c32393464,0x6625202c38363164\n"
".quad 0x6d090a3b33393464,0x09203436662e766f,0x202c353934646625,0x3163363566336430\n"
".quad 0x3161336336316336,0x30202f2f093b6365,0x383838333130302e,0x722e64616d090a39\n"
".quad 0x2509203436662e6e,0x25202c3639346466,0x25202c3439346466,0x25202c3836316466\n"
".quad 0x090a3b3539346466,0x09303309636f6c2e,0x6d090a3009313233,0x09203436662e766f\n"
".quad 0x202c373934646625,0x3131313866336430,0x3139303131313131,0x30202f2f093b3136\n"
".quad 0x333333333830302e,0x722e64616d090a33,0x2509203436662e6e,0x25202c3839346466\n"
".quad 0x25202c3639346466,0x25202c3836316466,0x090a3b3739346466,0x09303309636f6c2e\n"
".quad 0x6d090a3009323233,0x09203436662e766f,0x202c393934646625,0x3535356166336430\n"
".quad 0x3435353535353535,0x30202f2f093b3163,0x373636363134302e,0x6e722e64616d090a\n"
".quad 0x662509203436662e,0x6625202c30303564,0x6625202c38393464,0x6625202c38363164\n"
".quad 0x2e090a3b39393464,0x3309303309636f6c,0x6f6d090a30093332,0x2509203436662e76\n"
".quad 0x30202c3130356466,0x3535353563663364,0x3635353535353535,0x2e30202f2f093b66\n"
".quad 0x090a373636363631,0x662e6e722e64616d,0x3564662509203436,0x35646625202c3230\n"
".quad 0x31646625202c3030,0x35646625202c3836,0x6f6c2e090a3b3130,0x3432330930330963\n"
".quad 0x2e766f6d090a3009,0x6466250920343666,0x336430202c333035,0x3030303030306566\n"
".quad 0x3b30303030303030,0x0a352e30202f2f09,0x2e6e722e64616d09,0x6466250920343666\n"
".quad 0x646625202c343035,0x646625202c323035,0x646625202c383631,0x6c2e090a3b333035\n"
".quad 0x323309303309636f,0x6c756d090a300936,0x662509203436662e,0x6625202c35303564\n"
".quad 0x6625202c38363164,0x6d090a3b34303564,0x36662e6e722e6461,0x3931646625092034\n"
".quad 0x3035646625202c31,0x3631646625202c35,0x3631646625202c38,0x636f6c2e090a3b38\n"
".quad 0x0938303709303309,0x722e747663090a30,0x662e3233732e697a,0x3031722509203436\n"
".quad 0x3834646625202c37,0x2e6c6873090a3b30,0x3272250920323362,0x30317225202c3332\n"
".quad 0x090a3b3032202c37,0x203233732e646461,0x202c393031722509,0x31202c3332327225\n"
".quad 0x3432333936323730,0x2e646461090a3b38,0x3272250920323375,0x30317225202c3432\n"
".quad 0x3b30323031202c37,0x33752e766f6d090a,0x3532327225092032,0x0a3b30343032202c\n"
".quad 0x74672e7074657309,0x702509203233752e,0x32327225202c3939,0x3532327225202c34\n"
".quad 0x3939702540090a3b,0x4c24092061726220,0x383034315f315f74,0x3c2f2f200a3b3230\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x2c343220656e696c\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x303133315f315f74,0x636f6c2e090a3437\n"
".quad 0x0931313709303309,0x732e766f6d090a30,0x3232722509203233,0x6d090a3b30202c36\n"
".quad 0x09203436622e766f,0x202c323931646625,0x252c36323272257b,0x090a3b7d39303172\n"
".quad 0x662e6e722e64616d,0x3164662509203436,0x31646625202c3836,0x31646625202c3139\n"
".quad 0x31646625202c3239,0x617262090a3b3239,0x4c240920696e752e,0x353034315f315f74\n"
".quad 0x5f744c240a3b3634,0x3230383034315f31,0x6f6c3c2f2f200a3a,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x68202c343220656e,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x3437303133315f31,0x33752e766f6d090a,0x3732327225092032\n"
".quad 0x6573090a3b30202c,0x33732e65672e7074,0x3030317025092032,0x2c3730317225202c\n"
".quad 0x0a3b373232722520,0x2030303170254009,0x744c240920617262,0x31333134315f315f\n"
".quad 0x6c3c2f2f200a3b34,0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070\n"
".quad 0x202c343220656e69,0x62616c2064616568,0x744c242064656c65,0x37303133315f315f\n"
".quad 0x09636f6c2e090a34,0x3009353137093033,0x33732e646461090a,0x3930317225092032\n"
".quad 0x2c3930317225202c,0x3836313736373520,0x2e766f6d090a3b30,0x3172250920323373\n"
".quad 0x36313031202c3431,0x0a3b343431303730,0x696e752e61726209,0x5f315f744c240920\n"
".quad 0x0a3b383530313431,0x34315f315f744c24,0x2f200a3a34313331,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3220656e696c2079,0x2064616568202c34\n"
".quad 0x2064656c6562616c,0x33315f315f744c24,0x6f6d090a34373031,0x2509203233732e76\n"
".quad 0x3031202c34313172,0x3432383134373337,0x5f315f744c240a3b,0x0a3a383530313431\n"
".quad 0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f\n"
".quad 0x616568202c343220,0x656c6562616c2064,0x5f315f744c242064,0x090a343730313331\n"
".quad 0x09303309636f6c2e,0x6d090a3009323237,0x09203233732e766f,0x30202c3832327225\n"
".quad 0x622e766f6d090a3b,0x3164662509203436,0x3272257b202c3339,0x34313172252c3832\n"
".quad 0x2e64616d090a3b7d,0x09203436662e6e72,0x202c363035646625,0x202c313931646625\n"
".quad 0x202c333931646625,0x0a3b333931646625,0x3233732e62757309,0x2c39323272250920\n"
".quad 0x202c393031722520,0x3b36373538343031,0x33732e766f6d090a,0x3033327225092032\n"
".quad 0x6f6d090a3b30202c,0x2509203436622e76,0x7b202c3730356466,0x72252c3033327225\n"
".quad 0x6d090a3b7d393232,0x09203436662e6c75,0x202c383631646625,0x202c363035646625\n"
".quad 0x0a3b373035646625,0x34315f315f744c24,0x2f200a3a36343530,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3220656e696c2079,0x2064616568202c34\n"
".quad 0x2064656c6562616c,0x33315f315f744c24,0x6c2e090a34373031,0x333709303309636f\n"
".quad 0x766f6d090a300934,0x662509203436662e,0x6625202c36393164,0x62090a3b38363164\n"
".quad 0x0920696e752e6172,0x69646e6557444c24,0x37315f746e69725f,0x744c240a3b365f38\n"
".quad 0x33303034315f315f,0x6c3c2f2f200a3a34,0x726150203e706f6f,0x6f6f6c20666f2074\n"
".quad 0x6c2079646f622070,0x202c343220656e69,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x37303133315f315f,0x09636f6c2e090a34,0x0a30093639093033,0x3436662e73626109\n"
".quad 0x3830356466250920,0x363734646625202c,0x662e766f6d090a3b,0x3564662509203436\n"
".quad 0x66376430202c3930,0x3030303030303066,0x093b303030303030,0x090a666e69202f2f\n"
".quad 0x2e656c2e70746573,0x3170250920343666,0x35646625202c3130,0x35646625202c3830\n"
".quad 0x6c6573090a3b3930,0x2509203233732e70,0x2c30202c31333272,0x30317025202c3120\n"
".quad 0x636f6c2e090a3b31,0x0930343709303309,0x662e646461090a30,0x3564662509203436\n"
".quad 0x34646625202c3031,0x34646625202c3637,0x766f6d090a3b3637,0x662509203436662e\n"
".quad 0x6430202c31313564,0x3030303030666637,0x3030303030303030,0x666e69202f2f093b\n"
".quad 0x36662e766f6d090a,0x3135646625092034,0x3030306430202c32,0x3030303030303030\n"
".quad 0x2f093b3030303030,0x766f6d090a30202f,0x722509203233732e,0x0a3b30202c323332\n"
".quad 0x65672e7074657309,0x702509203233732e,0x397225202c323031,0x3233327225202c38\n"
".quad 0x2e706c6573090a3b,0x6466250920343666,0x646625202c333135,0x646625202c313135\n"
".quad 0x317025202c323135,0x766f6d090a3b3230,0x722509203233732e,0x0a3b30202c333332\n"
".quad 0x656e2e7074657309,0x702509203233732e,0x327225202c333031,0x33327225202c3133\n"
".quad 0x706c6573090a3b33,0x662509203436662e,0x6625202c36393164,0x6625202c30313564\n"
".quad 0x7025202c33313564,0x444c240a3b333031,0x69725f69646e6557,0x365f3837315f746e\n"
".quad 0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x68202c343220656e,0x6562616c20646165,0x5f744c242064656c,0x3437303133315f31\n"
".quad 0x3309636f6c2e090a,0x3009323532310930,0x36662e766f6d090a,0x3135646625092034\n"
".quad 0x3931646625202c34,0x2e766f6d090a3b36,0x6466250920343666,0x646625202c343032\n"
".quad 0x6c2e090a3b343135,0x323109303309636f,0x6261090a30093435,0x2509203436662e73\n"
".quad 0x25202c3531356466,0x090a3b3431356466,0x203436662e766f6d,0x2c36313564662509\n"
".quad 0x3030666637643020,0x3030303030303030,0x202f2f093b303030,0x746573090a666e69\n"
".quad 0x3436662e71652e70,0x2c34303170250920,0x2c35313564662520,0x3b36313564662520\n"
".quad 0x343031702540090a,0x4c24092061726220,0x353134315f315f74,0x3c2f2f200a3b3037\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x2c343220656e696c\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x303133315f315f74,0x636f6c2e090a3437\n"
".quad 0x3835323109303309,0x2e64616d090a3009,0x09203436662e6e72,0x202c343032646625\n"
".quad 0x202c343135646625,0x202c313631646625,0x0a3b343135646625,0x34315f315f744c24\n"
".quad 0x2f200a3a30373531,0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c\n"
".quad 0x3220656e696c2079,0x2064616568202c34,0x2064656c6562616c,0x33315f315f744c24\n"
".quad 0x6c2e090a34373031,0x333109303309636f,0x6f6d090a30093630,0x2509203436662e76\n"
".quad 0x6625202c36336466,0x6d090a3b34303264,0x09203436662e766f,0x202c373135646625\n"
".quad 0x3030306566336430,0x3030303030303030,0x30202f2f093b3030,0x2e6c756d090a352e\n"
".quad 0x6466250920343666,0x646625202c383135,0x646625202c333733,0x7663090a3b373135\n"
".quad 0x36662e697a722e74,0x2509203436662e34,0x25202c3239336466,0x090a3b3831356466\n"
".quad 0x3233732e706c6573,0x2c34333272250920,0x25202c30202c3120,0x6461090a3b333970\n"
".quad 0x2509203436662e64,0x25202c3931356466,0x25202c3239336466,0x090a3b3239336466\n"
".quad 0x203436662e627573,0x2c30323564662509,0x2c33373364662520,0x3b39313564662520\n"
".quad 0x36662e736261090a,0x3235646625092034,0x3235646625202c31,0x2e766f6d090a3b30\n"
".quad 0x6466250920343666,0x336430202c323235,0x3030303030306666,0x3b30303030303030\n"
".quad 0x73090a31202f2f09,0x33752e71652e7465,0x2509203436662e32,0x6625202c35333272\n"
".quad 0x6625202c31323564,0x6e090a3b32323564,0x09203233732e6765,0x25202c3633327225\n"
".quad 0x61090a3b35333272,0x09203233622e646e,0x25202c3733327225,0x7225202c34333272\n"
".quad 0x6f6d090a3b363332,0x2509203233752e76,0x3b30202c38333272,0x652e70746573090a\n"
".quad 0x2509203233732e71,0x7225202c35303170,0x327225202c373332,0x702540090a3b3833\n"
".quad 0x2061726220353031,0x315f315f744c2409,0x200a3b3238303234,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x64616568202c3432\n"
".quad 0x64656c6562616c20,0x315f315f744c2420,0x2e090a3437303133,0x3109303309636f6c\n"
".quad 0x6d090a3009383033,0x09203436622e766f,0x25202c3732647225,0x78090a3b36336466\n"
".quad 0x09203436622e726f,0x25202c3832647225,0x392d202c37326472,0x3330323733333232\n"
".quad 0x3835373734353836,0x766f6d090a3b3830,0x662509203436622e,0x647225202c363364\n"
".quad 0x5f744c240a3b3832,0x3238303234315f31,0x6f6c3c2f2f200a3a,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x68202c343220656e,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x3437303133315f31,0x3309636f6c2e090a,0x3009303133310930\n"
".quad 0x36662e766f6d090a,0x3332646625092034,0x3b3633646625202c,0x646e6557444c240a\n"
".quad 0x616e73695f5f5f69,0x3a355f3837315f6e,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x6568202c34322065,0x6c6562616c206461\n"
".quad 0x315f744c24206465,0x0a3437303133315f,0x383109636f6c2e09,0x6d090a3009313609\n"
".quad 0x09203436662e6c75,0x25202c3631646625,0x6625202c33326466,0x744c240a3b363164\n"
".quad 0x37333333315f315f,0x6c3c2f2f200a3a38,0x726150203e706f6f,0x6f6f6c20666f2074\n"
".quad 0x6c2079646f622070,0x202c343220656e69,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x37303133315f315f,0x752e766f6d090a34,0x3332722509203233,0x73090a3b30202c39\n"
".quad 0x732e656c2e707465,0x3031702509203233,0x3338317225202c36,0x3b3933327225202c\n"
".quad 0x363031702540090a,0x4c24092061726220,0x353234315f315f74,0x3c2f2f200a3b3439\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x2c343220656e696c\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x303133315f315f74,0x636f6c2e090a3437\n"
".quad 0x3009333609383109,0x6e722e747663090a,0x3233732e3436662e,0x3332356466250920\n"
".quad 0x3b3338317225202c,0x36662e766f6d090a,0x3235646625092034,0x6666336430202c34\n"
".quad 0x3030303030303030,0x2f093b3030303030,0x627573090a31202f,0x662509203436662e\n"
".quad 0x6625202c35323564,0x6625202c34323564,0x766f6d090a3b3964,0x662509203436662e\n"
".quad 0x6430202c36323564,0x3030303030303030,0x3030303030303030,0x090a30202f2f093b\n"
".quad 0x752e71652e746573,0x09203436662e3233,0x25202c3034327225,0x25202c3332356466\n"
".quad 0x090a3b3632356466,0x203233732e67656e,0x202c313432722509,0x090a3b3034327225\n"
".quad 0x203436662e766f6d,0x2c37323564662509,0x3030666633643020,0x3030303030303030\n"
".quad 0x202f2f093b303030,0x652e746573090a31,0x36662e3233752e71,0x3234327225092034\n"
".quad 0x353235646625202c,0x373235646625202c,0x732e67656e090a3b,0x3432722509203233\n"
".quad 0x3234327225202c33,0x33622e726f090a3b,0x3434327225092032,0x2c3134327225202c\n"
".quad 0x0a3b333432722520,0x3233752e766f6d09,0x2c35343272250920,0x746573090a3b3020\n"
".quad 0x3233732e71652e70,0x2c37303170250920,0x202c343432722520,0x090a3b3534327225\n"
".quad 0x6220373031702540,0x5f744c2409206172,0x3630313334315f31,0x6f6c3c2f2f200a3b\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x68202c343220656e\n"
".quad 0x6562616c20646165,0x5f744c242064656c,0x3437303133315f31,0x3309636f6c2e090a\n"
".quad 0x3009393632310930,0x36662e766f6d090a,0x3132646625092034,0x6666336430202c38\n"
".quad 0x3030303030303030,0x2f093b3030303030,0x617262090a31202f,0x4c240920696e752e\n"
".quad 0x5f5f69646e655744,0x315f6e616e73695f,0x4c240a3b315f3837,0x313334315f315f74\n"
".quad 0x3c2f2f200a3a3630,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x2c343220656e696c,0x616c206461656820,0x4c242064656c6562,0x303133315f315f74\n"
".quad 0x636f6c2e090a3437,0x3009363909303309,0x36662e736261090a,0x3235646625092034\n"
".quad 0x3235646625202c38,0x2e766f6d090a3b35,0x6466250920343666,0x376430202c393235\n"
".quad 0x3030303030306666,0x3b30303030303030,0x0a666e69202f2f09,0x656c2e7074657309\n"
".quad 0x702509203436662e,0x646625202c383031,0x646625202c383235,0x6573090a3b393235\n"
".quad 0x09203233732e706c,0x30202c3634327225,0x317025202c31202c,0x6f6c2e090a3b3830\n"
".quad 0x3732310930330963,0x766f6d090a300931,0x722509203233752e,0x0a3b30202c373432\n"
".quad 0x656e2e7074657309,0x702509203233732e,0x327225202c393031,0x34327225202c3634\n"
".quad 0x31702540090a3b37,0x0920617262203930,0x34355f315f744c24,0x2f2f200a3b303335\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x343220656e696c20\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3133315f315f744c,0x736261090a343730\n"
".quad 0x662509203436662e,0x6625202c30333564,0x6d090a3b33323564,0x09203436662e766f\n"
".quad 0x202c313335646625,0x3030306666376430,0x3030303030303030,0x69202f2f093b3030\n"
".quad 0x70746573090a666e,0x203436662e656c2e,0x202c303131702509,0x202c303335646625\n"
".quad 0x0a3b313335646625,0x2030313170254009,0x744c240920617262,0x36383734355f315f\n"
".quad 0x5f315f744c240a3b,0x200a3a3033353435,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x64616568202c3432,0x64656c6562616c20\n"
".quad 0x315f315f744c2420,0x2e090a3437303133,0x3109303309636f6c,0x61090a3009323732\n"
".quad 0x09203436662e6464,0x202c383132646625,0x202c333235646625,0x0a3b353235646625\n"
".quad 0x696e752e61726209,0x6e6557444c240920,0x6e73695f5f5f6964,0x315f3837315f6e61\n"
".quad 0x5f315f744c240a3b,0x200a3a3638373435,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x64616568202c3432,0x64656c6562616c20\n"
".quad 0x315f315f744c2420,0x2e090a3437303133,0x3109303309636f6c,0x6d090a3009313732\n"
".quad 0x09203436662e766f,0x202c323335646625,0x3030306666376430,0x3030303030303030\n"
".quad 0x69202f2f093b3030,0x70746573090a666e,0x203436662e71652e,0x202c313131702509\n"
".quad 0x202c353235646625,0x0a3b323335646625,0x3131317025214009,0x4c24092061726220\n"
".quad 0x363334315f315f74,0x3c2f2f200a3b3831,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x2c343220656e696c,0x616c206461656820,0x4c242064656c6562\n"
".quad 0x303133315f315f74,0x636f6c2e090a3437,0x3537323109303309,0x2e766f6d090a3009\n"
".quad 0x6466250920343666,0x376430202c333335,0x3030303030306666,0x3b30303030303030\n"
".quad 0x0a666e69202f2f09,0x3436662e766f6d09,0x3433356466250920,0x303030306430202c\n"
".quad 0x3030303030303030,0x2f2f093b30303030,0x2e766f6d090a3020,0x72257b0920343662\n"
".quad 0x343272252c383432,0x35646625202c7d39,0x766f6d090a3b3332,0x722509203233732e\n"
".quad 0x0a3b30202c303532,0x65672e7074657309,0x702509203233732e,0x327225202c323131\n"
".quad 0x35327225202c3934,0x706c6573090a3b30,0x662509203436662e,0x6625202c38313264\n"
".quad 0x6625202c33333564,0x7025202c34333564,0x7262090a3b323131,0x240920696e752e61\n"
".quad 0x5f69646e6557444c,0x5f6e616e73695f5f,0x240a3b315f383731,0x3334315f315f744c\n"
".quad 0x2f2f200a3a383136,0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f\n"
".quad 0x343220656e696c20,0x6c2064616568202c,0x242064656c656261,0x3133315f315f744c\n"
".quad 0x6f6c2e090a343730,0x3732310930330963,0x766f6d090a300937,0x662509203436662e\n"
".quad 0x6430202c35333564,0x3030303030666637,0x3030303030303030,0x666e69202f2f093b\n"
".quad 0x652e70746573090a,0x2509203436662e71,0x6625202c33313170,0x6625202c30333564\n"
".quad 0x40090a3b35333564,0x6220333131702521,0x5f744c2409206172,0x3033313434315f31\n"
".quad 0x6f6c3c2f2f200a3b,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x68202c343220656e,0x6562616c20646165,0x5f744c242064656c,0x3437303133315f31\n"
".quad 0x36662e766f6d090a,0x3335646625092034,0x6666626430202c36,0x3030303030303030\n"
".quad 0x2f093b3030303030,0x6573090a312d202f,0x36662e71652e7074,0x3431317025092034\n"
".quad 0x353235646625202c,0x363335646625202c,0x3170252140090a3b,0x0920617262203431\n"
".quad 0x34315f315f744c24,0x2f200a3b32343634,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3220656e696c2079,0x2064616568202c34,0x2064656c6562616c\n"
".quad 0x33315f315f744c24,0x6c2e090a34373031,0x323109303309636f,0x6f6d090a30093937\n"
".quad 0x2509203436662e76,0x30202c3831326466,0x3030303066663364,0x3030303030303030\n"
".quad 0x0a31202f2f093b30,0x696e752e61726209,0x6e6557444c240920,0x6e73695f5f5f6964\n"
".quad 0x315f3837315f6e61,0x5f315f744c240a3b,0x0a3a323436343431,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x616568202c343220\n"
".quad 0x656c6562616c2064,0x5f315f744c242064,0x090a343730313331,0x09303309636f6c2e\n"
".quad 0x090a300931383231,0x203436662e766f6d,0x2c37333564662509,0x3030666637643020\n"
".quad 0x3030303030303030,0x202f2f093b303030,0x766f6d090a666e69,0x662509203436662e\n"
".quad 0x6430202c38333564,0x3030303030303030,0x3030303030303030,0x090a30202f2f093b\n"
".quad 0x203436662e766f6d,0x2c39333564662509,0x3030666633643020,0x3030303030303030\n"
".quad 0x202f2f093b303030,0x2e70746573090a31,0x09203436662e7467,0x25202c3531317025\n"
".quad 0x25202c3832356466,0x090a3b3933356466,0x3436662e706c6573,0x3034356466250920\n"
".quad 0x373335646625202c,0x383335646625202c,0x3b3531317025202c,0x36662e766f6d090a\n"
".quad 0x3633646625092034,0x303435646625202c,0x662e766f6d090a3b,0x3564662509203436\n"
".quad 0x30306430202c3134,0x3030303030303030,0x093b303030303030,0x6573090a30202f2f\n"
".quad 0x36662e746c2e7074,0x3631317025092034,0x333235646625202c,0x313435646625202c\n"
".quad 0x3170252140090a3b,0x0920617262203631,0x34315f315f744c24,0x2f200a3b34353135\n"
".quad 0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c,0x3220656e696c2079\n"
".quad 0x2064616568202c34,0x2064656c6562616c,0x33315f315f744c24,0x6c2e090a34373031\n"
".quad 0x323109303309636f,0x6372090a30093338,0x3436662e6e722e70,0x2c36336466250920\n"
".quad 0x3b30343564662520,0x315f315f744c240a,0x200a3a3435313534,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x64616568202c3432\n"
".quad 0x64656c6562616c20,0x315f315f744c2420,0x2e090a3437303133,0x3109303309636f6c\n"
".quad 0x6d090a3009353832,0x09203436662e766f,0x202c383132646625,0x090a3b3633646625\n"
".quad 0x20696e752e617262,0x646e6557444c2409,0x616e73695f5f5f69,0x3b315f3837315f6e\n"
".quad 0x315f315f744c240a,0x200a3a3033313434,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x64616568202c3432,0x64656c6562616c20\n"
".quad 0x315f315f744c2420,0x6d090a3437303133,0x09203436662e766f,0x202c323435646625\n"
".quad 0x3030303030306430,0x3030303030303030,0x30202f2f093b3030,0x652e70746573090a\n"
".quad 0x2509203436662e71,0x6625202c37313170,0x6625202c35323564,0x40090a3b32343564\n"
".quad 0x6220373131702521,0x5f744c2409206172,0x3636363534315f31,0x6f6c3c2f2f200a3b\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x68202c343220656e\n"
".quad 0x6562616c20646165,0x5f744c242064656c,0x3437303133315f31,0x3309636f6c2e090a\n"
".quad 0x3009393832310930,0x36662e766f6d090a,0x3435646625092034,0x6566336430202c33\n"
".quad 0x3030303030303030,0x2f093b3030303030,0x6d090a352e30202f,0x09203436662e6c75\n"
".quad 0x202c343435646625,0x202c333235646625,0x0a3b333435646625,0x697a722e74766309\n"
".quad 0x3436662e3436662e,0x3534356466250920,0x343435646625202c,0x662e766f6d090a3b\n"
".quad 0x3564662509203436,0x30306430202c3634,0x3030303030303030,0x093b303030303030\n"
".quad 0x6461090a30202f2f,0x2509203436662e64,0x25202c3734356466,0x25202c3534356466\n"
".quad 0x090a3b3534356466,0x203436662e627573,0x2c38343564662509,0x2c33323564662520\n"
".quad 0x3b37343564662520,0x36662e736261090a,0x3435646625092034,0x3435646625202c39\n"
".quad 0x2e766f6d090a3b38,0x6466250920343666,0x336430202c303535,0x3030303030306666\n"
".quad 0x3b30303030303030,0x73090a31202f2f09,0x662e71652e707465,0x3131702509203436\n"
".quad 0x3435646625202c38,0x3535646625202c39,0x706c6573090a3b30,0x662509203436662e\n"
".quad 0x646625202c363364,0x646625202c353235,0x317025202c363435,0x766f6d090a3b3831\n"
".quad 0x662509203436662e,0x6430202c31353564,0x3030303030303030,0x3030303030303030\n"
".quad 0x090a30202f2f093b,0x2e746c2e70746573,0x3170250920343666,0x35646625202c3931\n"
".quad 0x35646625202c3332,0x252140090a3b3135,0x6172622039313170,0x5f315f744c240920\n"
".quad 0x0a3b383731363431,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x616568202c343220,0x656c6562616c2064,0x5f315f744c242064\n"
".quad 0x090a343730313331,0x09303309636f6c2e,0x090a300931393231,0x662e6e722e706372\n"
".quad 0x3364662509203436,0x3633646625202c36,0x5f315f744c240a3b,0x0a3a383731363431\n"
".quad 0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f\n"
".quad 0x616568202c343220,0x656c6562616c2064,0x5f315f744c242064,0x090a343730313331\n"
".quad 0x09303309636f6c2e,0x090a300933393231,0x203436662e766f6d,0x2c38313264662509\n"
".quad 0x0a3b363364662520,0x696e752e61726209,0x6e6557444c240920,0x6e73695f5f5f6964\n"
".quad 0x315f3837315f6e61,0x5f315f744c240a3b,0x0a3a363636353431,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x616568202c343220\n"
".quad 0x656c6562616c2064,0x5f315f744c242064,0x090a343730313331,0x203436662e766f6d\n"
".quad 0x2c32353564662509,0x3030666666643020,0x3030303030303030,0x202f2f093b303030\n"
".quad 0x6573090a666e692d,0x36662e71652e7074,0x3032317025092034,0x353235646625202c\n"
".quad 0x323535646625202c,0x3170252140090a3b,0x0920617262203032,0x34315f315f744c24\n"
".quad 0x2f200a3b30393636,0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c\n"
".quad 0x3220656e696c2079,0x2064616568202c34,0x2064656c6562616c,0x33315f315f744c24\n"
".quad 0x6f6d090a34373031,0x2509203436662e76,0x30202c3335356466,0x3030303030303064\n"
".quad 0x3030303030303030,0x0a30202f2f093b30,0x746c2e7074657309,0x702509203436662e\n"
".quad 0x646625202c313231,0x646625202c333235,0x2140090a3b333535,0x7262203132317025\n"
".quad 0x315f744c24092061,0x3b3835343734315f,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x6568202c34322065,0x6c6562616c206461\n"
".quad 0x315f744c24206465,0x0a3437303133315f,0x303309636f6c2e09,0x0a30093639323109\n"
".quad 0x2e6e722e70637209,0x6466250920343666,0x646625202c343535,0x656e090a3b353235\n"
".quad 0x2509203436662e67,0x25202c3535356466,0x090a3b3435356466,0x20696e752e617262\n"
".quad 0x315f315f744c2409,0x240a3b3230323734,0x3734315f315f744c,0x2f2f200a3a383534\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x343220656e696c20\n"
".quad 0x6c2064616568202c,0x242064656c656261,0x3133315f315f744c,0x766f6d090a343730\n"
".quad 0x662509203436662e,0x6430202c36353564,0x3030303030666662,0x3030303030303030\n"
".quad 0x0a312d202f2f093b,0x3436662e64646109,0x3535356466250920,0x202c39646625202c\n"
".quad 0x0a3b363535646625,0x34315f315f744c24,0x2f200a3a32303237,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3220656e696c2079,0x2064616568202c34\n"
".quad 0x2064656c6562616c,0x33315f315f744c24,0x6f6d090a34373031,0x2509203436662e76\n"
".quad 0x6625202c36336466,0x6d090a3b35353564,0x09203436662e766f,0x202c373535646625\n"
".quad 0x3030306566336430,0x3030303030303030,0x30202f2f093b3030,0x2e6c756d090a352e\n"
".quad 0x6466250920343666,0x646625202c383535,0x646625202c333235,0x7663090a3b373535\n"
".quad 0x36662e697a722e74,0x2509203436662e34,0x25202c3534356466,0x090a3b3835356466\n"
".quad 0x203436662e646461,0x2c39353564662509,0x2c35343564662520,0x3b35343564662520\n"
".quad 0x36662e627573090a,0x3635646625092034,0x3235646625202c30,0x3535646625202c33\n"
".quad 0x2e736261090a3b39,0x6466250920343666,0x646625202c313635,0x6f6d090a3b303635\n"
".quad 0x2509203436662e76,0x30202c3236356466,0x3030303066663364,0x3030303030303030\n"
".quad 0x0a31202f2f093b30,0x71652e7074657309,0x702509203436662e,0x646625202c323231\n"
".quad 0x646625202c313635,0x2140090a3b323635,0x7262203232317025,0x315f744c24092061\n"
".quad 0x3b3431373734315f,0x6f6f6c3c2f2f200a,0x2074726150203e70,0x20706f6f6c20666f\n"
".quad 0x6e696c2079646f62,0x6568202c34322065,0x6c6562616c206461,0x315f744c24206465\n"
".quad 0x0a3437303133315f,0x303309636f6c2e09,0x0a30093839323109,0x3436622e766f6d09\n"
".quad 0x2c39326472250920,0x0a3b363364662520,0x3436622e726f7809,0x2c30336472250920\n"
".quad 0x202c393264722520,0x323733333232392d,0x3737343538363330,0x6d090a3b38303835\n"
".quad 0x09203436622e766f,0x25202c3633646625,0x4c240a3b30336472,0x373734315f315f74\n"
".quad 0x3c2f2f200a3a3431,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x2c343220656e696c,0x616c206461656820,0x4c242064656c6562,0x303133315f315f74\n"
".quad 0x636f6c2e090a3437,0x3030333109303309,0x2e766f6d090a3009,0x6466250920343666\n"
".quad 0x646625202c383132,0x617262090a3b3633,0x4c240920696e752e,0x5f5f69646e655744\n"
".quad 0x315f6e616e73695f,0x4c240a3b315f3837,0x363634315f315f74,0x3c2f2f200a3a3039\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x2c343220656e696c\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x303133315f315f74,0x636f6c2e090a3437\n"
".quad 0x3230333109303309,0x2e766f6d090a3009,0x6466250920343666,0x306430202c333635\n"
".quad 0x3030303030303030,0x3b30303030303030,0x73090a30202f2f09,0x662e746c2e707465\n"
".quad 0x3231702509203436,0x3235646625202c33,0x3635646625202c35,0x70252140090a3b33\n"
".quad 0x2061726220333231,0x315f315f744c2409,0x200a3b3031323835,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x64616568202c3432\n"
".quad 0x64656c6562616c20,0x315f315f744c2420,0x73090a3437303133,0x2e75656e2e707465\n"
".quad 0x3170250920343666,0x35646625202c3432,0x35646625202c3332,0x252140090a3b3332\n"
".quad 0x6172622034323170,0x5f315f744c240920,0x0a3b303132383531,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x616568202c343220\n"
".quad 0x656c6562616c2064,0x5f315f744c242064,0x090a343730313331,0x09303309636f6c2e\n"
".quad 0x090a300933303331,0x203436662e766f6d,0x2c38313264662509,0x3038666666643020\n"
".quad 0x3030303030303030,0x202f2f093b303030,0x7262090a6e616e2d,0x240920696e752e61\n"
".quad 0x5f69646e6557444c,0x5f6e616e73695f5f,0x240a3b315f383731,0x3835315f315f744c\n"
".quad 0x5f4c240a3a303132,0x3437343530315f31,0x6f6c3c2f2f200a3a,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x68202c343220656e,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x3437303133315f31,0x3309636f6c2e090a,0x0a30093939350930\n"
".quad 0x3436622e766f6d09,0x31353272257b0920,0x202c7d393772252c,0x0a3b383235646625\n"
".quad 0x303309636f6c2e09,0x090a300930303609,0x203436622e766f6d,0x252c303872257b09\n"
".quad 0x25202c7d32353272,0x090a3b3832356466,0x09303309636f6c2e,0x73090a3009313036\n"
".quad 0x09203233732e7268,0x25202c3335327225,0x3b3032202c393772,0x33622e646e61090a\n"
".quad 0x3435327225092032,0x2c3335327225202c,0x090a3b3734303220,0x203233732e766f6d\n"
".quad 0x25202c3338722509,0x6d090a3b34353272,0x09203233752e766f,0x30202c3535327225\n"
".quad 0x2e70746573090a3b,0x09203233732e656e,0x25202c3532317025,0x7225202c34353272\n"
".quad 0x2540090a3b353532,0x6172622035323170,0x5f315f744c240920,0x0a3b363232383431\n"
".quad 0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f\n"
".quad 0x616568202c343220,0x656c6562616c2064,0x5f315f744c242064,0x090a343730313331\n"
".quad 0x09303309636f6c2e,0x6d090a3009353036,0x09203436662e766f,0x202c343635646625\n"
".quad 0x3030303533346430,0x3030303030303030,0x31202f2f093b3030,0x2b6534343130382e\n"
".quad 0x2e6c756d090a3631,0x6466250920343666,0x646625202c353635,0x646625202c383235\n"
".quad 0x6f6d090a3b343635,0x7b09203436622e76,0x72252c3635327225,0x646625202c7d3937\n"
".quad 0x6c2e090a3b353635,0x303609303309636f,0x766f6d090a300936,0x257b09203436622e\n"
".quad 0x353272252c303872,0x35646625202c7d37,0x6f6c2e090a3b3536,0x3830360930330963\n"
".quad 0x2e726873090a3009,0x3272250920323373,0x39377225202c3835,0x61090a3b3032202c\n"
".quad 0x09203233622e646e,0x25202c3935327225,0x3032202c38353272,0x627573090a3b3734\n"
".quad 0x722509203233732e,0x35327225202c3338,0x240a3b3435202c39,0x3834315f315f744c\n"
".quad 0x2f2f200a3a363232,0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f\n"
".quad 0x343220656e696c20,0x6c2064616568202c,0x242064656c656261,0x3133315f315f744c\n"
".quad 0x6f6c2e090a343730,0x3031360930330963,0x2e627573090a3009,0x3872250920323373\n"
".quad 0x2c33387225202c33,0x090a3b3332303120,0x09303309636f6c2e,0x61090a3009363136\n"
".quad 0x09203233622e646e,0x7225202c39387225,0x3431322d202c3937,0x3b33373035333436\n"
".quad 0x3233622e726f090a,0x202c303972250920,0x3031202c39387225,0x3834323339363237\n"
".quad 0x622e766f6d090a3b,0x3664662509203436,0x303872257b202c31,0x0a3b7d303972252c\n"
".quad 0x3233752e766f6d09,0x2c30363272250920,0x3732313337303120,0x6573090a3b323835\n"
".quad 0x33752e656c2e7074,0x3632317025092032,0x202c30397225202c,0x090a3b3036327225\n"
".quad 0x6220363231702540,0x5f744c2409206172,0x3833373834315f31,0x6f6c3c2f2f200a3b\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x68202c343220656e\n"
".quad 0x6562616c20646165,0x5f744c242064656c,0x3437303133315f31,0x3309636f6c2e090a\n"
".quad 0x0a30093831360930,0x3436622e766f6d09,0x31363272257b0920,0x2c7d32363272252c\n"
".quad 0x0a3b313664662520,0x3233732e62757309,0x2c33363272250920,0x202c323632722520\n"
".quad 0x3b36373538343031,0x36622e766f6d090a,0x363272257b092034,0x7d35363272252c34\n"
".quad 0x3b3136646625202c,0x36622e766f6d090a,0x3136646625092034,0x34363272257b202c\n"
".quad 0x3b7d33363272252c,0x3309636f6c2e090a,0x0a30093931360930,0x3233732e64646109\n"
".quad 0x202c333872250920,0x3b31202c33387225,0x315f315f744c240a,0x200a3a3833373834\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x64616568202c3432,0x64656c6562616c20,0x315f315f744c2420,0x2e090a3437303133\n"
".quad 0x3609303309636f6c,0x6f6d090a30093932,0x2509203436662e76,0x30202c3636356466\n"
".quad 0x3030303066666264,0x3030303030303030,0x312d202f2f093b30,0x36662e646461090a\n"
".quad 0x3336646625092034,0x2c3136646625202c,0x3b36363564662520,0x36662e766f6d090a\n"
".quad 0x3635646625092034,0x6666336430202c37,0x3030303030303030,0x2f093b3030303030\n"
".quad 0x646461090a31202f,0x662509203436662e,0x646625202c353664,0x35646625202c3136\n"
".quad 0x747663090a3b3736,0x2e3233662e6e722e,0x3466250920343666,0x3b3536646625202c\n"
".quad 0x6e722e706372090a,0x662509203233662e,0x0a3b346625202c38,0x3436662e74766309\n"
".quad 0x662509203233662e,0x386625202c363664,0x662e67656e090a3b,0x3564662509203436\n"
".quad 0x36646625202c3836,0x2e766f6d090a3b35,0x6466250920343666,0x336430202c393635\n"
".quad 0x3030303030306666,0x3b30303030303030,0x6d090a31202f2f09,0x36662e6e722e6461\n"
".quad 0x3936646625092034,0x383635646625202c,0x2c3636646625202c,0x3b39363564662520\n"
".quad 0x6e722e64616d090a,0x662509203436662e,0x646625202c303764,0x36646625202c3936\n"
".quad 0x3936646625202c39,0x722e64616d090a3b,0x2509203436662e6e,0x6625202c31376466\n"
".quad 0x646625202c303764,0x36646625202c3636,0x2e6c756d090a3b36,0x6466250920343666\n"
".quad 0x36646625202c3237,0x3137646625202c33,0x09636f6c2e090a3b,0x3009393336093033\n"
".quad 0x36662e646461090a,0x3337646625092034,0x2c3237646625202c,0x0a3b323764662520\n"
".quad 0x3436662e6c756d09,0x2c34376466250920,0x202c333764662520,0x090a3b3337646625\n"
".quad 0x203436662e766f6d,0x2c30373564662509,0x6630626533643020,0x6163326437666635\n"
".quad 0x202f2f093b326566,0x6535393031302e31,0x766f6d090a36302d,0x662509203436662e\n"
".quad 0x6430202c31373564,0x3264356630646533,0x6135623364613134,0x302e34202f2f093b\n"
".quad 0x36302d6534363334,0x6e722e64616d090a,0x662509203436662e,0x6625202c32373564\n"
".quad 0x6625202c30373564,0x646625202c343764,0x6f6d090a3b313735,0x2509203436662e76\n"
".quad 0x30202c3337356466,0x3032623366653364,0x3361383834353761,0x2e31202f2f093b66\n"
".quad 0x302d653133383738,0x722e64616d090a35,0x2509203436662e6e,0x25202c3437356466\n"
".quad 0x25202c3237356466,0x6625202c34376466,0x6d090a3b33373564,0x09203436662e766f\n"
".quad 0x202c353735646625,0x3534373166336430,0x6365616634656463,0x38202f2f093b3564\n"
".quad 0x2d6532383737382e,0x2e64616d090a3530,0x09203436662e6e72,0x202c363735646625\n"
".quad 0x202c343735646625,0x25202c3437646625,0x090a3b3537356466,0x203436662e766f6d\n"
".quad 0x2c37373564662509,0x3763336633643020,0x3561383532376331,0x202f2f093b623837\n"
".quad 0x3433343030302e30,0x64616d090a383230,0x203436662e6e722e,0x2c38373564662509\n"
".quad 0x2c36373564662520,0x202c343764662520,0x0a3b373735646625,0x3436662e766f6d09\n"
".quad 0x3937356466250920,0x323666336430202c,0x3234323934323934,0x2f2f093b30313962\n"
".quad 0x33323230302e3020,0x64616d090a343132,0x203436662e6e722e,0x2c30383564662509\n"
".quad 0x2c38373564662520,0x202c343764662520,0x0a3b393735646625,0x3436662e766f6d09\n"
".quad 0x3138356466250920,0x393866336430202c,0x3939393939393939,0x2f2f093b62666439\n"
".quad 0x0a353231302e3020,0x2e6e722e64616d09,0x6466250920343666,0x646625202c323835\n"
".quad 0x646625202c303835,0x35646625202c3437,0x6f6c2e090a3b3138,0x3034360930330963\n"
".quad 0x2e6c756d090a3009,0x6466250920343666,0x37646625202c3838,0x3835646625202c34\n"
".quad 0x636f6c2e090a3b32,0x0934343609303309,0x662e627573090a30,0x3864662509203436\n"
".quad 0x3336646625202c39,0x3b3337646625202c,0x36662e67656e090a,0x3835646625092034\n"
".quad 0x3337646625202c33,0x662e646461090a3b,0x3564662509203436,0x38646625202c3438\n"
".quad 0x3938646625202c39,0x722e64616d090a3b,0x2509203436662e6e,0x25202c3538356466\n"
".quad 0x25202c3338356466,0x6625202c33366466,0x6d090a3b34383564,0x09203436662e6c75\n"
".quad 0x25202c3339646625,0x6625202c31376466,0x2e090a3b35383564,0x3509303309636f6c\n"
".quad 0x6f6d090a30093538,0x2509203436662e76,0x30202c3638356466,0x3535353562663364\n"
".quad 0x3535353535353535,0x2e30202f2f093b35,0x0a33333333333830,0x3436662e64646109\n"
".quad 0x2c35396466250920,0x202c383864662520,0x0a3b363835646625,0x3436662e766f6d09\n"
".quad 0x3738356466250920,0x356266336430202c,0x3535353535353535,0x2f2f093b35353535\n"
".quad 0x33333338302e3020,0x2e627573090a3333,0x6466250920343666,0x646625202c383835\n"
".quad 0x646625202c373835,0x646461090a3b3539,0x662509203436662e,0x6625202c39383564\n"
".quad 0x646625202c383864,0x6f6d090a3b383835,0x2509203436662e76,0x30202c3039356466\n"
".quad 0x6334613634636264,0x6237653962303062,0x322d202f2f093b30,0x2d6534303535342e\n"
".quad 0x2e646461090a3831,0x6466250920343666,0x646625202c303031,0x646625202c393835\n"
".quad 0x6461090a3b303935,0x2509203436662e64,0x25202c3130316466,0x6625202c35396466\n"
".quad 0x6d090a3b30303164,0x09203436662e6c75,0x202c323031646625,0x25202c3337646625\n"
".quad 0x090a3b3130316466,0x203436662e627573,0x2c31393564662509,0x202c353964662520\n"
".quad 0x0a3b313031646625,0x3436662e64646109,0x3430316466250920,0x303031646625202c\n"
".quad 0x313935646625202c,0x662e67656e090a3b,0x3564662509203436,0x31646625202c3239\n"
".quad 0x64616d090a3b3230,0x203436662e6e722e,0x2c33393564662509,0x2c31303164662520\n"
".quad 0x202c333764662520,0x0a3b323935646625,0x2e6e722e64616d09,0x6466250920343666\n"
".quad 0x646625202c343935,0x646625202c343031,0x35646625202c3339,0x64616d090a3b3339\n"
".quad 0x203436662e6e722e,0x2c35393564662509,0x2c31303164662520,0x202c333964662520\n"
".quad 0x0a3b343935646625,0x303309636f6c2e09,0x090a300936383509,0x662e6e722e64616d\n"
".quad 0x3564662509203436,0x31646625202c3639,0x37646625202c3430,0x3935646625202c33\n"
".quad 0x636f6c2e090a3b35,0x0937383509303309,0x662e646461090a30,0x3564662509203436\n"
".quad 0x31646625202c3739,0x35646625202c3230,0x6f6c2e090a3b3639,0x3838350930330963\n"
".quad 0x2e627573090a3009,0x6466250920343666,0x646625202c383935,0x646625202c323031\n"
".quad 0x6461090a3b373935,0x2509203436662e64,0x25202c3939356466,0x25202c3639356466\n"
".quad 0x090a3b3839356466,0x09303309636f6c2e,0x6d090a3009323835,0x09203436662e6c75\n"
".quad 0x202c303036646625,0x25202c3337646625,0x090a3b3739356466,0x09303309636f6c2e\n"
".quad 0x6e090a3009333835,0x09203436662e6765,0x202c313036646625,0x0a3b303036646625\n"
".quad 0x2e6e722e64616d09,0x6466250920343666,0x646625202c323036,0x646625202c373935\n"
".quad 0x36646625202c3337,0x6f6c2e090a3b3130,0x3438350930330963,0x2e64616d090a3009\n"
".quad 0x09203436662e6e72,0x202c333036646625,0x202c393935646625,0x25202c3339646625\n"
".quad 0x090a3b3230366466,0x09303309636f6c2e,0x6d090a3009353835,0x36662e6e722e6461\n"
".quad 0x3036646625092034,0x3935646625202c34,0x3339646625202c37,0x333036646625202c\n"
".quad 0x09636f6c2e090a3b,0x3009363835093033,0x6e722e64616d090a,0x662509203436662e\n"
".quad 0x6625202c38313164,0x6625202c39393564,0x646625202c333764,0x6c2e090a3b343036\n"
".quad 0x383509303309636f,0x646461090a300937,0x662509203436662e,0x6625202c35303664\n"
".quad 0x6625202c30303664,0x2e090a3b38313164,0x3509303309636f6c,0x7573090a30093838\n"
".quad 0x2509203436662e62,0x25202c3630366466,0x25202c3030366466,0x090a3b3530366466\n"
".quad 0x203436662e646461,0x2c31323164662509,0x2c38313164662520,0x3b36303664662520\n"
".quad 0x3309636f6c2e090a,0x0a30093238350930,0x3436662e6c756d09,0x3232316466250920\n"
".quad 0x2c3337646625202c,0x3b35303664662520,0x3309636f6c2e090a,0x0a30093638350930\n"
".quad 0x3436662e67656e09,0x3730366466250920,0x323231646625202c,0x722e64616d090a3b\n"
".quad 0x2509203436662e6e,0x25202c3432316466,0x25202c3530366466,0x6625202c33376466\n"
".quad 0x6d090a3b37303664,0x36662e6e722e6461,0x3231646625092034,0x3231646625202c35\n"
".quad 0x3339646625202c31,0x343231646625202c,0x722e64616d090a3b,0x2509203436662e6e\n"
".quad 0x25202c3632316466,0x25202c3530366466,0x6625202c33396466,0x6d090a3b35323164\n"
".quad 0x36662e6e722e6461,0x3036646625092034,0x3231646625202c38,0x3337646625202c31\n"
".quad 0x363231646625202c,0x09636f6c2e090a3b,0x3009373835093033,0x36662e646461090a\n"
".quad 0x3231646625092034,0x3036646625202c38,0x3231646625202c38,0x636f6c2e090a3b32\n"
".quad 0x0932373509303309,0x722e747663090a30,0x33732e3436662e6e,0x3231646625092032\n"
".quad 0x3b33387225202c39,0x36662e646461090a,0x3331646625092034,0x3337646625202c30\n"
".quad 0x383231646625202c,0x662e766f6d090a3b,0x3664662509203436,0x66336430202c3930\n"
".quad 0x6566323465323665,0x093b303030336166,0x3339362e30202f2f,0x6c756d090a373431\n"
".quad 0x662509203436662e,0x6625202c32333164,0x6625202c39323164,0x73090a3b39303664\n"
".quad 0x09203436662e6275,0x202c303136646625,0x202c323231646625,0x0a3b383231646625\n"
".quad 0x3436662e64646109,0x3131366466250920,0x383036646625202c,0x303136646625202c\n"
".quad 0x662e627573090a3b,0x3664662509203436,0x37646625202c3231,0x3331646625202c33\n"
".quad 0x2e646461090a3b30,0x6466250920343666,0x646625202c333136,0x646625202c383231\n"
".quad 0x6461090a3b323136,0x2509203436662e64,0x25202c3431366466,0x25202c3131366466\n"
".quad 0x090a3b3331366466,0x203436662e646461,0x2c38333164662509,0x202c333964662520\n"
".quad 0x0a3b343136646625,0x3436662e64646109,0x3933316466250920,0x303331646625202c\n"
".quad 0x383331646625202c,0x662e646461090a3b,0x3164662509203436,0x31646625202c3034\n"
".quad 0x31646625202c3233,0x627573090a3b3933,0x662509203436662e,0x6625202c35313664\n"
".quad 0x6625202c30333164,0x61090a3b39333164,0x09203436662e6464,0x202c363136646625\n"
".quad 0x202c383331646625,0x0a3b353136646625,0x3436662e62757309,0x3731366466250920\n"
".quad 0x323331646625202c,0x303431646625202c,0x662e646461090a3b,0x3664662509203436\n"
".quad 0x31646625202c3831,0x36646625202c3933,0x646461090a3b3731,0x662509203436662e\n"
".quad 0x6625202c39313664,0x6625202c36313664,0x6d090a3b38313664,0x09203436662e766f\n"
".quad 0x202c303236646625,0x6564333564336430,0x6365383732666136,0x32202f2f093b3665\n"
".quad 0x2d6533353332382e,0x2e64616d090a3331,0x09203436662e6e72,0x202c373431646625\n"
".quad 0x202c393231646625,0x202c303236646625,0x0a3b393136646625,0x3436662e64646109\n"
".quad 0x3834316466250920,0x303431646625202c,0x373431646625202c,0x09636f6c2e090a3b\n"
".quad 0x3009333735093033,0x36662e627573090a,0x3236646625092034,0x3431646625202c31\n"
".quad 0x3431646625202c30,0x2e646461090a3b38,0x6466250920343666,0x646625202c303531\n"
".quad 0x646625202c373431,0x6c2e090a3b313236,0x323109303309636f,0x6f6d090a30093834\n"
".quad 0x2509203436662e76,0x30202c3232366466,0x3030303032663364,0x3030303030303030\n"
".quad 0x2e30202f2f093b30,0x3730323231303030,0x36662e6c756d090a,0x3236646625092034\n"
".quad 0x3235646625202c33,0x3236646625202c33,0x2e766f6d090a3b32,0x6466250920343666\n"
".quad 0x376430202c343236,0x6562316132643066,0x3b30396638343034,0x332b6531202f2f09\n"
".quad 0x70746573090a3430,0x203436662e74672e,0x202c373231702509,0x202c303335646625\n"
".quad 0x0a3b343236646625,0x36662e706c657309,0x3236646625092034,0x3236646625202c35\n"
".quad 0x3235646625202c33,0x3732317025202c33,0x662e6c756d090a3b,0x3664662509203436\n"
".quad 0x36646625202c3632,0x31646625202c3532,0x67656e090a3b3834,0x662509203436662e\n"
".quad 0x6625202c37323664,0x6d090a3b36323664,0x36662e6e722e6461,0x3236646625092034\n"
".quad 0x3431646625202c38,0x3236646625202c38,0x3236646625202c35,0x2e64616d090a3b37\n"
".quad 0x09203436662e6e72,0x202c393236646625,0x202c303531646625,0x202c353236646625\n"
".quad 0x0a3b383236646625,0x3436662e64646109,0x3132336466250920,0x363236646625202c\n"
".quad 0x393236646625202c,0x09636f6c2e090a3b,0x0939343231093033,0x662e627573090a30\n"
".quad 0x3664662509203436,0x36646625202c3033,0x33646625202c3632,0x646461090a3b3132\n"
".quad 0x662509203436662e,0x6625202c31363164,0x6625202c39323664,0x2e090a3b30333664\n"
".quad 0x3109303309636f6c,0x6d090a3009323532,0x09203436622e766f,0x252c36363272257b\n"
".quad 0x25202c7d34353172,0x090a3b3132336466,0x203233732e766f6d,0x202c373632722509\n"
".quad 0x353738343630312d,0x6573090a3b393537,0x3233752e746c2e74,0x722509203233732e\n"
".quad 0x317225202c383632,0x36327225202c3435,0x2e67656e090a3b37,0x3272250920323373\n"
".quad 0x36327225202c3936,0x2e766f6d090a3b38,0x3272250920323375,0x32383031202c3037\n"
".quad 0x0a3b303934353335,0x2e656c2e74657309,0x203233752e323375,0x202c313732722509\n"
".quad 0x25202c3435317225,0x6e090a3b30373272,0x09203233732e6765,0x25202c3237327225\n"
".quad 0x6f090a3b31373272,0x2509203233622e72,0x7225202c33373272,0x327225202c393632\n"
".quad 0x766f6d090a3b3237,0x722509203233752e,0x0a3b30202c343732,0x71652e7074657309\n"
".quad 0x702509203233732e,0x327225202c383231,0x37327225202c3337,0x31702540090a3b34\n"
".quad 0x0920617262203832,0x34315f315f744c24,0x2f200a3b30353239,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3220656e696c2079,0x2064616568202c34\n"
".quad 0x2064656c6562616c,0x33315f315f744c24,0x6c2e090a34373031,0x313309303309636f\n"
".quad 0x766f6d090a300937,0x662509203436662e,0x6430202c31333664,0x3734353137666633\n"
".quad 0x6566323862323536,0x342e31202f2f093b,0x6c756d090a373234,0x662509203436662e\n"
".quad 0x6625202c32333664,0x6625202c31323364,0x63090a3b31333664,0x662e696e722e7476\n"
".quad 0x09203436662e3436,0x202c333336646625,0x0a3b323336646625,0x3436662e766f6d09\n"
".quad 0x3433366466250920,0x366566626430202c,0x6166656632346532,0x2f2f093b66653933\n"
".quad 0x313339362e302d20,0x2e64616d090a3734,0x09203436662e6e72,0x202c353336646625\n"
".quad 0x202c333336646625,0x202c343336646625,0x0a3b313233646625,0x3436662e766f6d09\n"
".quad 0x3633366466250920,0x613763626430202c,0x3933623365396362,0x2f2f093b66333038\n"
".quad 0x303931332e322d20,0x6d090a37312d6535,0x36662e6e722e6461,0x3336646625092034\n"
".quad 0x3336646625202c37,0x3336646625202c33,0x3336646625202c36,0x2e766f6d090a3b35\n"
".quad 0x6466250920343666,0x336430202c383336,0x6366373066313265,0x3b64616238356663\n"
".quad 0x38302e32202f2f09,0x0a39302d65333438,0x3436662e766f6d09,0x3933366466250920\n"
".quad 0x613565336430202c,0x6336616431386466,0x2f2f093b66616233,0x36363331352e3220\n"
".quad 0x616d090a38302d65,0x3436662e6e722e64,0x3034366466250920,0x383336646625202c\n"
".quad 0x373336646625202c,0x393336646625202c,0x662e766f6d090a3b,0x3664662509203436\n"
".quad 0x65336430202c3134,0x3666353565373239,0x093b366530386630,0x3535372e32202f2f\n"
".quad 0x090a37302d653537,0x662e6e722e64616d,0x3664662509203436,0x36646625202c3234\n"
".quad 0x36646625202c3034,0x36646625202c3733,0x766f6d090a3b3134,0x662509203436662e\n"
".quad 0x6430202c33343664,0x6164643137636533,0x3636366432306638,0x372e32202f2f093b\n"
".quad 0x36302d6532373535,0x6e722e64616d090a,0x662509203436662e,0x6625202c34343664\n"
".quad 0x6625202c32343664,0x6625202c37333664,0x2e090a3b33343664,0x3309303309636f6c\n"
".quad 0x6f6d090a30093831,0x2509203436662e76,0x30202c3534366466,0x6131306166653364\n"
".quad 0x6534393862333130,0x2e32202f2f093b30,0x302d653631303834,0x722e64616d090a35\n"
".quad 0x2509203436662e6e,0x25202c3634366466,0x25202c3434366466,0x25202c3733366466\n"
".quad 0x090a3b3534366466,0x09303309636f6c2e,0x6d090a3009393133,0x09203436662e766f\n"
".quad 0x202c373436646625,0x3130613266336430,0x3766613364313061,0x30202f2f093b3838\n"
".quad 0x343839313030302e,0x2e64616d090a3331,0x09203436662e6e72,0x202c383436646625\n"
".quad 0x202c363436646625,0x202c373336646625,0x0a3b373436646625,0x303309636f6c2e09\n"
".quad 0x090a300930323309,0x203436662e766f6d,0x2c39343664662509,0x6336356633643020\n"
".quad 0x6133633631633631,0x202f2f093b636531,0x3838333130302e30,0x2e64616d090a3938\n"
".quad 0x09203436662e6e72,0x202c303536646625,0x202c383436646625,0x202c373336646625\n"
".quad 0x0a3b393436646625,0x303309636f6c2e09,0x090a300931323309,0x203436662e766f6d\n"
".quad 0x2c31353664662509,0x3131386633643020,0x3930313131313131,0x202f2f093b313631\n"
".quad 0x3333333830302e30,0x2e64616d090a3333,0x09203436662e6e72,0x202c323536646625\n"
".quad 0x202c303536646625,0x202c373336646625,0x0a3b313536646625,0x303309636f6c2e09\n"
".quad 0x090a300932323309,0x203436662e766f6d,0x2c33353664662509,0x3535616633643020\n"
".quad 0x3535353535353535,0x202f2f093b316334,0x3636363134302e30,0x722e64616d090a37\n"
".quad 0x2509203436662e6e,0x25202c3435366466,0x25202c3235366466,0x25202c3733366466\n"
".quad 0x090a3b3335366466,0x09303309636f6c2e,0x6d090a3009333233,0x09203436662e766f\n"
".quad 0x202c353536646625,0x3535356366336430,0x3535353535353535,0x30202f2f093b6636\n"
".quad 0x0a3736363636312e,0x2e6e722e64616d09,0x6466250920343666,0x646625202c363536\n"
".quad 0x646625202c343536,0x646625202c373336,0x6c2e090a3b353536,0x323309303309636f\n"
".quad 0x766f6d090a300934,0x662509203436662e,0x6430202c37353664,0x3030303030656633\n"
".quad 0x3030303030303030,0x352e30202f2f093b,0x6e722e64616d090a,0x662509203436662e\n"
".quad 0x6625202c38353664,0x6625202c36353664,0x6625202c37333664,0x2e090a3b37353664\n"
".quad 0x3309303309636f6c,0x756d090a30093632,0x2509203436662e6c,0x25202c3935366466\n"
".quad 0x25202c3733366466,0x090a3b3835366466,0x662e6e722e64616d,0x3164662509203436\n"
".quad 0x36646625202c3139,0x36646625202c3935,0x36646625202c3733,0x6f6c2e090a3b3733\n"
".quad 0x3830370930330963,0x2e747663090a3009,0x2e3233732e697a72,0x3172250920343666\n"
".quad 0x36646625202c3336,0x6c6873090a3b3333,0x722509203233622e,0x317225202c353732\n"
".quad 0x0a3b3032202c3336,0x3233732e64646109,0x2c39303172250920,0x202c353732722520\n"
".quad 0x3233393632373031,0x646461090a3b3834,0x722509203233752e,0x317225202c363732\n"
".quad 0x30323031202c3336,0x752e766f6d090a3b,0x3732722509203233,0x3b30343032202c37\n"
".quad 0x672e70746573090a,0x2509203233752e74,0x7225202c39323170,0x327225202c363732\n"
".quad 0x702540090a3b3737,0x2061726220393231,0x315f315f744c2409,0x200a3b3831303035\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x64616568202c3432,0x64656c6562616c20,0x315f315f744c2420,0x2e090a3437303133\n"
".quad 0x3709303309636f6c,0x6f6d090a30093131,0x2509203233732e76,0x3b30202c38373272\n"
".quad 0x36622e766f6d090a,0x3931646625092034,0x373272257b202c32,0x7d39303172252c38\n"
".quad 0x722e64616d090a3b,0x2509203436662e6e,0x25202c3836316466,0x25202c3139316466\n"
".quad 0x25202c3239316466,0x090a3b3239316466,0x20696e752e617262,0x315f315f744c2409\n"
".quad 0x240a3b3236373934,0x3035315f315f744c,0x2f2f200a3a383130,0x50203e706f6f6c3c\n"
".quad 0x6c20666f20747261,0x79646f6220706f6f,0x343220656e696c20,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3133315f315f744c,0x766f6d090a343730,0x722509203233752e\n"
".quad 0x0a3b30202c393732,0x65672e7074657309,0x702509203233732e,0x317225202c303331\n"
".quad 0x37327225202c3336,0x31702540090a3b39,0x0920617262203033,0x35315f315f744c24\n"
".quad 0x2f200a3b30333530,0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c\n"
".quad 0x3220656e696c2079,0x2064616568202c34,0x2064656c6562616c,0x33315f315f744c24\n"
".quad 0x6c2e090a34373031,0x313709303309636f,0x646461090a300935,0x722509203233732e\n"
".quad 0x317225202c393031,0x37363735202c3930,0x6d090a3b30383631,0x09203233732e766f\n"
".quad 0x31202c3431317225,0x3431303730363130,0x2e617262090a3b34,0x744c240920696e75\n"
".quad 0x37323035315f315f,0x315f744c240a3b34,0x3a3033353035315f,0x6f6f6c3c2f2f200a\n"
".quad 0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62,0x6568202c34322065\n"
".quad 0x6c6562616c206461,0x315f744c24206465,0x0a3437303133315f,0x3233732e766f6d09\n"
".quad 0x2c34313172250920,0x3134373337303120,0x744c240a3b343238,0x37323035315f315f\n"
".quad 0x6c3c2f2f200a3a34,0x726150203e706f6f,0x6f6f6c20666f2074,0x6c2079646f622070\n"
".quad 0x202c343220656e69,0x62616c2064616568,0x744c242064656c65,0x37303133315f315f\n"
".quad 0x09636f6c2e090a34,0x3009323237093033,0x33732e766f6d090a,0x3038327225092032\n"
".quad 0x6f6d090a3b30202c,0x2509203436622e76,0x7b202c3339316466,0x72252c3038327225\n"
".quad 0x6d090a3b7d343131,0x36662e6e722e6461,0x3636646625092034,0x3931646625202c30\n"
".quad 0x3931646625202c31,0x3931646625202c33,0x2e627573090a3b33,0x3272250920323373\n"
".quad 0x30317225202c3138,0x3538343031202c39,0x766f6d090a3b3637,0x722509203233732e\n"
".quad 0x0a3b30202c323832,0x3436622e766f6d09,0x3136366466250920,0x32383272257b202c\n"
".quad 0x3b7d31383272252c,0x36662e6c756d090a,0x3631646625092034,0x3636646625202c38\n"
".quad 0x3636646625202c30,0x315f744c240a3b31,0x3a3236373934315f,0x6f6f6c3c2f2f200a\n"
".quad 0x2074726150203e70,0x20706f6f6c20666f,0x6e696c2079646f62,0x6568202c34322065\n"
".quad 0x6c6562616c206461,0x315f744c24206465,0x0a3437303133315f,0x303309636f6c2e09\n"
".quad 0x090a300934333709,0x203436662e766f6d,0x2c36393164662509,0x3b38363164662520\n"
".quad 0x6e752e617262090a,0x6557444c24092069,0x746e69725f69646e,0x0a3b325f3837315f\n"
".quad 0x34315f315f744c24,0x2f200a3a30353239,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3220656e696c2079,0x2064616568202c34,0x2064656c6562616c\n"
".quad 0x33315f315f744c24,0x6c2e090a34373031,0x343709303309636f,0x766f6d090a300930\n"
".quad 0x662509203436662e,0x6430202c32363664,0x3030303030666637,0x3030303030303030\n"
".quad 0x666e69202f2f093b,0x36662e766f6d090a,0x3636646625092034,0x3030306430202c33\n"
".quad 0x3030303030303030,0x2f093b3030303030,0x766f6d090a30202f,0x722509203233732e\n"
".quad 0x0a3b30202c333832,0x65672e7074657309,0x702509203233732e,0x317225202c313331\n"
".quad 0x38327225202c3435,0x706c6573090a3b33,0x662509203436662e,0x6625202c34363664\n"
".quad 0x6625202c32363664,0x7025202c33363664,0x6461090a3b313331,0x2509203436662e64\n"
".quad 0x25202c3536366466,0x25202c3132336466,0x090a3b3132336466,0x203436662e736261\n"
".quad 0x2c36363664662509,0x3b31323364662520,0x36662e766f6d090a,0x3636646625092034\n"
".quad 0x6666376430202c37,0x3030303030303030,0x2f093b3030303030,0x73090a666e69202f\n"
".quad 0x662e656c2e707465,0x3331702509203436,0x3636646625202c32,0x3636646625202c36\n"
".quad 0x706c6573090a3b37,0x662509203436662e,0x6625202c36393164,0x6625202c34363664\n"
".quad 0x7025202c35363664,0x444c240a3b323331,0x69725f69646e6557,0x325f3837315f746e\n"
".quad 0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x68202c343220656e,0x6562616c20646165,0x5f744c242064656c,0x3437303133315f31\n"
".quad 0x3309636f6c2e090a,0x3009323532310930,0x36662e766f6d090a,0x3636646625092034\n"
".quad 0x3931646625202c38,0x2e766f6d090a3b36,0x6466250920343666,0x646625202c343032\n"
".quad 0x6c2e090a3b383636,0x323109303309636f,0x6261090a30093435,0x2509203436662e73\n"
".quad 0x25202c3936366466,0x090a3b3836366466,0x203436662e766f6d,0x2c30373664662509\n"
".quad 0x3030666637643020,0x3030303030303030,0x202f2f093b303030,0x746573090a666e69\n"
".quad 0x3436662e71652e70,0x2c33333170250920,0x2c39363664662520,0x3b30373664662520\n"
".quad 0x333331702540090a,0x4c24092061726220,0x373035315f315f74,0x3c2f2f200a3b3638\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x2c343220656e696c\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x303133315f315f74,0x636f6c2e090a3437\n"
".quad 0x3835323109303309,0x2e64616d090a3009,0x09203436662e6e72,0x202c343032646625\n"
".quad 0x202c383636646625,0x202c313631646625,0x0a3b383636646625,0x35315f315f744c24\n"
".quad 0x2f200a3a36383730,0x203e706f6f6c3c2f,0x20666f2074726150,0x646f6220706f6f6c\n"
".quad 0x3220656e696c2079,0x2064616568202c34,0x2064656c6562616c,0x33315f315f744c24\n"
".quad 0x6c2e090a34373031,0x333109303309636f,0x6f6d090a30093630,0x2509203436662e76\n"
".quad 0x6625202c36336466,0x6d090a3b34303264,0x09203436662e766f,0x202c313736646625\n"
".quad 0x3030306566336430,0x3030303030303030,0x30202f2f093b3030,0x2e6c756d090a352e\n"
".quad 0x6466250920343666,0x646625202c323736,0x646625202c333235,0x7663090a3b313736\n"
".quad 0x36662e697a722e74,0x2509203436662e34,0x25202c3534356466,0x090a3b3237366466\n"
".quad 0x3233732e706c6573,0x2c34383272250920,0x25202c30202c3120,0x61090a3b33323170\n"
".quad 0x09203436662e6464,0x202c333736646625,0x202c353435646625,0x0a3b353435646625\n"
".quad 0x3436662e62757309,0x3437366466250920,0x333235646625202c,0x333736646625202c\n"
".quad 0x662e736261090a3b,0x3664662509203436,0x36646625202c3537,0x766f6d090a3b3437\n"
".quad 0x662509203436662e,0x6430202c36373664,0x3030303030666633,0x3030303030303030\n"
".quad 0x090a31202f2f093b,0x752e71652e746573,0x09203436662e3233,0x25202c3538327225\n"
".quad 0x25202c3537366466,0x090a3b3637366466,0x203233732e67656e,0x202c363832722509\n"
".quad 0x090a3b3538327225,0x203233622e646e61,0x202c373832722509,0x25202c3438327225\n"
".quad 0x6d090a3b36383272,0x09203233752e766f,0x30202c3838327225,0x2e70746573090a3b\n"
".quad 0x09203233732e7165,0x25202c3433317025,0x7225202c37383272,0x2540090a3b383832\n"
".quad 0x6172622034333170,0x5f315f744c240920,0x0a3b383932313531,0x706f6f6c3c2f2f20\n"
".quad 0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f,0x616568202c343220\n"
".quad 0x656c6562616c2064,0x5f315f744c242064,0x090a343730313331,0x09303309636f6c2e\n"
".quad 0x090a300938303331,0x203436622e766f6d,0x202c313364722509,0x090a3b3633646625\n"
".quad 0x203436622e726f78,0x202c323364722509,0x2d202c3133647225,0x3032373333323239\n"
".quad 0x3537373435383633,0x6f6d090a3b383038,0x2509203436622e76,0x7225202c36336466\n"
".quad 0x744c240a3b323364,0x39323135315f315f,0x6c3c2f2f200a3a38,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x202c343220656e69,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x37303133315f315f,0x09636f6c2e090a34,0x0930313331093033\n"
".quad 0x662e766f6d090a30,0x3264662509203436,0x33646625202c3831,0x6557444c240a3b36\n"
".quad 0x73695f5f5f69646e,0x5f3837315f6e616e,0x6c3c2f2f200a3a31,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x202c343220656e69,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x37303133315f315f,0x09636f6c2e090a34,0x0a30093336093831\n"
".quad 0x3436662e6c756d09,0x2c36316466250920,0x2c38313264662520,0x0a3b363164662520\n"
".quad 0x34315f315f744c24,0x2f200a3a34393532,0x203e706f6f6c3c2f,0x20666f2074726150\n"
".quad 0x646f6220706f6f6c,0x3220656e696c2079,0x2064616568202c34,0x2064656c6562616c\n"
".quad 0x33315f315f744c24,0x6c2e090a34373031,0x313109383109636f,0x646461090a300933\n"
".quad 0x722509203233732e,0x317225202c393832,0x38317225202c3038,0x2e747663090a3b31\n"
".quad 0x203233732e343673,0x202c333364722509,0x090a3b3938327225,0x656469772e6c756d\n"
".quad 0x722509203233732e,0x327225202c343364,0x0a3b3432202c3938,0x3436752e64646109\n"
".quad 0x2c35336472250920,0x25202c3164722520,0x6c090a3b34336472,0x6465726168732e64\n"
".quad 0x662509203436662e,0x255b202c37373664,0x3b5d302b35336472,0x36662e6c756d090a\n"
".quad 0x3736646625092034,0x3736646625202c38,0x3633646625202c37,0x2e64616d090a3b39\n"
".quad 0x09203436662e6e72,0x25202c3531646625,0x6625202c36316466,0x6625202c38373664\n"
".quad 0x6c2e090a3b353164,0x313109383109636f,0x2e646c090a300934,0x662e646572616873\n"
".quad 0x3664662509203436,0x6472255b202c3937,0x090a3b5d382b3533,0x203436662e6c756d\n"
".quad 0x2c30383664662509,0x2c39373664662520,0x3b39363364662520,0x6e722e64616d090a\n"
".quad 0x662509203436662e,0x646625202c343164,0x36646625202c3631,0x31646625202c3038\n"
".quad 0x636f6c2e090a3b34,0x0935313109383109,0x68732e646c090a30,0x3436662e64657261\n"
".quad 0x3138366466250920,0x35336472255b202c,0x6d090a3b5d36312b,0x09203436662e6c75\n"
".quad 0x202c323836646625,0x202c313836646625,0x0a3b393633646625,0x2e6e722e64616d09\n"
".quad 0x6466250920343666,0x31646625202c3331,0x3836646625202c36,0x3331646625202c32\n"
".quad 0x732e646461090a3b,0x3831722509203233,0x3138317225202c31,0x6573090a3b31202c\n"
".quad 0x33732e656e2e7074,0x3533317025092032,0x25202c377225202c,0x40090a3b31383172\n"
".quad 0x7262203533317025,0x315f744c24092061,0x3b3437303133315f,0x315f315f744c240a\n"
".quad 0x200a3a3236353033,0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20\n"
".quad 0x20656e696c207964,0x64616568202c3432,0x64656c6562616c20,0x315f315f744c2420\n"
".quad 0x61090a3632383930,0x09203233732e6464,0x7225202c36357225,0x090a3b31202c3635\n"
".quad 0x2e656e2e70746573,0x3170250920323373,0x2c357225202c3633,0x090a3b3635722520\n"
".quad 0x6220363331702540,0x5f744c2409206172,0x3632383930315f31,0x6f6c3c2f2f200a3b\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x202c33303120656e\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x34353830315f315f,0x752e617262090a36\n"
".quad 0x5f744c240920696e,0x3431333930315f31,0x5f315f744c240a3b,0x0a3a363236343531\n"
".quad 0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066,0x656e696c2079646f\n"
".quad 0x6568202c33303120,0x6c6562616c206461,0x315f744c24206465,0x0a3634353830315f\n"
".quad 0x3436662e766f6d09,0x2c33316466250920,0x3030303030643020,0x3030303030303030\n"
".quad 0x202f2f093b303030,0x662e766f6d090a30,0x3164662509203436,0x3030306430202c34\n"
".quad 0x3030303030303030,0x2f093b3030303030,0x766f6d090a30202f,0x662509203436662e\n"
".quad 0x306430202c353164,0x3030303030303030,0x3b30303030303030,0x4c240a30202f2f09\n"
".quad 0x333930315f315f74,0x3c2f2f200a3a3431,0x6150203e706f6f6c,0x6f6c20666f207472\n"
".quad 0x2079646f6220706f,0x33303120656e696c,0x6c2064616568202c,0x242064656c656261\n"
".quad 0x3830315f315f744c,0x6f6c2e090a363435,0x3831310938310963,0x702e646c090a3009\n"
".quad 0x3436752e6d617261,0x2c36336472250920,0x616475635f5f5b20,0x315a5f5f6d726170\n"
".quad 0x5f7265697a654234,0x6965636166727573,0x5833506969696966,0x5f69505f30535a59\n"
".quad 0x090a3b5d7074756f,0x732e6f6c2e6c756d,0x3932722509203233,0x2c33337225202c30\n"
".quad 0x090a3b3434722520,0x203233732e646461,0x202c313932722509,0x7225202c33347225\n"
".quad 0x7663090a3b303932,0x33732e3436732e74,0x3733647225092032,0x3b3139327225202c\n"
".quad 0x69772e6c756d090a,0x09203233732e6564,0x25202c3833647225,0x3432202c31393272\n"
".quad 0x752e646461090a3b,0x3364722509203436,0x3633647225202c39,0x3b3833647225202c\n"
".quad 0x6f6c672e7473090a,0x203436662e6c6162,0x2b39336472255b09,0x31646625202c5d30\n"
".quad 0x672e7473090a3b35,0x36662e6c61626f6c,0x336472255b092034,0x6625202c5d382b39\n"
".quad 0x7473090a3b343164,0x2e6c61626f6c672e,0x72255b0920343666,0x2c5d36312b393364\n"
".quad 0x0a3b333164662520,0x30315f315f744c24,0x2f200a3a32303838,0x203e706f6f6c3c2f\n"
".quad 0x20666f2074726150,0x646f6220706f6f6c,0x3120656e696c2079,0x64616568202c3330\n"
".quad 0x64656c6562616c20,0x315f315f744c2420,0x40090a3634353830,0x6172622035702521\n"
".quad 0x5f315f744c240920,0x0a3b383735323531,0x706f6f6c3c2f2f20,0x6f2074726150203e\n"
".quad 0x6220706f6f6c2066,0x656e696c2079646f,0x6568202c33303120,0x6c6562616c206461\n"
".quad 0x315f744c24206465,0x0a3634353830315f,0x3436732e766f6d09,0x2c35316472250920\n"
".quad 0x090a3b3764722520,0x203233752e766f6d,0x202c323932722509,0x2e746573090a3b30\n"
".quad 0x752e3233752e7165,0x3932722509203233,0x2c33317225202c33,0x0a3b323932722520\n"
".quad 0x3233732e67656e09,0x2c34393272250920,0x0a3b333932722520,0x3233752e766f6d09\n"
".quad 0x2c35393272250920,0x746573090a3b3020,0x2e3233752e71652e,0x3272250920323375\n"
".quad 0x30317225202c3639,0x3b3539327225202c,0x33732e67656e090a,0x3739327225092032\n"
".quad 0x3b3639327225202c,0x33622e646e61090a,0x3839327225092032,0x2c3439327225202c\n"
".quad 0x0a3b373932722520,0x3233752e766f6d09,0x2c39393272250920,0x746573090a3b3020\n"
".quad 0x3233732e71652e70,0x2c37333170250920,0x202c383932722520,0x090a3b3939327225\n"
".quad 0x6220373331702540,0x5f744c2409206172,0x3433383235315f31,0x6f6c3c2f2f200a3b\n"
".quad 0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220,0x202c33303120656e\n"
".quad 0x62616c2064616568,0x744c242064656c65,0x34353830315f315f,0x09636f6c2e090a36\n"
".quad 0x0a30093439093831,0x3436732e766f6d09,0x2c30346472250920,0x090a3b3364722520\n"
".quad 0x203233732e766f6d,0x202c303033722509,0x6d6f7461090a3b31,0x2e6c61626f6c672e\n"
".quad 0x203233732e646461,0x202c313033722509,0x2c5d30346472255b,0x0a3b303033722520\n"
".quad 0x3233732e766f6d09,0x2c32303372250920,0x0a3b313033722520,0x726168732e747309\n"
".quad 0x09203233732e6465,0x302b35316472255b,0x3230337225202c5d,0x5f315f744c240a3b\n"
".quad 0x0a3a343338323531,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x6568202c33303120,0x6c6562616c206461,0x315f744c24206465\n"
".quad 0x0a3634353830315f,0x6e79732e72616209,0x6c090a3b30092063,0x6465726168732e64\n"
".quad 0x722509203233732e,0x6472255b202c3033,0x090a3b5d302b3531,0x20696e752e617262\n"
".quad 0x315f315f744c2409,0x240a3b3232333235,0x3235315f315f744c,0x2f2f200a3a383735\n"
".quad 0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f,0x303120656e696c20\n"
".quad 0x2064616568202c33,0x2064656c6562616c,0x30315f315f744c24,0x6f6d090a36343538\n"
".quad 0x2509203233752e76,0x6e25202c33303372,0x3b782e6469617463,0x33752e646461090a\n"
".quad 0x2c30337225092032,0x202c333033722520,0x4c240a3b30337225,0x333235315f315f74\n"
".quad 0x3c2f2f200a3a3232,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x33303120656e696c,0x6c2064616568202c,0x242064656c656261,0x3830315f315f744c\n"
".quad 0x746573090a363435,0x3233732e74672e70,0x2c38333170250920,0x7225202c31722520\n"
".quad 0x702540090a3b3033,0x2061726220383331,0x315f315f744c2409,0x240a3b3634353830\n"
".quad 0x3830315f315f744c,0x6c2e090a3a343330,0x323109383109636f,0x697865090a300931\n"
".quad 0x6557444c240a3b74,0x4234315a5f5f646e,0x75735f7265697a65,0x6966696563616672\n"
".quad 0x5a59583350696969,0x090a3a69505f3053,0x315a5f202f2f207d,0x5f7265697a654234\n"
".quad 0x6965636166727573,0x5833506969696966,0x0a69505f30535a59,0x000000000000000a\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$compute_20$[13844];

}

static __cudaFatPtxEntry __ptxEntries [] = {{(char*)"compute_20",(char*)__deviceText_$compute_20$},{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{0,0}};
static __cudaFatDebugEntry __debugEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries1 = {(char*)"sm_20", (char*)__deviceText_$sm_20$, &__elfEntries0, (unsigned int)sizeof(__deviceText_$sm_20$)};



static __cudaFatCudaBinary __fatDeviceText __attribute__ ((section (".nvFatBinSegment")))= {0x1ee55a01,0x00000004,0x2e00b786,(char*)"6cf0ab10004e365b",(char*)"kernel.cu",(char*)" ",__ptxEntries,__cubinEntries,&__debugEntries0,0,0,0,0,0,0x72b31366,&__elfEntries1};
# 3 "kernel.cudafe1.stub.c" 2 3
struct __T20 {int __par0;float __par1;int __par2;int __par3;int __par4;int __par5;XYZ *__par6;XYZ *__par7;int *__par8;int __dummy_field;};
extern void __device_stub__Z14Bezier_surfaceifiiiiP3XYZS0_Pi(int, float, int, int, int, int, XYZ *, XYZ *, int *);
extern"C" {void ** __cudaRegisterFatBinary2(void*, size_t);}
static void __sti____cudaRegisterAll_14_kernel_cpp1_ii_b5b693b1(void) __attribute__((__constructor__));
void __device_stub__Z14Bezier_surfaceifiiiiP3XYZS0_Pi(int __par0, float __par1, int __par2, int __par3, int __par4, int __par5, XYZ *__par6, XYZ *__par7, int *__par8){ struct __T20 *__T21 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T21->__par0) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T21->__par1) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T21->__par2) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T21->__par3) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T21->__par4) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T21->__par5) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T21->__par6) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par7, sizeof(__par7), (size_t)&__T21->__par7) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par8, sizeof(__par8), (size_t)&__T21->__par8) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(int, float, int, int, int, int, XYZ *, XYZ *, int *))Bezier_surface)); (void)cudaLaunch(((char *)((void ( *)(int, float, int, int, int, int, XYZ *, XYZ *, int *))Bezier_surface))); };}
void Bezier_surface( int __cuda_0,float __cuda_1,int __cuda_2,int __cuda_3,int __cuda_4,int __cuda_5,XYZ *__cuda_6,XYZ *__cuda_7,int *__cuda_8)
# 73 "kernel.cu"
{__device_stub__Z14Bezier_surfaceifiiiiP3XYZS0_Pi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8);
# 121 "kernel.cu"
}
# 1 "kernel.cudafe1.stub.c"
static void __sti____cudaRegisterAll_14_kernel_cpp1_ii_b5b693b1(void) { __cudaFatCubinHandle = __cudaRegisterFatBinary2((void*)(&__fatDeviceText), sizeof(__deviceText_$compute_20$)); atexit(__cudaUnregisterBinaryUtil); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(int, float, int, int, int, int, XYZ *, XYZ *, int *))Bezier_surface), (char*)"_Z14Bezier_surfaceifiiiiP3XYZS0_Pi", "_Z14Bezier_surfaceifiiiiP3XYZS0_Pi", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); }
# 1 "kernel.cudafe1.stub.c" 2
