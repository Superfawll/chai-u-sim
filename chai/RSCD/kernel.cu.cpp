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
# 46 "support/common.h"
typedef
# 41 "support/common.h"
struct {
# 42 "support/common.h"
int x;
# 43 "support/common.h"
int y;
# 44 "support/common.h"
int vx;
# 45 "support/common.h"
int vy;
# 46 "support/common.h"
} flowvector;
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
# 43 "kernel.cu"
__attribute__((unused)) int gen_model_paramGPU(int x1, int y1, int vx1, int vy1, int x2, int y2, int vx2, int vy2, float *model_param) {int volatile ___ = 1;
# 66 "kernel.cu"
exit(___);}
# 68 "kernel.cu"
void RANSAC_kernel_block(int flowvector_count, int max_iter, int error_threshold, float convergence_threshold, int
# 69 "kernel.cu"
n_tasks, float alpha, float *model_param_local, flowvector *flowvectors, int *
# 70 "kernel.cu"
random_numbers, int *model_candidate, int *outliers_candidate, int *
# 71 "kernel.cu"
g_out_id, int *
# 73 "kernel.cu"
worklist) ;
# 171 "kernel.cu"
cudaError_t call_RANSAC_kernel_block(int blocks, int threads, int flowvector_count, int max_iter, int error_threshold, float
# 172 "kernel.cu"
convergence_threshold, int n_tasks, float alpha, float *model_param_local, flowvector *flowvectors, int *
# 173 "kernel.cu"
random_numbers, int *model_candidate, int *outliers_candidate, int *
# 174 "kernel.cu"
g_out_id, int l_mem_size, int *
# 176 "kernel.cu"
worklist)
# 178 "kernel.cu"
{
# 179 "kernel.cu"
dim3 dimGrid(blocks);
# 180 "kernel.cu"
dim3 dimBlock(threads);
# 181 "kernel.cu"
cudaConfigureCall(dimGrid, dimBlock, l_mem_size) ? ((void)0) : RANSAC_kernel_block(flowvector_count, max_iter, error_threshold, convergence_threshold, n_tasks, alpha, model_param_local, flowvectors, random_numbers, model_candidate, outliers_candidate, g_out_id, worklist);
# 189 "kernel.cu"
cudaError_t err = cudaGetLastError();
# 190 "kernel.cu"
return err;
# 191 "kernel.cu"
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
"__deviceText_$compute_20$:\n"
".quad 0x6f69737265762e09,0x2e090a322e32206e,0x7320746567726174,0x2f2f090a30325f6d\n"
".quad 0x656c69706d6f6320,0x2f20687469772064,0x61636f6c2f727375,0x6f2f616475632f6c\n"
".quad 0x696c2f34366e6570,0x2f090a65622f2f62,0x6e65706f766e202f,0x6220322e33206363\n"
".quad 0x206e6f20746c6975,0x2d31312d30313032,0x69762e090a0a3330,0x662e20656c626973\n"
".quad 0x61702e2820636e75,0x3233732e206d6172,0x72616475635f5f20,0x38315a5f5f667465\n"
".quad 0x65646f6d5f6e6567,0x476d617261705f6c,0x6969696969695550,0x5a5f202966506969\n"
".quad 0x6f6d5f6e65673831,0x617261705f6c6564,0x696969695550476d,0x2820665069696969\n"
".quad 0x2e206d617261702e,0x75635f5f20323373,0x31666d7261706164,0x6e656738315a5f5f\n"
".quad 0x705f6c65646f6d5f,0x695550476d617261,0x5069696969696969,0x617261702e202c66\n"
".quad 0x5f203233732e206d,0x726170616475635f,0x38315a5f5f32666d,0x65646f6d5f6e6567\n"
".quad 0x476d617261705f6c,0x6969696969695550,0x702e202c66506969,0x33732e206d617261\n"
".quad 0x616475635f5f2032,0x5f5f33666d726170,0x6d5f6e656738315a,0x7261705f6c65646f\n"
".quad 0x6969695550476d61,0x2c66506969696969,0x206d617261702e20,0x635f5f203233732e\n"
".quad 0x666d726170616475,0x656738315a5f5f34,0x5f6c65646f6d5f6e,0x5550476d61726170\n"
".quad 0x6969696969696969,0x7261702e202c6650,0x203233732e206d61,0x6170616475635f5f\n"
".quad 0x315a5f5f35666d72,0x646f6d5f6e656738,0x6d617261705f6c65,0x6969696969555047\n"
".quad 0x2e202c6650696969,0x732e206d61726170,0x6475635f5f203233,0x5f36666d72617061\n"
".quad 0x5f6e656738315a5f,0x61705f6c65646f6d,0x69695550476d6172,0x6650696969696969\n"
".quad 0x6d617261702e202c,0x5f5f203233732e20,0x6d72617061647563,0x6738315a5f5f3766\n"
".quad 0x6c65646f6d5f6e65,0x50476d617261705f,0x6969696969696955,0x61702e202c665069\n"
".quad 0x3233732e206d6172,0x70616475635f5f20,0x5a5f5f38666d7261,0x6f6d5f6e65673831\n"
".quad 0x617261705f6c6564,0x696969695550476d,0x202c665069696969,0x2e206d617261702e\n"
".quad 0x75635f5f20343675,0x39666d7261706164,0x6e656738315a5f5f,0x705f6c65646f6d5f\n"
".quad 0x695550476d617261,0x5069696969696969,0x2d2f2f090a0a2966,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x43202f2f090a2d2d,0x676e696c69706d6f\n"
".quad 0x2e6c656e72656b20,0x2820692e33707063,0x4263632f706d742f,0x46746268422e2349\n"
".quad 0x2d2d2f2f090a2945,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2f2f090a0a2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x704f202f2f090a2d,0x090a3a736e6f6974,0x2d2d2d2d2d2d2f2f,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2f090a2d2d2d2d2d,0x656772615420202f,0x49202c7874703a74\n"
".quad 0x30325f6d733a4153,0x6e6169646e45202c,0x2c656c7474696c3a,0x7265746e696f5020\n"
".quad 0x34363a657a695320,0x4f2d20202f2f090a,0x6d6974704f280933,0x206e6f6974617a69\n"
".quad 0x090a296c6576656c,0x0930672d20202f2f,0x6c20677562654428,0x2f090a296c657665\n"
".quad 0x2809326d2d20202f,0x612074726f706552,0x6569726f73697664,0x2d2d2f2f090a2973\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x6c69662e090a0a2d\n"
".quad 0x6f633c2209310965,0x696c2d646e616d6d,0x662e090a223e656e,0x6b22093209656c69\n"
".quad 0x75632e6c656e7265,0x70672e3265666164,0x6c69662e090a2275,0x7075732209330965\n"
".quad 0x6d6f632f74726f70,0x090a22682e6e6f6d,0x093409656c69662e,0x74726f7070757322\n"
".quad 0x697469747261702f,0x0a22682e72656e6f,0x3509656c69662e09,0x6c2f7273752f2209\n"
".quad 0x782f6363672f6269,0x696c2d34365f3638,0x2f756e672d78756e,0x6c636e692f362e34\n"
".quad 0x646474732f656475,0x2e090a22682e6665,0x22093609656c6966,0x636f6c2f7273752f\n"
".quad 0x2f616475632f6c61,0x692f2e2e2f6e6962,0x632f6564756c636e,0x63697665642f7472\n"
".quad 0x6d69746e75725f65,0x662e090a22682e65,0x2f22093709656c69,0x61636f6c2f727375\n"
".quad 0x622f616475632f6c,0x6e692f2e2e2f6e69,0x6f682f6564756c63,0x6e696665645f7473\n"
".quad 0x2e090a22682e7365,0x22093809656c6966,0x636f6c2f7273752f,0x2f616475632f6c61\n"
".quad 0x692f2e2e2f6e6962,0x622f6564756c636e,0x745f6e69746c6975,0x0a22682e73657079\n"
".quad 0x3909656c69662e09,0x6c2f7273752f2209,0x6475632f6c61636f,0x2e2e2f6e69622f61\n"
".quad 0x6564756c636e692f,0x5f6563697665642f,0x22682e7365707974,0x09656c69662e090a\n"
".quad 0x7273752f22093031,0x632f6c61636f6c2f,0x2f6e69622f616475,0x756c636e692f2e2e\n"
".quad 0x65766972642f6564,0x2e73657079745f72,0x6c69662e090a2268,0x752f220931310965\n"
".quad 0x6c61636f6c2f7273,0x69622f616475632f,0x636e692f2e2e2f6e,0x7275732f6564756c\n"
".quad 0x7079745f65636166,0x2e090a22682e7365,0x09323109656c6966,0x6f6c2f7273752f22\n"
".quad 0x616475632f6c6163,0x2f2e2e2f6e69622f,0x2f6564756c636e69,0x5f65727574786574\n"
".quad 0x22682e7365707974,0x09656c69662e090a,0x7273752f22093331,0x632f6c61636f6c2f\n"
".quad 0x2f6e69622f616475,0x756c636e692f2e2e,0x6f746365762f6564,0x2e73657079745f72\n"
".quad 0x6c69662e090a2268,0x752f220934310965,0x6c61636f6c2f7273,0x69622f616475632f\n"
".quad 0x636e692f2e2e2f6e,0x7665642f6564756c,0x6e75616c5f656369,0x6d617261705f6863\n"
".quad 0x22682e7372657465,0x09656c69662e090a,0x7273752f22093531,0x632f6c61636f6c2f\n"
".quad 0x2f6e69622f616475,0x756c636e692f2e2e,0x732f7472632f6564,0x635f656761726f74\n"
".quad 0x0a22682e7373616c,0x3109656c69662e09,0x2f7273752f220936,0x2f6564756c636e69\n"
".quad 0x6c2d34365f363878,0x756e672d78756e69,0x79742f737469622f,0x090a22682e736570\n"
".quad 0x373109656c69662e,0x692f7273752f2209,0x742f6564756c636e,0x090a22682e656d69\n"
".quad 0x383109656c69662e,0x6c2f7273752f2209,0x6475632f6c61636f,0x2e2e2f6e69622f61\n"
".quad 0x6564756c636e692f,0x615f31315f6d732f,0x75665f63696d6f74,0x2e736e6f6974636e\n"
".quad 0x6c69662e090a2268,0x656b220939310965,0x2275632e6c656e72,0x09656c69662e090a\n"
".quad 0x7273752f22093032,0x632f6c61636f6c2f,0x2f6e69622f616475,0x756c636e692f2e2e\n"
".quad 0x6f6d6d6f632f6564,0x6974636e75665f6e,0x090a22682e736e6f,0x313209656c69662e\n"
".quad 0x6c2f7273752f2209,0x6475632f6c61636f,0x2e2e2f6e69622f61,0x6564756c636e692f\n"
".quad 0x75665f6874616d2f,0x2e736e6f6974636e,0x6c69662e090a2268,0x752f220932320965\n"
".quad 0x6c61636f6c2f7273,0x69622f616475632f,0x636e692f2e2e2f6e,0x74616d2f6564756c\n"
".quad 0x6174736e6f635f68,0x090a22682e73746e,0x333209656c69662e,0x6c2f7273752f2209\n"
".quad 0x6475632f6c61636f,0x2e2e2f6e69622f61,0x6564756c636e692f,0x5f6563697665642f\n"
".quad 0x6e6f6974636e7566,0x662e090a22682e73,0x2209343209656c69,0x636f6c2f7273752f\n"
".quad 0x2f616475632f6c61,0x692f2e2e2f6e6962,0x732f6564756c636e,0x6f74615f32315f6d\n"
".quad 0x636e75665f63696d,0x22682e736e6f6974,0x09656c69662e090a,0x7273752f22093532\n"
".quad 0x632f6c61636f6c2f,0x2f6e69622f616475,0x756c636e692f2e2e,0x33315f6d732f6564\n"
".quad 0x5f656c62756f645f,0x6e6f6974636e7566,0x662e090a22682e73,0x2209363209656c69\n"
".quad 0x636f6c2f7273752f,0x2f616475632f6c61,0x692f2e2e2f6e6962,0x732f6564756c636e\n"
".quad 0x6f74615f30325f6d,0x636e75665f63696d,0x22682e736e6f6974,0x09656c69662e090a\n"
".quad 0x7273752f22093732,0x632f6c61636f6c2f,0x2f6e69622f616475,0x756c636e692f2e2e\n"
".quad 0x30325f6d732f6564,0x736e6972746e695f,0x090a22682e736369,0x383209656c69662e\n"
".quad 0x6c2f7273752f2209,0x6475632f6c61636f,0x2e2e2f6e69622f61,0x6564756c636e692f\n"
".quad 0x656361667275732f,0x6f6974636e75665f,0x2e090a22682e736e,0x09393209656c6966\n"
".quad 0x6f6c2f7273752f22,0x616475632f6c6163,0x2f2e2e2f6e69622f,0x2f6564756c636e69\n"
".quad 0x5f65727574786574,0x75665f6863746566,0x2e736e6f6974636e,0x6c69662e090a2268\n"
".quad 0x752f220930330965,0x6c61636f6c2f7273,0x69622f616475632f,0x636e692f2e2e2f6e\n"
".quad 0x74616d2f6564756c,0x6974636e75665f68,0x5f6c62645f736e6f,0x0a22682e33787470\n"
".quad 0x697369762e090a0a,0x6e75662e20656c62,0x617261702e282063,0x5f203233732e206d\n"
".quad 0x746572616475635f,0x656738315a5f5f66,0x5f6c65646f6d5f6e,0x5550476d61726170\n"
".quad 0x6969696969696969,0x38315a5f20296650,0x65646f6d5f6e6567,0x476d617261705f6c\n"
".quad 0x6969696969695550,0x702e282066506969,0x33732e206d617261,0x616475635f5f2032\n"
".quad 0x5f5f31666d726170,0x6d5f6e656738315a,0x7261705f6c65646f,0x6969695550476d61\n"
".quad 0x2c66506969696969,0x206d617261702e20,0x635f5f203233732e,0x666d726170616475\n"
".quad 0x656738315a5f5f32,0x5f6c65646f6d5f6e,0x5550476d61726170,0x6969696969696969\n"
".quad 0x7261702e202c6650,0x203233732e206d61,0x6170616475635f5f,0x315a5f5f33666d72\n"
".quad 0x646f6d5f6e656738,0x6d617261705f6c65,0x6969696969555047,0x2e202c6650696969\n"
".quad 0x732e206d61726170,0x6475635f5f203233,0x5f34666d72617061,0x5f6e656738315a5f\n"
".quad 0x61705f6c65646f6d,0x69695550476d6172,0x6650696969696969,0x6d617261702e202c\n"
".quad 0x5f5f203233732e20,0x6d72617061647563,0x6738315a5f5f3566,0x6c65646f6d5f6e65\n"
".quad 0x50476d617261705f,0x6969696969696955,0x61702e202c665069,0x3233732e206d6172\n"
".quad 0x70616475635f5f20,0x5a5f5f36666d7261,0x6f6d5f6e65673831,0x617261705f6c6564\n"
".quad 0x696969695550476d,0x202c665069696969,0x2e206d617261702e,0x75635f5f20323373\n"
".quad 0x37666d7261706164,0x6e656738315a5f5f,0x705f6c65646f6d5f,0x695550476d617261\n"
".quad 0x5069696969696969,0x617261702e202c66,0x5f203233732e206d,0x726170616475635f\n"
".quad 0x38315a5f5f38666d,0x65646f6d5f6e6567,0x476d617261705f6c,0x6969696969695550\n"
".quad 0x702e202c66506969,0x36752e206d617261,0x616475635f5f2034,0x5f5f39666d726170\n"
".quad 0x6d5f6e656738315a,0x7261705f6c65646f,0x6969695550476d61,0x2966506969696969\n"
".quad 0x65722e090a7b090a,0x25203233752e2067,0x090a3b3e38393c72,0x36752e206765722e\n"
".quad 0x3e343c6472252034,0x206765722e090a3b,0x3c6625203233662e,0x722e090a3b3e3431\n"
".quad 0x646572702e206765,0x0a3b3e343c702520,0x393109636f6c2e09,0x4c240a3009333409\n"
".quad 0x5f6e696765625744,0x5f6e656738315a5f,0x61705f6c65646f6d,0x69695550476d6172\n"
".quad 0x6650696969696969,0x61702e646c090a3a,0x203233752e6d6172,0x5f5b202c31722509\n"
".quad 0x726170616475635f,0x38315a5f5f31666d,0x65646f6d5f6e6567,0x476d617261705f6c\n"
".quad 0x6969696969695550,0x090a3b5d66506969,0x203233732e766f6d,0x7225202c32722509\n"
".quad 0x702e646c090a3b31,0x3233752e6d617261,0x5b202c3372250920,0x6170616475635f5f\n"
".quad 0x315a5f5f32666d72,0x646f6d5f6e656738,0x6d617261705f6c65,0x6969696969555047\n"
".quad 0x0a3b5d6650696969,0x3233732e766f6d09,0x25202c3472250920,0x2e646c090a3b3372\n"
".quad 0x33752e6d61726170,0x202c357225092032,0x70616475635f5f5b,0x5a5f5f33666d7261\n"
".quad 0x6f6d5f6e65673831,0x617261705f6c6564,0x696969695550476d,0x3b5d665069696969\n"
".quad 0x33732e766f6d090a,0x202c367225092032,0x646c090a3b357225,0x752e6d617261702e\n"
".quad 0x2c37722509203233,0x616475635f5f5b20,0x5f5f34666d726170,0x6d5f6e656738315a\n"
".quad 0x7261705f6c65646f,0x6969695550476d61,0x5d66506969696969,0x732e766f6d090a3b\n"
".quad 0x2c38722509203233,0x6c090a3b37722520,0x2e6d617261702e64,0x3972250920323375\n"
".quad 0x6475635f5f5b202c,0x5f35666d72617061,0x5f6e656738315a5f,0x61705f6c65646f6d\n"
".quad 0x69695550476d6172,0x6650696969696969,0x2e766f6d090a3b5d,0x3172250920323373\n"
".quad 0x0a3b397225202c30,0x617261702e646c09,0x2509203233752e6d,0x5f5f5b202c313172\n"
".quad 0x6d72617061647563,0x6738315a5f5f3666,0x6c65646f6d5f6e65,0x50476d617261705f\n"
".quad 0x6969696969696955,0x6d090a3b5d665069,0x09203233732e766f,0x7225202c32317225\n"
".quad 0x2e646c090a3b3131,0x33752e6d61726170,0x2c33317225092032,0x616475635f5f5b20\n"
".quad 0x5f5f37666d726170,0x6d5f6e656738315a,0x7261705f6c65646f,0x6969695550476d61\n"
".quad 0x5d66506969696969,0x732e766f6d090a3b,0x3431722509203233,0x0a3b33317225202c\n"
".quad 0x617261702e646c09,0x2509203233752e6d,0x5f5f5b202c353172,0x6d72617061647563\n"
".quad 0x6738315a5f5f3866,0x6c65646f6d5f6e65,0x50476d617261705f,0x6969696969696955\n"
".quad 0x6d090a3b5d665069,0x09203233732e766f,0x7225202c36317225,0x2e646c090a3b3531\n"
".quad 0x36752e6d61726170,0x2c31647225092034,0x616475635f5f5b20,0x5f5f39666d726170\n"
".quad 0x6d5f6e656738315a,0x7261705f6c65646f,0x6969695550476d61,0x5d66506969696969\n"
".quad 0x732e766f6d090a3b,0x3264722509203436,0x0a3b31647225202c,0x2e6f6c2e6c756d09\n"
".quad 0x3172250920323373,0x2c34317225202c37,0x6c756d090a3b3220,0x203233732e6f6c2e\n"
".quad 0x25202c3831722509,0x317225202c343172,0x2e6c756d090a3b34,0x09203233732e6f6c\n"
".quad 0x7225202c39317225,0x0a3b387225202c38,0x2e6f6c2e6c756d09,0x3272250920323373\n"
".quad 0x202c387225202c30,0x2e627573090a3b32,0x3272250920323373,0x202c367225202c31\n"
".quad 0x73090a3b37317225,0x09203233732e6275,0x7225202c32327225,0x36317225202c3032\n"
".quad 0x6c2e6c756d090a3b,0x2509203233732e6f,0x327225202c333272,0x0a3b367225202c31\n"
".quad 0x2e6f6c2e6c756d09,0x3272250920323373,0x2c32327225202c34,0x090a3b3631722520\n"
".quad 0x203233732e646461,0x25202c3532722509,0x327225202c383172,0x2e646461090a3b33\n"
".quad 0x3272250920323373,0x2c39317225202c36,0x090a3b3532722520,0x203233732e627573\n"
".quad 0x25202c3732722509,0x327225202c363272,0x2e747663090a3b34,0x732e3233662e6e72\n"
".quad 0x2c31662509203233,0x090a3b3732722520,0x203233662e766f6d,0x6630202c32662509\n"
".quad 0x3030303030303030,0x2f0920202020203b,0x746573090a30202f,0x3233662e71652e70\n"
".quad 0x25202c3170250920,0x3b326625202c3166,0x203170252140090a,0x744c240920617262\n"
".quad 0x3b343937315f305f,0x3109636f6c2e090a,0x090a300938340939,0x203233732e766f6d\n"
".quad 0x30202c3832722509,0x752e617262090a3b,0x42424c240920696e,0x656738315a5f5f36\n"
".quad 0x5f6c65646f6d5f6e,0x5550476d61726170,0x6969696969696969,0x5f744c240a3b6650\n"
".quad 0x0a3a343937315f30,0x393109636f6c2e09,0x6d090a3009303509,0x33732e6f6c2e6c75\n"
".quad 0x2c39327225092032,0x7225202c34722520,0x6c756d090a3b3631,0x203233732e6f6c2e\n"
".quad 0x25202c3033722509,0x34317225202c3472,0x6c2e6c756d090a3b,0x2509203233732e6f\n"
".quad 0x367225202c313372,0x0a3b30317225202c,0x2e6f6c2e6c756d09,0x3372250920323373\n"
".quad 0x202c327225202c32,0x73090a3b34317225,0x09203233732e6275,0x7225202c33337225\n"
".quad 0x32337225202c3133,0x6c2e6c756d090a3b,0x2509203233732e6f,0x317225202c343372\n"
".quad 0x3b34317225202c30,0x33732e627573090a,0x2c35337225092032,0x25202c3333722520\n"
".quad 0x6461090a3b343372,0x2509203233732e64,0x327225202c363372,0x3b35337225202c39\n"
".quad 0x6f6c2e6c756d090a,0x722509203233732e,0x32317225202c3733,0x0a3b36317225202c\n"
".quad 0x3233732e62757309,0x202c383372250920,0x7225202c36337225,0x6c756d090a3b3733\n"
".quad 0x203233732e6f6c2e,0x25202c3933722509,0x38337225202c3672,0x6c2e6c756d090a3b\n"
".quad 0x2509203233732e6f,0x317225202c303472,0x3b34317225202c32,0x6f6c2e6c756d090a\n"
".quad 0x722509203233732e,0x2c387225202c3134,0x090a3b3031722520,0x732e6f6c2e6c756d\n"
".quad 0x3234722509203233,0x25202c327225202c,0x7573090a3b363172,0x2509203233732e62\n"
".quad 0x347225202c333472,0x3b32347225202c31,0x6f6c2e6c756d090a,0x722509203233732e\n"
".quad 0x30317225202c3434,0x0a3b36317225202c,0x3233732e62757309,0x202c353472250920\n"
".quad 0x7225202c33347225,0x627573090a3b3434,0x722509203233732e,0x35347225202c3634\n"
".quad 0x0a3b30337225202c,0x3233732e64646109,0x202c373472250920,0x7225202c30347225\n"
".quad 0x6c756d090a3b3634,0x203233732e6f6c2e,0x25202c3834722509,0x37347225202c3872\n"
".quad 0x732e646461090a3b,0x3934722509203233,0x202c39337225202c,0x6d090a3b38347225\n"
".quad 0x33732e6f6c2e6c75,0x2c30357225092032,0x25202c3631722520,0x6461090a3b363172\n"
".quad 0x2509203233732e64,0x317225202c313572,0x3b30357225202c38,0x6f6c2e6c756d090a\n"
".quad 0x722509203233732e,0x2c327225202c3235,0x090a3b3135722520,0x203233732e646461\n"
".quad 0x25202c3335722509,0x357225202c393472,0x2e747663090a3b32,0x732e3233662e6e72\n"
".quad 0x2c33662509203233,0x090a3b3335722520,0x662e6e722e766964,0x2c34662509203233\n"
".quad 0x6625202c33662520,0x662e7473090a3b31,0x6472255b09203233,0x6625202c5d302b32\n"
".quad 0x636f6c2e090a3b34,0x3009343509393109,0x33732e627573090a,0x2c34357225092032\n"
".quad 0x7225202c32722520,0x6c756d090a3b3031,0x203233732e6f6c2e,0x25202c3535722509\n"
".quad 0x387225202c343572,0x6c2e6c756d090a3b,0x2509203233732e6f,0x347225202c363572\n"
".quad 0x090a3b367225202c,0x203233732e627573,0x25202c3735722509,0x357225202c353572\n"
".quad 0x2e646461090a3b36,0x3572250920323373,0x2c30337225202c38,0x090a3b3735722520\n"
".quad 0x732e6f6c2e6c756d,0x3935722509203233,0x25202c367225202c,0x7573090a3b323172\n"
".quad 0x2509203233732e62,0x357225202c303672,0x3b39357225202c38,0x6f6c2e6c756d090a\n"
".quad 0x722509203233732e,0x34317225202c3136,0x0a3b30367225202c,0x3233732e62757309\n"
".quad 0x202c323672250920,0x7225202c30317225,0x2e6c756d090a3b32,0x09203233732e6f6c\n"
".quad 0x7225202c33367225,0x3b32367225202c36,0x6f6c2e6c756d090a,0x722509203233732e\n"
".quad 0x2c347225202c3436,0x73090a3b38722520,0x09203233732e6275,0x7225202c35367225\n"
".quad 0x34367225202c3336,0x732e646461090a3b,0x3636722509203233,0x202c39327225202c\n"
".quad 0x6d090a3b35367225,0x33732e6f6c2e6c75,0x2c37367225092032,0x7225202c38722520\n"
".quad 0x627573090a3b3231,0x722509203233732e,0x36367225202c3836,0x0a3b37367225202c\n"
".quad 0x2e6f6c2e6c756d09,0x3672250920323373,0x2c36317225202c39,0x090a3b3836722520\n"
".quad 0x203233732e646461,0x25202c3037722509,0x367225202c313672,0x2e6c756d090a3b39\n"
".quad 0x09203233732e6f6c,0x7225202c31377225,0x0a3b367225202c36,0x3233732e64646109\n"
".quad 0x202c323772250920,0x7225202c39317225,0x6c756d090a3b3137,0x203233732e6f6c2e\n"
".quad 0x25202c3337722509,0x377225202c323172,0x2e646461090a3b32,0x3772250920323373\n"
".quad 0x2c30377225202c34,0x090a3b3337722520,0x662e6e722e747663,0x09203233732e3233\n"
".quad 0x377225202c356625,0x2e766964090a3b34,0x09203233662e6e72,0x356625202c366625\n"
".quad 0x090a3b316625202c,0x09203233662e7473,0x5d342b326472255b,0x090a3b366625202c\n"
".quad 0x732e6f6c2e6c756d,0x3537722509203233,0x202c30317225202c,0x2e6c756d090a3b32\n"
".quad 0x09203233732e6f6c,0x7225202c36377225,0x30317225202c3031,0x6c2e6c756d090a3b\n"
".quad 0x2509203233732e6f,0x317225202c373772,0x6d090a3b32202c32,0x33732e6f6c2e6c75\n"
".quad 0x2c38377225092032,0x25202c3231722520,0x7573090a3b323172,0x2509203233732e62\n"
".quad 0x327225202c393772,0x0a3b35377225202c,0x3233732e62757309,0x202c303872250920\n"
".quad 0x377225202c347225,0x2e6c756d090a3b37,0x09203233732e6f6c,0x7225202c31387225\n"
".quad 0x3b327225202c3937,0x6f6c2e6c756d090a,0x722509203233732e,0x30387225202c3238\n"
".quad 0x090a3b347225202c,0x203233732e646461,0x25202c3338722509,0x387225202c363772\n"
".quad 0x2e646461090a3b31,0x3872250920323373,0x2c38377225202c34,0x090a3b3238722520\n"
".quad 0x203233732e646461,0x25202c3538722509,0x387225202c333872,0x2e747663090a3b34\n"
".quad 0x732e3233662e6e72,0x2c37662509203233,0x090a3b3538722520,0x203233662e766f6d\n"
".quad 0x6630202c38662509,0x3030303030303030,0x2f0920202020203b,0x746573090a30202f\n"
".quad 0x3233662e71652e70,0x25202c3270250920,0x3b386625202c3766,0x203270252140090a\n"
".quad 0x744c240920617262,0x3b363033325f305f,0x3109636f6c2e090a,0x090a300931360939\n"
".quad 0x203233732e766f6d,0x30202c3832722509,0x752e617262090a3b,0x42424c240920696e\n"
".quad 0x656738315a5f5f36,0x5f6c65646f6d5f6e,0x5550476d61726170,0x6969696969696969\n"
".quad 0x5f744c240a3b6650,0x0a3a363033325f30,0x393109636f6c2e09,0x73090a3009333609\n"
".quad 0x09203233732e6275,0x7225202c36387225,0x3b34317225202c36,0x33732e627573090a\n"
".quad 0x2c37387225092032,0x7225202c38722520,0x6c756d090a3b3631,0x203233732e6f6c2e\n"
".quad 0x25202c3838722509,0x387225202c343572,0x2e627573090a3b36,0x3872250920323373\n"
".quad 0x202c347225202c39,0x6d090a3b32317225,0x33732e6f6c2e6c75,0x2c30397225092032\n"
".quad 0x25202c3738722520,0x6461090a3b393872,0x2509203233732e64,0x387225202c313972\n"
".quad 0x3b30397225202c38,0x6e722e747663090a,0x3233732e3233662e,0x25202c3966250920\n"
".quad 0x6964090a3b313972,0x3233662e6e722e76,0x202c303166250920,0x376625202c396625\n"
".quad 0x33662e7473090a3b,0x326472255b092032,0x316625202c5d382b,0x636f6c2e090a3b30\n"
".quad 0x3009343609393109,0x6f6c2e6c756d090a,0x722509203233732e,0x34357225202c3239\n"
".quad 0x0a3b37387225202c,0x3233732e62757309,0x202c333972250920,0x7225202c32317225\n"
".quad 0x2e6c756d090a3b34,0x09203233732e6f6c,0x7225202c34397225,0x33397225202c3638\n"
".quad 0x732e646461090a3b,0x3539722509203233,0x202c32397225202c,0x63090a3b34397225\n"
".quad 0x33662e6e722e7476,0x2509203233732e32,0x397225202c313166,0x2e766964090a3b35\n"
".quad 0x09203233662e6e72,0x6625202c32316625,0x3b376625202c3131,0x3233662e7473090a\n"
".quad 0x2b326472255b0920,0x316625202c5d3231,0x636f6c2e090a3b32,0x3009353609393109\n"
".quad 0x33732e766f6d090a,0x2c38327225092032,0x42424c240a3b3120,0x656738315a5f5f36\n"
".quad 0x5f6c65646f6d5f6e,0x5550476d61726170,0x6969696969696969,0x766f6d090a3a6650\n"
".quad 0x722509203233732e,0x38327225202c3639,0x61702e7473090a3b,0x203233732e6d6172\n"
".quad 0x616475635f5f5b09,0x315a5f5f66746572,0x646f6d5f6e656738,0x6d617261705f6c65\n"
".quad 0x6969696969555047,0x202c5d6650696969,0x72090a3b36397225,0x57444c240a3b7465\n"
".quad 0x38315a5f5f646e65,0x65646f6d5f6e6567,0x476d617261705f6c,0x6969696969695550\n"
".quad 0x7d090a3a66506969,0x38315a5f202f2f20,0x65646f6d5f6e6567,0x476d617261705f6c\n"
".quad 0x6969696969695550,0x652e090a66506969,0x732e096e72657478,0x612e206465726168\n"
".quad 0x2e2034206e67696c,0x6d656d5f6c203862,0x652e090a0a3b5d5b,0x315a5f207972746e\n"
".quad 0x5f4341534e415239,0x625f6c656e72656b,0x666969696b636f6c,0x6630315066506669\n"
".quad 0x6f74636576776f6c,0x32535f3253695072,0x205f32535f32535f,0x7261702e09090a28\n"
".quad 0x203233732e206d61,0x6170616475635f5f,0x5239315a5f5f6d72,0x656b5f4341534e41\n"
".quad 0x6f6c625f6c656e72,0x6669666969696b63,0x6f6c663031506650,0x50726f7463657677\n"
".quad 0x535f32535f325369,0x6c665f5f32535f32,0x726f74636576776f,0x0a2c746e756f635f\n"
".quad 0x6d617261702e0909,0x5f5f203233732e20,0x6d72617061647563,0x4e415239315a5f5f\n"
".quad 0x6e72656b5f434153,0x6b636f6c625f6c65,0x6650666966696969,0x76776f6c66303150\n"
".quad 0x536950726f746365,0x5f32535f32535f32,0x5f78616d5f5f3253,0x09090a2c72657469\n"
".quad 0x2e206d617261702e,0x75635f5f20323373,0x5f5f6d7261706164,0x41534e415239315a\n"
".quad 0x6c656e72656b5f43,0x69696b636f6c625f,0x3150665066696669,0x636576776f6c6630\n"
".quad 0x5f32536950726f74,0x32535f32535f3253,0x5f726f7272655f5f,0x6c6f687365726874\n"
".quad 0x61702e09090a2c64,0x3233662e206d6172,0x70616475635f5f20,0x39315a5f5f6d7261\n"
".quad 0x6b5f4341534e4152,0x6c625f6c656e7265,0x69666969696b636f,0x6c66303150665066\n"
".quad 0x726f74636576776f,0x5f32535f32536950,0x635f5f32535f3253,0x6e65677265766e6f\n"
".quad 0x73657268745f6563,0x09090a2c646c6f68,0x2e206d617261702e,0x75635f5f20323373\n"
".quad 0x5f5f6d7261706164,0x41534e415239315a,0x6c656e72656b5f43,0x69696b636f6c625f\n"
".quad 0x3150665066696669,0x636576776f6c6630,0x5f32536950726f74,0x32535f32535f3253\n"
".quad 0x6b7361745f6e5f5f,0x61702e09090a2c73,0x3233662e206d6172,0x70616475635f5f20\n"
".quad 0x39315a5f5f6d7261,0x6b5f4341534e4152,0x6c625f6c656e7265,0x69666969696b636f\n"
".quad 0x6c66303150665066,0x726f74636576776f,0x5f32535f32536950,0x615f5f32535f3253\n"
".quad 0x09090a2c6168706c,0x2e206d617261702e,0x75635f5f20343675,0x5f5f6d7261706164\n"
".quad 0x41534e415239315a,0x6c656e72656b5f43,0x69696b636f6c625f,0x3150665066696669\n"
".quad 0x636576776f6c6630,0x5f32536950726f74,0x32535f32535f3253,0x5f6c65646f6d5f5f\n"
".quad 0x6f6c5f6d61726170,0x2e09090a2c6c6163,0x752e206d61726170,0x6475635f5f203436\n"
".quad 0x5a5f5f6d72617061,0x4341534e41523931,0x5f6c656e72656b5f,0x6969696b636f6c62\n"
".quad 0x3031506650666966,0x74636576776f6c66,0x535f32536950726f,0x5f32535f32535f32\n"
".quad 0x636576776f6c665f,0x09090a2c73726f74,0x2e206d617261702e,0x75635f5f20343675\n"
".quad 0x5f5f6d7261706164,0x41534e415239315a,0x6c656e72656b5f43,0x69696b636f6c625f\n"
".quad 0x3150665066696669,0x636576776f6c6630,0x5f32536950726f74,0x32535f32535f3253\n"
".quad 0x6d6f646e61725f5f,0x737265626d756e5f,0x7261702e09090a2c,0x203436752e206d61\n"
".quad 0x6170616475635f5f,0x5239315a5f5f6d72,0x656b5f4341534e41,0x6f6c625f6c656e72\n"
".quad 0x6669666969696b63,0x6f6c663031506650,0x50726f7463657677,0x535f32535f325369\n"
".quad 0x6f6d5f5f32535f32,0x646e61635f6c6564,0x090a2c6574616469,0x206d617261702e09\n"
".quad 0x635f5f203436752e,0x5f6d726170616475,0x534e415239315a5f,0x656e72656b5f4341\n"
".quad 0x696b636f6c625f6c,0x5066506669666969,0x6576776f6c663031,0x32536950726f7463\n"
".quad 0x535f32535f32535f,0x696c74756f5f5f32,0x646e61635f737265,0x090a2c6574616469\n"
".quad 0x206d617261702e09,0x635f5f203436752e,0x5f6d726170616475,0x534e415239315a5f\n"
".quad 0x656e72656b5f4341,0x696b636f6c625f6c,0x5066506669666969,0x6576776f6c663031\n"
".quad 0x32536950726f7463,0x535f32535f32535f,0x74756f5f675f5f32,0x2e09090a2c64695f\n"
".quad 0x752e206d61726170,0x6475635f5f203436,0x5a5f5f6d72617061,0x4341534e41523931\n"
".quad 0x5f6c656e72656b5f,0x6969696b636f6c62,0x3031506650666966,0x74636576776f6c66\n"
".quad 0x535f32536950726f,0x5f32535f32535f32,0x73696c6b726f775f,0x2e090a7b090a2974\n"
".quad 0x3233752e20676572,0x3e3337313c722520,0x206765722e090a3b,0x647225203436752e\n"
".quad 0x2e090a3b3e30343c,0x3233662e20676572,0x3b3e30343c662520,0x2e206765722e090a\n"
".quad 0x3c64662520343666,0x65722e090a3b3e35,0x20646572702e2067,0x0a3b3e39313c7025\n"
".quad 0x32545f5f202f2f09,0x090a3631203d2034,0x6475635f5f202f2f,0x5f6c61636f6c5f61\n"
".quad 0x363639325f726176,0x6e6f6e5f34325f33,0x665f74736e6f635f,0x090a3834203d2076\n"
".quad 0x09393109636f6c2e,0x444c240a30093337,0x5f5f6e6967656257,0x41534e415239315a\n"
".quad 0x6c656e72656b5f43,0x69696b636f6c625f,0x3150665066696669,0x636576776f6c6630\n"
".quad 0x5f32536950726f74,0x32535f32535f3253,0x702e646c090a3a5f,0x3233662e6d617261\n"
".quad 0x5b202c3166250920,0x6170616475635f5f,0x5239315a5f5f6d72,0x656b5f4341534e41\n"
".quad 0x6f6c625f6c656e72,0x6669666969696b63,0x6f6c663031506650,0x50726f7463657677\n"
".quad 0x535f32535f325369,0x6c615f5f32535f32,0x63090a3b5d616870,0x662e3436662e7476\n"
".quad 0x3164662509203233,0x090a3b316625202c,0x203436662e766f6d,0x30202c3264662509\n"
".quad 0x3030303030303064,0x3030303030303030,0x0a30202f2f093b30,0x65672e7074657309\n"
".quad 0x702509203436662e,0x2c31646625202c31,0x090a3b3264662520,0x7262203170252140\n"
".quad 0x315f744c24092061,0x0a3b38313032325f,0x3436662e766f6d09,0x202c336466250920\n"
".quad 0x3030306666336430,0x3030303030303030,0x31202f2f093b3030,0x6c2e70746573090a\n"
".quad 0x2509203436662e65,0x31646625202c3270,0x0a3b33646625202c,0x6220327025214009\n"
".quad 0x5f744c2409206172,0x3b38313032325f31,0x3109636f6c2e090a,0x090a300934380939\n"
".quad 0x6d617261702e646c,0x722509203233732e,0x75635f5f5b202c31,0x5f5f6d7261706164\n"
".quad 0x41534e415239315a,0x6c656e72656b5f43,0x69696b636f6c625f,0x3150665066696669\n"
".quad 0x636576776f6c6630,0x5f32536950726f74,0x32535f32535f3253,0x6b7361745f6e5f5f\n"
".quad 0x747663090a3b5d73,0x2e3233662e6e722e,0x3266250920323373,0x090a3b317225202c\n"
".quad 0x203233662e6c756d,0x6625202c33662509,0x0a3b316625202c32,0x697a722e74766309\n"
".quad 0x3233662e3233732e,0x25202c3272250920,0x766f6d090a3b3366,0x722509203233732e\n"
".quad 0x0a3b327225202c33,0x3233732e766f6d09,0x30202c3472250920,0x752e766f6d090a3b\n"
".quad 0x3164722509203436,0x3b6d656d5f6c202c,0x6e752e617262090a,0x5f315f4c24092069\n"
".quad 0x240a3b3037353331,0x3032325f315f744c,0x315f4c240a3a3831,0x0a3a36323833315f\n"
".quad 0x3436752e766f6d09,0x202c316472250920,0x090a3b6d656d5f6c,0x6d617261702e646c\n"
".quad 0x722509203436752e,0x635f5f5b202c3264,0x5f6d726170616475,0x534e415239315a5f\n"
".quad 0x656e72656b5f4341,0x696b636f6c625f6c,0x5066506669666969,0x6576776f6c663031\n"
".quad 0x32536950726f7463,0x535f32535f32535f,0x6c6b726f775f5f32,0x6d090a3b5d747369\n"
".quad 0x09203436732e766f,0x7225202c33647225,0x646461090a3b3264,0x722509203436752e\n"
".quad 0x31647225202c3464,0x6f6d090a3b34202c,0x2509203436732e76,0x647225202c356472\n"
".quad 0x702e646c090a3b34,0x3233732e6d617261,0x5b202c3172250920,0x6170616475635f5f\n"
".quad 0x5239315a5f5f6d72,0x656b5f4341534e41,0x6f6c625f6c656e72,0x6669666969696b63\n"
".quad 0x6f6c663031506650,0x50726f7463657677,0x535f32535f325369,0x5f6e5f5f32535f32\n"
".quad 0x0a3b5d736b736174,0x3233732e766f6d09,0x31202c3472250920,0x315f315f4c240a3b\n"
".quad 0x6d090a3a30373533,0x09203233732e766f,0x0a3b31202c357225,0x71652e7074657309\n"
".quad 0x702509203233732e,0x202c347225202c33,0x2140090a3b357225,0x2061726220337025\n"
".quad 0x315f315f744c2409,0x6d090a3b36303135,0x09203436732e766f,0x7225202c36647225\n"
".quad 0x747663090a3b3564,0x3233752e3233732e,0x25202c3672250920,0x090a3b782e646974\n"
".quad 0x203233752e766f6d,0x3b30202c37722509,0x71652e746573090a,0x3233752e3233752e\n"
".quad 0x25202c3872250920,0x3b377225202c3672,0x33732e67656e090a,0x202c397225092032\n"
".quad 0x6f6d090a3b387225,0x2509203233752e76,0x697425202c303172,0x6f6d090a3b792e64\n"
".quad 0x2509203233752e76,0x0a3b30202c313172,0x2e71652e74657309,0x203233752e323375\n"
".quad 0x25202c3231722509,0x317225202c303172,0x2e67656e090a3b31,0x3172250920323373\n"
".quad 0x3b32317225202c33,0x33622e646e61090a,0x2c34317225092032,0x7225202c39722520\n"
".quad 0x766f6d090a3b3331,0x722509203233752e,0x090a3b30202c3531,0x2e71652e70746573\n"
".quad 0x3470250920323373,0x202c34317225202c,0x40090a3b35317225,0x2061726220347025\n"
".quad 0x315f315f744c2409,0x2e090a3b32363335,0x3909393109636f6c,0x766f6d090a300937\n"
".quad 0x722509203436732e,0x33647225202c3764,0x732e766f6d090a3b,0x3631722509203233\n"
".quad 0x7461090a3b31202c,0x61626f6c672e6d6f,0x33732e6464612e6c,0x2c37317225092032\n"
".quad 0x2c5d376472255b20,0x090a3b3631722520,0x203233732e766f6d,0x25202c3831722509\n"
".quad 0x7473090a3b373172,0x2e6465726168732e,0x72255b0920323373,0x25202c5d302b3664\n"
".quad 0x744c240a3b383172,0x32363335315f315f,0x732e726162090a3a,0x0a3b300920636e79\n"
".quad 0x726168732e646c09,0x09203233732e6465,0x255b202c39317225,0x0a3b5d302b366472\n"
".quad 0x696e752e61726209,0x5f315f744c240920,0x240a3b3035383431,0x3135315f315f744c\n"
".quad 0x766f6d090a3a3630,0x722509203233732e,0x3b337225202c3032,0x33752e766f6d090a\n"
".quad 0x2c31327225092032,0x2e64696174632520,0x2e646461090a3b78,0x3172250920323375\n"
".quad 0x2c30327225202c39,0x240a3b3132722520,0x3834315f315f744c,0x746573090a3a3035\n"
".quad 0x3233732e656c2e70,0x25202c3570250920,0x39317225202c3172,0x2035702540090a3b\n"
".quad 0x744c240920617262,0x34373835315f315f,0x732e747663090a3b,0x09203233752e3233\n"
".quad 0x7425202c32327225,0x6d090a3b782e6469,0x09203233732e766f,0x3b30202c33327225\n"
".quad 0x652e70746573090a,0x2509203233732e71,0x32327225202c3670,0x0a3b33327225202c\n"
".quad 0x617261702e646c09,0x2509203436752e6d,0x5f5f5b202c386472,0x6d72617061647563\n"
".quad 0x4e415239315a5f5f,0x6e72656b5f434153,0x6b636f6c625f6c65,0x6650666966696969\n"
".quad 0x76776f6c66303150,0x536950726f746365,0x5f32535f32535f32,0x65646f6d5f5f3253\n"
".quad 0x5f6d617261705f6c,0x0a3b5d6c61636f6c,0x36315f315f744c24,0x2f2f200a3a363833\n"
".quad 0x4c203e706f6f6c3c,0x79646f6220706f6f,0x373920656e696c20,0x203670252140090a\n"
".quad 0x744c240920617262,0x38393836315f315f,0x6f6c3c2f2f200a3b,0x74726150203e706f\n"
".quad 0x706f6f6c20666f20,0x696c2079646f6220,0x68202c373920656e,0x6562616c20646165\n"
".quad 0x5f744c242064656c,0x0a36383336315f31,0x393109636f6c2e09,0x090a300934303109\n"
".quad 0x203233732e766f6d,0x30202c3432722509,0x68732e7473090a3b,0x3233732e64657261\n"
".quad 0x6d656d5f6c5b0920,0x327225202c5d302b,0x636f6c2e090a3b34,0x0936303109393109\n"
".quad 0x61702e646c090a30,0x203436752e6d6172,0x5b202c3964722509,0x6170616475635f5f\n"
".quad 0x5239315a5f5f6d72,0x656b5f4341534e41,0x6f6c625f6c656e72,0x6669666969696b63\n"
".quad 0x6f6c663031506650,0x50726f7463657677,0x535f32535f325369,0x61725f5f32535f32\n"
".quad 0x6d756e5f6d6f646e,0x090a3b5d73726562,0x732e6f6c2e6c756d,0x3532722509203233\n"
".quad 0x202c39317225202c,0x2e747663090a3b32,0x203233732e343673,0x202c303164722509\n"
".quad 0x6d090a3b35327225,0x2e656469772e6c75,0x6472250920323373,0x35327225202c3131\n"
".quad 0x6461090a3b34202c,0x2509203436752e64,0x7225202c32316472,0x31647225202c3964\n"
".quad 0x672e646c090a3b31,0x33732e6c61626f6c,0x2c36327225092032,0x2b32316472255b20\n"
".quad 0x6f6c2e090a3b5d30,0x3830310939310963,0x702e646c090a3009,0x3436752e6d617261\n"
".quad 0x2c33316472250920,0x616475635f5f5b20,0x315a5f5f6d726170,0x5f4341534e415239\n"
".quad 0x625f6c656e72656b,0x666969696b636f6c,0x6630315066506669,0x6f74636576776f6c\n"
".quad 0x32535f3253695072,0x5f5f32535f32535f,0x74636576776f6c66,0x63090a3b5d73726f\n"
".quad 0x732e3436732e7476,0x3164722509203233,0x3b36327225202c34,0x69772e6c756d090a\n"
".quad 0x09203233732e6564,0x25202c3531647225,0x3b3631202c363272,0x36752e646461090a\n"
".quad 0x3631647225092034,0x2c3331647225202c,0x0a3b353164722520,0x626f6c672e646c09\n"
".quad 0x09203233732e6c61,0x255b202c37327225,0x3b5d302b36316472,0x33732e766f6d090a\n"
".quad 0x2c38327225092032,0x090a3b3732722520,0x61626f6c672e646c,0x2509203233732e6c\n"
".quad 0x72255b202c393272,0x0a3b5d342b363164,0x3233732e766f6d09,0x202c303372250920\n"
".quad 0x6c090a3b39327225,0x6c61626f6c672e64,0x722509203233732e,0x6472255b202c3133\n"
".quad 0x090a3b5d382b3631,0x203233732e766f6d,0x25202c3233722509,0x646c090a3b313372\n"
".quad 0x2e6c61626f6c672e,0x3372250920323373,0x316472255b202c33,0x090a3b5d32312b36\n"
".quad 0x203233732e766f6d,0x25202c3433722509,0x6c2e090a3b333372,0x303109393109636f\n"
".quad 0x2e646c090a300939,0x732e6c61626f6c67,0x3533722509203233,0x32316472255b202c\n"
".quad 0x6c2e090a3b5d342b,0x313109393109636f,0x747663090a300930,0x3233732e3436732e\n"
".quad 0x2c37316472250920,0x090a3b3533722520,0x656469772e6c756d,0x722509203233732e\n"
".quad 0x337225202c383164,0x090a3b3631202c35,0x203436752e646461,0x202c393164722509\n"
".quad 0x25202c3331647225,0x6c090a3b38316472,0x6c61626f6c672e64,0x722509203233732e\n"
".quad 0x6472255b202c3633,0x090a3b5d302b3931,0x203233732e766f6d,0x25202c3733722509\n"
".quad 0x646c090a3b363372,0x2e6c61626f6c672e,0x3372250920323373,0x316472255b202c38\n"
".quad 0x6d090a3b5d342b39,0x09203233732e766f,0x7225202c39337225,0x2e646c090a3b3833\n"
".quad 0x732e6c61626f6c67,0x3034722509203233,0x39316472255b202c,0x6f6d090a3b5d382b\n"
".quad 0x2509203233732e76,0x347225202c313472,0x672e646c090a3b30,0x33732e6c61626f6c\n"
".quad 0x2c32347225092032,0x2b39316472255b20,0x6f6d090a3b5d3231,0x2509203233732e76\n"
".quad 0x347225202c333472,0x636f6c2e090a3b32,0x0939313109393109,0x6c2e6c756d090a30\n"
".quad 0x2509203233732e6f,0x317225202c343472,0x73090a3b34202c39,0x09203233732e6275\n"
".quad 0x7225202c35347225,0x37327225202c3133,0x732e627573090a3b,0x3634722509203233\n"
".quad 0x202c30347225202c,0x73090a3b36337225,0x09203233732e6275,0x7225202c37347225\n"
".quad 0x39327225202c3333,0x732e627573090a3b,0x3834722509203233,0x202c32347225202c\n"
".quad 0x63090a3b38337225,0x732e3436732e7476,0x3264722509203233,0x3b34347225202c30\n"
".quad 0x6f6c2e6c756d090a,0x722509203233732e,0x36347225202c3934,0x756d090a3b32202c\n"
".quad 0x3233732e6f6c2e6c,0x202c303572250920,0x7225202c36347225,0x6c756d090a3b3634\n"
".quad 0x203233732e6f6c2e,0x25202c3135722509,0x347225202c373472,0x2e6c756d090a3b37\n"
".quad 0x09203233732e6f6c,0x7225202c32357225,0x090a3b32202c3734,0x656469772e6c756d\n"
".quad 0x722509203233732e,0x347225202c313264,0x73090a3b34202c34,0x09203233732e6275\n"
".quad 0x7225202c33357225,0x39347225202c3534,0x732e627573090a3b,0x3435722509203233\n"
".quad 0x202c32357225202c,0x61090a3b38347225,0x09203436752e6464,0x25202c3232647225\n"
".quad 0x7225202c31326472,0x6c756d090a3b3864,0x203233732e6f6c2e,0x25202c3535722509\n"
".quad 0x357225202c353472,0x2e6c756d090a3b33,0x09203233732e6f6c,0x7225202c36357225\n"
".quad 0x34357225202c3834,0x732e646461090a3b,0x3735722509203233,0x202c30357225202c\n"
".quad 0x61090a3b35357225,0x09203233732e6464,0x7225202c38357225,0x37357225202c3135\n"
".quad 0x732e627573090a3b,0x3935722509203233,0x202c38357225202c,0x63090a3b36357225\n"
".quad 0x33662e6e722e7476,0x2509203233732e32,0x39357225202c3466,0x662e766f6d090a3b\n"
".quad 0x2c35662509203233,0x3030303030663020,0x202020203b303030,0x090a30202f2f0920\n"
".quad 0x2e71652e70746573,0x3770250920323366,0x25202c346625202c,0x252140090a3b3566\n"
".quad 0x0920617262203770,0x37315f315f744c24,0x2f2f200a3b343531,0x50203e706f6f6c3c\n"
".quad 0x6c20666f20747261,0x79646f6220706f6f,0x373920656e696c20,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3336315f315f744c,0x636f6c2e090a3638,0x3009383409393109\n"
".quad 0x33732e766f6d090a,0x2c30367225092032,0x617262090a3b3020,0x4c240920696e752e\n"
".quad 0x665f69646e655744,0x5f66656469766964,0x240a3b325f393731,0x3137315f315f744c\n"
".quad 0x3c2f2f200a3a3435,0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f\n"
".quad 0x2c373920656e696c,0x616c206461656820,0x4c242064656c6562,0x383336315f315f74\n"
".quad 0x09636f6c2e090a36,0x0a30093035093931,0x2e6f6c2e6c756d09,0x3672250920323373\n"
".quad 0x2c36347225202c31,0x090a3b3932722520,0x732e6f6c2e6c756d,0x3236722509203233\n"
".quad 0x202c38347225202c,0x6d090a3b39327225,0x33732e6f6c2e6c75,0x2c33367225092032\n"
".quad 0x25202c3534722520,0x756d090a3b363372,0x3233732e6f6c2e6c,0x202c343672250920\n"
".quad 0x7225202c36347225,0x627573090a3b3732,0x722509203233732e,0x33367225202c3536\n"
".quad 0x0a3b34367225202c,0x2e6f6c2e6c756d09,0x3672250920323373,0x2c36347225202c36\n"
".quad 0x090a3b3633722520,0x203233732e627573,0x25202c3736722509,0x367225202c353672\n"
".quad 0x2e646461090a3b36,0x3672250920323373,0x2c32367225202c38,0x090a3b3736722520\n"
".quad 0x732e6f6c2e6c756d,0x3936722509203233,0x202c38347225202c,0x73090a3b38337225\n"
".quad 0x09203233732e6275,0x7225202c30377225,0x39367225202c3836,0x6c2e6c756d090a3b\n"
".quad 0x2509203233732e6f,0x347225202c313772,0x3b30377225202c35,0x6f6c2e6c756d090a\n"
".quad 0x722509203233732e,0x36347225202c3237,0x0a3b38337225202c,0x2e6f6c2e6c756d09\n"
".quad 0x3772250920323373,0x2c37347225202c33,0x090a3b3633722520,0x732e6f6c2e6c756d\n"
".quad 0x3437722509203233,0x202c38347225202c,0x73090a3b37327225,0x09203233732e6275\n"
".quad 0x7225202c35377225,0x34377225202c3337,0x6c2e6c756d090a3b,0x2509203233732e6f\n"
".quad 0x347225202c363772,0x3b36337225202c38,0x33732e627573090a,0x2c37377225092032\n"
".quad 0x25202c3537722520,0x7573090a3b363772,0x2509203233732e62,0x377225202c383772\n"
".quad 0x3b31367225202c37,0x33732e646461090a,0x2c39377225092032,0x25202c3237722520\n"
".quad 0x756d090a3b383772,0x3233732e6f6c2e6c,0x202c303872250920,0x7225202c37347225\n"
".quad 0x646461090a3b3937,0x722509203233732e,0x31377225202c3138,0x0a3b30387225202c\n"
".quad 0x2e6f6c2e6c756d09,0x3872250920323373,0x2c38347225202c32,0x090a3b3834722520\n"
".quad 0x203233732e646461,0x25202c3338722509,0x387225202c303572,0x2e6c756d090a3b32\n"
".quad 0x09203233732e6f6c,0x7225202c34387225,0x33387225202c3732,0x732e646461090a3b\n"
".quad 0x3538722509203233,0x202c31387225202c,0x63090a3b34387225,0x33662e6e722e7476\n"
".quad 0x2509203233732e32,0x35387225202c3666,0x722e766964090a3b,0x2509203233662e6e\n"
".quad 0x2c366625202c3766,0x73090a3b34662520,0x6c61626f6c672e74,0x255b09203233662e\n"
".quad 0x2c5d302b32326472,0x2e090a3b37662520,0x3509393109636f6c,0x627573090a300934\n"
".quad 0x722509203233732e,0x37327225202c3638,0x0a3b36337225202c,0x2e6f6c2e6c756d09\n"
".quad 0x3872250920323373,0x2c37347225202c37,0x090a3b3638722520,0x732e6f6c2e6c756d\n"
".quad 0x3838722509203233,0x202c35347225202c,0x73090a3b39327225,0x09203233732e6275\n"
".quad 0x7225202c39387225,0x38387225202c3738,0x732e646461090a3b,0x3039722509203233\n"
".quad 0x202c31367225202c,0x6d090a3b39387225,0x33732e6f6c2e6c75,0x2c31397225092032\n"
".quad 0x25202c3534722520,0x7573090a3b383372,0x2509203233732e62,0x397225202c323972\n"
".quad 0x3b31397225202c30,0x6f6c2e6c756d090a,0x722509203233732e,0x36347225202c3339\n"
".quad 0x0a3b32397225202c,0x3233732e62757309,0x202c343972250920,0x7225202c36337225\n"
".quad 0x6c756d090a3b3732,0x203233732e6f6c2e,0x25202c3539722509,0x397225202c353472\n"
".quad 0x2e6c756d090a3b34,0x09203233732e6f6c,0x7225202c36397225,0x39327225202c3734\n"
".quad 0x732e627573090a3b,0x3739722509203233,0x202c35397225202c,0x61090a3b36397225\n"
".quad 0x09203233732e6464,0x7225202c38397225,0x37397225202c3236,0x6c2e6c756d090a3b\n"
".quad 0x2509203233732e6f,0x347225202c393972,0x3b38337225202c37,0x33732e627573090a\n"
".quad 0x3030317225092032,0x202c38397225202c,0x6d090a3b39397225,0x33732e6f6c2e6c75\n"
".quad 0x3130317225092032,0x202c38347225202c,0x090a3b3030317225,0x203233732e646461\n"
".quad 0x202c323031722509,0x7225202c33397225,0x756d090a3b313031,0x3233732e6f6c2e6c\n"
".quad 0x2c33303172250920,0x25202c3534722520,0x6461090a3b353472,0x2509203233732e64\n"
".quad 0x7225202c34303172,0x30317225202c3135,0x2e6c756d090a3b33,0x09203233732e6f6c\n"
".quad 0x25202c3530317225,0x317225202c383372,0x646461090a3b3430,0x722509203233732e\n"
".quad 0x317225202c363031,0x30317225202c3230,0x2e747663090a3b35,0x732e3233662e6e72\n"
".quad 0x2c38662509203233,0x0a3b363031722520,0x2e6e722e76696409,0x3966250920323366\n"
".quad 0x25202c386625202c,0x2e7473090a3b3466,0x662e6c61626f6c67,0x6472255b09203233\n"
".quad 0x25202c5d342b3232,0x6c756d090a3b3966,0x203233732e6f6c2e,0x202c373031722509\n"
".quad 0x3b32202c36337225,0x6f6c2e6c756d090a,0x722509203233732e,0x337225202c383031\n"
".quad 0x3b36337225202c36,0x6f6c2e6c756d090a,0x722509203233732e,0x337225202c393031\n"
".quad 0x6d090a3b32202c38,0x33732e6f6c2e6c75,0x3031317225092032,0x202c38337225202c\n"
".quad 0x73090a3b38337225,0x09203233732e6275,0x25202c3131317225,0x317225202c373272\n"
".quad 0x627573090a3b3730,0x722509203233732e,0x327225202c323131,0x3930317225202c39\n"
".quad 0x6c2e6c756d090a3b,0x2509203233732e6f,0x7225202c33313172,0x327225202c313131\n"
".quad 0x2e6c756d090a3b37,0x09203233732e6f6c,0x25202c3431317225,0x7225202c32313172\n"
".quad 0x646461090a3b3932,0x722509203233732e,0x317225202c353131,0x31317225202c3830\n"
".quad 0x2e646461090a3b33,0x3172250920323373,0x31317225202c3631,0x3431317225202c30\n"
".quad 0x732e646461090a3b,0x3131722509203233,0x3531317225202c37,0x3b3631317225202c\n"
".quad 0x6e722e747663090a,0x3233732e3233662e,0x202c303166250920,0x090a3b3731317225\n"
".quad 0x203233662e766f6d,0x30202c3131662509,0x3030303030303066,0x2f09202020203b30\n"
".quad 0x746573090a30202f,0x3233662e71652e70,0x25202c3870250920,0x316625202c303166\n"
".quad 0x70252140090a3b31,0x2409206172622038,0x3637315f315f744c,0x3c2f2f200a3b3636\n"
".quad 0x6150203e706f6f6c,0x6f6c20666f207472,0x2079646f6220706f,0x2c373920656e696c\n"
".quad 0x616c206461656820,0x4c242064656c6562,0x383336315f315f74,0x09636f6c2e090a36\n"
".quad 0x0a30093136093931,0x3233732e766f6d09,0x202c303672250920,0x2e617262090a3b30\n"
".quad 0x444c240920696e75,0x64665f69646e6557,0x315f666564697669,0x4c240a3b325f3937\n"
".quad 0x363637315f315f74,0x6c3c2f2f200a3a36,0x726150203e706f6f,0x6f6f6c20666f2074\n"
".quad 0x6c2079646f622070,0x202c373920656e69,0x62616c2064616568,0x744c242064656c65\n"
".quad 0x36383336315f315f,0x3109636f6c2e090a,0x090a300933360939,0x203233732e627573\n"
".quad 0x202c383131722509,0x7225202c35347225,0x627573090a3b3634,0x722509203233732e\n"
".quad 0x347225202c393131,0x3b38347225202c37,0x6f6c2e6c756d090a,0x722509203233732e\n"
".quad 0x387225202c303231,0x3831317225202c36,0x732e627573090a3b,0x3231722509203233\n"
".quad 0x2c39327225202c31,0x090a3b3833722520,0x732e6f6c2e6c756d,0x3231722509203233\n"
".quad 0x3931317225202c32,0x3b3132317225202c,0x33732e646461090a,0x3332317225092032\n"
".quad 0x2c3032317225202c,0x0a3b323231722520,0x2e6e722e74766309,0x203233732e323366\n"
".quad 0x25202c3231662509,0x64090a3b33323172,0x33662e6e722e7669,0x2c33316625092032\n"
".quad 0x25202c3231662520,0x7473090a3b303166,0x2e6c61626f6c672e,0x72255b0920323366\n"
".quad 0x202c5d382b323264,0x2e090a3b33316625,0x3609393109636f6c,0x6c756d090a300934\n"
".quad 0x203233732e6f6c2e,0x202c343231722509,0x7225202c36387225,0x7573090a3b393131\n"
".quad 0x2509203233732e62,0x7225202c35323172,0x39327225202c3833,0x6c2e6c756d090a3b\n"
".quad 0x2509203233732e6f,0x7225202c36323172,0x317225202c383131,0x646461090a3b3532\n"
".quad 0x722509203233732e,0x317225202c373231,0x32317225202c3432,0x2e747663090a3b36\n"
".quad 0x732e3233662e6e72,0x3431662509203233,0x3b3732317225202c,0x6e722e766964090a\n"
".quad 0x662509203233662e,0x34316625202c3531,0x0a3b30316625202c,0x626f6c672e747309\n"
".quad 0x09203233662e6c61,0x312b32326472255b,0x35316625202c5d32,0x09636f6c2e090a3b\n"
".quad 0x0a30093536093931,0x3233732e766f6d09,0x202c303672250920,0x6557444c240a3b31\n"
".quad 0x766964665f69646e,0x3937315f66656469,0x3c2f2f200a3a325f,0x6150203e706f6f6c\n"
".quad 0x6f6c20666f207472,0x2079646f6220706f,0x2c373920656e696c,0x616c206461656820\n"
".quad 0x4c242064656c6562,0x383336315f315f74,0x09636f6c2e090a36,0x3009393131093931\n"
".quad 0x33752e766f6d090a,0x3832317225092032,0x6573090a3b30202c,0x33732e656e2e7074\n"
".quad 0x202c397025092032,0x7225202c30367225,0x2540090a3b383231,0x0920617262203970\n"
".quad 0x36315f315f744c24,0x2f2f200a3b323436,0x50203e706f6f6c3c,0x6c20666f20747261\n"
".quad 0x79646f6220706f6f,0x373920656e696c20,0x6c2064616568202c,0x242064656c656261\n"
".quad 0x3336315f315f744c,0x636f6c2e090a3638,0x0931323109393109,0x662e766f6d090a30\n"
".quad 0x3631662509203233,0x626634636630202c,0x2020203b30303036,0x30322d202f2f0920\n"
".quad 0x672e7473090a3131,0x33662e6c61626f6c,0x326472255b092032,0x6625202c5d302b32\n"
".quad 0x617262090a3b3631,0x4c240920696e752e,0x343636315f315f74,0x315f744c240a3b32\n"
".quad 0x0a3a38393836315f,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x616568202c373920,0x656c6562616c2064,0x5f315f744c242064\n"
".quad 0x6d090a3638333631,0x33732e6f6c2e6c75,0x3932317225092032,0x202c39317225202c\n"
".quad 0x2e747663090a3b34,0x203233732e343673,0x202c333264722509,0x090a3b3932317225\n"
".quad 0x656469772e6c756d,0x722509203233732e,0x317225202c343264,0x090a3b34202c3932\n"
".quad 0x203436752e646461,0x202c323264722509,0x7225202c38647225,0x744c240a3b343264\n"
".quad 0x32343636315f315f,0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x68202c373920656e,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x0a36383336315f31,0x393109636f6c2e09,0x090a300933323109,0x636e79732e726162\n"
".quad 0x6c2e090a3b300920,0x323109393109636f,0x2e646c090a300936,0x662e6c61626f6c67\n"
".quad 0x3731662509203233,0x32326472255b202c,0x6f6d090a3b5d302b,0x2509203233662e76\n"
".quad 0x636630202c383166,0x3b30303036626634,0x202f2f0920202020,0x73090a313130322d\n"
".quad 0x662e71652e707465,0x3031702509203233,0x202c37316625202c,0x40090a3b38316625\n"
".quad 0x6172622030317025,0x5f315f744c240920,0x200a3b3632323032,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x64616568202c3739\n"
".quad 0x64656c6562616c20,0x315f315f744c2420,0x6c2e090a36383336,0x333109393109636f\n"
".quad 0x766f6d090a300933,0x722509203233732e,0x327225202c303331,0x702e646c090a3b32\n"
".quad 0x3233732e6d617261,0x2c31333172250920,0x616475635f5f5b20,0x315a5f5f6d726170\n"
".quad 0x5f4341534e415239,0x625f6c656e72656b,0x666969696b636f6c,0x6630315066506669\n"
".quad 0x6f74636576776f6c,0x32535f3253695072,0x5f5f32535f32535f,0x74636576776f6c66\n"
".quad 0x746e756f635f726f,0x70746573090a3b5d,0x203233732e656c2e,0x25202c3131702509\n"
".quad 0x7225202c31333172,0x702540090a3b3232,0x0920617262203131,0x33325f315f744c24\n"
".quad 0x2f2f200a3b323430,0x50203e706f6f6c3c,0x6c20666f20747261,0x79646f6220706f6f\n"
".quad 0x373920656e696c20,0x6c2064616568202c,0x242064656c656261,0x3336315f315f744c\n"
".quad 0x2e766f6d090a3638,0x3172250920323375,0x69746e25202c3233,0x646c090a3b782e64\n"
".quad 0x732e6d617261702e,0x3331722509203233,0x75635f5f5b202c33,0x5f5f6d7261706164\n"
".quad 0x41534e415239315a,0x6c656e72656b5f43,0x69696b636f6c625f,0x3150665066696669\n"
".quad 0x636576776f6c6630,0x5f32536950726f74,0x32535f32535f3253,0x5f726f7272655f5f\n"
".quad 0x6c6f687365726874,0x747663090a3b5d64,0x2e3233662e6e722e,0x3166250920323373\n"
".quad 0x3333317225202c39,0x732e747663090a3b,0x09203233752e3436,0x25202c3532647225\n"
".quad 0x6d090a3b32333172,0x2e656469772e6c75,0x6472250920323375,0x33317225202c3632\n"
".quad 0x090a3b3631202c32,0x6d617261702e646c,0x722509203436752e,0x5f5f5b202c373264\n"
".quad 0x6d72617061647563,0x4e415239315a5f5f,0x6e72656b5f434153,0x6b636f6c625f6c65\n"
".quad 0x6650666966696969,0x76776f6c66303150,0x536950726f746365,0x5f32535f32535f32\n"
".quad 0x776f6c665f5f3253,0x5d73726f74636576,0x732e747663090a3b,0x09203233732e3436\n"
".quad 0x25202c3832647225,0x756d090a3b323272,0x732e656469772e6c,0x3264722509203233\n"
".quad 0x2c32327225202c39,0x6461090a3b363120,0x2509203436752e64,0x7225202c30336472\n"
".quad 0x647225202c373264,0x2e646c090a3b3932,0x662e6c61626f6c67,0x3032662509203233\n"
".quad 0x32326472255b202c,0x646c090a3b5d382b,0x2e6c61626f6c672e,0x3266250920323366\n"
".quad 0x326472255b202c31,0x090a3b5d32312b32,0x61626f6c672e646c,0x2509203233662e6c\n"
".quad 0x72255b202c323266,0x0a3b5d342b323264,0x3233732e766f6d09,0x2c34333172250920\n"
".quad 0x5f744c240a3b3020,0x3a32303239315f31,0x6f6f6c3c2f2f200a,0x20706f6f4c203e70\n"
".quad 0x6e696c2079646f62,0x6e202c3333312065,0x6420676e69747365,0x2c31203a68747065\n"
".quad 0x74616d6974736520,0x6172657469206465,0x75203a736e6f6974,0x090a6e776f6e6b6e\n"
".quad 0x09393109636f6c2e,0x6c090a3009343331,0x6c61626f6c672e64,0x722509203233732e\n"
".quad 0x72255b202c353331,0x0a3b5d302b303364,0x626f6c672e646c09,0x09203233732e6c61\n"
".quad 0x5b202c3633317225,0x5d342b3033647225,0x09636f6c2e090a3b,0x3009353331093931\n"
".quad 0x6e722e747663090a,0x3233732e3233662e,0x202c333266250920,0x090a3b3533317225\n"
".quad 0x662e6e722e747663,0x09203233732e3233,0x7225202c34326625,0x7573090a3b363331\n"
".quad 0x2509203233662e62,0x326625202c353266,0x3b37316625202c33,0x33662e627573090a\n"
".quad 0x2c36326625092032,0x25202c3432662520,0x756d090a3b323266,0x2509203233662e6c\n"
".quad 0x326625202c373266,0x3b35326625202c30,0x7a722e747663090a,0x33662e3233732e69\n"
".quad 0x3733317225092032,0x0a3b37326625202c,0x3233662e6c756d09,0x202c383266250920\n"
".quad 0x6625202c31326625,0x747663090a3b3632,0x3233732e697a722e,0x722509203233662e\n"
".quad 0x326625202c383331,0x2e627573090a3b38,0x3172250920323373,0x33317225202c3933\n"
".quad 0x3833317225202c37,0x732e646461090a3b,0x3431722509203233,0x3533317225202c30\n"
".quad 0x3b3933317225202c,0x6f6c672e646c090a,0x203233732e6c6162,0x202c313431722509\n"
".quad 0x382b30336472255b,0x2e627573090a3b5d,0x3172250920323373,0x34317225202c3234\n"
".quad 0x3134317225202c30,0x722e747663090a3b,0x33732e3233662e6e,0x2c39326625092032\n"
".quad 0x0a3b323431722520,0x393109636f6c2e09,0x090a300938333109,0x203233662e6c756d\n"
".quad 0x25202c3033662509,0x326625202c303266,0x2e747663090a3b36,0x2e3233732e697a72\n"
".quad 0x3172250920323366,0x30336625202c3334,0x662e6c756d090a3b,0x3133662509203233\n"
".quad 0x202c31326625202c,0x63090a3b35326625,0x732e697a722e7476,0x09203233662e3233\n"
".quad 0x25202c3434317225,0x6461090a3b313366,0x2509203233732e64,0x7225202c35343172\n"
".quad 0x317225202c333431,0x646461090a3b3434,0x722509203233732e,0x317225202c363431\n"
".quad 0x34317225202c3633,0x672e646c090a3b35,0x33732e6c61626f6c,0x3734317225092032\n"
".quad 0x30336472255b202c,0x73090a3b5d32312b,0x09203233732e6275,0x25202c3834317225\n"
".quad 0x7225202c36343172,0x7663090a3b373431,0x3233662e6e722e74,0x662509203233732e\n"
".quad 0x34317225202c3233,0x636f6c2e090a3b38,0x0934333109393109,0x662e736261090a30\n"
".quad 0x3333662509203233,0x0a3b39326625202c,0x656c2e7074657309,0x702509203233662e\n"
".quad 0x39316625202c3231,0x0a3b33336625202c,0x6220323170254009,0x315f4c2409206172\n"
".quad 0x0a3b34393534315f,0x706f6f6c3c2f2f20,0x6f2074726150203e,0x6220706f6f6c2066\n"
".quad 0x656e696c2079646f,0x6568202c33333120,0x6c6562616c206461,0x315f744c24206465\n"
".quad 0x090a32303239315f,0x203233662e736261,0x25202c3433662509,0x6573090a3b323366\n"
".quad 0x33662e656c2e7074,0x2c33317025092032,0x25202c3931662520,0x2140090a3b343366\n"
".quad 0x6172622033317025,0x315f315f4c240920,0x4c240a3b38333334,0x34393534315f315f\n"
".quad 0x6f6c3c2f2f200a3a,0x74726150203e706f,0x706f6f6c20666f20,0x696c2079646f6220\n"
".quad 0x202c33333120656e,0x62616c2064616568,0x744c242064656c65,0x32303239315f315f\n"
".quad 0x3109636f6c2e090a,0x0a30093234310939,0x3233732e64646109,0x2c34333172250920\n"
".quad 0x202c343331722520,0x5f315f4c240a3b31,0x200a3a3833333431,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x616568202c333331\n"
".quad 0x656c6562616c2064,0x5f315f744c242064,0x61090a3230323931,0x09203233752e6464\n"
".quad 0x25202c3033317225,0x7225202c30333172,0x6461090a3b323331,0x2509203436752e64\n"
".quad 0x7225202c30336472,0x647225202c363264,0x746573090a3b3033,0x3233732e746c2e70\n"
".quad 0x202c343170250920,0x25202c3033317225,0x40090a3b31333172,0x6172622034317025\n"
".quad 0x5f315f744c240920,0x200a3b3230323931,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x64616568202c3739,0x64656c6562616c20\n"
".quad 0x315f315f744c2420,0x7262090a36383336,0x240920696e752e61,0x3638315f315f744c\n"
".quad 0x5f744c240a3b3039,0x3a32343033325f31,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x6568202c37392065,0x6c6562616c206461\n"
".quad 0x315f744c24206465,0x090a36383336315f,0x203233732e766f6d,0x202c343331722509\n"
".quad 0x315f744c240a3b30,0x0a3a30393638315f,0x706f6f6c3c2f2f20,0x6f2074726150203e\n"
".quad 0x6220706f6f6c2066,0x656e696c2079646f,0x616568202c373920,0x656c6562616c2064\n"
".quad 0x5f315f744c242064,0x2e090a3638333631,0x3109383109636f6c,0x7461090a30093430\n"
".quad 0x65726168732e6d6f,0x33732e6464612e64,0x3934317225092032,0x5d316472255b202c\n"
".quad 0x3b3433317225202c,0x3109636f6c2e090a,0x0a30093135310939,0x6e79732e72616209\n"
".quad 0x40090a3b30092063,0x6172622036702521,0x5f315f744c240920,0x200a3b3632323032\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x64616568202c3739,0x64656c6562616c20,0x315f315f744c2420,0x6c2e090a36383336\n"
".quad 0x353109393109636f,0x766f6d090a300935,0x722509203233732e,0x0a3b30202c303531\n"
".quad 0x68732e6d6f746109,0x6464612e64657261,0x722509203233732e,0x72255b202c313531\n"
".quad 0x317225202c5d3164,0x766f6d090a3b3035,0x722509203233732e,0x317225202c323531\n"
".quad 0x747663090a3b3135,0x2e3233662e6e722e,0x3366250920323373,0x3235317225202c35\n"
".quad 0x722e747663090a3b,0x33732e3233662e6e,0x2c36336625092032,0x0a3b313331722520\n"
".quad 0x617261702e646c09,0x2509203233662e6d,0x5f5f5b202c373366,0x6d72617061647563\n"
".quad 0x4e415239315a5f5f,0x6e72656b5f434153,0x6b636f6c625f6c65,0x6650666966696969\n"
".quad 0x76776f6c66303150,0x536950726f746365,0x5f32535f32535f32,0x766e6f635f5f3253\n"
".quad 0x5f65636e65677265,0x6c6f687365726874,0x6c756d090a3b5d64,0x662509203233662e\n"
".quad 0x36336625202c3833,0x0a3b37336625202c,0x746c2e7074657309,0x702509203233662e\n"
".quad 0x35336625202c3531,0x0a3b38336625202c,0x2035317025214009,0x744c240920617262\n"
".quad 0x36323230325f315f,0x6f6c3c2f2f200a3b,0x74726150203e706f,0x706f6f6c20666f20\n"
".quad 0x696c2079646f6220,0x68202c373920656e,0x6562616c20646165,0x5f744c242064656c\n"
".quad 0x0a36383336315f31,0x393109636f6c2e09,0x090a300936353109,0x6d617261702e646c\n"
".quad 0x722509203436752e,0x5f5f5b202c313364,0x6d72617061647563,0x4e415239315a5f5f\n"
".quad 0x6e72656b5f434153,0x6b636f6c625f6c65,0x6650666966696969,0x76776f6c66303150\n"
".quad 0x536950726f746365,0x5f32535f32535f32,0x756f5f675f5f3253,0x090a3b5d64695f74\n"
".quad 0x203233732e766f6d,0x202c333531722509,0x6d6f7461090a3b31,0x2e6c61626f6c672e\n"
".quad 0x203233732e646461,0x202c343531722509,0x2c5d31336472255b,0x0a3b333531722520\n"
".quad 0x3233732e766f6d09,0x2c35353172250920,0x0a3b343531722520,0x393109636f6c2e09\n"
".quad 0x090a300937353109,0x203233732e766f6d,0x202c363531722509,0x6d6f7461090a3b30\n"
".quad 0x2e6465726168732e,0x203233732e646461,0x202c373531722509,0x202c5d316472255b\n"
".quad 0x090a3b3635317225,0x203233732e766f6d,0x202c383531722509,0x090a3b3735317225\n"
".quad 0x2e3436732e747663,0x6472250920323373,0x35317225202c3233,0x2e6c756d090a3b35\n"
".quad 0x3233732e65646977,0x2c33336472250920,0x202c353531722520,0x702e646c090a3b34\n"
".quad 0x3436752e6d617261,0x2c34336472250920,0x616475635f5f5b20,0x315a5f5f6d726170\n"
".quad 0x5f4341534e415239,0x625f6c656e72656b,0x666969696b636f6c,0x6630315066506669\n"
".quad 0x6f74636576776f6c,0x32535f3253695072,0x5f5f32535f32535f,0x737265696c74756f\n"
".quad 0x616469646e61635f,0x6461090a3b5d6574,0x2509203436752e64,0x7225202c35336472\n"
".quad 0x647225202c343364,0x2e7473090a3b3333,0x732e6c61626f6c67,0x6472255b09203233\n"
".quad 0x25202c5d302b3533,0x2e090a3b38353172,0x3109393109636f6c,0x646c090a30093835\n"
".quad 0x752e6d617261702e,0x3364722509203436,0x75635f5f5b202c36,0x5f5f6d7261706164\n"
".quad 0x41534e415239315a,0x6c656e72656b5f43,0x69696b636f6c625f,0x3150665066696669\n"
".quad 0x636576776f6c6630,0x5f32536950726f74,0x32535f32535f3253,0x5f6c65646f6d5f5f\n"
".quad 0x74616469646e6163,0x646461090a3b5d65,0x722509203436752e,0x647225202c373364\n"
".quad 0x33647225202c3633,0x672e7473090a3b33,0x33732e6c61626f6c,0x336472255b092032\n"
".quad 0x7225202c5d302b37,0x5f744c240a3b3931,0x3a36323230325f31,0x315f315f744c240a\n"
".quad 0x4c240a3a34313739,0x3a3835325f315f74,0x6f6f6c3c2f2f200a,0x2074726150203e70\n"
".quad 0x20706f6f6c20666f,0x6e696c2079646f62,0x6568202c37392065,0x6c6562616c206461\n"
".quad 0x315f744c24206465,0x090a36383336315f,0x09393109636f6c2e,0x40090a3009383631\n"
".quad 0x6172622033702521,0x5f315f744c240920,0x200a3b3439393032,0x3e706f6f6c3c2f2f\n"
".quad 0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964,0x64616568202c3739\n"
".quad 0x64656c6562616c20,0x315f315f744c2420,0x6f6d090a36383336,0x2509203436732e76\n"
".quad 0x647225202c366472,0x2e766f6d090a3b35,0x3172250920323375,0x090a3b30202c3935\n"
".quad 0x752e71652e746573,0x09203233752e3233,0x25202c3036317225,0x317225202c323272\n"
".quad 0x67656e090a3b3935,0x722509203233732e,0x317225202c313631,0x766f6d090a3b3036\n"
".quad 0x722509203233752e,0x697425202c323631,0x6f6d090a3b792e64,0x2509203233752e76\n"
".quad 0x3b30202c33363172,0x71652e746573090a,0x3233752e3233752e,0x2c34363172250920\n"
".quad 0x202c323631722520,0x090a3b3336317225,0x203233732e67656e,0x202c353631722509\n"
".quad 0x090a3b3436317225,0x203233622e646e61,0x202c363631722509,0x25202c3136317225\n"
".quad 0x6d090a3b35363172,0x09203233752e766f,0x30202c3736317225,0x2e70746573090a3b\n"
".quad 0x09203233732e7165,0x7225202c36317025,0x317225202c363631,0x702540090a3b3736\n"
".quad 0x0920617262203631,0x31325f315f744c24,0x2f2f200a3b303532,0x50203e706f6f6c3c\n"
".quad 0x6c20666f20747261,0x79646f6220706f6f,0x373920656e696c20,0x6c2064616568202c\n"
".quad 0x242064656c656261,0x3336315f315f744c,0x636f6c2e090a3638,0x3009373909393109\n"
".quad 0x36732e766f6d090a,0x3833647225092034,0x0a3b33647225202c,0x3233732e766f6d09\n"
".quad 0x2c38363172250920,0x6f7461090a3b3120,0x6c61626f6c672e6d,0x3233732e6464612e\n"
".quad 0x2c39363172250920,0x5d38336472255b20,0x3b3836317225202c,0x33732e766f6d090a\n"
".quad 0x3037317225092032,0x3b3936317225202c,0x6168732e7473090a,0x203233732e646572\n"
".quad 0x302b366472255b09,0x3037317225202c5d,0x5f315f744c240a3b,0x200a3a3035323132\n"
".quad 0x3e706f6f6c3c2f2f,0x666f207472615020,0x6f6220706f6f6c20,0x20656e696c207964\n"
".quad 0x64616568202c3739,0x64656c6562616c20,0x315f315f744c2420,0x6162090a36383336\n"
".quad 0x0920636e79732e72,0x732e646c090a3b30,0x33732e6465726168,0x2c39317225092032\n"
".quad 0x302b366472255b20,0x2e617262090a3b5d,0x744c240920696e75,0x38333730325f315f\n"
".quad 0x5f315f744c240a3b,0x200a3a3439393032,0x3e706f6f6c3c2f2f,0x666f207472615020\n"
".quad 0x6f6220706f6f6c20,0x20656e696c207964,0x64616568202c3739,0x64656c6562616c20\n"
".quad 0x315f315f744c2420,0x6f6d090a36383336,0x2509203233752e76,0x6e25202c31373172\n"
".quad 0x3b782e6469617463,0x33752e646461090a,0x2c39317225092032,0x202c313731722520\n"
".quad 0x4c240a3b39317225,0x333730325f315f74,0x6c3c2f2f200a3a38,0x726150203e706f6f\n"
".quad 0x6f6f6c20666f2074,0x6c2079646f622070,0x202c373920656e69,0x62616c2064616568\n"
".quad 0x744c242064656c65,0x36383336315f315f,0x672e70746573090a,0x2509203233732e74\n"
".quad 0x317225202c373170,0x0a3b39317225202c,0x6220373170254009,0x5f744c2409206172\n"
".quad 0x3b36383336315f31,0x315f315f744c240a,0x2e090a3a34373835,0x3109393109636f6c\n"
".quad 0x7865090a30093936,0x57444c240a3b7469,0x39315a5f5f646e65,0x6b5f4341534e4152\n"
".quad 0x6c625f6c656e7265,0x69666969696b636f,0x6c66303150665066,0x726f74636576776f\n"
".quad 0x5f32535f32536950,0x0a3a5f32535f3253,0x5a5f202f2f207d09,0x4341534e41523931\n"
".quad 0x5f6c656e72656b5f,0x6969696b636f6c62,0x3031506650666966,0x74636576776f6c66\n"
".quad 0x535f32536950726f,0x5f32535f32535f32,0x0000000000000a0a\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$compute_20$[2799];

}

asm(
".section .rodata\n"
".align 32\n"
"__deviceText_$sm_20$:\n"
".quad 0x33010102464c457f,0x0000000000000004,0x0000000100be0002,0x0000000000000000\n"
".quad 0x0000000000001274,0x0000000000000040,0x0038004000140114,0x0001000800400002\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000300000001,0x0000000000000000,0x0000000000000000,0x0000000000000240\n"
".quad 0x000000000000010d,0x0000000000000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x000000030000000b,0x0000000000000000,0x0000000000000000,0x000000000000034d\n"
".quad 0x0000000000000053,0x0000000000000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x0000000200000013,0x0000000000000000,0x0000000000000000,0x00000000000003a0\n"
".quad 0x0000000000000120,0x0000000a00000002,0x0000000000000001,0x0000000000000018\n"
".quad 0x0000000100000036,0x0000000000100006,0x0000000000000000,0x00000000000004c0\n"
".quad 0x0000000000000bf0,0x2f00000600000003,0x0000000000000004,0x0000000000000000\n"
".quad 0x00000001000000c4,0x0000000000000002,0x0000000000000000,0x00000000000010b0\n"
".quad 0x0000000000000070,0x0000000400000000,0x0000000000000004,0x0000000000000000\n"
".quad 0x0000000100000077,0x0000000000000002,0x0000000000000000,0x0000000000001120\n"
".quad 0x0000000000000124,0x0000000400000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x00000001000000bb,0x0000000000000002,0x0000000000000000,0x0000000000001244\n"
".quad 0x0000000000000030,0x0000000000000000,0x0000000000000001,0x0000000000000000\n"
".quad 0x7472747368732e00,0x747274732e006261,0x746d79732e006261,0x672e766e2e006261\n"
".quad 0x6e692e6c61626f6c,0x672e766e2e007469,0x742e006c61626f6c,0x39315a5f2e747865\n"
".quad 0x6b5f4341534e4152,0x6c625f6c656e7265,0x69666969696b636f,0x6c66303150665066\n"
".quad 0x726f74636576776f,0x5f32535f32536950,0x2e005f32535f3253,0x2e6f666e692e766e\n"
".quad 0x534e415239315a5f,0x656e72656b5f4341,0x696b636f6c625f6c,0x5066506669666969\n"
".quad 0x6576776f6c663031,0x32536950726f7463,0x535f32535f32535f,0x692e766e2e005f32\n"
".quad 0x2e766e2e006f666e,0x746e6174736e6f63,0x415239315a5f2e30,0x72656b5f4341534e\n"
".quad 0x636f6c625f6c656e,0x506669666969696b,0x776f6c6630315066,0x6950726f74636576\n"
".quad 0x32535f32535f3253,0x5a5f00005f32535f,0x4341534e41523931,0x5f6c656e72656b5f\n"
".quad 0x6969696b636f6c62,0x3031506650666966,0x74636576776f6c66,0x535f32536950726f\n"
".quad 0x5f32535f32535f32,0x5f616475635f5f00,0x7669645f30326d73,0x003233665f6e725f\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0001000300000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0002000300000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0003000300000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000300000000,0x0000000000000000,0x0000000000000000,0x0000000300000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0004000300000000,0x0000000000000000\n"
".quad 0x0000000000000bf0,0x0006000300000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0007000300000000,0x0000000000000000,0x0000000000000000,0x0005000300000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0004101200000001,0x0000000000000000\n"
".quad 0x0000000000000880,0x000400120000003c,0x0000000000000880,0x0000000000000370\n"
".quad 0x2800440400005de4,0x10004000d1309c04,0x1b0e0000fc21dc01,0x40000000e00021e7\n"
".quad 0x198ecffc0021dc01,0x40000000a00021e7,0x18004000c1201e04,0x0c0e00001cf1dc04\n"
".quad 0x58004000d0001c00,0x1406000001201c84,0x4000000080001de7,0x0c0e00001c71dc04\n"
".quad 0x28004001a0009de4,0x28004001b000dde4,0x18000000100b5de2,0x0c0e00009c81dc04\n"
".quad 0x080e00001c0b9c04,0x40000001800021e7,0x2c00000088011c04,0x2c00000084001c04\n"
".quad 0x190e0000fc41dc03,0x19000000fc01dc03,0x400000006000a1e7,0x18000000040001e2\n"
".quad 0x5c7e000000200205,0xc900000002d00085,0x20060000081fdc03,0x50ee0000ffffdc04\n"
".quad 0xc100000002d49c85,0x4000000040001de7,0x2c00000094011c04,0x4800000010049c03\n"
".quad 0x1b0e4000c121dc23,0x80000000000001e7,0x2c0000008404dc04,0x190e0000fd31dc23\n"
".quad 0x6000000ee0000007,0x4000000e200021e7,0x6000c00005211e03,0x1800000010001de2\n"
".quad 0x2800400100021de4,0x5000c00010415ce3,0x2001800120419ca3,0xc900000003ffdc85\n"
".quad 0x6000000ce0000007,0x480040013051dc43,0x8400000000611c85,0x8400000010615c85\n"
".quad 0x5000c0004041dce3,0x2011c00040419ca3,0x480040011071dc43,0x2011c00040511ca3\n"
".quad 0x5000c00040515ce3,0x840000000065dc85,0x840000002062dc85,0x4800400110515c43\n"
".quad 0x8400000010659c85,0x8400000030629c85,0x8400000000455c85,0x8400000020425c85\n"
".quad 0x8400000010451c85,0x8400000030421c85,0x480000005cb61d03,0x4800000058a69d03\n"
".quad 0x4800000054965d03,0x5000000069a71ca3,0x480000005086dd03,0x5000000065911ca3\n"
".quad 0x4100000061915c23,0x2008000015819ca3,0x408000006da15c23,0x4800000019c19c03\n"
".quad 0x200c000015b19ea3,0x6000c00009215e03,0x1800000019275e04,0x20018000e0541ca3\n"
".quad 0x5000c00010501ce3,0x210e0000fdd1dc00,0x48004000f0045c43,0x40000000200021e7\n"
".quad 0x0c0e00001cf1dc14,0x5000000055801ca3,0x5000000055a15ca3,0x5000000059b7dca3\n"
".quad 0x200000005d901ea3,0x200a00005db15ea3,0x5000000059979ca3,0x2000000055901ea3\n"
".quad 0x200a000055b15ea3,0x200800006db11ca3,0x4800000001f01c03,0x4800000078515d03\n"
".quad 0x2000000051b01ea3,0x200a000051915ca3,0x5000000001801ca3,0x2000000015a01ca3\n"
".quad 0x2800000074015de4,0x2000000011701ca3,0x1800000001211e04,0x5000001580010007\n"
".quad 0x48000000557b1d03,0x480000005d515d03,0x2038000061819ca3,0x50000000b1a01ca3\n"
".quad 0x5000000015815ca3,0x2000000059801ea3,0x200a000059a15ea3,0x4800000001e01c03\n"
".quad 0x4800000015f15c03,0x2000000051801ea3,0x200a000051a15ea3,0x5000000001901ca3\n"
".quad 0x2000000015b15ca3,0x2800000010001de4,0x200a000019411ca3,0x2800000074015de4\n"
".quad 0x9400000001001c85,0x1800000011211e04,0x5000001320010007,0x5000000055501ca3\n"
".quad 0x410000005d515c23,0x9400000011011c85,0x200000005c515ca3,0x4100000059401c23\n"
".quad 0x200a000051415ca3,0x200a000058001ca3,0x1800000001255e04,0x210e0000fd51dc00\n"
".quad 0x40000000200021e7,0x0c0e00001cf1dc14,0x480000006585dd03,0x480000006da61d03\n"
".quad 0x4800000051611d03,0x500000005ec01ca3,0x2800000054015de4,0x2000000011801ca3\n"
".quad 0x1800000001211e04,0x50000010c0010007,0x5000000062c15ca3,0x4800000059419d03\n"
".quad 0x2800000010001de4,0x200a000019711ca3,0x2800000054015de4,0x9400000021001c85\n"
".quad 0x1800000011211e04,0x5000000fc0010007,0x9400000031011c85,0x0c0e00001c71dc14\n"
".quad 0x40000000000001f4,0x1b13ed8000001de2,0x9400000001001c95,0x6000c00009201e03\n"
".quad 0x28004000e0011de4,0x2009c00010041ca3,0x5000c00010001ce3,0x48004000f0045c53\n"
".quad 0x20060000081fdc03,0x207e0000450fdc03,0x6000000c20000007,0x50ee0000ffffdc04\n"
".quad 0x8400000001019c85,0x210ef13ed861dc00,0x40000000000001f4,0x1b0e40008131dc23\n"
".quad 0x280000004c001de4,0x6000000680000007,0x40000006400001e7,0x1800000040011de2\n"
".quad 0x280040002002dde4,0x5000c00041315ce3,0x2009800101311ca3,0x8400000021021c85\n"
".quad 0x840000003101dc85,0x8400000011031c85,0x18004000a1225e04,0x28000000fc029de4\n"
".quad 0x5000c00040b39c43,0x6000c00010b35e03,0x4800400110515c43,0x70000003e0000007\n"
".quad 0x8400000000445c85,0x8400000010441c85,0x840000002043dc85,0x840000003042dc85\n"
".quad 0x6000000320000007,0x1800000045251e04,0x1800000041255e04,0x500000001945dd00\n"
".quad 0x5000000031551d00,0x580000005c855c00,0x5800000050759c00,0x580000005c75dc00\n"
".quad 0x1406000055255c84,0x1406000059259c84,0x5800000050851c00,0x4800000059555d03\n"
".quad 0x140600005d259c84,0x1406000051251c84,0x4800000055145c03,0x4800000059451c03\n"
".quad 0x480000003d13dd03,0x4800000051041c03,0x180000003d23de04,0x480000002d02dd03\n"
".quad 0x218e00003c91dc40,0x180000002d22de04,0x40000000400001e7,0x218e00002c91dc40\n"
".quad 0xb0000000000021e7,0x4800c00004a29c13,0xb000000000001de7,0x4800400020001c03\n"
".quad 0x4801000010d11c03,0x188e40008001dc23,0x4800000014e15c43,0x4003fffb600001e7\n"
".quad 0x4000000000001df4,0x28000000fc029df4,0x60000000a0000007,0xc400000003f01c85\n"
".quad 0x4800000028000003,0xcc00000003f00085,0x4003ffff800021e7,0x4000000000001df4\n"
".quad 0x50ee0000ffffdc04,0x4000000000001de4,0x4000000000001de4,0x190e0000fd31dc23\n"
".quad 0x40000000000021f4,0x60000000a0000007,0xc400000003f01c85,0x48000000fc010003\n"
".quad 0xcc00000003f10085,0x4003ffff800021e7,0x1800400081211e14,0x1800000001201e04\n"
".quad 0x58004000b0411c00,0x208e00001001dc00,0x40000000000021f4,0x2800400180011de4\n"
".quad 0x2800400190015de4,0x1800000004001de2,0x60000000c0000007,0x5c7e000000401e05\n"
".quad 0xc400000003f19c85,0x48000000fc610003,0xcc00000003f10085,0x4003ffff800021e7\n"
".quad 0x1800000010021df2,0x5000c0001001dce3,0x2011800160011ca3,0x4800400170715c43\n"
".quad 0x2011800140021ca3,0x9400000000419c85,0x4800400150725c43,0x9400000000849c95\n"
".quad 0x1a8e0000fee1dc03,0x40000001400021e7,0x2c00000088001c04,0x190e0000fc01dc03\n"
".quad 0x19000000fd31dc03,0x400000006000a1e7,0x18000000040001e2,0x5c7e000000200205\n"
".quad 0xc900000002d00085,0x50ee0000ffffdc04,0xc100000002d49c85,0x4000000020001de7\n"
".quad 0x4800400051249c03,0x188e4000c121dc23,0x4003ffe2800001e7,0x8000000000001de7\n"
".quad 0x6000c00004401c03,0x6000c00004519c03,0x5800c00060001c03,0x5800c00060619c03\n"
".quad 0x4800fffffc01dc03,0x4800fffffc621c03,0x1a0ec003f471dc03,0x1a20c003f481dc03\n"
".quad 0x40000005200021e7,0x298edfe00041dc80,0x1080000011201c44,0x40000000600021e7\n"
".quad 0x298edfe00051dc80,0x1080000015219c44,0x40000000400001e7,0x5000000014411c20\n"
".quad 0x4000000b80001de7,0x6000c00004425c03,0x6000c00004529c03,0x190e0000fc93dc03\n"
".quad 0x190e0000fca5dc03,0x0c0e00000811dc04,0x40000000800001e7,0x290edfe00007dc00\n"
".quad 0x290edfe00061dc00,0x4000000080002de7,0x40000000600021e7,0x1bff000000001de2\n"
".quad 0xc800000014011c00,0x40000009e0001de7,0x0c0e00004401dc04,0x40000000600021e7\n"
".quad 0x6800000010501c83,0x3a00000000011c02,0x4000000940001de7,0x0c0e00004831dc04\n"
".quad 0x40000000800021e7,0x6800000010501c83,0x3a00000000001c02,0x39fe000000011c42\n"
".quad 0x4000000880001de7,0x1b0e0000fc73dc23,0x1b0e0000fc81dc23,0x1bffffff000025e2\n"
".quad 0x307ed7e000412400,0x28000000fc0005e4,0x40000000800001e7,0x307ed7e000515c00\n"
".quad 0x4800c00100001c03,0x4000000020001de7,0x28000000fc001de4,0x4800fffe08825c03\n"
".quad 0x4800fffe08719c03,0x480000002071dd03,0x4100000014915ee3,0x4100000010611ee3\n"
".quad 0xc800000010519c00,0x307e000018425c00,0x3008000024529e00,0x3012000018a25c00\n"
".quad 0x3008000024515e00,0x3012000018511c00,0x6000c00004429c03,0x5800c00060a21c03\n"
".quad 0x480000002071dc03,0x480000001c01dc03,0x4800fffffc701c03,0x1a0ec003f401dc03\n"
".quad 0x40000000600001e7,0x4800000020701d03,0x4000000010011ee3,0x40000004a0001de7\n"
".quad 0x198ec003f871dc23,0x40000000600001e7,0x3a00000000401c02,0x39fe000000011c42\n"
".quad 0x4000000400001de7,0x1a0e0000fc71dc23,0x40000003c00001e7,0x1b0effffa071dc23\n"
".quad 0x40000000400001e7,0x3a00000000411c02,0x4000000340001de7,0x3112000018529c00\n"
".quad 0x3092000018521c00,0x3192000018515c00,0x1c0000001d225f84,0x3a00000000401c02\n"
".quad 0x1e8e000020a11c00,0x3801fffffc515c02,0x190e0000fc91dc23,0x1c0000001d219f84\n"
".quad 0x1c00000011211f84,0x3802000000521c42,0x40000000a00081e7,0x4800c00080716003\n"
".quad 0x6000000014816003,0x5800000018822003,0x310ac00007f16003,0x6800000014412043\n"
".quad 0x6000c00078815c03,0x5800c0007c519c03,0x6800c00004815c03,0x6800000018411c43\n"
".quad 0x6800000010511c03,0x5800c00004815c03,0x1a8e0000fc41dc03,0x4800c00004514003\n"
".quad 0x6800000014011c43,0x9000000000001de7,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000340c04,0x0000000800000004,0x000000100000000c,0x0000001800000014\n"
".quad 0x0000002800000020,0x0000003800000030,0x0000004800000040,0x0000000900080a04\n"
".quad 0x0050190300500020,0xffffffff000c1704,0x0021f0000048000c,0xffffffff000c1704\n"
".quad 0x0021f0000040000b,0xffffffff000c1704,0x0021f0000038000a,0xffffffff000c1704\n"
".quad 0x0021f00000300009,0xffffffff000c1704,0x0021f00000280008,0xffffffff000c1704\n"
".quad 0x0021f00000200007,0xffffffff000c1704,0x0021f00000180006,0xffffffff000c1704\n"
".quad 0x0011f00000140005,0xffffffff000c1704,0x0011f00000100004,0xffffffff000c1704\n"
".quad 0x0011f000000c0003,0xffffffff000c1704,0x0011f00000080002,0xffffffff000c1704\n"
".quad 0x0011f00000040001,0xffffffff000c1704,0x0011f00000000000,0x002401b000080d04\n"
".quad 0x0008120400000020,0x000000000000000b,0x0000000b00081104,0x0008120400000000\n"
".quad 0x000000000000000a,0x0000000a00081104,0x0000000600000000,0x0000127400000005\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000007000000000,0x0000007000000000\n"
".quad 0x0000000400000000,0x6000000000000000,0x000004c000000a05,0x0000000000000000\n"
".quad 0x0000000000000000,0x00000d8400000000,0x00000d8400000000,0x0000000400000000\n"
".quad 0x0000000000000000\n"
".text");

extern "C" {

extern const unsigned long long __deviceText_$sm_20$[605];

}

static __cudaFatPtxEntry __ptxEntries [] = {{(char*)"compute_20",(char*)__deviceText_$compute_20$},{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{0,0}};
static __cudaFatDebugEntry __debugEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries0 = {0, 0, 0, 0} ;
static __cudaFatElfEntry __elfEntries1 = {(char*)"sm_20", (char*)__deviceText_$sm_20$, &__elfEntries0, (unsigned int)sizeof(__deviceText_$sm_20$)};



static __cudaFatCudaBinary __fatDeviceText __attribute__ ((section (".nvFatBinSegment")))= {0x1ee55a01,0x00000004,0x2e00b786,(char*)"604cbd0b0cfa6630",(char*)"kernel.cu",(char*)" ",__ptxEntries,__cubinEntries,&__debugEntries0,0,0,0,0,0,0x813b8604,&__elfEntries1};
# 3 "kernel.cudafe1.stub.c" 2 3
struct __T20 {int __par0;int __par1;int __par2;float __par3;int __par4;float __par5;float *__par6;flowvector *__par7;int *__par8;int *__par9;int *__par10;int *__par11;int *__par12;int __dummy_field;};
extern void __device_stub__Z19RANSAC_kernel_blockiiififPfP10flowvectorPiS2_S2_S2_S2_(int, int, int, float, int, float, float *, flowvector *, int *, int *, int *, int *, int *);
static void __sti____cudaRegisterAll_14_kernel_cpp1_ii_e68026d2(void) __attribute__((__constructor__));
void __device_stub__Z19RANSAC_kernel_blockiiififPfP10flowvectorPiS2_S2_S2_S2_(int __par0, int __par1, int __par2, float __par3, int __par4, float __par5, float *__par6, flowvector *__par7, int *__par8, int *__par9, int *__par10, int *__par11, int *__par12){ struct __T20 *__T21 = 0;
if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T21->__par0) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T21->__par1) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T21->__par2) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T21->__par3) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T21->__par4) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T21->__par5) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T21->__par6) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par7, sizeof(__par7), (size_t)&__T21->__par7) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par8, sizeof(__par8), (size_t)&__T21->__par8) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par9, sizeof(__par9), (size_t)&__T21->__par9) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par10, sizeof(__par10), (size_t)&__T21->__par10) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par11, sizeof(__par11), (size_t)&__T21->__par11) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par12, sizeof(__par12), (size_t)&__T21->__par12) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(int, int, int, float, int, float, float *, flowvector *, int *, int *, int *, int *, int *))RANSAC_kernel_block)); (void)cudaLaunch(((char *)((void ( *)(int, int, int, float, int, float, float *, flowvector *, int *, int *, int *, int *, int *))RANSAC_kernel_block))); };}
void RANSAC_kernel_block( int __cuda_0,int __cuda_1,int __cuda_2,float __cuda_3,int __cuda_4,float __cuda_5,float *__cuda_6,flowvector *__cuda_7,int *__cuda_8,int *__cuda_9,int *__cuda_10,int *__cuda_11,int *__cuda_12)
# 75 "kernel.cu"
{__device_stub__Z19RANSAC_kernel_blockiiififPfP10flowvectorPiS2_S2_S2_S2_( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6,__cuda_7,__cuda_8,__cuda_9,__cuda_10,__cuda_11,__cuda_12);
# 169 "kernel.cu"
}
# 1 "kernel.cudafe1.stub.c"
static void __sti____cudaRegisterAll_14_kernel_cpp1_ii_e68026d2(void) { __cudaFatCubinHandle = __cudaRegisterFatBinary((void*)&__fatDeviceText); atexit(__cudaUnregisterBinaryUtil); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(int, int, int, float, int, float, float *, flowvector *, int *, int *, int *, int *, int *))RANSAC_kernel_block), (char*)"_Z19RANSAC_kernel_blockiiififPfP10flowvectorPiS2_S2_S2_S2_", "_Z19RANSAC_kernel_blockiiififPfP10flowvectorPiS2_S2_S2_S2_", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); }
# 1 "kernel.cudafe1.stub.c" 2
