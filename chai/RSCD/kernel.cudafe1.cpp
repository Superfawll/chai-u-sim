# 1 "kernel.cu"
# 46 "/usr/local/cuda/bin/../include/device_types.h"
#if 0
# 46
enum cudaRoundMode { 
# 48
cudaRoundNearest, 
# 49
cudaRoundZero, 
# 50
cudaRoundPosInf, 
# 51
cudaRoundMinInf
# 52
}; 
#endif
# 150 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h" 3
typedef long ptrdiff_t; 
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.6/include/stddef.h" 3
typedef unsigned long size_t; 
#include "crt/host_runtime.h"
# 96 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 96
enum cudaError { 
# 103
cudaSuccess, 
# 109
cudaErrorMissingConfiguration, 
# 115
cudaErrorMemoryAllocation, 
# 121
cudaErrorInitializationError, 
# 131
cudaErrorLaunchFailure, 
# 140
cudaErrorPriorLaunchFailure, 
# 150
cudaErrorLaunchTimeout, 
# 159
cudaErrorLaunchOutOfResources, 
# 165
cudaErrorInvalidDeviceFunction, 
# 174
cudaErrorInvalidConfiguration, 
# 180
cudaErrorInvalidDevice, 
# 186
cudaErrorInvalidValue, 
# 192
cudaErrorInvalidPitchValue, 
# 198
cudaErrorInvalidSymbol, 
# 203
cudaErrorMapBufferObjectFailed, 
# 208
cudaErrorUnmapBufferObjectFailed, 
# 214
cudaErrorInvalidHostPointer, 
# 220
cudaErrorInvalidDevicePointer, 
# 226
cudaErrorInvalidTexture, 
# 232
cudaErrorInvalidTextureBinding, 
# 239
cudaErrorInvalidChannelDescriptor, 
# 245
cudaErrorInvalidMemcpyDirection, 
# 255
cudaErrorAddressOfConstant, 
# 264
cudaErrorTextureFetchFailed, 
# 273
cudaErrorTextureNotBound, 
# 282
cudaErrorSynchronizationError, 
# 288
cudaErrorInvalidFilterSetting, 
# 294
cudaErrorInvalidNormSetting, 
# 302
cudaErrorMixedDeviceExecution, 
# 310
cudaErrorCudartUnloading, 
# 315
cudaErrorUnknown, 
# 321
cudaErrorNotYetImplemented, 
# 330
cudaErrorMemoryValueTooLarge, 
# 337
cudaErrorInvalidResourceHandle, 
# 345
cudaErrorNotReady, 
# 352
cudaErrorInsufficientDriver, 
# 365
cudaErrorSetOnActiveProcess, 
# 371
cudaErrorInvalidSurface, 
# 377
cudaErrorNoDevice, 
# 383
cudaErrorECCUncorrectable, 
# 388
cudaErrorSharedObjectSymbolNotFound, 
# 393
cudaErrorSharedObjectInitFailed, 
# 399
cudaErrorUnsupportedLimit, 
# 405
cudaErrorDuplicateVariableName, 
# 411
cudaErrorDuplicateTextureName, 
# 417
cudaErrorDuplicateSurfaceName, 
# 426
cudaErrorDevicesUnavailable, 
# 431
cudaErrorInvalidKernelImage, 
# 439
cudaErrorNoKernelImageForDevice, 
# 448
cudaErrorIncompatibleDriverContext, 
# 453
cudaErrorStartupFailure = 127, 
# 459
cudaErrorApiFailureBase = 10000
# 460
}; 
#endif
# 466 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 466
enum cudaChannelFormatKind { 
# 468
cudaChannelFormatKindSigned, 
# 469
cudaChannelFormatKindUnsigned, 
# 470
cudaChannelFormatKindFloat, 
# 471
cudaChannelFormatKindNone
# 472
}; 
#endif
# 478 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 478
struct cudaChannelFormatDesc { 
# 480
int x; 
# 481
int y; 
# 482
int z; 
# 483
int w; 
# 484
cudaChannelFormatKind f; 
# 485
}; 
#endif
# 491 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
struct cudaArray; 
#endif
# 497 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 497
enum cudaMemcpyKind { 
# 499
cudaMemcpyHostToHost, 
# 500
cudaMemcpyHostToDevice, 
# 501
cudaMemcpyDeviceToHost, 
# 502
cudaMemcpyDeviceToDevice
# 503
}; 
#endif
# 510 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 510
struct cudaPitchedPtr { 
# 512
void *ptr; 
# 513
size_t pitch; 
# 514
size_t xsize; 
# 515
size_t ysize; 
# 516
}; 
#endif
# 523 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 523
struct cudaExtent { 
# 525
size_t width; 
# 526
size_t height; 
# 527
size_t depth; 
# 528
}; 
#endif
# 535 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 535
struct cudaPos { 
# 537
size_t x; 
# 538
size_t y; 
# 539
size_t z; 
# 540
}; 
#endif
# 546 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 546
struct cudaMemcpy3DParms { 
# 548
cudaArray *srcArray; 
# 549
cudaPos srcPos; 
# 550
cudaPitchedPtr srcPtr; 
# 552
cudaArray *dstArray; 
# 553
cudaPos dstPos; 
# 554
cudaPitchedPtr dstPtr; 
# 556
cudaExtent extent; 
# 557
cudaMemcpyKind kind; 
# 558
}; 
#endif
# 564 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
struct cudaGraphicsResource; 
#endif
# 570 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 570
enum cudaGraphicsRegisterFlags { 
# 572
cudaGraphicsRegisterFlagsNone
# 573
}; 
#endif
# 579 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 579
enum cudaGraphicsMapFlags { 
# 581
cudaGraphicsMapFlagsNone, 
# 582
cudaGraphicsMapFlagsReadOnly, 
# 583
cudaGraphicsMapFlagsWriteDiscard
# 584
}; 
#endif
# 590 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 590
enum cudaGraphicsCubeFace { 
# 591
cudaGraphicsCubeFacePositiveX, 
# 592
cudaGraphicsCubeFaceNegativeX, 
# 593
cudaGraphicsCubeFacePositiveY, 
# 594
cudaGraphicsCubeFaceNegativeY, 
# 595
cudaGraphicsCubeFacePositiveZ, 
# 596
cudaGraphicsCubeFaceNegativeZ
# 597
}; 
#endif
# 603 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 603
struct cudaFuncAttributes { 
# 610
size_t sharedSizeBytes; 
# 616
size_t constSizeBytes; 
# 621
size_t localSizeBytes; 
# 628
int maxThreadsPerBlock; 
# 633
int numRegs; 
# 640
int ptxVersion; 
# 647
int binaryVersion; 
# 649
int __cudaReserved[6]; 
# 650
}; 
#endif
# 656 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 656
enum cudaFuncCache { 
# 658
cudaFuncCachePreferNone, 
# 659
cudaFuncCachePreferShared, 
# 660
cudaFuncCachePreferL1
# 661
}; 
#endif
# 667 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 667
enum cudaComputeMode { 
# 669
cudaComputeModeDefault, 
# 670
cudaComputeModeExclusive, 
# 671
cudaComputeModeProhibited
# 672
}; 
#endif
# 678 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 678
enum cudaLimit { 
# 680
cudaLimitStackSize, 
# 681
cudaLimitPrintfFifoSize, 
# 682
cudaLimitMallocHeapSize
# 683
}; 
#endif
# 689 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
# 689
struct cudaDeviceProp { 
# 691
char name[256]; 
# 692
size_t totalGlobalMem; 
# 693
size_t sharedMemPerBlock; 
# 694
int regsPerBlock; 
# 695
int warpSize; 
# 696
size_t memPitch; 
# 697
int maxThreadsPerBlock; 
# 698
int maxThreadsDim[3]; 
# 699
int maxGridSize[3]; 
# 700
int clockRate; 
# 701
size_t totalConstMem; 
# 702
int major; 
# 703
int minor; 
# 704
size_t textureAlignment; 
# 705
int deviceOverlap; 
# 706
int multiProcessorCount; 
# 707
int kernelExecTimeoutEnabled; 
# 708
int integrated; 
# 709
int canMapHostMemory; 
# 710
int computeMode; 
# 711
int maxTexture1D; 
# 712
int maxTexture2D[2]; 
# 713
int maxTexture3D[3]; 
# 714
int maxTexture2DArray[3]; 
# 715
size_t surfaceAlignment; 
# 716
int concurrentKernels; 
# 717
int ECCEnabled; 
# 718
int pciBusID; 
# 719
int pciDeviceID; 
# 720
int tccDriver; 
# 721
int __cudaReserved[21]; 
# 722
}; 
#endif
# 768 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
typedef cudaError 
# 768
cudaError_t; 
#endif
# 774 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
typedef struct CUstream_st *
# 774
cudaStream_t; 
#endif
# 780 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
typedef struct CUevent_st *
# 780
cudaEvent_t; 
#endif
# 786 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
typedef cudaGraphicsResource *
# 786
cudaGraphicsResource_t; 
#endif
# 792 "/usr/local/cuda/bin/../include/driver_types.h"
#if 0
typedef struct CUuuid_st 
# 792
cudaUUID_t; 
#endif
# 63 "/usr/local/cuda/bin/../include/surface_types.h"
#if 0
# 63
enum cudaSurfaceBoundaryMode { 
# 65
cudaBoundaryModeZero, 
# 66
cudaBoundaryModeClamp, 
# 67
cudaBoundaryModeTrap
# 68
}; 
#endif
# 74 "/usr/local/cuda/bin/../include/surface_types.h"
#if 0
# 74
enum cudaSurfaceFormatMode { 
# 76
cudaFormatModeForced, 
# 77
cudaFormatModeAuto
# 78
}; 
#endif
# 84 "/usr/local/cuda/bin/../include/surface_types.h"
#if 0
# 84
struct surfaceReference { 
# 89
cudaChannelFormatDesc channelDesc; 
# 90
}; 
#endif
# 63 "/usr/local/cuda/bin/../include/texture_types.h"
#if 0
# 63
enum cudaTextureAddressMode { 
# 65
cudaAddressModeWrap, 
# 66
cudaAddressModeClamp, 
# 67
cudaAddressModeMirror, 
# 68
cudaAddressModeBorder
# 69
}; 
#endif
# 75 "/usr/local/cuda/bin/../include/texture_types.h"
#if 0
# 75
enum cudaTextureFilterMode { 
# 77
cudaFilterModePoint, 
# 78
cudaFilterModeLinear
# 79
}; 
#endif
# 85 "/usr/local/cuda/bin/../include/texture_types.h"
#if 0
# 85
enum cudaTextureReadMode { 
# 87
cudaReadModeElementType, 
# 88
cudaReadModeNormalizedFloat
# 89
}; 
#endif
# 95 "/usr/local/cuda/bin/../include/texture_types.h"
#if 0
# 95
struct textureReference { 
# 100
int normalized; 
# 104
cudaTextureFilterMode filterMode; 
# 108
cudaTextureAddressMode addressMode[3]; 
# 112
cudaChannelFormatDesc channelDesc; 
# 113
int __cudaReserved[16]; 
# 114
}; 
#endif
# 75 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 75
struct char1 { 
# 77
signed char x; 
# 78
}; 
#endif
# 81 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 81
struct uchar1 { 
# 83
unsigned char x; 
# 84
}; 
#endif
# 87 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 87
struct __attribute__((__aligned__(2))) char2 { 
# 89
signed char x, y; 
# 90
}; 
#endif
# 93 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 93
struct __attribute__((__aligned__(2))) uchar2 { 
# 95
unsigned char x, y; 
# 96
}; 
#endif
# 99 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 99
struct char3 { 
# 101
signed char x, y, z; 
# 102
}; 
#endif
# 105 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 105
struct uchar3 { 
# 107
unsigned char x, y, z; 
# 108
}; 
#endif
# 111 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 111
struct __attribute__((__aligned__(4))) char4 { 
# 113
signed char x, y, z, w; 
# 114
}; 
#endif
# 117 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 117
struct __attribute__((__aligned__(4))) uchar4 { 
# 119
unsigned char x, y, z, w; 
# 120
}; 
#endif
# 123 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 123
struct short1 { 
# 125
short x; 
# 126
}; 
#endif
# 129 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 129
struct ushort1 { 
# 131
unsigned short x; 
# 132
}; 
#endif
# 135 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 135
struct __attribute__((__aligned__(4))) short2 { 
# 137
short x, y; 
# 138
}; 
#endif
# 141 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 141
struct __attribute__((__aligned__(4))) ushort2 { 
# 143
unsigned short x, y; 
# 144
}; 
#endif
# 147 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 147
struct short3 { 
# 149
short x, y, z; 
# 150
}; 
#endif
# 153 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 153
struct ushort3 { 
# 155
unsigned short x, y, z; 
# 156
}; 
#endif
# 159 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 159
struct __attribute__((__aligned__(8))) short4 { short x; short y; short z; short w; }; 
#endif
# 162 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 162
struct __attribute__((__aligned__(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; }; 
#endif
# 165 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 165
struct int1 { 
# 167
int x; 
# 168
}; 
#endif
# 171 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 171
struct uint1 { 
# 173
unsigned x; 
# 174
}; 
#endif
# 177 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 177
struct __attribute__((__aligned__(8))) int2 { int x; int y; }; 
#endif
# 180 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 180
struct __attribute__((__aligned__(8))) uint2 { unsigned x; unsigned y; }; 
#endif
# 183 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 183
struct int3 { 
# 185
int x, y, z; 
# 186
}; 
#endif
# 189 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 189
struct uint3 { 
# 191
unsigned x, y, z; 
# 192
}; 
#endif
# 195 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 195
struct __attribute__((__aligned__(16))) int4 { 
# 197
int x, y, z, w; 
# 198
}; 
#endif
# 201 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 201
struct __attribute__((__aligned__(16))) uint4 { 
# 203
unsigned x, y, z, w; 
# 204
}; 
#endif
# 207 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 207
struct long1 { 
# 209
long x; 
# 210
}; 
#endif
# 213 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 213
struct ulong1 { 
# 215
unsigned long x; 
# 216
}; 
#endif
# 229 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 229
struct __attribute__((__aligned__(16))) long2 { 
# 231
long x, y; 
# 232
}; 
#endif
# 235 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 235
struct __attribute__((__aligned__(16))) ulong2 { 
# 237
unsigned long x, y; 
# 238
}; 
#endif
# 243 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 243
struct long3 { 
# 245
long x, y, z; 
# 246
}; 
#endif
# 249 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 249
struct ulong3 { 
# 251
unsigned long x, y, z; 
# 252
}; 
#endif
# 255 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 255
struct __attribute__((__aligned__(16))) long4 { 
# 257
long x, y, z, w; 
# 258
}; 
#endif
# 261 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 261
struct __attribute__((__aligned__(16))) ulong4 { 
# 263
unsigned long x, y, z, w; 
# 264
}; 
#endif
# 267 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 267
struct float1 { 
# 269
float x; 
# 270
}; 
#endif
# 273 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 273
struct __attribute__((__aligned__(8))) float2 { float x; float y; }; 
#endif
# 276 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 276
struct float3 { 
# 278
float x, y, z; 
# 279
}; 
#endif
# 282 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 282
struct __attribute__((__aligned__(16))) float4 { 
# 284
float x, y, z, w; 
# 285
}; 
#endif
# 288 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 288
struct longlong1 { 
# 290
long long x; 
# 291
}; 
#endif
# 294 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 294
struct ulonglong1 { 
# 296
unsigned long long x; 
# 297
}; 
#endif
# 300 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 300
struct __attribute__((__aligned__(16))) longlong2 { 
# 302
long long x, y; 
# 303
}; 
#endif
# 306 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 306
struct __attribute__((__aligned__(16))) ulonglong2 { 
# 308
unsigned long long x, y; 
# 309
}; 
#endif
# 312 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 312
struct longlong3 { 
# 314
long long x, y, z; 
# 315
}; 
#endif
# 318 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 318
struct ulonglong3 { 
# 320
unsigned long long x, y, z; 
# 321
}; 
#endif
# 324 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 324
struct __attribute__((__aligned__(16))) longlong4 { 
# 326
long long x, y, z, w; 
# 327
}; 
#endif
# 330 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 330
struct __attribute__((__aligned__(16))) ulonglong4 { 
# 332
unsigned long long x, y, z, w; 
# 333
}; 
#endif
# 336 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 336
struct double1 { 
# 338
double x; 
# 339
}; 
#endif
# 342 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 342
struct __attribute__((__aligned__(16))) double2 { 
# 344
double x, y; 
# 345
}; 
#endif
# 348 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 348
struct double3 { 
# 350
double x, y, z; 
# 351
}; 
#endif
# 354 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 354
struct __attribute__((__aligned__(16))) double4 { 
# 356
double x, y, z, w; 
# 357
}; 
#endif
# 366 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef char1 
# 366
char1; 
#endif
# 368 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef uchar1 
# 368
uchar1; 
#endif
# 370 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef char2 
# 370
char2; 
#endif
# 372 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef uchar2 
# 372
uchar2; 
#endif
# 374 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef char3 
# 374
char3; 
#endif
# 376 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef uchar3 
# 376
uchar3; 
#endif
# 378 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef char4 
# 378
char4; 
#endif
# 380 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef uchar4 
# 380
uchar4; 
#endif
# 382 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef short1 
# 382
short1; 
#endif
# 384 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ushort1 
# 384
ushort1; 
#endif
# 386 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef short2 
# 386
short2; 
#endif
# 388 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ushort2 
# 388
ushort2; 
#endif
# 390 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef short3 
# 390
short3; 
#endif
# 392 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ushort3 
# 392
ushort3; 
#endif
# 394 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef short4 
# 394
short4; 
#endif
# 396 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ushort4 
# 396
ushort4; 
#endif
# 398 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef int1 
# 398
int1; 
#endif
# 400 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef uint1 
# 400
uint1; 
#endif
# 402 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef int2 
# 402
int2; 
#endif
# 404 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef uint2 
# 404
uint2; 
#endif
# 406 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef int3 
# 406
int3; 
#endif
# 408 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef uint3 
# 408
uint3; 
#endif
# 410 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef int4 
# 410
int4; 
#endif
# 412 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef uint4 
# 412
uint4; 
#endif
# 414 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef long1 
# 414
long1; 
#endif
# 416 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ulong1 
# 416
ulong1; 
#endif
# 418 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef long2 
# 418
long2; 
#endif
# 420 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ulong2 
# 420
ulong2; 
#endif
# 422 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef long3 
# 422
long3; 
#endif
# 424 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ulong3 
# 424
ulong3; 
#endif
# 426 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef long4 
# 426
long4; 
#endif
# 428 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ulong4 
# 428
ulong4; 
#endif
# 430 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef float1 
# 430
float1; 
#endif
# 432 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef float2 
# 432
float2; 
#endif
# 434 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef float3 
# 434
float3; 
#endif
# 436 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef float4 
# 436
float4; 
#endif
# 438 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef longlong1 
# 438
longlong1; 
#endif
# 440 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ulonglong1 
# 440
ulonglong1; 
#endif
# 442 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef longlong2 
# 442
longlong2; 
#endif
# 444 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ulonglong2 
# 444
ulonglong2; 
#endif
# 446 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef longlong3 
# 446
longlong3; 
#endif
# 448 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ulonglong3 
# 448
ulonglong3; 
#endif
# 450 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef longlong4 
# 450
longlong4; 
#endif
# 452 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef ulonglong4 
# 452
ulonglong4; 
#endif
# 454 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef double1 
# 454
double1; 
#endif
# 456 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef double2 
# 456
double2; 
#endif
# 458 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef double3 
# 458
double3; 
#endif
# 460 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef double4 
# 460
double4; 
#endif
# 469 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
# 469
struct dim3 { 
# 471
unsigned x, y, z; 
# 477
}; 
#endif
# 480 "/usr/local/cuda/bin/../include/vector_types.h"
#if 0
typedef dim3 
# 480
dim3; 
#endif
# 115 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit(); 
# 131
extern "C" cudaError_t cudaThreadSynchronize(); 
# 183
extern "C" cudaError_t cudaThreadSetLimit(cudaLimit, size_t); 
# 207
extern "C" cudaError_t cudaThreadGetLimit(size_t *, cudaLimit); 
# 237
extern "C" cudaError_t cudaThreadGetCacheConfig(cudaFuncCache *); 
# 278
extern "C" cudaError_t cudaThreadSetCacheConfig(cudaFuncCache); 
# 330
extern "C" cudaError_t cudaGetLastError(); 
# 373
extern "C" cudaError_t cudaPeekAtLastError(); 
# 387
extern "C" const char *cudaGetErrorString(cudaError_t); 
# 418
extern "C" cudaError_t cudaGetDeviceCount(int *); 
# 536
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp *, int); 
# 555
extern "C" cudaError_t cudaChooseDevice(int *, const cudaDeviceProp *); 
# 579
extern "C" cudaError_t cudaSetDevice(int); 
# 597
extern "C" cudaError_t cudaGetDevice(int *); 
# 626
extern "C" cudaError_t cudaSetValidDevices(int *, int); 
# 677
extern "C" cudaError_t cudaSetDeviceFlags(unsigned); 
# 703
extern "C" cudaError_t cudaStreamCreate(cudaStream_t *); 
# 719
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t); 
# 753
extern "C" cudaError_t cudaStreamWaitEvent(cudaStream_t, cudaEvent_t, unsigned); 
# 771
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t); 
# 789
extern "C" cudaError_t cudaStreamQuery(cudaStream_t); 
# 821
extern "C" cudaError_t cudaEventCreate(cudaEvent_t *); 
# 852
extern "C" cudaError_t cudaEventCreateWithFlags(cudaEvent_t *, unsigned); 
# 885
extern "C" cudaError_t cudaEventRecord(cudaEvent_t, cudaStream_t = 0); 
# 914
extern "C" cudaError_t cudaEventQuery(cudaEvent_t); 
# 946
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t); 
# 966
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t); 
# 1007
extern "C" cudaError_t cudaEventElapsedTime(float *, cudaEvent_t, cudaEvent_t); 
# 1046
extern "C" cudaError_t cudaConfigureCall(dim3, dim3, size_t = (0), cudaStream_t = 0); 
# 1073
extern "C" cudaError_t cudaSetupArgument(const void *, size_t, size_t); 
# 1119
extern "C" cudaError_t cudaFuncSetCacheConfig(const char *, cudaFuncCache); 
# 1154
extern "C" cudaError_t cudaLaunch(const char *); 
# 1187
extern "C" cudaError_t cudaFuncGetAttributes(cudaFuncAttributes *, const char *); 
# 1209
extern "C" cudaError_t cudaSetDoubleForDevice(double *); 
# 1231
extern "C" cudaError_t cudaSetDoubleForHost(double *); 
# 1263
extern "C" cudaError_t cudaMalloc(void **, size_t); 
# 1292
extern "C" cudaError_t cudaMallocHost(void **, size_t); 
# 1331
extern "C" cudaError_t cudaMallocPitch(void **, size_t *, size_t, size_t); 
# 1370
extern "C" cudaError_t cudaMallocArray(cudaArray **, const cudaChannelFormatDesc *, size_t, size_t = (0), unsigned = (0)); 
# 1394
extern "C" cudaError_t cudaFree(void *); 
# 1414
extern "C" cudaError_t cudaFreeHost(void *); 
# 1436
extern "C" cudaError_t cudaFreeArray(cudaArray *); 
# 1495
extern "C" cudaError_t cudaHostAlloc(void **, size_t, unsigned); 
# 1522
extern "C" cudaError_t cudaHostGetDevicePointer(void **, void *, unsigned); 
# 1541
extern "C" cudaError_t cudaHostGetFlags(unsigned *, void *); 
# 1576
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr *, cudaExtent); 
# 1626
extern "C" cudaError_t cudaMalloc3DArray(cudaArray **, const cudaChannelFormatDesc *, cudaExtent, unsigned = (0)); 
# 1723
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms *); 
# 1828
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms *, cudaStream_t = 0); 
# 1847
extern "C" cudaError_t cudaMemGetInfo(size_t *, size_t *); 
# 1880
extern "C" cudaError_t cudaMemcpy(void *, const void *, size_t, cudaMemcpyKind); 
# 1913
extern "C" cudaError_t cudaMemcpyToArray(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind); 
# 1946
extern "C" cudaError_t cudaMemcpyFromArray(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind); 
# 1981
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice); 
# 2023
extern "C" cudaError_t cudaMemcpy2D(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind); 
# 2064
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind); 
# 2105
extern "C" cudaError_t cudaMemcpy2DFromArray(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind); 
# 2144
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice); 
# 2179
extern "C" cudaError_t cudaMemcpyToSymbol(const char *, const void *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice); 
# 2213
extern "C" cudaError_t cudaMemcpyFromSymbol(void *, const char *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost); 
# 2256
extern "C" cudaError_t cudaMemcpyAsync(void *, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0); 
# 2298
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind, cudaStream_t = 0); 
# 2340
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); 
# 2391
extern "C" cudaError_t cudaMemcpy2DAsync(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); 
# 2441
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); 
# 2491
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); 
# 2535
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char *, const void *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); 
# 2578
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void *, const char *, size_t, size_t, cudaMemcpyKind, cudaStream_t = 0); 
# 2600
extern "C" cudaError_t cudaMemset(void *, int, size_t); 
# 2626
extern "C" cudaError_t cudaMemset2D(void *, size_t, int, size_t, size_t); 
# 2665
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr, int, cudaExtent); 
# 2692
extern "C" cudaError_t cudaMemsetAsync(void *, int, size_t, cudaStream_t = 0); 
# 2724
extern "C" cudaError_t cudaMemset2DAsync(void *, size_t, int, size_t, size_t, cudaStream_t = 0); 
# 2769
extern "C" cudaError_t cudaMemset3DAsync(cudaPitchedPtr, int, cudaExtent, cudaStream_t = 0); 
# 2796
extern "C" cudaError_t cudaGetSymbolAddress(void **, const char *); 
# 2819
extern "C" cudaError_t cudaGetSymbolSize(size_t *, const char *); 
# 2865
extern "C" cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t); 
# 2897
extern "C" cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t, unsigned); 
# 2932
extern "C" cudaError_t cudaGraphicsMapResources(int, cudaGraphicsResource_t *, cudaStream_t = 0); 
# 2963
extern "C" cudaError_t cudaGraphicsUnmapResources(int, cudaGraphicsResource_t *, cudaStream_t = 0); 
# 2992
extern "C" cudaError_t cudaGraphicsResourceGetMappedPointer(void **, size_t *, cudaGraphicsResource_t); 
# 3026
extern "C" cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray **, cudaGraphicsResource_t, unsigned, unsigned); 
# 3059
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc *, const cudaArray *); 
# 3094
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int, int, int, int, cudaChannelFormatKind); 
# 3136
extern "C" cudaError_t cudaBindTexture(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t = (((2147483647) * 2U) + 1U)); 
# 3179
extern "C" cudaError_t cudaBindTexture2D(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t, size_t, size_t); 
# 3207
extern "C" cudaError_t cudaBindTextureToArray(const textureReference *, const cudaArray *, const cudaChannelFormatDesc *); 
# 3228
extern "C" cudaError_t cudaUnbindTexture(const textureReference *); 
# 3253
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t *, const textureReference *); 
# 3277
extern "C" cudaError_t cudaGetTextureReference(const textureReference **, const char *); 
# 3310
extern "C" cudaError_t cudaBindSurfaceToArray(const surfaceReference *, const cudaArray *, const cudaChannelFormatDesc *); 
# 3328
extern "C" cudaError_t cudaGetSurfaceReference(const surfaceReference **, const char *); 
# 3355
extern "C" cudaError_t cudaDriverGetVersion(int *); 
# 3372
extern "C" cudaError_t cudaRuntimeGetVersion(int *); 
# 3377
extern "C" cudaError_t cudaGetExportTable(const void **, const cudaUUID_t *); 
# 93 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc() 
# 94
{ 
# 95
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
# 96
} 
# 98
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf() 
# 99
{ 
# 100
int e = (((int)sizeof(unsigned short)) * 8); 
# 102
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 103
} 
# 105
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1() 
# 106
{ 
# 107
int e = (((int)sizeof(unsigned short)) * 8); 
# 109
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 110
} 
# 112
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2() 
# 113
{ 
# 114
int e = (((int)sizeof(unsigned short)) * 8); 
# 116
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 117
} 
# 119
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4() 
# 120
{ 
# 121
int e = (((int)sizeof(unsigned short)) * 8); 
# 123
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 124
} 
# 126
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> () 
# 127
{ 
# 128
int e = (((int)sizeof(char)) * 8); 
# 133
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 135
} 
# 137
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> () 
# 138
{ 
# 139
int e = (((int)sizeof(signed char)) * 8); 
# 141
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 142
} 
# 144
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> () 
# 145
{ 
# 146
int e = (((int)sizeof(unsigned char)) * 8); 
# 148
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 149
} 
# 151
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> () 
# 152
{ 
# 153
int e = (((int)sizeof(signed char)) * 8); 
# 155
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 156
} 
# 158
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> () 
# 159
{ 
# 160
int e = (((int)sizeof(unsigned char)) * 8); 
# 162
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 163
} 
# 165
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> () 
# 166
{ 
# 167
int e = (((int)sizeof(signed char)) * 8); 
# 169
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 170
} 
# 172
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> () 
# 173
{ 
# 174
int e = (((int)sizeof(unsigned char)) * 8); 
# 176
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 177
} 
# 179
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> () 
# 180
{ 
# 181
int e = (((int)sizeof(signed char)) * 8); 
# 183
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 184
} 
# 186
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> () 
# 187
{ 
# 188
int e = (((int)sizeof(unsigned char)) * 8); 
# 190
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 191
} 
# 193
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> () 
# 194
{ 
# 195
int e = (((int)sizeof(short)) * 8); 
# 197
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 198
} 
# 200
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> () 
# 201
{ 
# 202
int e = (((int)sizeof(unsigned short)) * 8); 
# 204
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 205
} 
# 207
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> () 
# 208
{ 
# 209
int e = (((int)sizeof(short)) * 8); 
# 211
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 212
} 
# 214
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> () 
# 215
{ 
# 216
int e = (((int)sizeof(unsigned short)) * 8); 
# 218
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 219
} 
# 221
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> () 
# 222
{ 
# 223
int e = (((int)sizeof(short)) * 8); 
# 225
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 226
} 
# 228
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> () 
# 229
{ 
# 230
int e = (((int)sizeof(unsigned short)) * 8); 
# 232
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 233
} 
# 235
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> () 
# 236
{ 
# 237
int e = (((int)sizeof(short)) * 8); 
# 239
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 240
} 
# 242
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> () 
# 243
{ 
# 244
int e = (((int)sizeof(unsigned short)) * 8); 
# 246
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 247
} 
# 249
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> () 
# 250
{ 
# 251
int e = (((int)sizeof(int)) * 8); 
# 253
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 254
} 
# 256
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> () 
# 257
{ 
# 258
int e = (((int)sizeof(unsigned)) * 8); 
# 260
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 261
} 
# 263
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> () 
# 264
{ 
# 265
int e = (((int)sizeof(int)) * 8); 
# 267
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 268
} 
# 270
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> () 
# 271
{ 
# 272
int e = (((int)sizeof(unsigned)) * 8); 
# 274
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 275
} 
# 277
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> () 
# 278
{ 
# 279
int e = (((int)sizeof(int)) * 8); 
# 281
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 282
} 
# 284
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> () 
# 285
{ 
# 286
int e = (((int)sizeof(unsigned)) * 8); 
# 288
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 289
} 
# 291
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> () 
# 292
{ 
# 293
int e = (((int)sizeof(int)) * 8); 
# 295
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 296
} 
# 298
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> () 
# 299
{ 
# 300
int e = (((int)sizeof(unsigned)) * 8); 
# 302
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 303
} 
# 365 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> () 
# 366
{ 
# 367
int e = (((int)sizeof(float)) * 8); 
# 369
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 370
} 
# 372
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> () 
# 373
{ 
# 374
int e = (((int)sizeof(float)) * 8); 
# 376
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 377
} 
# 379
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> () 
# 380
{ 
# 381
int e = (((int)sizeof(float)) * 8); 
# 383
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 384
} 
# 386
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> () 
# 387
{ 
# 388
int e = (((int)sizeof(float)) * 8); 
# 390
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 391
} 
# 65 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz) 
# 66
{ 
# 67
cudaPitchedPtr s; 
# 69
(s.ptr) = d; 
# 70
(s.pitch) = p; 
# 71
(s.xsize) = xsz; 
# 72
(s.ysize) = ysz; 
# 74
return s; 
# 75
} 
# 92
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z) 
# 93
{ 
# 94
cudaPos p; 
# 96
(p.x) = x; 
# 97
(p.y) = y; 
# 98
(p.z) = z; 
# 100
return p; 
# 101
} 
# 118
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d) 
# 119
{ 
# 120
cudaExtent e; 
# 122
(e.width) = w; 
# 123
(e.height) = h; 
# 124
(e.depth) = d; 
# 126
return e; 
# 127
} 
# 55 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char1 make_char1(signed char x) 
# 56
{ 
# 57
char1 t; (t.x) = x; return t; 
# 58
} 
# 60
static inline uchar1 make_uchar1(unsigned char x) 
# 61
{ 
# 62
uchar1 t; (t.x) = x; return t; 
# 63
} 
# 65
static inline char2 make_char2(signed char x, signed char y) 
# 66
{ 
# 67
char2 t; (t.x) = x; (t.y) = y; return t; 
# 68
} 
# 70
static inline uchar2 make_uchar2(unsigned char x, unsigned char y) 
# 71
{ 
# 72
uchar2 t; (t.x) = x; (t.y) = y; return t; 
# 73
} 
# 75
static inline char3 make_char3(signed char x, signed char y, signed char z) 
# 76
{ 
# 77
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 78
} 
# 80
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z) 
# 81
{ 
# 82
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 83
} 
# 85
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w) 
# 86
{ 
# 87
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 88
} 
# 90
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w) 
# 91
{ 
# 92
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 93
} 
# 95
static inline short1 make_short1(short x) 
# 96
{ 
# 97
short1 t; (t.x) = x; return t; 
# 98
} 
# 100
static inline ushort1 make_ushort1(unsigned short x) 
# 101
{ 
# 102
ushort1 t; (t.x) = x; return t; 
# 103
} 
# 105
static inline short2 make_short2(short x, short y) 
# 106
{ 
# 107
short2 t; (t.x) = x; (t.y) = y; return t; 
# 108
} 
# 110
static inline ushort2 make_ushort2(unsigned short x, unsigned short y) 
# 111
{ 
# 112
ushort2 t; (t.x) = x; (t.y) = y; return t; 
# 113
} 
# 115
static inline short3 make_short3(short x, short y, short z) 
# 116
{ 
# 117
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 118
} 
# 120
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z) 
# 121
{ 
# 122
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 123
} 
# 125
static inline short4 make_short4(short x, short y, short z, short w) 
# 126
{ 
# 127
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 128
} 
# 130
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w) 
# 131
{ 
# 132
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 133
} 
# 135
static inline int1 make_int1(int x) 
# 136
{ 
# 137
int1 t; (t.x) = x; return t; 
# 138
} 
# 140
static inline uint1 make_uint1(unsigned x) 
# 141
{ 
# 142
uint1 t; (t.x) = x; return t; 
# 143
} 
# 145
static inline int2 make_int2(int x, int y) 
# 146
{ 
# 147
int2 t; (t.x) = x; (t.y) = y; return t; 
# 148
} 
# 150
static inline uint2 make_uint2(unsigned x, unsigned y) 
# 151
{ 
# 152
uint2 t; (t.x) = x; (t.y) = y; return t; 
# 153
} 
# 155
static inline int3 make_int3(int x, int y, int z) 
# 156
{ 
# 157
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 158
} 
# 160
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z) 
# 161
{ 
# 162
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 163
} 
# 165
static inline int4 make_int4(int x, int y, int z, int w) 
# 166
{ 
# 167
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 168
} 
# 170
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w) 
# 171
{ 
# 172
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 173
} 
# 175
static inline long1 make_long1(long x) 
# 176
{ 
# 177
long1 t; (t.x) = x; return t; 
# 178
} 
# 180
static inline ulong1 make_ulong1(unsigned long x) 
# 181
{ 
# 182
ulong1 t; (t.x) = x; return t; 
# 183
} 
# 185
static inline long2 make_long2(long x, long y) 
# 186
{ 
# 187
long2 t; (t.x) = x; (t.y) = y; return t; 
# 188
} 
# 190
static inline ulong2 make_ulong2(unsigned long x, unsigned long y) 
# 191
{ 
# 192
ulong2 t; (t.x) = x; (t.y) = y; return t; 
# 193
} 
# 195
static inline long3 make_long3(long x, long y, long z) 
# 196
{ 
# 197
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 198
} 
# 200
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z) 
# 201
{ 
# 202
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 203
} 
# 205
static inline long4 make_long4(long x, long y, long z, long w) 
# 206
{ 
# 207
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 208
} 
# 210
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w) 
# 211
{ 
# 212
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 213
} 
# 215
static inline float1 make_float1(float x) 
# 216
{ 
# 217
float1 t; (t.x) = x; return t; 
# 218
} 
# 220
static inline float2 make_float2(float x, float y) 
# 221
{ 
# 222
float2 t; (t.x) = x; (t.y) = y; return t; 
# 223
} 
# 225
static inline float3 make_float3(float x, float y, float z) 
# 226
{ 
# 227
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 228
} 
# 230
static inline float4 make_float4(float x, float y, float z, float w) 
# 231
{ 
# 232
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 233
} 
# 235
static inline longlong1 make_longlong1(long long x) 
# 236
{ 
# 237
longlong1 t; (t.x) = x; return t; 
# 238
} 
# 240
static inline ulonglong1 make_ulonglong1(unsigned long long x) 
# 241
{ 
# 242
ulonglong1 t; (t.x) = x; return t; 
# 243
} 
# 245
static inline longlong2 make_longlong2(long long x, long long y) 
# 246
{ 
# 247
longlong2 t; (t.x) = x; (t.y) = y; return t; 
# 248
} 
# 250
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y) 
# 251
{ 
# 252
ulonglong2 t; (t.x) = x; (t.y) = y; return t; 
# 253
} 
# 255
static inline longlong3 make_longlong3(long long x, long long y, long long z) 
# 256
{ 
# 257
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 258
} 
# 260
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z) 
# 261
{ 
# 262
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 263
} 
# 265
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w) 
# 266
{ 
# 267
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 268
} 
# 270
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w) 
# 271
{ 
# 272
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 273
} 
# 275
static inline double1 make_double1(double x) 
# 276
{ 
# 277
double1 t; (t.x) = x; return t; 
# 278
} 
# 280
static inline double2 make_double2(double x, double y) 
# 281
{ 
# 282
double2 t; (t.x) = x; (t.y) = y; return t; 
# 283
} 
# 285
static inline double3 make_double3(double x, double y, double z) 
# 286
{ 
# 287
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 288
} 
# 290
static inline double4 make_double4(double x, double y, double z, double w) 
# 291
{ 
# 292
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 293
} 
# 46 "/usr/include/string.h" 3
extern "C" { extern inline void *memcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); } 
# 50
extern "C" { extern inline void *memmove(void *, const void *, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); } 
# 58
extern "C" void *memccpy(void *__restrict__, const void *__restrict__, int, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 66
extern "C" { extern inline void *memset(void *, int, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); } 
# 69
extern "C" int memcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 76
extern inline void *memchr(void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); 
# 78
extern inline const void *memchr(const void *, int, size_t) throw() __asm__("memchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); 
# 83
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) void *memchr(void *__s, int __c, size_t __n) throw() 
# 84
{ 
# 85
return __builtin_memchr(__s, __c, __n); 
# 86
} 
# 89
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) const void *memchr(const void *__s, int __c, size_t __n) throw() 
# 90
{ 
# 91
return __builtin_memchr(__s, __c, __n); 
# 92
} 
# 105
void *rawmemchr(void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1))); 
# 107
const void *rawmemchr(const void *, int) throw() __asm__("rawmemchr") __attribute__((__pure__)) __attribute__((nonnull(1))); 
# 116
void *memrchr(void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1))); 
# 118
const void *memrchr(const void *, int, size_t) throw() __asm__("memrchr") __attribute__((__pure__)) __attribute__((nonnull(1))); 
# 129
extern "C" { extern inline char *strcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); } 
# 132
extern "C" { extern inline char *strncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); } 
# 137
extern "C" { extern inline char *strcat(char *__restrict__, const char *__restrict__) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); } 
# 140
extern "C" { extern inline char *strncat(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); } 
# 144
extern "C" int strcmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 147
extern "C" int strncmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 151
extern "C" int strcoll(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 154
extern "C" size_t strxfrm(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(2))); 
# 39 "/usr/include/xlocale.h" 3
extern "C" { typedef 
# 27
struct __locale_struct { 
# 30
struct __locale_data *__locales[13]; 
# 33
const unsigned short *__ctype_b; 
# 34
const int *__ctype_tolower; 
# 35
const int *__ctype_toupper; 
# 38
const char *__names[13]; 
# 39
} *__locale_t; }
# 42
extern "C" { typedef __locale_t locale_t; }
# 166 "/usr/include/string.h" 3
extern "C" int strcoll_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3))); 
# 169
extern "C" size_t strxfrm_l(char *, const char *, size_t, __locale_t) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4))); 
# 176
extern "C" char *strdup(const char *) throw() __attribute__((__malloc__)) __attribute__((nonnull(1))); 
# 184
extern "C" char *strndup(const char *, size_t) throw() __attribute__((__malloc__)) __attribute__((nonnull(1))); 
# 216 "/usr/include/string.h" 3
extern inline char *strchr(char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); 
# 218
extern inline const char *strchr(const char *, int) throw() __asm__("strchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); 
# 223
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) char *strchr(char *__s, int __c) throw() 
# 224
{ 
# 225
return __builtin_strchr(__s, __c); 
# 226
} 
# 229
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) const char *strchr(const char *__s, int __c) throw() 
# 230
{ 
# 231
return __builtin_strchr(__s, __c); 
# 232
} 
# 243
extern inline char *strrchr(char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); 
# 245
extern inline const char *strrchr(const char *, int) throw() __asm__("strrchr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); 
# 250
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) char *strrchr(char *__s, int __c) throw() 
# 251
{ 
# 252
return __builtin_strrchr(__s, __c); 
# 253
} 
# 256
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) const char *strrchr(const char *__s, int __c) throw() 
# 257
{ 
# 258
return __builtin_strrchr(__s, __c); 
# 259
} 
# 272
char *strchrnul(char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1))); 
# 274
const char *strchrnul(const char *, int) throw() __asm__("strchrnul") __attribute__((__pure__)) __attribute__((nonnull(1))); 
# 285
extern "C" size_t strcspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 289
extern "C" size_t strspn(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 295
extern inline char *strpbrk(char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 297
extern inline const char *strpbrk(const char *, const char *) throw() __asm__("strpbrk") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 302
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) char *strpbrk(char *__s, const char *__accept) throw() 
# 303
{ 
# 304
return __builtin_strpbrk(__s, __accept); 
# 305
} 
# 308
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) const char *strpbrk(const char *__s, const char *__accept) throw() 
# 309
{ 
# 310
return __builtin_strpbrk(__s, __accept); 
# 311
} 
# 322
extern inline char *strstr(char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 324
extern inline const char *strstr(const char *, const char *) throw() __asm__("strstr") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 329
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) char *strstr(char *__haystack, const char *__needle) throw() 
# 330
{ 
# 331
return __builtin_strstr(__haystack, __needle); 
# 332
} 
# 335
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) const char *strstr(const char *__haystack, const char *__needle) throw() 
# 336
{ 
# 337
return __builtin_strstr(__haystack, __needle); 
# 338
} 
# 348
extern "C" char *strtok(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(2))); 
# 354
extern "C" char *__strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3))); 
# 359
extern "C" char *strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(3))); 
# 367
char *strcasestr(char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 369
const char *strcasestr(const char *, const char *) throw() __asm__("strcasestr") __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 382
extern "C" void *memmem(const void *, size_t, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(3))); 
# 388
extern "C" void *__mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 391
extern "C" { extern inline void *mempcpy(void *__restrict__, const void *__restrict__, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); } 
# 399
extern "C" size_t strlen(const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))); 
# 406
extern "C" size_t strnlen(const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))); 
# 413
extern "C" char *strerror(int) throw(); 
# 438 "/usr/include/string.h" 3
extern "C" char *strerror_r(int, char *, size_t) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(2))); 
# 445
extern "C" char *strerror_l(int, __locale_t) throw(); 
# 451
extern "C" void __bzero(void *, size_t) throw() __attribute__((nonnull(1))); 
# 455
extern "C" { extern inline void bcopy(const void *, void *, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); } 
# 459
extern "C" { extern inline void bzero(void *, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); } 
# 462
extern "C" int bcmp(const void *, const void *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 469
extern inline char *index(char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); 
# 471
extern inline const char *index(const char *, int) throw() __asm__("index") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); 
# 476
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) char *index(char *__s, int __c) throw() 
# 477
{ 
# 478
return __builtin_index(__s, __c); 
# 479
} 
# 482
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) const char *index(const char *__s, int __c) throw() 
# 483
{ 
# 484
return __builtin_index(__s, __c); 
# 485
} 
# 497
extern inline char *rindex(char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); 
# 499
extern inline const char *rindex(const char *, int) throw() __asm__("rindex") __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); 
# 504
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) char *rindex(char *__s, int __c) throw() 
# 505
{ 
# 506
return __builtin_rindex(__s, __c); 
# 507
} 
# 510
inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) const char *rindex(const char *__s, int __c) throw() 
# 511
{ 
# 512
return __builtin_rindex(__s, __c); 
# 513
} 
# 523
extern "C" int ffs(int) throw() __attribute__((__const__)); 
# 528
extern "C" int ffsl(long) throw() __attribute__((__const__)); 
# 529
extern "C" int ffsll(long long) throw() __attribute__((__const__)); 
# 534
extern "C" int strcasecmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 538
extern "C" int strncasecmp(const char *, const char *, size_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 545
extern "C" int strcasecmp_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3))); 
# 549
extern "C" int strncasecmp_l(const char *, const char *, size_t, __locale_t) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(4))); 
# 557
extern "C" char *strsep(char **__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 564
extern "C" char *strsignal(int) throw(); 
# 567
extern "C" char *__stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 569
extern "C" { extern inline char *stpcpy(char *__restrict__, const char *__restrict__) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); } 
# 574
extern "C" char *__stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 577
extern "C" { extern inline char *stpncpy(char *__restrict__, const char *__restrict__, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); } 
# 584
extern "C" int strverscmp(const char *, const char *) throw() __attribute__((__pure__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 588
extern "C" char *strfry(char *) throw() __attribute__((nonnull(1))); 
# 591
extern "C" void *memfrob(void *, size_t) throw() __attribute__((nonnull(1))); 
# 599
char *basename(char *) throw() __asm__("basename") __attribute__((nonnull(1))); 
# 601
const char *basename(const char *) throw() __asm__("basename") __attribute__((nonnull(1))); 
# 22 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
extern "C" void __warn_memset_zero_len(); 
# 48 "/usr/include/x86_64-linux-gnu/bits/string3.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) void *memcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __len) throw() 
# 50
{ 
# 51
return __builtin___memcpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 0)); 
# 52
} } 
# 55
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) void *memmove(void *__dest, const void *__src, size_t __len) throw() 
# 56
{ 
# 57
return __builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0)); 
# 58
} } 
# 62
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) void *mempcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __len) throw() 
# 64
{ 
# 65
return __builtin___mempcpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 0)); 
# 66
} } 
# 76
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) void *memset(void *__dest, int __ch, size_t __len) throw() 
# 77
{ 
# 78
if (((0) && (__len == (0))) && ((!(0)) || (__ch != 0))) 
# 80
{ 
# 81
__warn_memset_zero_len(); 
# 82
return __dest; 
# 83
}  
# 84
return __builtin___memset_chk(__dest, __ch, __len, __builtin_object_size(__dest, 0)); 
# 85
} } 
# 89
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) void bcopy(const void *__src, void *__dest, size_t __len) throw() 
# 90
{ 
# 91
(void)__builtin___memmove_chk(__dest, __src, __len, __builtin_object_size(__dest, 0)); 
# 92
} } 
# 95
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) void bzero(void *__dest, size_t __len) throw() 
# 96
{ 
# 97
(void)__builtin___memset_chk(__dest, '\000', __len, __builtin_object_size(__dest, 0)); 
# 98
} } 
# 102
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) char *strcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw() 
# 103
{ 
# 104
return __builtin___strcpy_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1)); 
# 105
} } 
# 109
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) char *stpcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw() 
# 110
{ 
# 111
return __builtin___stpcpy_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1)); 
# 112
} } 
# 117
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) char *strncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __len) throw() 
# 119
{ 
# 120
return __builtin___strncpy_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1)); 
# 121
} } 
# 124
extern "C" char *__stpncpy_chk(char *, const char *, size_t, size_t) throw(); 
# 126
extern "C" char *__stpncpy_alias(char *, const char *, size_t) throw() __asm__("stpncpy"); 
# 130
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) char *stpncpy(char *__dest, const char *__src, size_t __n) throw() 
# 131
{ 
# 132
if ((__builtin_object_size(__dest, 2 > 1) != ((size_t)(-1))) && ((!(0)) || (__n <= __builtin_object_size(__dest, 2 > 1)))) { 
# 134
return __stpncpy_chk(__dest, __src, __n, __builtin_object_size(__dest, 2 > 1)); }  
# 135
return __stpncpy_alias(__dest, __src, __n); 
# 136
} } 
# 140
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) char *strcat(char *__restrict__ __dest, const char *__restrict__ __src) throw() 
# 141
{ 
# 142
return __builtin___strcat_chk(__dest, __src, __builtin_object_size(__dest, 2 > 1)); 
# 143
} } 
# 147
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) char *strncat(char *__restrict__ __dest, const char *__restrict__ __src, size_t __len) throw() 
# 149
{ 
# 150
return __builtin___strncat_chk(__dest, __src, __len, __builtin_object_size(__dest, 2 > 1)); 
# 151
} } 
# 30 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned char __u_char; }
# 31
extern "C" { typedef unsigned short __u_short; }
# 32
extern "C" { typedef unsigned __u_int; }
# 33
extern "C" { typedef unsigned long __u_long; }
# 36
extern "C" { typedef signed char __int8_t; }
# 37
extern "C" { typedef unsigned char __uint8_t; }
# 38
extern "C" { typedef signed short __int16_t; }
# 39
extern "C" { typedef unsigned short __uint16_t; }
# 40
extern "C" { typedef signed int __int32_t; }
# 41
extern "C" { typedef unsigned __uint32_t; }
# 43
extern "C" { typedef signed long __int64_t; }
# 44
extern "C" { typedef unsigned long __uint64_t; }
# 52
extern "C" { typedef long __quad_t; }
# 53
extern "C" { typedef unsigned long __u_quad_t; }
# 124 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __dev_t; }
# 125
extern "C" { typedef unsigned __uid_t; }
# 126
extern "C" { typedef unsigned __gid_t; }
# 127
extern "C" { typedef unsigned long __ino_t; }
# 128
extern "C" { typedef unsigned long __ino64_t; }
# 129
extern "C" { typedef unsigned __mode_t; }
# 130
extern "C" { typedef unsigned long __nlink_t; }
# 131
extern "C" { typedef long __off_t; }
# 132
extern "C" { typedef long __off64_t; }
# 133
extern "C" { typedef int __pid_t; }
# 134
extern "C" { typedef struct { int __val[2]; } __fsid_t; }
# 135
extern "C" { typedef long __clock_t; }
# 136
extern "C" { typedef unsigned long __rlim_t; }
# 137
extern "C" { typedef unsigned long __rlim64_t; }
# 138
extern "C" { typedef unsigned __id_t; }
# 139
extern "C" { typedef long __time_t; }
# 140
extern "C" { typedef unsigned __useconds_t; }
# 141
extern "C" { typedef long __suseconds_t; }
# 143
extern "C" { typedef int __daddr_t; }
# 144
extern "C" { typedef int __key_t; }
# 147
extern "C" { typedef int __clockid_t; }
# 150
extern "C" { typedef void *__timer_t; }
# 153
extern "C" { typedef long __blksize_t; }
# 158
extern "C" { typedef long __blkcnt_t; }
# 159
extern "C" { typedef long __blkcnt64_t; }
# 162
extern "C" { typedef unsigned long __fsblkcnt_t; }
# 163
extern "C" { typedef unsigned long __fsblkcnt64_t; }
# 166
extern "C" { typedef unsigned long __fsfilcnt_t; }
# 167
extern "C" { typedef unsigned long __fsfilcnt64_t; }
# 170
extern "C" { typedef long __fsword_t; }
# 172
extern "C" { typedef long __ssize_t; }
# 175
extern "C" { typedef long __syscall_slong_t; }
# 177
extern "C" { typedef unsigned long __syscall_ulong_t; }
# 181
extern "C" { typedef __off64_t __loff_t; }
# 182
extern "C" { typedef __quad_t *__qaddr_t; }
# 183
extern "C" { typedef char *__caddr_t; }
# 186
extern "C" { typedef long __intptr_t; }
# 189
extern "C" { typedef unsigned __socklen_t; }
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
extern "C" { struct timeval { 
# 32
__time_t tv_sec; 
# 33
__suseconds_t tv_usec; 
# 34
}; }
# 25 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
extern "C" { struct timex { 
# 27
unsigned modes; 
# 28
__syscall_slong_t offset; 
# 29
__syscall_slong_t freq; 
# 30
__syscall_slong_t maxerror; 
# 31
__syscall_slong_t esterror; 
# 32
int status; 
# 33
__syscall_slong_t constant; 
# 34
__syscall_slong_t precision; 
# 35
__syscall_slong_t tolerance; 
# 36
timeval time; 
# 37
__syscall_slong_t tick; 
# 38
__syscall_slong_t ppsfreq; 
# 39
__syscall_slong_t jitter; 
# 40
int shift; 
# 41
__syscall_slong_t stabil; 
# 42
__syscall_slong_t jitcnt; 
# 43
__syscall_slong_t calcnt; 
# 44
__syscall_slong_t errcnt; 
# 45
__syscall_slong_t stbcnt; 
# 47
int tai; 
# 50
int:32; int:32; int:32; int:32; 
# 51
int:32; int:32; int:32; int:32; 
# 52
int:32; int:32; int:32; 
# 53
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
# 122
__time_t tv_sec; 
# 123
__syscall_slong_t tv_nsec; 
# 124
}; }
# 133
extern "C" { struct tm { 
# 135
int tm_sec; 
# 136
int tm_min; 
# 137
int tm_hour; 
# 138
int tm_mday; 
# 139
int tm_mon; 
# 140
int tm_year; 
# 141
int tm_wday; 
# 142
int tm_yday; 
# 143
int tm_isdst; 
# 146
long tm_gmtoff; 
# 147
const char *tm_zone; 
# 152
}; }
# 161
extern "C" { struct itimerspec { 
# 163
timespec it_interval; 
# 164
timespec it_value; 
# 165
}; }
# 168
struct sigevent; 
# 174
extern "C" { typedef __pid_t pid_t; }
# 189
extern "C"  __attribute__((weak)) clock_t clock() throw(); 
# 192
extern "C" time_t time(time_t *) throw(); 
# 195
extern "C" double difftime(time_t, time_t) throw() __attribute__((__const__)); 
# 199
extern "C" time_t mktime(tm *) throw(); 
# 205
extern "C" size_t strftime(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__) throw(); 
# 213
extern "C" char *strptime(const char *__restrict__, const char *__restrict__, tm *) throw(); 
# 223 "/usr/include/time.h" 3
extern "C" size_t strftime_l(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__, __locale_t) throw(); 
# 230
extern "C" char *strptime_l(const char *__restrict__, const char *__restrict__, tm *, __locale_t) throw(); 
# 239
extern "C" tm *gmtime(const time_t *) throw(); 
# 243
extern "C" tm *localtime(const time_t *) throw(); 
# 249
extern "C" tm *gmtime_r(const time_t *__restrict__, tm *__restrict__) throw(); 
# 254
extern "C" tm *localtime_r(const time_t *__restrict__, tm *__restrict__) throw(); 
# 261
extern "C" char *asctime(const tm *) throw(); 
# 264
extern "C" char *ctime(const time_t *) throw(); 
# 272
extern "C" char *asctime_r(const tm *__restrict__, char *__restrict__) throw(); 
# 276
extern "C" char *ctime_r(const time_t *__restrict__, char *__restrict__) throw(); 
# 282
extern "C" { extern char *__tzname[2]; } 
# 283
extern "C" { extern int __daylight; } 
# 284
extern "C" { extern long __timezone; } 
# 289
extern "C" { extern char *tzname[2]; } 
# 293
extern "C" void tzset() throw(); 
# 297
extern "C" { extern int daylight; } 
# 298
extern "C" { extern long timezone; } 
# 304
extern "C" int stime(const time_t *) throw(); 
# 319
extern "C" time_t timegm(tm *) throw(); 
# 322
extern "C" time_t timelocal(tm *) throw(); 
# 325
extern "C" int dysize(int) throw() __attribute__((__const__)); 
# 334
extern "C" int nanosleep(const timespec *, timespec *); 
# 339
extern "C" int clock_getres(clockid_t, timespec *) throw(); 
# 342
extern "C" int clock_gettime(clockid_t, timespec *) throw(); 
# 345
extern "C" int clock_settime(clockid_t, const timespec *) throw(); 
# 353
extern "C" int clock_nanosleep(clockid_t, int, const timespec *, timespec *); 
# 358
extern "C" int clock_getcpuclockid(pid_t, clockid_t *) throw(); 
# 363
extern "C" int timer_create(clockid_t, sigevent *__restrict__, timer_t *__restrict__) throw(); 
# 368
extern "C" int timer_delete(timer_t) throw(); 
# 371
extern "C" int timer_settime(timer_t, int, const itimerspec *__restrict__, itimerspec *__restrict__) throw(); 
# 376
extern "C" int timer_gettime(timer_t, itimerspec *) throw(); 
# 380
extern "C" int timer_getoverrun(timer_t) throw(); 
# 386
extern "C" int timespec_get(timespec *, int) throw() __attribute__((nonnull(1))); 
# 403
extern "C" { extern int getdate_err; } 
# 412
extern "C" tm *getdate(const char *); 
# 426
extern "C" int getdate_r(const char *__restrict__, tm *__restrict__); 
# 57 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C"  __attribute__((weak)) clock_t clock() throw(); 
# 59
extern "C" { extern inline void *memset(void *, int, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))); } 
# 61
extern "C" { extern inline void *memcpy(void *, const void *, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))); } 
# 66 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C"  __attribute__((weak)) int abs(int) throw() __attribute__((__warn_unused_result__)) __attribute__((__const__)); 
# 68
extern "C"  __attribute__((weak)) long labs(long) throw() __attribute__((__warn_unused_result__)) __attribute__((__const__)); 
# 70
extern "C"  __attribute__((weak)) long long llabs(long long) throw() __attribute__((__warn_unused_result__)) __attribute__((__const__)); 
# 72
extern "C"  __attribute__((weak)) double fabs(double) throw() __attribute__((__const__)); 
# 74
extern "C"  __attribute__((weak)) float fabsf(float) throw() __attribute__((__const__)); 
# 77
extern "C"  __attribute__((weak)) int min(int, int); 
# 79
extern "C"  __attribute__((weak)) unsigned umin(unsigned, unsigned); 
# 81
extern "C"  __attribute__((weak)) long long llmin(long long, long long); 
# 83
extern "C"  __attribute__((weak)) unsigned long long ullmin(unsigned long long, unsigned long long); 
# 85
extern "C"  __attribute__((weak)) float fminf(float, float) throw() __attribute__((__const__)); 
# 87
extern "C"  __attribute__((weak)) double fmin(double, double) throw() __attribute__((__const__)); 
# 90
extern "C"  __attribute__((weak)) int max(int, int); 
# 92
extern "C"  __attribute__((weak)) unsigned umax(unsigned, unsigned); 
# 94
extern "C"  __attribute__((weak)) long long llmax(long long, long long); 
# 96
extern "C"  __attribute__((weak)) unsigned long long ullmax(unsigned long long, unsigned long long); 
# 98
extern "C"  __attribute__((weak)) float fmaxf(float, float) throw() __attribute__((__const__)); 
# 100
extern "C"  __attribute__((weak)) double fmax(double, double) throw() __attribute__((__const__)); 
# 103
extern "C"  __attribute__((weak)) double sin(double) throw(); 
# 105
extern "C"  __attribute__((weak)) float sinf(float) throw(); 
# 108
extern "C"  __attribute__((weak)) double cos(double) throw(); 
# 110
extern "C"  __attribute__((weak)) float cosf(float) throw(); 
# 113
extern "C"  __attribute__((weak)) void sincos(double, double *, double *) throw(); 
# 115
extern "C"  __attribute__((weak)) void sincosf(float, float *, float *) throw(); 
# 118
extern "C"  __attribute__((weak)) double tan(double) throw(); 
# 120
extern "C"  __attribute__((weak)) float tanf(float) throw(); 
# 123
extern "C"  __attribute__((weak)) double sqrt(double) throw(); 
# 125
extern "C"  __attribute__((weak)) float sqrtf(float) throw(); 
# 128
extern "C"  __attribute__((weak)) double rsqrt(double); 
# 130
extern "C"  __attribute__((weak)) float rsqrtf(float); 
# 133
extern "C"  __attribute__((weak)) double exp2(double) throw(); 
# 135
extern "C"  __attribute__((weak)) float exp2f(float) throw(); 
# 138
extern "C"  __attribute__((weak)) double exp10(double) throw(); 
# 140
extern "C"  __attribute__((weak)) float exp10f(float) throw(); 
# 143
extern "C"  __attribute__((weak)) double expm1(double) throw(); 
# 145
extern "C"  __attribute__((weak)) float expm1f(float) throw(); 
# 148
extern "C"  __attribute__((weak)) double log2(double) throw(); 
# 150
extern "C"  __attribute__((weak)) float log2f(float) throw(); 
# 153
extern "C"  __attribute__((weak)) double log10(double) throw(); 
# 155
extern "C"  __attribute__((weak)) float log10f(float) throw(); 
# 158
extern "C"  __attribute__((weak)) double log(double) throw(); 
# 160
extern "C"  __attribute__((weak)) float logf(float) throw(); 
# 163
extern "C"  __attribute__((weak)) double log1p(double) throw(); 
# 165
extern "C"  __attribute__((weak)) float log1pf(float) throw(); 
# 168
extern "C"  __attribute__((weak)) double floor(double) throw() __attribute__((__const__)); 
# 170
extern "C"  __attribute__((weak)) float floorf(float) throw() __attribute__((__const__)); 
# 173
extern "C"  __attribute__((weak)) double exp(double) throw(); 
# 175
extern "C"  __attribute__((weak)) float expf(float) throw(); 
# 178
extern "C"  __attribute__((weak)) double cosh(double) throw(); 
# 180
extern "C"  __attribute__((weak)) float coshf(float) throw(); 
# 183
extern "C"  __attribute__((weak)) double sinh(double) throw(); 
# 185
extern "C"  __attribute__((weak)) float sinhf(float) throw(); 
# 188
extern "C"  __attribute__((weak)) double tanh(double) throw(); 
# 190
extern "C"  __attribute__((weak)) float tanhf(float) throw(); 
# 193
extern "C"  __attribute__((weak)) double acosh(double) throw(); 
# 195
extern "C"  __attribute__((weak)) float acoshf(float) throw(); 
# 198
extern "C"  __attribute__((weak)) double asinh(double) throw(); 
# 200
extern "C"  __attribute__((weak)) float asinhf(float) throw(); 
# 203
extern "C"  __attribute__((weak)) double atanh(double) throw(); 
# 205
extern "C"  __attribute__((weak)) float atanhf(float) throw(); 
# 208
extern "C"  __attribute__((weak)) double ldexp(double, int) throw(); 
# 210
extern "C"  __attribute__((weak)) float ldexpf(float, int) throw(); 
# 213
extern "C"  __attribute__((weak)) double logb(double) throw(); 
# 215
extern "C"  __attribute__((weak)) float logbf(float) throw(); 
# 218
extern "C"  __attribute__((weak)) int ilogb(double) throw(); 
# 220
extern "C"  __attribute__((weak)) int ilogbf(float) throw(); 
# 223
extern "C"  __attribute__((weak)) double scalbn(double, int) throw(); 
# 225
extern "C"  __attribute__((weak)) float scalbnf(float, int) throw(); 
# 228
extern "C"  __attribute__((weak)) double scalbln(double, long) throw(); 
# 230
extern "C"  __attribute__((weak)) float scalblnf(float, long) throw(); 
# 233
extern "C"  __attribute__((weak)) double frexp(double, int *) throw(); 
# 235
extern "C"  __attribute__((weak)) float frexpf(float, int *) throw(); 
# 238
extern "C"  __attribute__((weak)) double round(double) throw() __attribute__((__const__)); 
# 240
extern "C"  __attribute__((weak)) float roundf(float) throw() __attribute__((__const__)); 
# 243
extern "C"  __attribute__((weak)) long lround(double) throw(); 
# 245
extern "C"  __attribute__((weak)) long lroundf(float) throw(); 
# 248
extern "C"  __attribute__((weak)) long long llround(double) throw(); 
# 250
extern "C"  __attribute__((weak)) long long llroundf(float) throw(); 
# 253
extern "C"  __attribute__((weak)) double rint(double) throw(); 
# 255
extern "C"  __attribute__((weak)) float rintf(float) throw(); 
# 258
extern "C"  __attribute__((weak)) long lrint(double) throw(); 
# 260
extern "C"  __attribute__((weak)) long lrintf(float) throw(); 
# 263
extern "C"  __attribute__((weak)) long long llrint(double) throw(); 
# 265
extern "C"  __attribute__((weak)) long long llrintf(float) throw(); 
# 268
extern "C"  __attribute__((weak)) double nearbyint(double) throw(); 
# 270
extern "C"  __attribute__((weak)) float nearbyintf(float) throw(); 
# 273
extern "C"  __attribute__((weak)) double ceil(double) throw() __attribute__((__const__)); 
# 275
extern "C"  __attribute__((weak)) float ceilf(float) throw() __attribute__((__const__)); 
# 278
extern "C"  __attribute__((weak)) double trunc(double) throw() __attribute__((__const__)); 
# 280
extern "C"  __attribute__((weak)) float truncf(float) throw() __attribute__((__const__)); 
# 283
extern "C"  __attribute__((weak)) double fdim(double, double) throw(); 
# 285
extern "C"  __attribute__((weak)) float fdimf(float, float) throw(); 
# 288
extern "C"  __attribute__((weak)) double atan2(double, double) throw(); 
# 290
extern "C"  __attribute__((weak)) float atan2f(float, float) throw(); 
# 293
extern "C"  __attribute__((weak)) double atan(double) throw(); 
# 295
extern "C"  __attribute__((weak)) float atanf(float) throw(); 
# 298
extern "C"  __attribute__((weak)) double asin(double) throw(); 
# 300
extern "C"  __attribute__((weak)) float asinf(float) throw(); 
# 303
extern "C"  __attribute__((weak)) double acos(double) throw(); 
# 305
extern "C"  __attribute__((weak)) float acosf(float) throw(); 
# 308
extern "C"  __attribute__((weak)) double hypot(double, double) throw(); 
# 310
extern "C"  __attribute__((weak)) float hypotf(float, float) throw(); 
# 313
extern "C"  __attribute__((weak)) double cbrt(double) throw(); 
# 315
extern "C"  __attribute__((weak)) float cbrtf(float) throw(); 
# 318
extern "C"  __attribute__((weak)) double rcbrt(double); 
# 320
extern "C"  __attribute__((weak)) float rcbrtf(float); 
# 323
extern "C"  __attribute__((weak)) double sinpi(double); 
# 325
extern "C"  __attribute__((weak)) float sinpif(float); 
# 328
extern "C"  __attribute__((weak)) double pow(double, double) throw(); 
# 330
extern "C"  __attribute__((weak)) float powf(float, float) throw(); 
# 333
extern "C"  __attribute__((weak)) double modf(double, double *) throw(); 
# 335
extern "C"  __attribute__((weak)) float modff(float, float *) throw(); 
# 338
extern "C"  __attribute__((weak)) double fmod(double, double) throw(); 
# 340
extern "C"  __attribute__((weak)) float fmodf(float, float) throw(); 
# 343
extern "C"  __attribute__((weak)) double remainder(double, double) throw(); 
# 345
extern "C"  __attribute__((weak)) float remainderf(float, float) throw(); 
# 348
extern "C"  __attribute__((weak)) double remquo(double, double, int *) throw(); 
# 350
extern "C"  __attribute__((weak)) float remquof(float, float, int *) throw(); 
# 353
extern "C"  __attribute__((weak)) double erf(double) throw(); 
# 355
extern "C"  __attribute__((weak)) float erff(float) throw(); 
# 358
extern "C"  __attribute__((weak)) double erfinv(double); 
# 360
extern "C"  __attribute__((weak)) float erfinvf(float); 
# 363
extern "C"  __attribute__((weak)) double erfc(double) throw(); 
# 365
extern "C"  __attribute__((weak)) float erfcf(float) throw(); 
# 368
extern "C"  __attribute__((weak)) double erfcinv(double); 
# 370
extern "C"  __attribute__((weak)) float erfcinvf(float); 
# 373
extern "C"  __attribute__((weak)) double lgamma(double) throw(); 
# 375
extern "C"  __attribute__((weak)) float lgammaf(float) throw(); 
# 378
extern "C"  __attribute__((weak)) double tgamma(double) throw(); 
# 380
extern "C"  __attribute__((weak)) float tgammaf(float) throw(); 
# 383
extern "C"  __attribute__((weak)) double copysign(double, double) throw() __attribute__((__const__)); 
# 385
extern "C"  __attribute__((weak)) float copysignf(float, float) throw() __attribute__((__const__)); 
# 388
extern "C"  __attribute__((weak)) double nextafter(double, double) throw() __attribute__((__const__)); 
# 390
extern "C"  __attribute__((weak)) float nextafterf(float, float) throw() __attribute__((__const__)); 
# 393
extern "C"  __attribute__((weak)) double nan(const char *) throw() __attribute__((__const__)); 
# 395
extern "C"  __attribute__((weak)) float nanf(const char *) throw() __attribute__((__const__)); 
# 398
extern "C"  __attribute__((weak)) int __isinf(double) throw() __attribute__((__const__)); 
# 400
extern "C"  __attribute__((weak)) int __isinff(float) throw() __attribute__((__const__)); 
# 403
extern "C"  __attribute__((weak)) int __isnan(double) throw() __attribute__((__const__)); 
# 405
extern "C"  __attribute__((weak)) int __isnanf(float) throw() __attribute__((__const__)); 
# 419 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C"  __attribute__((weak)) int __finite(double) throw() __attribute__((__const__)); 
# 421
extern "C"  __attribute__((weak)) int __finitef(float) throw() __attribute__((__const__)); 
# 423
extern "C" { extern inline int __signbit(double) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__const__)); } 
# 428
extern "C" { extern inline int __signbitf(float) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__const__)); } 
# 431
extern "C"  __attribute__((weak)) double fma(double, double, double) throw(); 
# 433
extern "C"  __attribute__((weak)) float fmaf(float, float, float) throw(); 
# 441
extern "C" { extern inline int __signbitl(long double) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__const__)); } 
# 443
extern "C"  __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__)); 
# 445
extern "C"  __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__)); 
# 455 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C"  __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__)); 
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3
extern "C" { typedef float float_t; }
# 29
extern "C" { typedef double double_t; }
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C"  __attribute__((weak)) double acos(double) throw(); extern "C" double __acos(double) throw(); 
# 56
extern "C"  __attribute__((weak)) double asin(double) throw(); extern "C" double __asin(double) throw(); 
# 58
extern "C"  __attribute__((weak)) double atan(double) throw(); extern "C" double __atan(double) throw(); 
# 60
extern "C"  __attribute__((weak)) double atan2(double, double) throw(); extern "C" double __atan2(double, double) throw(); 
# 63
extern "C"  __attribute__((weak)) double cos(double) throw(); extern "C" double __cos(double) throw(); 
# 65
extern "C"  __attribute__((weak)) double sin(double) throw(); extern "C" double __sin(double) throw(); 
# 67
extern "C"  __attribute__((weak)) double tan(double) throw(); extern "C" double __tan(double) throw(); 
# 72
extern "C"  __attribute__((weak)) double cosh(double) throw(); extern "C" double __cosh(double) throw(); 
# 74
extern "C"  __attribute__((weak)) double sinh(double) throw(); extern "C" double __sinh(double) throw(); 
# 76
extern "C"  __attribute__((weak)) double tanh(double) throw(); extern "C" double __tanh(double) throw(); 
# 81
extern "C"  __attribute__((weak)) void sincos(double, double *, double *) throw(); extern "C" void __sincos(double, double *, double *) throw(); 
# 88
extern "C"  __attribute__((weak)) double acosh(double) throw(); extern "C" double __acosh(double) throw(); 
# 90
extern "C"  __attribute__((weak)) double asinh(double) throw(); extern "C" double __asinh(double) throw(); 
# 92
extern "C"  __attribute__((weak)) double atanh(double) throw(); extern "C" double __atanh(double) throw(); 
# 100
extern "C"  __attribute__((weak)) double exp(double) throw(); extern "C" double __exp(double) throw(); 
# 103
extern "C"  __attribute__((weak)) double frexp(double, int *) throw(); extern "C" double __frexp(double, int *) throw(); 
# 106
extern "C"  __attribute__((weak)) double ldexp(double, int) throw(); extern "C" double __ldexp(double, int) throw(); 
# 109
extern "C"  __attribute__((weak)) double log(double) throw(); extern "C" double __log(double) throw(); 
# 112
extern "C"  __attribute__((weak)) double log10(double) throw(); extern "C" double __log10(double) throw(); 
# 115
extern "C"  __attribute__((weak)) double modf(double, double *) throw(); extern "C" double __modf(double, double *) throw() __attribute__((nonnull(2))); 
# 120
extern "C"  __attribute__((weak)) double exp10(double) throw(); extern "C" double __exp10(double) throw(); 
# 122
extern "C" double pow10(double) throw(); extern "C" double __pow10(double) throw(); 
# 128
extern "C"  __attribute__((weak)) double expm1(double) throw(); extern "C" double __expm1(double) throw(); 
# 131
extern "C"  __attribute__((weak)) double log1p(double) throw(); extern "C" double __log1p(double) throw(); 
# 134
extern "C"  __attribute__((weak)) double logb(double) throw(); extern "C" double __logb(double) throw(); 
# 141
extern "C"  __attribute__((weak)) double exp2(double) throw(); extern "C" double __exp2(double) throw(); 
# 144
extern "C"  __attribute__((weak)) double log2(double) throw(); extern "C" double __log2(double) throw(); 
# 153
extern "C"  __attribute__((weak)) double pow(double, double) throw(); extern "C" double __pow(double, double) throw(); 
# 156
extern "C"  __attribute__((weak)) double sqrt(double) throw(); extern "C" double __sqrt(double) throw(); 
# 162
extern "C"  __attribute__((weak)) double hypot(double, double) throw(); extern "C" double __hypot(double, double) throw(); 
# 169
extern "C"  __attribute__((weak)) double cbrt(double) throw(); extern "C" double __cbrt(double) throw(); 
# 178
extern "C"  __attribute__((weak)) double ceil(double) throw() __attribute__((__const__)); extern "C" double __ceil(double) throw() __attribute__((__const__)); 
# 181
extern "C"  __attribute__((weak)) double fabs(double) throw() __attribute__((__const__)); extern "C" double __fabs(double) throw() __attribute__((__const__)); 
# 184
extern "C"  __attribute__((weak)) double floor(double) throw() __attribute__((__const__)); extern "C" double __floor(double) throw() __attribute__((__const__)); 
# 187
extern "C"  __attribute__((weak)) double fmod(double, double) throw(); extern "C" double __fmod(double, double) throw(); 
# 192
extern "C"  __attribute__((weak)) int __isinf(double) throw() __attribute__((__const__)); 
# 195
extern "C"  __attribute__((weak)) int __finite(double) throw() __attribute__((__const__)); 
# 201
extern "C" int isinf(double) throw() __attribute__((__const__)); 
# 204
extern "C" int finite(double) throw() __attribute__((__const__)); 
# 207
extern "C" double drem(double, double) throw(); extern "C" double __drem(double, double) throw(); 
# 211
extern "C" double significand(double) throw(); extern "C" double __significand(double) throw(); 
# 217
extern "C"  __attribute__((weak)) double copysign(double, double) throw() __attribute__((__const__)); extern "C" double __copysign(double, double) throw() __attribute__((__const__)); 
# 224
extern "C"  __attribute__((weak)) double nan(const char *) throw() __attribute__((__const__)); extern "C" double __nan(const char *) throw() __attribute__((__const__)); 
# 230
extern "C"  __attribute__((weak)) int __isnan(double) throw() __attribute__((__const__)); 
# 234
extern "C" int isnan(double) throw() __attribute__((__const__)); 
# 237
extern "C" double j0(double) throw(); extern "C" double __j0(double) throw(); 
# 238
extern "C" double j1(double) throw(); extern "C" double __j1(double) throw(); 
# 239
extern "C" double jn(int, double) throw(); extern "C" double __jn(int, double) throw(); 
# 240
extern "C" double y0(double) throw(); extern "C" double __y0(double) throw(); 
# 241
extern "C" double y1(double) throw(); extern "C" double __y1(double) throw(); 
# 242
extern "C" double yn(int, double) throw(); extern "C" double __yn(int, double) throw(); 
# 249
extern "C"  __attribute__((weak)) double erf(double) throw(); extern "C" double __erf(double) throw(); 
# 250
extern "C"  __attribute__((weak)) double erfc(double) throw(); extern "C" double __erfc(double) throw(); 
# 251
extern "C"  __attribute__((weak)) double lgamma(double) throw(); extern "C" double __lgamma(double) throw(); 
# 258
extern "C"  __attribute__((weak)) double tgamma(double) throw(); extern "C" double __tgamma(double) throw(); 
# 264
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw(); 
# 271
extern "C" double lgamma_r(double, int *) throw(); extern "C" double __lgamma_r(double, int *) throw(); 
# 279
extern "C"  __attribute__((weak)) double rint(double) throw(); extern "C" double __rint(double) throw(); 
# 282
extern "C"  __attribute__((weak)) double nextafter(double, double) throw() __attribute__((__const__)); extern "C" double __nextafter(double, double) throw() __attribute__((__const__)); 
# 284
extern "C" double nexttoward(double, long double) throw() __attribute__((__const__)); extern "C" double __nexttoward(double, long double) throw() __attribute__((__const__)); 
# 288
extern "C"  __attribute__((weak)) double remainder(double, double) throw(); extern "C" double __remainder(double, double) throw(); 
# 292
extern "C"  __attribute__((weak)) double scalbn(double, int) throw(); extern "C" double __scalbn(double, int) throw(); 
# 296
extern "C"  __attribute__((weak)) int ilogb(double) throw(); extern "C" int __ilogb(double) throw(); 
# 301
extern "C"  __attribute__((weak)) double scalbln(double, long) throw(); extern "C" double __scalbln(double, long) throw(); 
# 305
extern "C"  __attribute__((weak)) double nearbyint(double) throw(); extern "C" double __nearbyint(double) throw(); 
# 309
extern "C"  __attribute__((weak)) double round(double) throw() __attribute__((__const__)); extern "C" double __round(double) throw() __attribute__((__const__)); 
# 313
extern "C"  __attribute__((weak)) double trunc(double) throw() __attribute__((__const__)); extern "C" double __trunc(double) throw() __attribute__((__const__)); 
# 318
extern "C"  __attribute__((weak)) double remquo(double, double, int *) throw(); extern "C" double __remquo(double, double, int *) throw(); 
# 325
extern "C"  __attribute__((weak)) long lrint(double) throw(); extern "C" long __lrint(double) throw(); 
# 327
extern "C"  __attribute__((weak)) long long llrint(double) throw(); extern "C" long long __llrint(double) throw(); 
# 331
extern "C"  __attribute__((weak)) long lround(double) throw(); extern "C" long __lround(double) throw(); 
# 333
extern "C"  __attribute__((weak)) long long llround(double) throw(); extern "C" long long __llround(double) throw(); 
# 337
extern "C"  __attribute__((weak)) double fdim(double, double) throw(); extern "C" double __fdim(double, double) throw(); 
# 340
extern "C"  __attribute__((weak)) double fmax(double, double) throw() __attribute__((__const__)); extern "C" double __fmax(double, double) throw() __attribute__((__const__)); 
# 343
extern "C"  __attribute__((weak)) double fmin(double, double) throw() __attribute__((__const__)); extern "C" double __fmin(double, double) throw() __attribute__((__const__)); 
# 347
extern "C" int __fpclassify(double) throw() __attribute__((__const__)); 
# 351
extern "C" { extern inline int __signbit(double) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__const__)); } 
# 356
extern "C"  __attribute__((weak)) double fma(double, double, double) throw(); extern "C" double __fma(double, double, double) throw(); 
# 365
extern "C" int __issignaling(double) throw() __attribute__((__const__)); 
# 371
extern "C" double scalb(double, double) throw(); extern "C" double __scalb(double, double) throw(); 
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C"  __attribute__((weak)) float acosf(float) throw(); extern "C" float __acosf(float) throw(); 
# 56
extern "C"  __attribute__((weak)) float asinf(float) throw(); extern "C" float __asinf(float) throw(); 
# 58
extern "C"  __attribute__((weak)) float atanf(float) throw(); extern "C" float __atanf(float) throw(); 
# 60
extern "C"  __attribute__((weak)) float atan2f(float, float) throw(); extern "C" float __atan2f(float, float) throw(); 
# 63
extern "C"  __attribute__((weak)) float cosf(float) throw(); 
# 65
extern "C"  __attribute__((weak)) float sinf(float) throw(); 
# 67
extern "C"  __attribute__((weak)) float tanf(float) throw(); 
# 72
extern "C"  __attribute__((weak)) float coshf(float) throw(); extern "C" float __coshf(float) throw(); 
# 74
extern "C"  __attribute__((weak)) float sinhf(float) throw(); extern "C" float __sinhf(float) throw(); 
# 76
extern "C"  __attribute__((weak)) float tanhf(float) throw(); extern "C" float __tanhf(float) throw(); 
# 82
extern "C"  __attribute__((weak)) void sincosf(float, float *, float *) throw(); 
# 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C"  __attribute__((weak)) float acoshf(float) throw(); extern "C" float __acoshf(float) throw(); 
# 90
extern "C"  __attribute__((weak)) float asinhf(float) throw(); extern "C" float __asinhf(float) throw(); 
# 92
extern "C"  __attribute__((weak)) float atanhf(float) throw(); extern "C" float __atanhf(float) throw(); 
# 100
extern "C"  __attribute__((weak)) float expf(float) throw(); 
# 103
extern "C"  __attribute__((weak)) float frexpf(float, int *) throw(); extern "C" float __frexpf(float, int *) throw(); 
# 106
extern "C"  __attribute__((weak)) float ldexpf(float, int) throw(); extern "C" float __ldexpf(float, int) throw(); 
# 109
extern "C"  __attribute__((weak)) float logf(float) throw(); 
# 112
extern "C"  __attribute__((weak)) float log10f(float) throw(); 
# 115
extern "C"  __attribute__((weak)) float modff(float, float *) throw(); extern "C" float __modff(float, float *) throw() __attribute__((nonnull(2))); 
# 120
extern "C"  __attribute__((weak)) float exp10f(float) throw(); 
# 122
extern "C" float pow10f(float) throw(); extern "C" float __pow10f(float) throw(); 
# 128
extern "C"  __attribute__((weak)) float expm1f(float) throw(); extern "C" float __expm1f(float) throw(); 
# 131
extern "C"  __attribute__((weak)) float log1pf(float) throw(); extern "C" float __log1pf(float) throw(); 
# 134
extern "C"  __attribute__((weak)) float logbf(float) throw(); extern "C" float __logbf(float) throw(); 
# 141
extern "C"  __attribute__((weak)) float exp2f(float) throw(); extern "C" float __exp2f(float) throw(); 
# 144
extern "C"  __attribute__((weak)) float log2f(float) throw(); 
# 153
extern "C"  __attribute__((weak)) float powf(float, float) throw(); 
# 156
extern "C"  __attribute__((weak)) float sqrtf(float) throw(); extern "C" float __sqrtf(float) throw(); 
# 162
extern "C"  __attribute__((weak)) float hypotf(float, float) throw(); extern "C" float __hypotf(float, float) throw(); 
# 169
extern "C"  __attribute__((weak)) float cbrtf(float) throw(); extern "C" float __cbrtf(float) throw(); 
# 178
extern "C"  __attribute__((weak)) float ceilf(float) throw() __attribute__((__const__)); extern "C" float __ceilf(float) throw() __attribute__((__const__)); 
# 181
extern "C"  __attribute__((weak)) float fabsf(float) throw() __attribute__((__const__)); extern "C" float __fabsf(float) throw() __attribute__((__const__)); 
# 184
extern "C"  __attribute__((weak)) float floorf(float) throw() __attribute__((__const__)); extern "C" float __floorf(float) throw() __attribute__((__const__)); 
# 187
extern "C"  __attribute__((weak)) float fmodf(float, float) throw(); extern "C" float __fmodf(float, float) throw(); 
# 192
extern "C"  __attribute__((weak)) int __isinff(float) throw() __attribute__((__const__)); 
# 195
extern "C"  __attribute__((weak)) int __finitef(float) throw() __attribute__((__const__)); 
# 201
extern "C" int isinff(float) throw() __attribute__((__const__)); 
# 204
extern "C" int finitef(float) throw() __attribute__((__const__)); 
# 207
extern "C" float dremf(float, float) throw(); extern "C" float __dremf(float, float) throw(); 
# 211
extern "C" float significandf(float) throw(); extern "C" float __significandf(float) throw(); 
# 217
extern "C"  __attribute__((weak)) float copysignf(float, float) throw() __attribute__((__const__)); extern "C" float __copysignf(float, float) throw() __attribute__((__const__)); 
# 224
extern "C"  __attribute__((weak)) float nanf(const char *) throw() __attribute__((__const__)); extern "C" float __nanf(const char *) throw() __attribute__((__const__)); 
# 230
extern "C"  __attribute__((weak)) int __isnanf(float) throw() __attribute__((__const__)); 
# 234
extern "C" int isnanf(float) throw() __attribute__((__const__)); 
# 237
extern "C" float j0f(float) throw(); extern "C" float __j0f(float) throw(); 
# 238
extern "C" float j1f(float) throw(); extern "C" float __j1f(float) throw(); 
# 239
extern "C" float jnf(int, float) throw(); extern "C" float __jnf(int, float) throw(); 
# 240
extern "C" float y0f(float) throw(); extern "C" float __y0f(float) throw(); 
# 241
extern "C" float y1f(float) throw(); extern "C" float __y1f(float) throw(); 
# 242
extern "C" float ynf(int, float) throw(); extern "C" float __ynf(int, float) throw(); 
# 249
extern "C"  __attribute__((weak)) float erff(float) throw(); extern "C" float __erff(float) throw(); 
# 250
extern "C"  __attribute__((weak)) float erfcf(float) throw(); extern "C" float __erfcf(float) throw(); 
# 251
extern "C"  __attribute__((weak)) float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw(); 
# 258
extern "C"  __attribute__((weak)) float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw(); 
# 264
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw(); 
# 271
extern "C" float lgammaf_r(float, int *) throw(); extern "C" float __lgammaf_r(float, int *) throw(); 
# 279
extern "C"  __attribute__((weak)) float rintf(float) throw(); extern "C" float __rintf(float) throw(); 
# 282
extern "C"  __attribute__((weak)) float nextafterf(float, float) throw() __attribute__((__const__)); extern "C" float __nextafterf(float, float) throw() __attribute__((__const__)); 
# 284
extern "C" float nexttowardf(float, long double) throw() __attribute__((__const__)); extern "C" float __nexttowardf(float, long double) throw() __attribute__((__const__)); 
# 288
extern "C"  __attribute__((weak)) float remainderf(float, float) throw(); extern "C" float __remainderf(float, float) throw(); 
# 292
extern "C"  __attribute__((weak)) float scalbnf(float, int) throw(); extern "C" float __scalbnf(float, int) throw(); 
# 296
extern "C"  __attribute__((weak)) int ilogbf(float) throw(); extern "C" int __ilogbf(float) throw(); 
# 301
extern "C"  __attribute__((weak)) float scalblnf(float, long) throw(); extern "C" float __scalblnf(float, long) throw(); 
# 305
extern "C"  __attribute__((weak)) float nearbyintf(float) throw(); extern "C" float __nearbyintf(float) throw(); 
# 309
extern "C"  __attribute__((weak)) float roundf(float) throw() __attribute__((__const__)); extern "C" float __roundf(float) throw() __attribute__((__const__)); 
# 313
extern "C"  __attribute__((weak)) float truncf(float) throw() __attribute__((__const__)); extern "C" float __truncf(float) throw() __attribute__((__const__)); 
# 318
extern "C"  __attribute__((weak)) float remquof(float, float, int *) throw(); extern "C" float __remquof(float, float, int *) throw(); 
# 325
extern "C"  __attribute__((weak)) long lrintf(float) throw(); extern "C" long __lrintf(float) throw(); 
# 327
extern "C"  __attribute__((weak)) long long llrintf(float) throw(); extern "C" long long __llrintf(float) throw(); 
# 331
extern "C"  __attribute__((weak)) long lroundf(float) throw(); extern "C" long __lroundf(float) throw(); 
# 333
extern "C"  __attribute__((weak)) long long llroundf(float) throw(); extern "C" long long __llroundf(float) throw(); 
# 337
extern "C"  __attribute__((weak)) float fdimf(float, float) throw(); extern "C" float __fdimf(float, float) throw(); 
# 340
extern "C"  __attribute__((weak)) float fmaxf(float, float) throw() __attribute__((__const__)); extern "C" float __fmaxf(float, float) throw() __attribute__((__const__)); 
# 343
extern "C"  __attribute__((weak)) float fminf(float, float) throw() __attribute__((__const__)); extern "C" float __fminf(float, float) throw() __attribute__((__const__)); 
# 347
extern "C" int __fpclassifyf(float) throw() __attribute__((__const__)); 
# 351
extern "C" { extern inline int __signbitf(float) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__const__)); } 
# 356
extern "C"  __attribute__((weak)) float fmaf(float, float, float) throw(); extern "C" float __fmaf(float, float, float) throw(); 
# 365
extern "C" int __issignalingf(float) throw() __attribute__((__const__)); 
# 371
extern "C" float scalbf(float, float) throw(); extern "C" float __scalbf(float, float) throw(); 
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double acosl(long double) throw(); extern "C" long double __acosl(long double) throw(); 
# 56
extern "C" long double asinl(long double) throw(); extern "C" long double __asinl(long double) throw(); 
# 58
extern "C" long double atanl(long double) throw(); extern "C" long double __atanl(long double) throw(); 
# 60
extern "C" long double atan2l(long double, long double) throw(); extern "C" long double __atan2l(long double, long double) throw(); 
# 63
extern "C" long double cosl(long double) throw(); extern "C" long double __cosl(long double) throw(); 
# 65
extern "C" long double sinl(long double) throw(); extern "C" long double __sinl(long double) throw(); 
# 67
extern "C" long double tanl(long double) throw(); extern "C" long double __tanl(long double) throw(); 
# 72
extern "C" long double coshl(long double) throw(); extern "C" long double __coshl(long double) throw(); 
# 74
extern "C" long double sinhl(long double) throw(); extern "C" long double __sinhl(long double) throw(); 
# 76
extern "C" long double tanhl(long double) throw(); extern "C" long double __tanhl(long double) throw(); 
# 82
extern "C" void sincosl(long double, long double *, long double *) throw(); 
# 82 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" void __sincosl(long double, long double *, long double *) throw(); 
# 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double acoshl(long double) throw(); extern "C" long double __acoshl(long double) throw(); 
# 90
extern "C" long double asinhl(long double) throw(); extern "C" long double __asinhl(long double) throw(); 
# 92
extern "C" long double atanhl(long double) throw(); extern "C" long double __atanhl(long double) throw(); 
# 100
extern "C" long double expl(long double) throw(); extern "C" long double __expl(long double) throw(); 
# 103
extern "C" long double frexpl(long double, int *) throw(); extern "C" long double __frexpl(long double, int *) throw(); 
# 106
extern "C" long double ldexpl(long double, int) throw(); extern "C" long double __ldexpl(long double, int) throw(); 
# 109
extern "C" long double logl(long double) throw(); extern "C" long double __logl(long double) throw(); 
# 112
extern "C" long double log10l(long double) throw(); extern "C" long double __log10l(long double) throw(); 
# 115
extern "C" long double modfl(long double, long double *) throw(); extern "C" long double __modfl(long double, long double *) throw() __attribute__((nonnull(2))); 
# 120
extern "C" long double exp10l(long double) throw(); extern "C" long double __exp10l(long double) throw(); 
# 122
extern "C" long double pow10l(long double) throw(); extern "C" long double __pow10l(long double) throw(); 
# 128
extern "C" long double expm1l(long double) throw(); extern "C" long double __expm1l(long double) throw(); 
# 131
extern "C" long double log1pl(long double) throw(); extern "C" long double __log1pl(long double) throw(); 
# 134
extern "C" long double logbl(long double) throw(); extern "C" long double __logbl(long double) throw(); 
# 141
extern "C" long double exp2l(long double) throw(); extern "C" long double __exp2l(long double) throw(); 
# 144
extern "C" long double log2l(long double) throw(); extern "C" long double __log2l(long double) throw(); 
# 153
extern "C" long double powl(long double, long double) throw(); extern "C" long double __powl(long double, long double) throw(); 
# 156
extern "C" long double sqrtl(long double) throw(); extern "C" long double __sqrtl(long double) throw(); 
# 162
extern "C" long double hypotl(long double, long double) throw(); extern "C" long double __hypotl(long double, long double) throw(); 
# 169
extern "C" long double cbrtl(long double) throw(); extern "C" long double __cbrtl(long double) throw(); 
# 178
extern "C" long double ceill(long double) throw() __attribute__((__const__)); extern "C" long double __ceill(long double) throw() __attribute__((__const__)); 
# 181
extern "C" long double fabsl(long double) throw() __attribute__((__const__)); extern "C" long double __fabsl(long double) throw() __attribute__((__const__)); 
# 184
extern "C" long double floorl(long double) throw() __attribute__((__const__)); extern "C" long double __floorl(long double) throw() __attribute__((__const__)); 
# 187
extern "C" long double fmodl(long double, long double) throw(); extern "C" long double __fmodl(long double, long double) throw(); 
# 192
extern "C"  __attribute__((weak)) int __isinfl(long double) throw() __attribute__((__const__)); 
# 195
extern "C"  __attribute__((weak)) int __finitel(long double) throw() __attribute__((__const__)); 
# 201
extern "C" int isinfl(long double) throw() __attribute__((__const__)); 
# 204
extern "C" int finitel(long double) throw() __attribute__((__const__)); 
# 207
extern "C" long double dreml(long double, long double) throw(); extern "C" long double __dreml(long double, long double) throw(); 
# 211
extern "C" long double significandl(long double) throw(); extern "C" long double __significandl(long double) throw(); 
# 217
extern "C" long double copysignl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __copysignl(long double, long double) throw() __attribute__((__const__)); 
# 224
extern "C" long double nanl(const char *) throw() __attribute__((__const__)); extern "C" long double __nanl(const char *) throw() __attribute__((__const__)); 
# 230
extern "C"  __attribute__((weak)) int __isnanl(long double) throw() __attribute__((__const__)); 
# 234
extern "C" int isnanl(long double) throw() __attribute__((__const__)); 
# 237
extern "C" long double j0l(long double) throw(); extern "C" long double __j0l(long double) throw(); 
# 238
extern "C" long double j1l(long double) throw(); extern "C" long double __j1l(long double) throw(); 
# 239
extern "C" long double jnl(int, long double) throw(); extern "C" long double __jnl(int, long double) throw(); 
# 240
extern "C" long double y0l(long double) throw(); extern "C" long double __y0l(long double) throw(); 
# 241
extern "C" long double y1l(long double) throw(); extern "C" long double __y1l(long double) throw(); 
# 242
extern "C" long double ynl(int, long double) throw(); extern "C" long double __ynl(int, long double) throw(); 
# 249
extern "C" long double erfl(long double) throw(); extern "C" long double __erfl(long double) throw(); 
# 250
extern "C" long double erfcl(long double) throw(); extern "C" long double __erfcl(long double) throw(); 
# 251
extern "C" long double lgammal(long double) throw(); extern "C" long double __lgammal(long double) throw(); 
# 258
extern "C" long double tgammal(long double) throw(); extern "C" long double __tgammal(long double) throw(); 
# 264
extern "C" long double gammal(long double) throw(); extern "C" long double __gammal(long double) throw(); 
# 271
extern "C" long double lgammal_r(long double, int *) throw(); extern "C" long double __lgammal_r(long double, int *) throw(); 
# 279
extern "C" long double rintl(long double) throw(); extern "C" long double __rintl(long double) throw(); 
# 282
extern "C" long double nextafterl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nextafterl(long double, long double) throw() __attribute__((__const__)); 
# 284
extern "C" long double nexttowardl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nexttowardl(long double, long double) throw() __attribute__((__const__)); 
# 288
extern "C" long double remainderl(long double, long double) throw(); extern "C" long double __remainderl(long double, long double) throw(); 
# 292
extern "C" long double scalbnl(long double, int) throw(); extern "C" long double __scalbnl(long double, int) throw(); 
# 296
extern "C" int ilogbl(long double) throw(); extern "C" int __ilogbl(long double) throw(); 
# 301
extern "C" long double scalblnl(long double, long) throw(); extern "C" long double __scalblnl(long double, long) throw(); 
# 305
extern "C" long double nearbyintl(long double) throw(); extern "C" long double __nearbyintl(long double) throw(); 
# 309
extern "C" long double roundl(long double) throw() __attribute__((__const__)); extern "C" long double __roundl(long double) throw() __attribute__((__const__)); 
# 313
extern "C" long double truncl(long double) throw() __attribute__((__const__)); extern "C" long double __truncl(long double) throw() __attribute__((__const__)); 
# 318
extern "C" long double remquol(long double, long double, int *) throw(); extern "C" long double __remquol(long double, long double, int *) throw(); 
# 325
extern "C" long lrintl(long double) throw(); extern "C" long __lrintl(long double) throw(); 
# 327
extern "C" long long llrintl(long double) throw(); extern "C" long long __llrintl(long double) throw(); 
# 331
extern "C" long lroundl(long double) throw(); extern "C" long __lroundl(long double) throw(); 
# 333
extern "C" long long llroundl(long double) throw(); extern "C" long long __llroundl(long double) throw(); 
# 337
extern "C" long double fdiml(long double, long double) throw(); extern "C" long double __fdiml(long double, long double) throw(); 
# 340
extern "C" long double fmaxl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __fmaxl(long double, long double) throw() __attribute__((__const__)); 
# 343
extern "C" long double fminl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __fminl(long double, long double) throw() __attribute__((__const__)); 
# 347
extern "C" int __fpclassifyl(long double) throw() __attribute__((__const__)); 
# 351
extern "C" { extern inline int __signbitl(long double) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__const__)); } 
# 356
extern "C" long double fmal(long double, long double, long double) throw(); extern "C" long double __fmal(long double, long double, long double) throw(); 
# 365
extern "C" int __issignalingl(long double) throw() __attribute__((__const__)); 
# 371
extern "C" long double scalbl(long double, long double) throw(); extern "C" long double __scalbl(long double, long double) throw(); 
# 148 "/usr/include/math.h" 3
extern "C" { extern int signgam; } 
# 190
enum { 
# 191
FP_NAN, 
# 194
FP_INFINITE, 
# 197
FP_ZERO, 
# 200
FP_SUBNORMAL, 
# 203
FP_NORMAL
# 206
}; 
# 308 "/usr/include/math.h" 3
extern "C" { typedef 
# 302
enum { 
# 303
_IEEE_ = (-1), 
# 304
_SVID_ = 0, 
# 305
_XOPEN_, 
# 306
_POSIX_, 
# 307
_ISOC_
# 308
} _LIB_VERSION_TYPE; }
# 313
extern "C" { extern _LIB_VERSION_TYPE _LIB_VERSION; } 
# 324
extern "C" { struct __exception { 
# 329
int type; 
# 330
char *name; 
# 331
double arg1; 
# 332
double arg2; 
# 333
double retval; 
# 334
}; }
# 337
extern "C" int matherr(__exception *) throw(); 
# 127 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__const__)) int __signbitf(float __x) throw() 
# 128
{ 
# 130
int __m; 
# 131
__asm__("pmovmskb %1, %0" : "=r" (__m) : "x" (__x)); 
# 132
return (__m & 8) != 0; 
# 137
} } 
# 139
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__const__)) int __signbit(double __x) throw() 
# 140
{ 
# 142
int __m; 
# 143
__asm__("pmovmskb %1, %0" : "=r" (__m) : "x" (__x)); 
# 144
return (__m & 128) != 0; 
# 149
} } 
# 151
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__const__)) int __signbitl(long double __x) throw() 
# 152
{ 
# 153
union { long double __l; int __i[3]; } __u = {__l: __x}; 
# 154
return (((__u.__i)[2]) & 32768) != 0; 
# 155
} } 
# 55 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
extern "C" { typedef 
# 51
enum { 
# 52
P_ALL, 
# 53
P_PID, 
# 54
P_PGID
# 55
} idtype_t; }
# 45 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
extern "C" { static inline unsigned __bswap_32(unsigned __bsx) 
# 46
{ 
# 47
return __builtin_bswap32(__bsx); 
# 48
} } 
# 109 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
extern "C" { static inline __uint64_t __bswap_64(__uint64_t __bsx) 
# 110
{ 
# 111
return __builtin_bswap64(__bsx); 
# 112
} } 
# 66 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
extern "C" { union wait { 
# 68
int w_status; 
# 70
struct { 
# 72
unsigned __w_termsig:7; 
# 73
unsigned __w_coredump:1; 
# 74
unsigned __w_retcode:8; 
# 75
unsigned:16; 
# 83
} __wait_terminated; 
# 85
struct { 
# 87
unsigned __w_stopval:8; 
# 88
unsigned __w_stopsig:8; 
# 89
unsigned:16; 
# 96
} __wait_stopped; 
# 97
}; }
# 101 "/usr/include/stdlib.h" 3
extern "C" { typedef 
# 98
struct { 
# 99
int quot; 
# 100
int rem; 
# 101
} div_t; }
# 109
extern "C" { typedef 
# 106
struct { 
# 107
long quot; 
# 108
long rem; 
# 109
} ldiv_t; }
# 121
extern "C" { typedef 
# 118
struct { 
# 119
long long quot; 
# 120
long long rem; 
# 121
} lldiv_t; }
# 139
extern "C" size_t __ctype_get_mb_cur_max() throw() __attribute__((__warn_unused_result__)); 
# 144
extern "C" { extern inline double atof(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); } 
# 147
extern "C" { extern inline int atoi(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); } 
# 150
extern "C" { extern inline long atol(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); } 
# 157
extern "C" { extern inline long long atoll(const char *) throw() __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); } 
# 164
extern "C" double strtod(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1))); 
# 172
extern "C" float strtof(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1))); 
# 175
extern "C" long double strtold(const char *__restrict__, char **__restrict__) throw() __attribute__((nonnull(1))); 
# 183
extern "C" long strtol(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1))); 
# 187
extern "C" unsigned long strtoul(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1))); 
# 195
extern "C" long long strtoq(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1))); 
# 200
extern "C" unsigned long long strtouq(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1))); 
# 209
extern "C" long long strtoll(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1))); 
# 214
extern "C" unsigned long long strtoull(const char *__restrict__, char **__restrict__, int) throw() __attribute__((nonnull(1))); 
# 239 "/usr/include/stdlib.h" 3
extern "C" long strtol_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4))); 
# 243
extern "C" unsigned long strtoul_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4))); 
# 249
extern "C" long long strtoll_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4))); 
# 255
extern "C" unsigned long long strtoull_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(4))); 
# 260
extern "C" double strtod_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3))); 
# 264
extern "C" float strtof_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3))); 
# 268
extern "C" long double strtold_l(const char *__restrict__, char **__restrict__, __locale_t) throw() __attribute__((nonnull(1))) __attribute__((nonnull(3))); 
# 278
extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))) int atoi(const char *__nptr) throw() 
# 279
{ 
# 280
return (int)strtol(__nptr, (char **)__null, 10); 
# 281
} } 
# 283
extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))) long atol(const char *__nptr) throw() 
# 284
{ 
# 285
return strtol(__nptr, (char **)__null, 10); 
# 286
} } 
# 292
extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))) long long atoll(const char *__nptr) throw() 
# 293
{ 
# 294
return strtoll(__nptr, (char **)__null, 10); 
# 295
} } 
# 305
extern "C" char *l64a(long) throw() __attribute__((__warn_unused_result__)); 
# 308
extern "C" long a64l(const char *) throw() __attribute__((__pure__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); 
# 33 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __u_char u_char; }
# 34
extern "C" { typedef __u_short u_short; }
# 35
extern "C" { typedef __u_int u_int; }
# 36
extern "C" { typedef __u_long u_long; }
# 37
extern "C" { typedef __quad_t quad_t; }
# 38
extern "C" { typedef __u_quad_t u_quad_t; }
# 39
extern "C" { typedef __fsid_t fsid_t; }
# 44
extern "C" { typedef __loff_t loff_t; }
# 48
extern "C" { typedef __ino_t ino_t; }
# 55
extern "C" { typedef __ino64_t ino64_t; }
# 60
extern "C" { typedef __dev_t dev_t; }
# 65
extern "C" { typedef __gid_t gid_t; }
# 70
extern "C" { typedef __mode_t mode_t; }
# 75
extern "C" { typedef __nlink_t nlink_t; }
# 80
extern "C" { typedef __uid_t uid_t; }
# 86
extern "C" { typedef __off_t off_t; }
# 93
extern "C" { typedef __off64_t off64_t; }
# 104 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __id_t id_t; }
# 109
extern "C" { typedef __ssize_t ssize_t; }
# 115
extern "C" { typedef __daddr_t daddr_t; }
# 116
extern "C" { typedef __caddr_t caddr_t; }
# 122
extern "C" { typedef __key_t key_t; }
# 136 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __useconds_t useconds_t; }
# 140
extern "C" { typedef __suseconds_t suseconds_t; }
# 150 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned long ulong; }
# 151
extern "C" { typedef unsigned short ushort; }
# 152
extern "C" { typedef unsigned uint; }
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef signed char int8_t; }
# 195
extern "C" { typedef short int16_t; }
# 196
extern "C" { typedef int int32_t; }
# 197
extern "C" { typedef long int64_t; }
# 200
extern "C" { typedef unsigned char u_int8_t; }
# 201
extern "C" { typedef unsigned short u_int16_t; }
# 202
extern "C" { typedef unsigned u_int32_t; }
# 203
extern "C" { typedef unsigned long u_int64_t; }
# 205
extern "C" { typedef long register_t; }
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 30
extern "C" { typedef 
# 28
struct { 
# 29
unsigned long __val[((1024) / ((8) * sizeof(unsigned long)))]; 
# 30
} __sigset_t; }
# 37 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" { typedef __sigset_t sigset_t; }
# 54 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" { typedef long __fd_mask; }
# 75
extern "C" { typedef 
# 65
struct { 
# 69
__fd_mask fds_bits[(1024 / (8 * ((int)sizeof(__fd_mask))))]; 
# 75
} fd_set; }
# 82
extern "C" { typedef __fd_mask fd_mask; }
# 106
extern "C" int select(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, timeval *__restrict__); 
# 118
extern "C" int pselect(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, const timespec *__restrict__, const __sigset_t *__restrict__); 
# 24 "/usr/include/x86_64-linux-gnu/bits/select2.h" 3
extern "C" long __fdelt_chk(long); 
# 25
extern "C" long __fdelt_warn(long); 
# 27 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
extern "C" { extern inline unsigned gnu_dev_major(unsigned long long) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); } 
# 30
extern "C" { extern inline unsigned gnu_dev_minor(unsigned long long) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); } 
# 33
extern "C" { extern inline unsigned long long gnu_dev_makedev(unsigned, unsigned) throw() __attribute__((__gnu_inline__)) __attribute__((__const__)); } 
# 39
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__const__)) unsigned gnu_dev_major(unsigned long long __dev) throw() 
# 40
{ 
# 41
return ((__dev >> 8) & (4095)) | (((unsigned)(__dev >> 32)) & (~4095)); 
# 42
} } 
# 45
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__const__)) unsigned gnu_dev_minor(unsigned long long __dev) throw() 
# 46
{ 
# 47
return (__dev & (255)) | (((unsigned)(__dev >> 12)) & (~255)); 
# 48
} } 
# 51
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__const__)) unsigned long long gnu_dev_makedev(unsigned __major, unsigned __minor) throw() 
# 52
{ 
# 53
return (((__minor & (255)) | ((__major & (4095)) << 8)) | (((unsigned long long)(__minor & (~255))) << 12)) | (((unsigned long long)(__major & (~4095))) << 32); 
# 56
} } 
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __blksize_t blksize_t; }
# 235
extern "C" { typedef __blkcnt_t blkcnt_t; }
# 239
extern "C" { typedef __fsblkcnt_t fsblkcnt_t; }
# 243
extern "C" { typedef __fsfilcnt_t fsfilcnt_t; }
# 262 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __blkcnt64_t blkcnt64_t; }
# 263
extern "C" { typedef __fsblkcnt64_t fsblkcnt64_t; }
# 264
extern "C" { typedef __fsfilcnt64_t fsfilcnt64_t; }
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned long pthread_t; }
# 63
extern "C" { union pthread_attr_t { 
# 65
char __size[56]; 
# 66
long __align; 
# 67
}; }
# 69
extern "C" { typedef pthread_attr_t pthread_attr_t; }
# 79
extern "C" { typedef 
# 75
struct __pthread_internal_list { 
# 77
__pthread_internal_list *__prev; 
# 78
__pthread_internal_list *__next; 
# 79
} __pthread_list_t; }
# 127 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef 
# 91 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union { 
# 92
struct __pthread_mutex_s { 
# 94
int __lock; 
# 95
unsigned __count; 
# 96
int __owner; 
# 98
unsigned __nusers; 
# 102
int __kind; 
# 104
short __spins; 
# 105
short __elision; 
# 106
__pthread_list_t __list; 
# 124 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} __data; 
# 125
char __size[40]; 
# 126
long __align; 
# 127
} pthread_mutex_t; }
# 133
extern "C" { typedef 
# 130
union { 
# 131
char __size[4]; 
# 132
int __align; 
# 133
} pthread_mutexattr_t; }
# 153
extern "C" { typedef 
# 139
union { 
# 141
struct { 
# 142
int __lock; 
# 143
unsigned __futex; 
# 144
__extension__ unsigned long long __total_seq; 
# 145
__extension__ unsigned long long __wakeup_seq; 
# 146
__extension__ unsigned long long __woken_seq; 
# 147
void *__mutex; 
# 148
unsigned __nwaiters; 
# 149
unsigned __broadcast_seq; 
# 150
} __data; 
# 151
char __size[48]; 
# 152
__extension__ long long __align; 
# 153
} pthread_cond_t; }
# 159
extern "C" { typedef 
# 156
union { 
# 157
char __size[4]; 
# 158
int __align; 
# 159
} pthread_condattr_t; }
# 163
extern "C" { typedef unsigned pthread_key_t; }
# 167
extern "C" { typedef int pthread_once_t; }
# 213 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef 
# 174 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union { 
# 177
struct { 
# 178
int __lock; 
# 179
unsigned __nr_readers; 
# 180
unsigned __readers_wakeup; 
# 181
unsigned __writer_wakeup; 
# 182
unsigned __nr_readers_queued; 
# 183
unsigned __nr_writers_queued; 
# 184
int __writer; 
# 185
int __shared; 
# 186
unsigned long __pad1; 
# 187
unsigned long __pad2; 
# 190
unsigned __flags; 
# 192
} __data; 
# 211 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[56]; 
# 212
long __align; 
# 213
} pthread_rwlock_t; }
# 219
extern "C" { typedef 
# 216
union { 
# 217
char __size[8]; 
# 218
long __align; 
# 219
} pthread_rwlockattr_t; }
# 225
extern "C" { typedef volatile int pthread_spinlock_t; }
# 234
extern "C" { typedef 
# 231
union { 
# 232
char __size[32]; 
# 233
long __align; 
# 234
} pthread_barrier_t; }
# 240
extern "C" { typedef 
# 237
union { 
# 238
char __size[4]; 
# 239
int __align; 
# 240
} pthread_barrierattr_t; }
# 321 "/usr/include/stdlib.h" 3
extern "C" long random() throw(); 
# 324
extern "C" void srandom(unsigned) throw(); 
# 330
extern "C" char *initstate(unsigned, char *, size_t) throw() __attribute__((nonnull(2))); 
# 335
extern "C" char *setstate(char *) throw() __attribute__((nonnull(1))); 
# 343
extern "C" { struct random_data { 
# 345
int32_t *fptr; 
# 346
int32_t *rptr; 
# 347
int32_t *state; 
# 348
int rand_type; 
# 349
int rand_deg; 
# 350
int rand_sep; 
# 351
int32_t *end_ptr; 
# 352
}; }
# 354
extern "C" int random_r(random_data *__restrict__, int32_t *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 357
extern "C" int srandom_r(unsigned, random_data *) throw() __attribute__((nonnull(2))); 
# 360
extern "C" int initstate_r(unsigned, char *__restrict__, size_t, random_data *__restrict__) throw() __attribute__((nonnull(2))) __attribute__((nonnull(4))); 
# 365
extern "C" int setstate_r(char *__restrict__, random_data *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 374
extern "C" int rand() throw(); 
# 376
extern "C" void srand(unsigned) throw(); 
# 381
extern "C" int rand_r(unsigned *) throw(); 
# 389
extern "C" double drand48() throw(); 
# 390
extern "C" double erand48(unsigned short [3]) throw() __attribute__((nonnull(1))); 
# 393
extern "C" long lrand48() throw(); 
# 394
extern "C" long nrand48(unsigned short [3]) throw() __attribute__((nonnull(1))); 
# 398
extern "C" long mrand48() throw(); 
# 399
extern "C" long jrand48(unsigned short [3]) throw() __attribute__((nonnull(1))); 
# 403
extern "C" void srand48(long) throw(); 
# 404
extern "C" unsigned short *seed48(unsigned short [3]) throw() __attribute__((nonnull(1))); 
# 406
extern "C" void lcong48(unsigned short [7]) throw() __attribute__((nonnull(1))); 
# 412
extern "C" { struct drand48_data { 
# 414
unsigned short __x[3]; 
# 415
unsigned short __old_x[3]; 
# 416
unsigned short __c; 
# 417
unsigned short __init; 
# 418
__extension__ unsigned long long __a; 
# 420
}; }
# 423
extern "C" int drand48_r(drand48_data *__restrict__, double *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 425
extern "C" int erand48_r(unsigned short [3], drand48_data *__restrict__, double *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 430
extern "C" int lrand48_r(drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 433
extern "C" int nrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 439
extern "C" int mrand48_r(drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 442
extern "C" int jrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 448
extern "C" int srand48_r(long, drand48_data *) throw() __attribute__((nonnull(2))); 
# 451
extern "C" int seed48_r(unsigned short [3], drand48_data *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 454
extern "C" int lcong48_r(unsigned short [7], drand48_data *) throw() __attribute__((nonnull(1))) __attribute__((nonnull(2))); 
# 466
extern "C" void *malloc(size_t) throw() __attribute__((__malloc__)) __attribute__((__warn_unused_result__)); 
# 468
extern "C" void *calloc(size_t, size_t) throw() __attribute__((__malloc__)) __attribute__((__warn_unused_result__)); 
# 480
extern "C" void *realloc(void *, size_t) throw() __attribute__((__warn_unused_result__)); 
# 483
extern "C" void free(void *) throw(); 
# 488
extern "C" void cfree(void *) throw(); 
# 32 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t) throw(); 
# 498 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t) throw() __attribute__((__malloc__)) __attribute__((__warn_unused_result__)); 
# 503
extern "C" int posix_memalign(void **, size_t, size_t) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); 
# 509
extern "C" void *aligned_alloc(size_t, size_t) throw() __attribute__((__malloc__)) __attribute__((__warn_unused_result__)); 
# 515
extern "C" void abort() throw() __attribute__((__noreturn__)); 
# 519
extern "C" int atexit(void (*)(void)) throw() __attribute__((nonnull(1))); 
# 524
int at_quick_exit(void (*)(void)) throw() __asm__("at_quick_exit") __attribute__((nonnull(1))); 
# 535
extern "C" int on_exit(void (*)(int, void *), void *) throw() __attribute__((nonnull(1))); 
# 543
extern "C" void exit(int) throw() __attribute__((__noreturn__)); 
# 549
extern "C" void quick_exit(int) throw() __attribute__((__noreturn__)); 
# 557
extern "C" void _Exit(int) throw() __attribute__((__noreturn__)); 
# 564
extern "C" char *getenv(const char *) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); 
# 570
extern "C" char *secure_getenv(const char *) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); 
# 578
extern "C" int putenv(char *) throw() __attribute__((nonnull(1))); 
# 584
extern "C" int setenv(const char *, const char *, int) throw() __attribute__((nonnull(2))); 
# 588
extern "C" int unsetenv(const char *) throw() __attribute__((nonnull(1))); 
# 595
extern "C" int clearenv() throw(); 
# 606
extern "C" char *mktemp(char *) throw() __attribute__((nonnull(1))); 
# 620
extern "C" int mkstemp(char *) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); 
# 630 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char *) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); 
# 642
extern "C" int mkstemps(char *, int) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); 
# 652 "/usr/include/stdlib.h" 3
extern "C" int mkstemps64(char *, int) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); 
# 663
extern "C" char *mkdtemp(char *) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); 
# 674
extern "C" int mkostemp(char *, int) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); 
# 684 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char *, int) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); 
# 694
extern "C" int mkostemps(char *, int, int) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); 
# 706 "/usr/include/stdlib.h" 3
extern "C" int mkostemps64(char *, int, int) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); 
# 717
extern "C" int system(const char *) __attribute__((__warn_unused_result__)); 
# 724
extern "C" char *canonicalize_file_name(const char *) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); 
# 734
extern "C" { extern inline char *realpath(const char *__restrict__, char *__restrict__) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__warn_unused_result__)); } 
# 742
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }
# 745
extern "C" { typedef __compar_fn_t comparison_fn_t; }
# 749
extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 755
extern "C" { extern inline void *bsearch(const void *, const void *, size_t, size_t, __compar_fn_t) __attribute__((__gnu_inline__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(5))); } 
# 20 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(5))) void *bsearch(const void *__key, const void *__base, size_t __nmemb, size_t __size, __compar_fn_t 
# 21
__compar) 
# 22
{ 
# 23
size_t __l, __u, __idx; 
# 24
const void *__p; 
# 25
int __comparison; 
# 27
__l = (0); 
# 28
__u = __nmemb; 
# 29
while (__l < __u) 
# 30
{ 
# 31
__idx = ((__l + __u) / (2)); 
# 32
__p = ((void *)(((const char *)__base) + (__idx * __size))); 
# 33
__comparison = (*__compar)(__key, __p); 
# 34
if (__comparison < 0) { 
# 35
__u = __idx; } else { 
# 36
if (__comparison > 0) { 
# 37
__l = (__idx + (1)); } else { 
# 39
return (void *)__p; }  }  
# 40
}  
# 42
return __null; 
# 43
} } 
# 765 "/usr/include/stdlib.h" 3
extern "C" void qsort(void *, size_t, size_t, __compar_fn_t) __attribute__((nonnull(1))) __attribute__((nonnull(4))); 
# 768
extern "C" void qsort_r(void *, size_t, size_t, __compar_d_fn_t, void *) __attribute__((nonnull(1))) __attribute__((nonnull(4))); 
# 775
extern "C"  __attribute__((weak)) int abs(int) throw() __attribute__((__warn_unused_result__)) __attribute__((__const__)); 
# 776
extern "C"  __attribute__((weak)) long labs(long) throw() __attribute__((__warn_unused_result__)) __attribute__((__const__)); 
# 780
extern "C"  __attribute__((weak)) long long llabs(long long) throw() __attribute__((__warn_unused_result__)) __attribute__((__const__)); 
# 789
extern "C" div_t div(int, int) throw() __attribute__((__warn_unused_result__)) __attribute__((__const__)); 
# 791
extern "C" ldiv_t ldiv(long, long) throw() __attribute__((__warn_unused_result__)) __attribute__((__const__)); 
# 797
extern "C" lldiv_t lldiv(long long, long long) throw() __attribute__((__warn_unused_result__)) __attribute__((__const__)); 
# 812
extern "C" char *ecvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(3))) __attribute__((nonnull(4))); 
# 818
extern "C" char *fcvt(double, int, int *__restrict__, int *__restrict__) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(3))) __attribute__((nonnull(4))); 
# 824
extern "C" char *gcvt(double, int, char *) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(3))); 
# 830
extern "C" char *qecvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(3))) __attribute__((nonnull(4))); 
# 833
extern "C" char *qfcvt(long double, int, int *__restrict__, int *__restrict__) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(3))) __attribute__((nonnull(4))); 
# 836
extern "C" char *qgcvt(long double, int, char *) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(3))); 
# 842
extern "C" int ecvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5))); 
# 845
extern "C" int fcvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5))); 
# 849
extern "C" int qecvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5))); 
# 853
extern "C" int qfcvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw() __attribute__((nonnull(3))) __attribute__((nonnull(4))) __attribute__((nonnull(5))); 
# 863
extern "C" int mblen(const char *, size_t) throw(); 
# 866
extern "C" int mbtowc(wchar_t *__restrict__, const char *__restrict__, size_t) throw(); 
# 870
extern "C" { extern inline int wctomb(char *, wchar_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__warn_unused_result__)); } 
# 874
extern "C" { extern inline size_t mbstowcs(wchar_t *__restrict__, const char *__restrict__, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)); } 
# 877
extern "C" { extern inline size_t wcstombs(char *__restrict__, const wchar_t *__restrict__, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)); } 
# 888
extern "C" int rpmatch(const char *) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))); 
# 899
extern "C" int getsubopt(char **__restrict__, char *const *__restrict__, char **__restrict__) throw() __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))) __attribute__((nonnull(2))) __attribute__((nonnull(3))); 
# 908
extern "C" void setkey(const char *) throw() __attribute__((nonnull(1))); 
# 916
extern "C" int posix_openpt(int) __attribute__((__warn_unused_result__)); 
# 924
extern "C" int grantpt(int) throw(); 
# 928
extern "C" int unlockpt(int) throw(); 
# 933
extern "C" char *ptsname(int) throw() __attribute__((__warn_unused_result__)); 
# 940
extern "C" { extern inline int ptsname_r(int, char *, size_t) throw() __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(2))); } 
# 944
extern "C" int getpt(); 
# 951
extern "C" int getloadavg(double [], int) throw() __attribute__((nonnull(1))); 
# 26 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3
extern "C" { inline __attribute__((__pure__)) __attribute__((__gnu_inline__)) __attribute__((__warn_unused_result__)) __attribute__((nonnull(1))) double atof(const char *__nptr) throw() 
# 27
{ 
# 28
return strtod(__nptr, (char **)__null); 
# 29
} } 
# 23 "/usr/include/x86_64-linux-gnu/bits/stdlib.h" 3
extern "C" char *__realpath_chk(const char *__restrict__, char *__restrict__, size_t) throw() __attribute__((__warn_unused_result__)); 
# 26
extern "C" char *__realpath_alias(const char *__restrict__, char *__restrict__) throw() __asm__("realpath") __attribute__((__warn_unused_result__)); 
# 29
extern "C" char *__realpath_chk_warn(const char *__restrict__, char *__restrict__, size_t) throw() __asm__("__realpath_chk") __attribute__((__warn_unused_result__)); 
# 37
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__warn_unused_result__)) char *realpath(const char *__restrict__ __name, char *__restrict__ __resolved) throw() 
# 38
{ 
# 39
if (__builtin_object_size(__resolved, 2 > 1) != ((size_t)(-1))) 
# 40
{ 
# 42
if (__builtin_object_size(__resolved, 2 > 1) < (4096)) { 
# 43
return __realpath_chk_warn(__name, __resolved, __builtin_object_size(__resolved, 2 > 1)); }  
# 45
return __realpath_chk(__name, __resolved, __builtin_object_size(__resolved, 2 > 1)); 
# 46
}  
# 48
return __realpath_alias(__name, __resolved); 
# 49
} } 
# 52
extern "C" int __ptsname_r_chk(int, char *, size_t, size_t) throw() __attribute__((nonnull(2))); 
# 54
extern "C" int __ptsname_r_alias(int, char *, size_t) throw() __asm__("ptsname_r") __attribute__((nonnull(2))); 
# 57
extern "C" int __ptsname_r_chk_warn(int, char *, size_t, size_t) throw() __asm__("__ptsname_r_chk") __attribute__((nonnull(2))); 
# 64
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((nonnull(2))) int ptsname_r(int __fd, char *__buf, size_t __buflen) throw() 
# 65
{ 
# 66
if (__builtin_object_size(__buf, 2 > 1) != ((size_t)(-1))) 
# 67
{ 
# 68
if (!(0)) { 
# 69
return __ptsname_r_chk(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1)); }  
# 70
if (__buflen > __builtin_object_size(__buf, 2 > 1)) { 
# 71
return __ptsname_r_chk_warn(__fd, __buf, __buflen, __builtin_object_size(__buf, 2 > 1)); }  
# 72
}  
# 73
return __ptsname_r_alias(__fd, __buf, __buflen); 
# 74
} } 
# 77
extern "C" int __wctomb_chk(char *, wchar_t, size_t) throw() __attribute__((__warn_unused_result__)); 
# 79
extern "C" int __wctomb_alias(char *, wchar_t) throw() __asm__("wctomb") __attribute__((__warn_unused_result__)); 
# 83
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) __attribute__((__warn_unused_result__)) int wctomb(char *__s, wchar_t __wchar) throw() 
# 84
{ 
# 92
if ((__builtin_object_size(__s, 2 > 1) != ((size_t)(-1))) && ((16) > __builtin_object_size(__s, 2 > 1))) { 
# 93
return __wctomb_chk(__s, __wchar, __builtin_object_size(__s, 2 > 1)); }  
# 94
return __wctomb_alias(__s, __wchar); 
# 95
} } 
# 98
extern "C" size_t __mbstowcs_chk(wchar_t *__restrict__, const char *__restrict__, size_t, size_t) throw(); 
# 101
extern "C" size_t __mbstowcs_alias(wchar_t *__restrict__, const char *__restrict__, size_t) throw() __asm__("mbstowcs"); 
# 105
extern "C" size_t __mbstowcs_chk_warn(wchar_t *__restrict__, const char *__restrict__, size_t, size_t) throw() __asm__("__mbstowcs_chk"); 
# 113
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) size_t mbstowcs(wchar_t *__restrict__ __dst, const char *__restrict__ __src, size_t __len) throw() 
# 115
{ 
# 116
if (__builtin_object_size(__dst, 2 > 1) != ((size_t)(-1))) 
# 117
{ 
# 118
if (!(0)) { 
# 119
return __mbstowcs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof(wchar_t)); }  
# 122
if (__len > (__builtin_object_size(__dst, 2 > 1) / sizeof(wchar_t))) { 
# 123
return __mbstowcs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1) / sizeof(wchar_t)); }  
# 125
}  
# 126
return __mbstowcs_alias(__dst, __src, __len); 
# 127
} } 
# 130
extern "C" size_t __wcstombs_chk(char *__restrict__, const wchar_t *__restrict__, size_t, size_t) throw(); 
# 133
extern "C" size_t __wcstombs_alias(char *__restrict__, const wchar_t *__restrict__, size_t) throw() __asm__("wcstombs"); 
# 137
extern "C" size_t __wcstombs_chk_warn(char *__restrict__, const wchar_t *__restrict__, size_t, size_t) throw() __asm__("__wcstombs_chk"); 
# 144
extern "C" { inline __attribute__((__gnu_inline__)) __attribute__((__always_inline__)) size_t wcstombs(char *__restrict__ __dst, const wchar_t *__restrict__ __src, size_t __len) throw() 
# 146
{ 
# 147
if (__builtin_object_size(__dst, 2 > 1) != ((size_t)(-1))) 
# 148
{ 
# 149
if (!(0)) { 
# 150
return __wcstombs_chk(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1)); }  
# 151
if (__len > __builtin_object_size(__dst, 2 > 1)) { 
# 152
return __wcstombs_chk_warn(__dst, __src, __len, __builtin_object_size(__dst, 2 > 1)); }  
# 153
}  
# 154
return __wcstombs_alias(__dst, __src, __len); 
# 155
} } 
# 153 "/usr/include/c++/4.6/x86_64-linux-gnu/./bits/c++config.h" 3
namespace std { 
# 155
typedef unsigned long size_t; 
#include "crt/host_runtime.h"
# 156
typedef long ptrdiff_t; 
# 161
}
# 69 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) { 
# 73
template< class _Iterator, class _Container> class __normal_iterator; 
# 77
}
# 79
namespace std __attribute__((visibility("default"))) { 
# 83
struct __true_type { }; 
# 84
struct __false_type { }; 
# 86
template< bool __T0> 
# 87
struct __truth_type { 
# 88
typedef __false_type __type; }; 
# 91
template<> struct __truth_type< true>  { 
# 92
typedef __true_type __type; }; 
# 96
template< class _Sp, class _Tp> 
# 97
struct __traitor { 
# 99
enum { __value = (((bool)_Sp::__value) || ((bool)_Tp::__value))}; 
# 100
typedef typename __truth_type< __value> ::__type __type; 
# 101
}; 
# 104
template< class , class > 
# 105
struct __are_same { 
# 107
enum { __value}; 
# 108
typedef __false_type __type; 
# 109
}; 
# 111
template< class _Tp> 
# 112
struct __are_same< _Tp, _Tp>  { 
# 114
enum { __value = 1}; 
# 115
typedef __true_type __type; 
# 116
}; 
# 119
template< class _Tp> 
# 120
struct __is_void { 
# 122
enum { __value}; 
# 123
typedef __false_type __type; 
# 124
}; 
# 127
template<> struct __is_void< void>  { 
# 129
enum { __value = 1}; 
# 130
typedef __true_type __type; 
# 131
}; 
# 136
template< class _Tp> 
# 137
struct __is_integer { 
# 139
enum { __value}; 
# 140
typedef __false_type __type; 
# 141
}; 
# 147
template<> struct __is_integer< bool>  { 
# 149
enum { __value = 1}; 
# 150
typedef __true_type __type; 
# 151
}; 
# 154
template<> struct __is_integer< char>  { 
# 156
enum { __value = 1}; 
# 157
typedef __true_type __type; 
# 158
}; 
# 161
template<> struct __is_integer< signed char>  { 
# 163
enum { __value = 1}; 
# 164
typedef __true_type __type; 
# 165
}; 
# 168
template<> struct __is_integer< unsigned char>  { 
# 170
enum { __value = 1}; 
# 171
typedef __true_type __type; 
# 172
}; 
# 176
template<> struct __is_integer< wchar_t>  { 
# 178
enum { __value = 1}; 
# 179
typedef __true_type __type; 
# 180
}; 
# 200 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
template<> struct __is_integer< short>  { 
# 202
enum { __value = 1}; 
# 203
typedef __true_type __type; 
# 204
}; 
# 207
template<> struct __is_integer< unsigned short>  { 
# 209
enum { __value = 1}; 
# 210
typedef __true_type __type; 
# 211
}; 
# 214
template<> struct __is_integer< int>  { 
# 216
enum { __value = 1}; 
# 217
typedef __true_type __type; 
# 218
}; 
# 221
template<> struct __is_integer< unsigned>  { 
# 223
enum { __value = 1}; 
# 224
typedef __true_type __type; 
# 225
}; 
# 228
template<> struct __is_integer< long>  { 
# 230
enum { __value = 1}; 
# 231
typedef __true_type __type; 
# 232
}; 
# 235
template<> struct __is_integer< unsigned long>  { 
# 237
enum { __value = 1}; 
# 238
typedef __true_type __type; 
# 239
}; 
# 242
template<> struct __is_integer< long long>  { 
# 244
enum { __value = 1}; 
# 245
typedef __true_type __type; 
# 246
}; 
# 249
template<> struct __is_integer< unsigned long long>  { 
# 251
enum { __value = 1}; 
# 252
typedef __true_type __type; 
# 253
}; 
# 258
template< class _Tp> 
# 259
struct __is_floating { 
# 261
enum { __value}; 
# 262
typedef __false_type __type; 
# 263
}; 
# 267
template<> struct __is_floating< float>  { 
# 269
enum { __value = 1}; 
# 270
typedef __true_type __type; 
# 271
}; 
# 274
template<> struct __is_floating< double>  { 
# 276
enum { __value = 1}; 
# 277
typedef __true_type __type; 
# 278
}; 
# 281
template<> struct __is_floating< long double>  { 
# 283
enum { __value = 1}; 
# 284
typedef __true_type __type; 
# 285
}; 
# 290
template< class _Tp> 
# 291
struct __is_pointer { 
# 293
enum { __value}; 
# 294
typedef __false_type __type; 
# 295
}; 
# 297
template< class _Tp> 
# 298
struct __is_pointer< _Tp *>  { 
# 300
enum { __value = 1}; 
# 301
typedef __true_type __type; 
# 302
}; 
# 307
template< class _Tp> 
# 308
struct __is_normal_iterator { 
# 310
enum { __value}; 
# 311
typedef __false_type __type; 
# 312
}; 
# 314
template< class _Iterator, class _Container> 
# 315
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> >  { 
# 318
enum { __value = 1}; 
# 319
typedef __true_type __type; 
# 320
}; 
# 325
template< class _Tp> 
# 326
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> >  { 
# 328
}; 
# 333
template< class _Tp> 
# 334
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> >  { 
# 336
}; 
# 341
template< class _Tp> 
# 342
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> >  { 
# 344
}; 
# 349
template< class _Tp> 
# 350
struct __is_char { 
# 352
enum { __value}; 
# 353
typedef __false_type __type; 
# 354
}; 
# 357
template<> struct __is_char< char>  { 
# 359
enum { __value = 1}; 
# 360
typedef __true_type __type; 
# 361
}; 
# 365
template<> struct __is_char< wchar_t>  { 
# 367
enum { __value = 1}; 
# 368
typedef __true_type __type; 
# 369
}; 
# 372
template< class _Tp> 
# 373
struct __is_byte { 
# 375
enum { __value}; 
# 376
typedef __false_type __type; 
# 377
}; 
# 380
template<> struct __is_byte< char>  { 
# 382
enum { __value = 1}; 
# 383
typedef __true_type __type; 
# 384
}; 
# 387
template<> struct __is_byte< signed char>  { 
# 389
enum { __value = 1}; 
# 390
typedef __true_type __type; 
# 391
}; 
# 394
template<> struct __is_byte< unsigned char>  { 
# 396
enum { __value = 1}; 
# 397
typedef __true_type __type; 
# 398
}; 
# 403
template< class _Tp> 
# 404
struct __is_move_iterator { 
# 406
enum { __value}; 
# 407
typedef __false_type __type; 
# 408
}; 
# 423 "/usr/include/c++/4.6/bits/cpp_type_traits.h" 3
}
# 38 "/usr/include/c++/4.6/ext/type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) { 
# 43
template< bool __T1, class > 
# 44
struct __enable_if { 
# 45
}; 
# 47
template< class _Tp> 
# 48
struct __enable_if< true, _Tp>  { 
# 49
typedef _Tp __type; }; 
# 53
template< bool _Cond, class _Iftrue, class _Iffalse> 
# 54
struct __conditional_type { 
# 55
typedef _Iftrue __type; }; 
# 57
template< class _Iftrue, class _Iffalse> 
# 58
struct __conditional_type< false, _Iftrue, _Iffalse>  { 
# 59
typedef _Iffalse __type; }; 
# 63
template< class _Tp> 
# 64
struct __add_unsigned { 
# 67
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp>  __if_type; 
# 70
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type; 
# 71
}; 
# 74
template<> struct __add_unsigned< char>  { 
# 75
typedef unsigned char __type; }; 
# 78
template<> struct __add_unsigned< signed char>  { 
# 79
typedef unsigned char __type; }; 
# 82
template<> struct __add_unsigned< short>  { 
# 83
typedef unsigned short __type; }; 
# 86
template<> struct __add_unsigned< int>  { 
# 87
typedef unsigned __type; }; 
# 90
template<> struct __add_unsigned< long>  { 
# 91
typedef unsigned long __type; }; 
# 94
template<> struct __add_unsigned< long long>  { 
# 95
typedef unsigned long long __type; }; 
# 99
template<> struct __add_unsigned< bool> ; 
# 102
template<> struct __add_unsigned< wchar_t> ; 
# 106
template< class _Tp> 
# 107
struct __remove_unsigned { 
# 110
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp>  __if_type; 
# 113
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type; 
# 114
}; 
# 117
template<> struct __remove_unsigned< char>  { 
# 118
typedef signed char __type; }; 
# 121
template<> struct __remove_unsigned< unsigned char>  { 
# 122
typedef signed char __type; }; 
# 125
template<> struct __remove_unsigned< unsigned short>  { 
# 126
typedef short __type; }; 
# 129
template<> struct __remove_unsigned< unsigned>  { 
# 130
typedef int __type; }; 
# 133
template<> struct __remove_unsigned< unsigned long>  { 
# 134
typedef long __type; }; 
# 137
template<> struct __remove_unsigned< unsigned long long>  { 
# 138
typedef long long __type; }; 
# 142
template<> struct __remove_unsigned< bool> ; 
# 145
template<> struct __remove_unsigned< wchar_t> ; 
# 149
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type * __ptr )
    { return __ptr == 0; }
# 154
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type )
    { return false; }
# 161
template< class _Tp, bool __T2 = std::__is_integer< _Tp> ::__value> 
# 162
struct __promote { 
# 163
typedef double __type; }; 
# 168
template< class _Tp> 
# 169
struct __promote< _Tp, false>  { 
# 170
}; 
# 173
template<> struct __promote< long double, false>  { 
# 174
typedef long double __type; }; 
# 177
template<> struct __promote< double, false>  { 
# 178
typedef double __type; }; 
# 181
template<> struct __promote< float, false>  { 
# 182
typedef float __type; }; 
# 184
template< class _Tp, class _Up, class 
# 185
_Tp2 = typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type, class 
# 186
_Up2 = typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type> 
# 187
struct __promote_2 { 
# 189
typedef __typeof__(_Tp2() + _Up2()) __type; 
# 190
}; 
# 192
template< class _Tp, class _Up, class _Vp, class 
# 193
_Tp2 = typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type, class 
# 194
_Up2 = typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type, class 
# 195
_Vp2 = typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type> 
# 196
struct __promote_3 { 
# 198
typedef __typeof__((_Tp2() + _Up2()) + _Vp2()) __type; 
# 199
}; 
# 201
template< class _Tp, class _Up, class _Vp, class _Wp, class 
# 202
_Tp2 = typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type, class 
# 203
_Up2 = typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type, class 
# 204
_Vp2 = typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type, class 
# 205
_Wp2 = typename __promote< _Wp, std::__is_integer< _Wp> ::__value> ::__type> 
# 206
struct __promote_4 { 
# 208
typedef __typeof__(((_Tp2() + _Up2()) + _Vp2()) + _Wp2()) __type; 
# 209
}; 
# 212
}
# 77 "/usr/include/c++/4.6/cmath" 3
namespace std __attribute__((visibility("default"))) { 
# 82
inline double abs(double __x) 
# 83
{ return __builtin_fabs(__x); } 
# 86
inline float abs(float __x) 
# 87
{ return __builtin_fabsf(__x); } 
# 90
inline long double abs(long double __x) 
# 91
{ return __builtin_fabsl(__x); } 
# 93
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    abs ( _Tp __x )
    { return __builtin_fabs ( __x ); }
# 99
using ::acos;
# 102
inline float acos(float __x) 
# 103
{ return __builtin_acosf(__x); } 
# 106
inline long double acos(long double __x) 
# 107
{ return __builtin_acosl(__x); } 
# 109
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    acos ( _Tp __x )
    { return __builtin_acos ( __x ); }
# 115
using ::asin;
# 118
inline float asin(float __x) 
# 119
{ return __builtin_asinf(__x); } 
# 122
inline long double asin(long double __x) 
# 123
{ return __builtin_asinl(__x); } 
# 125
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    asin ( _Tp __x )
    { return __builtin_asin ( __x ); }
# 131
using ::atan;
# 134
inline float atan(float __x) 
# 135
{ return __builtin_atanf(__x); } 
# 138
inline long double atan(long double __x) 
# 139
{ return __builtin_atanl(__x); } 
# 141
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    atan ( _Tp __x )
    { return __builtin_atan ( __x ); }
# 147
using ::atan2;
# 150
inline float atan2(float __y, float __x) 
# 151
{ return __builtin_atan2f(__y, __x); } 
# 154
inline long double atan2(long double __y, long double __x) 
# 155
{ return __builtin_atan2l(__y, __x); } 
# 157
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type
    atan2 ( _Tp __y, _Up __x )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return atan2 ( __type ( __y ), __type ( __x ) );
    }
# 166
using ::ceil;
# 169
inline float ceil(float __x) 
# 170
{ return __builtin_ceilf(__x); } 
# 173
inline long double ceil(long double __x) 
# 174
{ return __builtin_ceill(__x); } 
# 176
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    ceil ( _Tp __x )
    { return __builtin_ceil ( __x ); }
# 182
using ::cos;
# 185
inline float cos(float __x) 
# 186
{ return __builtin_cosf(__x); } 
# 189
inline long double cos(long double __x) 
# 190
{ return __builtin_cosl(__x); } 
# 192
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cos ( _Tp __x )
    { return __builtin_cos ( __x ); }
# 198
using ::cosh;
# 201
inline float cosh(float __x) 
# 202
{ return __builtin_coshf(__x); } 
# 205
inline long double cosh(long double __x) 
# 206
{ return __builtin_coshl(__x); } 
# 208
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cosh ( _Tp __x )
    { return __builtin_cosh ( __x ); }
# 214
using ::exp;
# 217
inline float exp(float __x) 
# 218
{ return __builtin_expf(__x); } 
# 221
inline long double exp(long double __x) 
# 222
{ return __builtin_expl(__x); } 
# 224
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    exp ( _Tp __x )
    { return __builtin_exp ( __x ); }
# 230
using ::fabs;
# 233
inline float fabs(float __x) 
# 234
{ return __builtin_fabsf(__x); } 
# 237
inline long double fabs(long double __x) 
# 238
{ return __builtin_fabsl(__x); } 
# 240
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    fabs ( _Tp __x )
    { return __builtin_fabs ( __x ); }
# 246
using ::floor;
# 249
inline float floor(float __x) 
# 250
{ return __builtin_floorf(__x); } 
# 253
inline long double floor(long double __x) 
# 254
{ return __builtin_floorl(__x); } 
# 256
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    floor ( _Tp __x )
    { return __builtin_floor ( __x ); }
# 262
using ::fmod;
# 265
inline float fmod(float __x, float __y) 
# 266
{ return __builtin_fmodf(__x, __y); } 
# 269
inline long double fmod(long double __x, long double __y) 
# 270
{ return __builtin_fmodl(__x, __y); } 
# 272
using ::frexp;
# 275
inline float frexp(float __x, int *__exp) 
# 276
{ return __builtin_frexpf(__x, __exp); } 
# 279
inline long double frexp(long double __x, int *__exp) 
# 280
{ return __builtin_frexpl(__x, __exp); } 
# 282
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    frexp ( _Tp __x, int * __exp )
    { return __builtin_frexp ( __x, __exp ); }
# 288
using ::ldexp;
# 291
inline float ldexp(float __x, int __exp) 
# 292
{ return __builtin_ldexpf(__x, __exp); } 
# 295
inline long double ldexp(long double __x, int __exp) 
# 296
{ return __builtin_ldexpl(__x, __exp); } 
# 298
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
  ldexp ( _Tp __x, int __exp )
  { return __builtin_ldexp ( __x, __exp ); }
# 304
using ::log;
# 307
inline float log(float __x) 
# 308
{ return __builtin_logf(__x); } 
# 311
inline long double log(long double __x) 
# 312
{ return __builtin_logl(__x); } 
# 314
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log ( _Tp __x )
    { return __builtin_log ( __x ); }
# 320
using ::log10;
# 323
inline float log10(float __x) 
# 324
{ return __builtin_log10f(__x); } 
# 327
inline long double log10(long double __x) 
# 328
{ return __builtin_log10l(__x); } 
# 330
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log10 ( _Tp __x )
    { return __builtin_log10 ( __x ); }
# 336
using ::modf;
# 339
inline float modf(float __x, float *__iptr) 
# 340
{ return __builtin_modff(__x, __iptr); } 
# 343
inline long double modf(long double __x, long double *__iptr) 
# 344
{ return __builtin_modfl(__x, __iptr); } 
# 346
using ::pow;
# 349
inline float pow(float __x, float __y) 
# 350
{ return __builtin_powf(__x, __y); } 
# 353
inline long double pow(long double __x, long double __y) 
# 354
{ return __builtin_powl(__x, __y); } 
# 360
inline double pow(double __x, int __i) 
# 361
{ return __builtin_powi(__x, __i); } 
# 364
inline float pow(float __x, int __n) 
# 365
{ return __builtin_powif(__x, __n); } 
# 368
inline long double pow(long double __x, int __n) 
# 369
{ return __builtin_powil(__x, __n); } 
# 372
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type
    pow ( _Tp __x, _Up __y )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return pow ( __type ( __x ), __type ( __y ) );
    }
# 381
using ::sin;
# 384
inline float sin(float __x) 
# 385
{ return __builtin_sinf(__x); } 
# 388
inline long double sin(long double __x) 
# 389
{ return __builtin_sinl(__x); } 
# 391
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sin ( _Tp __x )
    { return __builtin_sin ( __x ); }
# 397
using ::sinh;
# 400
inline float sinh(float __x) 
# 401
{ return __builtin_sinhf(__x); } 
# 404
inline long double sinh(long double __x) 
# 405
{ return __builtin_sinhl(__x); } 
# 407
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sinh ( _Tp __x )
    { return __builtin_sinh ( __x ); }
# 413
using ::sqrt;
# 416
inline float sqrt(float __x) 
# 417
{ return __builtin_sqrtf(__x); } 
# 420
inline long double sqrt(long double __x) 
# 421
{ return __builtin_sqrtl(__x); } 
# 423
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sqrt ( _Tp __x )
    { return __builtin_sqrt ( __x ); }
# 429
using ::tan;
# 432
inline float tan(float __x) 
# 433
{ return __builtin_tanf(__x); } 
# 436
inline long double tan(long double __x) 
# 437
{ return __builtin_tanl(__x); } 
# 439
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tan ( _Tp __x )
    { return __builtin_tan ( __x ); }
# 445
using ::tanh;
# 448
inline float tanh(float __x) 
# 449
{ return __builtin_tanhf(__x); } 
# 452
inline long double tanh(long double __x) 
# 453
{ return __builtin_tanhl(__x); } 
# 455
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tanh ( _Tp __x )
    { return __builtin_tanh ( __x ); }
# 462
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
# 741
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isfinite ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isfinite ( __type ( __f ) );
    }
# 750
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isinf ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isinf ( __type ( __f ) );
    }
# 759
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnan ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnan ( __type ( __f ) );
    }
# 768
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnormal ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnormal ( __type ( __f ) );
    }
# 777
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    signbit ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_signbit ( __type ( __f ) );
    }
# 786
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 795
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreaterequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreaterequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 804
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isless ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isless ( __type ( __f1 ), __type ( __f2 ) );
    }
# 813
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 822
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 831
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isunordered ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isunordered ( __type ( __f1 ), __type ( __f2 ) );
    }
# 843
}
# 98 "/usr/include/c++/4.6/cstdlib" 3
namespace std __attribute__((visibility("default"))) { 
# 102
using ::div_t;
# 103
using ::ldiv_t;
# 105
using ::abort;
# 106
using ::abs;
# 107
using ::atexit;
# 108
using ::atof;
# 109
using ::atoi;
# 110
using ::atol;
# 111
using ::bsearch;
# 112
using ::calloc;
# 113
using ::div;
# 114
using ::exit;
# 115
using ::free;
# 116
using ::getenv;
# 117
using ::labs;
# 118
using ::ldiv;
# 119
using ::malloc;
# 121
using ::mblen;
# 122
using ::mbstowcs;
# 123
using ::mbtowc;
# 125
using ::qsort;
# 126
using ::rand;
# 127
using ::realloc;
# 128
using ::srand;
# 129
using ::strtod;
# 130
using ::strtol;
# 131
using ::strtoul;
# 132
using ::system;
# 134
using ::wcstombs;
# 135
using ::wctomb;
# 139
inline long abs(long __i) { return labs(__i); } 
# 142
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); } 
# 145
}
# 158 "/usr/include/c++/4.6/cstdlib" 3
namespace __gnu_cxx __attribute__((visibility("default"))) { 
# 163
using ::lldiv_t;
# 169
using ::_Exit;
# 173
inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); } 
# 176
using ::llabs;
# 179
inline lldiv_t div(long long __n, long long __d) 
# 180
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; } 
# 182
using ::lldiv;
# 193 "/usr/include/c++/4.6/cstdlib" 3
using ::atoll;
# 194
using ::strtoll;
# 195
using ::strtoull;
# 197
using ::strtof;
# 198
using ::strtold;
# 201
}
# 203
namespace std { 
# 206
using __gnu_cxx::lldiv_t;
# 208
using __gnu_cxx::_Exit;
# 209
using __gnu_cxx::abs;
# 211
using __gnu_cxx::llabs;
# 212
using __gnu_cxx::div;
# 213
using __gnu_cxx::lldiv;
# 215
using __gnu_cxx::atoll;
# 216
using __gnu_cxx::strtof;
# 217
using __gnu_cxx::strtoll;
# 218
using __gnu_cxx::strtoull;
# 219
using __gnu_cxx::strtold;
# 220
}
# 497 "/usr/local/cuda/bin/../include/math_functions.h"
namespace __gnu_cxx { 
# 499
extern inline long long abs(long long) __attribute__((visibility("default"))); 
# 500
}
# 502
namespace std { 
# 504
template< class T> extern T __pow_helper(T, int); 
# 505
template< class T> extern T __cmath_power(T, unsigned); 
# 506
}
# 508
using std::abs;
# 509
using std::fabs;
# 510
using std::ceil;
# 511
using std::floor;
# 512
using std::sqrt;
# 513
using std::pow;
# 514
using std::log;
# 515
using std::log10;
# 516
using std::fmod;
# 517
using std::modf;
# 518
using std::exp;
# 519
using std::frexp;
# 520
using std::ldexp;
# 521
using std::asin;
# 522
using std::sin;
# 523
using std::sinh;
# 524
using std::acos;
# 525
using std::cos;
# 526
using std::cosh;
# 527
using std::atan;
# 528
using std::atan2;
# 529
using std::tan;
# 530
using std::tanh;
# 584 "/usr/local/cuda/bin/../include/math_functions.h"
namespace std { 
# 587
extern inline long abs(long) __attribute__((visibility("default"))); 
# 588
extern inline float abs(float) __attribute__((visibility("default"))); 
# 589
extern inline double abs(double) __attribute__((visibility("default"))); 
# 590
extern inline float fabs(float) __attribute__((visibility("default"))); 
# 591
extern inline float ceil(float) __attribute__((visibility("default"))); 
# 592
extern inline float floor(float) __attribute__((visibility("default"))); 
# 593
extern inline float sqrt(float) __attribute__((visibility("default"))); 
# 594
extern inline float pow(float, float) __attribute__((visibility("default"))); 
# 595
extern inline float pow(float, int) __attribute__((visibility("default"))); 
# 596
extern inline double pow(double, int) __attribute__((visibility("default"))); 
# 597
extern inline float log(float) __attribute__((visibility("default"))); 
# 598
extern inline float log10(float) __attribute__((visibility("default"))); 
# 599
extern inline float fmod(float, float) __attribute__((visibility("default"))); 
# 600
extern inline float modf(float, float *) __attribute__((visibility("default"))); 
# 601
extern inline float exp(float) __attribute__((visibility("default"))); 
# 602
extern inline float frexp(float, int *) __attribute__((visibility("default"))); 
# 603
extern inline float ldexp(float, int) __attribute__((visibility("default"))); 
# 604
extern inline float asin(float) __attribute__((visibility("default"))); 
# 605
extern inline float sin(float) __attribute__((visibility("default"))); 
# 606
extern inline float sinh(float) __attribute__((visibility("default"))); 
# 607
extern inline float acos(float) __attribute__((visibility("default"))); 
# 608
extern inline float cos(float) __attribute__((visibility("default"))); 
# 609
extern inline float cosh(float) __attribute__((visibility("default"))); 
# 610
extern inline float atan(float) __attribute__((visibility("default"))); 
# 611
extern inline float atan2(float, float) __attribute__((visibility("default"))); 
# 612
extern inline float tan(float) __attribute__((visibility("default"))); 
# 613
extern inline float tanh(float) __attribute__((visibility("default"))); 
# 616
}
# 619
static inline float logb(float a) 
# 620
{ 
# 621
return logbf(a); 
# 622
} 
# 624
static inline int ilogb(float a) 
# 625
{ 
# 626
return ilogbf(a); 
# 627
} 
# 629
static inline float scalbn(float a, int b) 
# 630
{ 
# 631
return scalbnf(a, b); 
# 632
} 
# 634
static inline float scalbln(float a, long b) 
# 635
{ 
# 636
return scalblnf(a, b); 
# 637
} 
# 639
static inline float exp2(float a) 
# 640
{ 
# 641
return exp2f(a); 
# 642
} 
# 644
static inline float exp10(float a) 
# 645
{ 
# 646
return exp10f(a); 
# 647
} 
# 649
static inline float expm1(float a) 
# 650
{ 
# 651
return expm1f(a); 
# 652
} 
# 654
static inline float log2(float a) 
# 655
{ 
# 656
return log2f(a); 
# 657
} 
# 659
static inline float log1p(float a) 
# 660
{ 
# 661
return log1pf(a); 
# 662
} 
# 664
static inline float rsqrt(float a) 
# 665
{ 
# 666
return rsqrtf(a); 
# 667
} 
# 669
static inline float acosh(float a) 
# 670
{ 
# 671
return acoshf(a); 
# 672
} 
# 674
static inline float asinh(float a) 
# 675
{ 
# 676
return asinhf(a); 
# 677
} 
# 679
static inline float atanh(float a) 
# 680
{ 
# 681
return atanhf(a); 
# 682
} 
# 684
static inline float hypot(float a, float b) 
# 685
{ 
# 686
return hypotf(a, b); 
# 687
} 
# 689
static inline float cbrt(float a) 
# 690
{ 
# 691
return cbrtf(a); 
# 692
} 
# 694
static inline float rcbrt(float a) 
# 695
{ 
# 696
return rcbrtf(a); 
# 697
} 
# 699
static inline float sinpi(float a) 
# 700
{ 
# 701
return sinpif(a); 
# 702
} 
# 704
static inline void sincos(float a, float *sptr, float *cptr) 
# 705
{ 
# 706
sincosf(a, sptr, cptr); 
# 707
} 
# 709
static inline float erf(float a) 
# 710
{ 
# 711
return erff(a); 
# 712
} 
# 714
static inline float erfinv(float a) 
# 715
{ 
# 716
return erfinvf(a); 
# 717
} 
# 719
static inline float erfc(float a) 
# 720
{ 
# 721
return erfcf(a); 
# 722
} 
# 724
static inline float erfcinv(float a) 
# 725
{ 
# 726
return erfcinvf(a); 
# 727
} 
# 729
static inline float lgamma(float a) 
# 730
{ 
# 731
return lgammaf(a); 
# 732
} 
# 734
static inline float tgamma(float a) 
# 735
{ 
# 736
return tgammaf(a); 
# 737
} 
# 739
static inline float copysign(float a, float b) 
# 740
{ 
# 741
return copysignf(a, b); 
# 742
} 
# 744
static inline double copysign(double a, float b) 
# 745
{ 
# 746
return copysign(a, (double)b); 
# 747
} 
# 749
static inline float copysign(float a, double b) 
# 750
{ 
# 751
return copysignf(a, (float)b); 
# 752
} 
# 754
static inline float nextafter(float a, float b) 
# 755
{ 
# 756
return nextafterf(a, b); 
# 757
} 
# 759
static inline float remainder(float a, float b) 
# 760
{ 
# 761
return remainderf(a, b); 
# 762
} 
# 764
static inline float remquo(float a, float b, int *quo) 
# 765
{ 
# 766
return remquof(a, b, quo); 
# 767
} 
# 769
static inline float round(float a) 
# 770
{ 
# 771
return roundf(a); 
# 772
} 
# 774
static inline long lround(float a) 
# 775
{ 
# 776
return lroundf(a); 
# 777
} 
# 779
static inline long long llround(float a) 
# 780
{ 
# 781
return llroundf(a); 
# 782
} 
# 784
static inline float trunc(float a) 
# 785
{ 
# 786
return truncf(a); 
# 787
} 
# 789
static inline float rint(float a) 
# 790
{ 
# 791
return rintf(a); 
# 792
} 
# 794
static inline long lrint(float a) 
# 795
{ 
# 796
return lrintf(a); 
# 797
} 
# 799
static inline long long llrint(float a) 
# 800
{ 
# 801
return llrintf(a); 
# 802
} 
# 804
static inline float nearbyint(float a) 
# 805
{ 
# 806
return nearbyintf(a); 
# 807
} 
# 809
static inline float fdim(float a, float b) 
# 810
{ 
# 811
return fdimf(a, b); 
# 812
} 
# 814
static inline float fma(float a, float b, float c) 
# 815
{ 
# 816
return fmaf(a, b, c); 
# 817
} 
# 819
static inline float fmax(float a, float b) 
# 820
{ 
# 821
return fmaxf(a, b); 
# 822
} 
# 824
static inline float fmin(float a, float b) 
# 825
{ 
# 826
return fminf(a, b); 
# 827
} 
# 829
static inline unsigned min(unsigned a, unsigned b) 
# 830
{ 
# 831
return umin(a, b); 
# 832
} 
# 834
static inline unsigned min(int a, unsigned b) 
# 835
{ 
# 836
return umin((unsigned)a, b); 
# 837
} 
# 839
static inline unsigned min(unsigned a, int b) 
# 840
{ 
# 841
return umin(a, (unsigned)b); 
# 842
} 
# 844
static inline long long min(long long a, long long b) 
# 845
{ 
# 846
return llmin(a, b); 
# 847
} 
# 849
static inline unsigned long long min(unsigned long long a, unsigned long long b) 
# 850
{ 
# 851
return ullmin(a, b); 
# 852
} 
# 854
static inline unsigned long long min(long long a, unsigned long long b) 
# 855
{ 
# 856
return ullmin((unsigned long long)a, b); 
# 857
} 
# 859
static inline unsigned long long min(unsigned long long a, long long b) 
# 860
{ 
# 861
return ullmin(a, (unsigned long long)b); 
# 862
} 
# 864
static inline float min(float a, float b) 
# 865
{ 
# 866
return fminf(a, b); 
# 867
} 
# 869
static inline double min(double a, double b) 
# 870
{ 
# 871
return fmin(a, b); 
# 872
} 
# 874
static inline double min(float a, double b) 
# 875
{ 
# 876
return fmin((double)a, b); 
# 877
} 
# 879
static inline double min(double a, float b) 
# 880
{ 
# 881
return fmin(a, (double)b); 
# 882
} 
# 884
static inline unsigned max(unsigned a, unsigned b) 
# 885
{ 
# 886
return umax(a, b); 
# 887
} 
# 889
static inline unsigned max(int a, unsigned b) 
# 890
{ 
# 891
return umax((unsigned)a, b); 
# 892
} 
# 894
static inline unsigned max(unsigned a, int b) 
# 895
{ 
# 896
return umax(a, (unsigned)b); 
# 897
} 
# 899
static inline long long max(long long a, long long b) 
# 900
{ 
# 901
return llmax(a, b); 
# 902
} 
# 904
static inline unsigned long long max(unsigned long long a, unsigned long long b) 
# 905
{ 
# 906
return ullmax(a, b); 
# 907
} 
# 909
static inline unsigned long long max(long long a, unsigned long long b) 
# 910
{ 
# 911
return ullmax((unsigned long long)a, b); 
# 912
} 
# 914
static inline unsigned long long max(unsigned long long a, long long b) 
# 915
{ 
# 916
return ullmax(a, (unsigned long long)b); 
# 917
} 
# 919
static inline float max(float a, float b) 
# 920
{ 
# 921
return fmaxf(a, b); 
# 922
} 
# 924
static inline double max(double a, double b) 
# 925
{ 
# 926
return fmax(a, b); 
# 927
} 
# 929
static inline double max(float a, double b) 
# 930
{ 
# 931
return fmax((double)a, b); 
# 932
} 
# 934
static inline double max(double a, float b) 
# 935
{ 
# 936
return fmax(a, (double)b); 
# 937
} 
# 60 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
template< class T, int dim = 1> 
# 61
struct surface : public surfaceReference { 
# 63
surface() 
# 64
{ 
# 65
(channelDesc) = cudaCreateChannelDesc< T> (); 
# 66
} 
# 68
surface(cudaChannelFormatDesc desc) 
# 69
{ 
# 70
(channelDesc) = desc; 
# 71
} 
# 72
}; 
# 75
template< int dim> 
# 76
struct surface< void, dim>  : public surfaceReference { 
# 78
surface() 
# 79
{ 
# 80
(channelDesc) = cudaCreateChannelDesc< void> (); 
# 81
} 
# 82
}; 
# 60 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
template< class T, int dim = 1, cudaTextureReadMode mode = cudaReadModeElementType> 
# 61
struct texture : public textureReference { 
# 63
texture(int norm = 0, cudaTextureFilterMode 
# 64
fMode = cudaFilterModePoint, cudaTextureAddressMode 
# 65
aMode = cudaAddressModeClamp) 
# 66
{ 
# 67
(normalized) = norm; 
# 68
(filterMode) = fMode; 
# 69
((addressMode)[0]) = aMode; 
# 70
((addressMode)[1]) = aMode; 
# 71
((addressMode)[2]) = aMode; 
# 72
(channelDesc) = cudaCreateChannelDesc< T> (); 
# 73
} 
# 75
texture(int norm, cudaTextureFilterMode 
# 76
fMode, cudaTextureAddressMode 
# 77
aMode, cudaChannelFormatDesc 
# 78
desc) 
# 79
{ 
# 80
(normalized) = norm; 
# 81
(filterMode) = fMode; 
# 82
((addressMode)[0]) = aMode; 
# 83
((addressMode)[1]) = aMode; 
# 84
((addressMode)[2]) = aMode; 
# 85
(channelDesc) = desc; 
# 86
} 
# 87
}; 
# 324 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mulhi(int a, int b) 
# 325
{int volatile ___ = 1;
# 327
exit(___);}
#if 0
# 325
{ 
# 326
return __mulhi(a, b); 
# 327
} 
#endif
# 329 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b) 
# 330
{int volatile ___ = 1;
# 332
exit(___);}
#if 0
# 330
{ 
# 331
return __umulhi(a, b); 
# 332
} 
#endif
# 334 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b) 
# 335
{int volatile ___ = 1;
# 337
exit(___);}
#if 0
# 335
{ 
# 336
return __umulhi((unsigned)a, b); 
# 337
} 
#endif
# 339 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b) 
# 340
{int volatile ___ = 1;
# 342
exit(___);}
#if 0
# 340
{ 
# 341
return __umulhi(a, (unsigned)b); 
# 342
} 
#endif
# 344 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline long long mul64hi(long long a, long long b) 
# 345
{int volatile ___ = 1;
# 347
exit(___);}
#if 0
# 345
{ 
# 346
return __mul64hi(a, b); 
# 347
} 
#endif
# 349 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b) 
# 350
{int volatile ___ = 1;
# 352
exit(___);}
#if 0
# 350
{ 
# 351
return __umul64hi(a, b); 
# 352
} 
#endif
# 354 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b) 
# 355
{int volatile ___ = 1;
# 357
exit(___);}
#if 0
# 355
{ 
# 356
return __umul64hi((unsigned long long)a, b); 
# 357
} 
#endif
# 359 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b) 
# 360
{int volatile ___ = 1;
# 362
exit(___);}
#if 0
# 360
{ 
# 361
return __umul64hi(a, (unsigned long long)b); 
# 362
} 
#endif
# 364 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float_as_int(float a) 
# 365
{int volatile ___ = 1;
# 367
exit(___);}
#if 0
# 365
{ 
# 366
return __float_as_int(a); 
# 367
} 
#endif
# 369 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int_as_float(int a) 
# 370
{int volatile ___ = 1;
# 372
exit(___);}
#if 0
# 370
{ 
# 371
return __int_as_float(a); 
# 372
} 
#endif
# 374 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float saturate(float a) 
# 375
{int volatile ___ = 1;
# 377
exit(___);}
#if 0
# 375
{ 
# 376
return __saturatef(a); 
# 377
} 
#endif
# 379 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mul24(int a, int b) 
# 380
{int volatile ___ = 1;
# 382
exit(___);}
#if 0
# 380
{ 
# 381
return __mul24(a, b); 
# 382
} 
#endif
# 384 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b) 
# 385
{int volatile ___ = 1;
# 387
exit(___);}
#if 0
# 385
{ 
# 386
return __umul24(a, b); 
# 387
} 
#endif
# 389 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void trap() 
# 390
{int volatile ___ = 1;
# 392
exit(___);}
#if 0
# 390
{ 
# 391
__trap(); 
# 392
} 
#endif
# 394 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void brkpt(int c) 
# 395
{int volatile ___ = 1;
# 397
exit(___);}
#if 0
# 395
{ 
# 396
__brkpt(c); 
# 397
} 
#endif
# 399 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void syncthreads() 
# 400
{int volatile ___ = 1;
# 402
exit(___);}
#if 0
# 400
{ 
# 401
__syncthreads(); 
# 402
} 
#endif
# 404 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void prof_trigger(int e) 
# 405
{int volatile ___ = 1;
# 422
exit(___);}
#if 0
# 405
{ 
# 406
if (e == 0) { __prof_trigger(0); } else { 
# 407
if (e == 1) { __prof_trigger(1); } else { 
# 408
if (e == 2) { __prof_trigger(2); } else { 
# 409
if (e == 3) { __prof_trigger(3); } else { 
# 410
if (e == 4) { __prof_trigger(4); } else { 
# 411
if (e == 5) { __prof_trigger(5); } else { 
# 412
if (e == 6) { __prof_trigger(6); } else { 
# 413
if (e == 7) { __prof_trigger(7); } else { 
# 414
if (e == 8) { __prof_trigger(8); } else { 
# 415
if (e == 9) { __prof_trigger(9); } else { 
# 416
if (e == 10) { __prof_trigger(10); } else { 
# 417
if (e == 11) { __prof_trigger(11); } else { 
# 418
if (e == 12) { __prof_trigger(12); } else { 
# 419
if (e == 13) { __prof_trigger(13); } else { 
# 420
if (e == 14) { __prof_trigger(14); } else { 
# 421
if (e == 15) { __prof_trigger(15); }  }  }  }  }  }  }  }  }  }  }  }  }  }  }  }  
# 422
} 
#endif
# 424 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void threadfence(bool global = true) 
# 425
{int volatile ___ = 1;
# 427
exit(___);}
#if 0
# 425
{ 
# 426
global ? __threadfence() : __threadfence_block(); 
# 427
} 
#endif
# 429 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode = cudaRoundZero) 
# 430
{int volatile ___ = 1;
# 435
exit(___);}
#if 0
# 430
{ 
# 431
return (mode == (cudaRoundNearest)) ? __float2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2int_rd(a) : __float2int_rz(a))); 
# 435
} 
#endif
# 437 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero) 
# 438
{int volatile ___ = 1;
# 443
exit(___);}
#if 0
# 438
{ 
# 439
return (mode == (cudaRoundNearest)) ? __float2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2uint_rd(a) : __float2uint_rz(a))); 
# 443
} 
#endif
# 445 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest) 
# 446
{int volatile ___ = 1;
# 451
exit(___);}
#if 0
# 446
{ 
# 447
return (mode == (cudaRoundZero)) ? __int2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __int2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __int2float_rd(a) : __int2float_rn(a))); 
# 451
} 
#endif
# 453 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest) 
# 454
{int volatile ___ = 1;
# 459
exit(___);}
#if 0
# 454
{ 
# 455
return (mode == (cudaRoundZero)) ? __uint2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __uint2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __uint2float_rd(a) : __uint2float_rn(a))); 
# 459
} 
#endif
# 102 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd(int *address, int val) 
# 103
{int volatile ___ = 1;
# 105
exit(___);}
#if 0
# 103
{ 
# 104
return __iAtomicAdd(address, val); 
# 105
} 
#endif
# 107 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val) 
# 108
{int volatile ___ = 1;
# 110
exit(___);}
#if 0
# 108
{ 
# 109
return __uAtomicAdd(address, val); 
# 110
} 
#endif
# 112 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub(int *address, int val) 
# 113
{int volatile ___ = 1;
# 115
exit(___);}
#if 0
# 113
{ 
# 114
return __iAtomicAdd(address, (unsigned)(-((int)val))); 
# 115
} 
#endif
# 117 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val) 
# 118
{int volatile ___ = 1;
# 120
exit(___);}
#if 0
# 118
{ 
# 119
return __uAtomicAdd(address, (unsigned)(-((int)val))); 
# 120
} 
#endif
# 122 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch(int *address, int val) 
# 123
{int volatile ___ = 1;
# 125
exit(___);}
#if 0
# 123
{ 
# 124
return __iAtomicExch(address, val); 
# 125
} 
#endif
# 127 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val) 
# 128
{int volatile ___ = 1;
# 130
exit(___);}
#if 0
# 128
{ 
# 129
return __uAtomicExch(address, val); 
# 130
} 
#endif
# 132 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch(float *address, float val) 
# 133
{int volatile ___ = 1;
# 135
exit(___);}
#if 0
# 133
{ 
# 134
return __fAtomicExch(address, val); 
# 135
} 
#endif
# 137 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin(int *address, int val) 
# 138
{int volatile ___ = 1;
# 140
exit(___);}
#if 0
# 138
{ 
# 139
return __iAtomicMin(address, val); 
# 140
} 
#endif
# 142 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val) 
# 143
{int volatile ___ = 1;
# 145
exit(___);}
#if 0
# 143
{ 
# 144
return __uAtomicMin(address, val); 
# 145
} 
#endif
# 147 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax(int *address, int val) 
# 148
{int volatile ___ = 1;
# 150
exit(___);}
#if 0
# 148
{ 
# 149
return __iAtomicMax(address, val); 
# 150
} 
#endif
# 152 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val) 
# 153
{int volatile ___ = 1;
# 155
exit(___);}
#if 0
# 153
{ 
# 154
return __uAtomicMax(address, val); 
# 155
} 
#endif
# 157 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val) 
# 158
{int volatile ___ = 1;
# 160
exit(___);}
#if 0
# 158
{ 
# 159
return __uAtomicInc(address, val); 
# 160
} 
#endif
# 162 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val) 
# 163
{int volatile ___ = 1;
# 165
exit(___);}
#if 0
# 163
{ 
# 164
return __uAtomicDec(address, val); 
# 165
} 
#endif
# 167 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd(int *address, int val) 
# 168
{int volatile ___ = 1;
# 170
exit(___);}
#if 0
# 168
{ 
# 169
return __iAtomicAnd(address, val); 
# 170
} 
#endif
# 172 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val) 
# 173
{int volatile ___ = 1;
# 175
exit(___);}
#if 0
# 173
{ 
# 174
return __uAtomicAnd(address, val); 
# 175
} 
#endif
# 177 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr(int *address, int val) 
# 178
{int volatile ___ = 1;
# 180
exit(___);}
#if 0
# 178
{ 
# 179
return __iAtomicOr(address, val); 
# 180
} 
#endif
# 182 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val) 
# 183
{int volatile ___ = 1;
# 185
exit(___);}
#if 0
# 183
{ 
# 184
return __uAtomicOr(address, val); 
# 185
} 
#endif
# 187 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor(int *address, int val) 
# 188
{int volatile ___ = 1;
# 190
exit(___);}
#if 0
# 188
{ 
# 189
return __iAtomicXor(address, val); 
# 190
} 
#endif
# 192 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val) 
# 193
{int volatile ___ = 1;
# 195
exit(___);}
#if 0
# 193
{ 
# 194
return __uAtomicXor(address, val); 
# 195
} 
#endif
# 197 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val) 
# 198
{int volatile ___ = 1;
# 200
exit(___);}
#if 0
# 198
{ 
# 199
return __iAtomicCAS(address, compare, val); 
# 200
} 
#endif
# 202 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val) 
# 203
{int volatile ___ = 1;
# 205
exit(___);}
#if 0
# 203
{ 
# 204
return __uAtomicCAS(address, compare, val); 
# 205
} 
#endif
# 75 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val) 
# 76
{int volatile ___ = 1;
# 78
exit(___);}
#if 0
# 76
{ 
# 77
return __ullAtomicAdd(address, val); 
# 78
} 
#endif
# 80 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val) 
# 81
{int volatile ___ = 1;
# 83
exit(___);}
#if 0
# 81
{ 
# 82
return __ullAtomicExch(address, val); 
# 83
} 
#endif
# 85 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val) 
# 86
{int volatile ___ = 1;
# 88
exit(___);}
#if 0
# 86
{ 
# 87
return __ullAtomicCAS(address, compare, val); 
# 88
} 
#endif
# 90 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool any(bool cond) 
# 91
{int volatile ___ = 1;
# 93
exit(___);}
#if 0
# 91
{ 
# 92
return (bool)__any((int)cond); 
# 93
} 
#endif
# 95 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool all(bool cond) 
# 96
{int volatile ___ = 1;
# 98
exit(___);}
#if 0
# 96
{ 
# 97
return (bool)__all((int)cond); 
# 98
} 
#endif
# 170 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode) 
# 171
{int volatile ___ = 1;
# 176
exit(___);}
#if 0
# 171
{ 
# 172
return (mode == (cudaRoundZero)) ? __fma_rz(a, b, c) : ((mode == (cudaRoundPosInf)) ? __fma_ru(a, b, c) : ((mode == (cudaRoundMinInf)) ? __fma_rd(a, b, c) : __fma_rn(a, b, c))); 
# 176
} 
#endif
# 178 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest) 
# 179
{int volatile ___ = 1;
# 184
exit(___);}
#if 0
# 179
{ 
# 180
return (mode == (cudaRoundZero)) ? __dmul_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dmul_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dmul_rd(a, b) : __dmul_rn(a, b))); 
# 184
} 
#endif
# 186 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest) 
# 187
{int volatile ___ = 1;
# 192
exit(___);}
#if 0
# 187
{ 
# 188
return (mode == (cudaRoundZero)) ? __dadd_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dadd_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dadd_rd(a, b) : __dadd_rn(a, b))); 
# 192
} 
#endif
# 194 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero) 
# 195
{int volatile ___ = 1;
# 200
exit(___);}
#if 0
# 195
{ 
# 196
return (mode == (cudaRoundNearest)) ? __double2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2int_rd(a) : __double2int_rz(a))); 
# 200
} 
#endif
# 202 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero) 
# 203
{int volatile ___ = 1;
# 208
exit(___);}
#if 0
# 203
{ 
# 204
return (mode == (cudaRoundNearest)) ? __double2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2uint_rd(a) : __double2uint_rz(a))); 
# 208
} 
#endif
# 210 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero) 
# 211
{int volatile ___ = 1;
# 216
exit(___);}
#if 0
# 211
{ 
# 212
return (mode == (cudaRoundNearest)) ? __double2ll_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ll_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ll_rd(a) : __double2ll_rz(a))); 
# 216
} 
#endif
# 218 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero) 
# 219
{int volatile ___ = 1;
# 224
exit(___);}
#if 0
# 219
{ 
# 220
return (mode == (cudaRoundNearest)) ? __double2ull_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ull_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ull_rd(a) : __double2ull_rz(a))); 
# 224
} 
#endif
# 226 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest) 
# 227
{int volatile ___ = 1;
# 232
exit(___);}
#if 0
# 227
{ 
# 228
return (mode == (cudaRoundZero)) ? __ll2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ll2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ll2double_rd(a) : __ll2double_rn(a))); 
# 232
} 
#endif
# 234 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest) 
# 235
{int volatile ___ = 1;
# 240
exit(___);}
#if 0
# 235
{ 
# 236
return (mode == (cudaRoundZero)) ? __ull2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ull2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ull2double_rd(a) : __ull2double_rn(a))); 
# 240
} 
#endif
# 242 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest) 
# 243
{int volatile ___ = 1;
# 245
exit(___);}
#if 0
# 243
{ 
# 244
return (double)a; 
# 245
} 
#endif
# 247 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest) 
# 248
{int volatile ___ = 1;
# 250
exit(___);}
#if 0
# 248
{ 
# 249
return (double)a; 
# 250
} 
#endif
# 252 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest) 
# 253
{int volatile ___ = 1;
# 255
exit(___);}
#if 0
# 253
{ 
# 254
return (double)a; 
# 255
} 
#endif
# 66 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd(float *address, float val) 
# 67
{int volatile ___ = 1;
# 69
exit(___);}
#if 0
# 67
{ 
# 68
return __fAtomicAdd(address, val); 
# 69
} 
#endif
# 124 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned ballot(bool pred) 
# 125
{int volatile ___ = 1;
# 127
exit(___);}
#if 0
# 125
{ 
# 126
return __ballot((int)pred); 
# 127
} 
#endif
# 129 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline int syncthreads_count(bool pred) 
# 130
{int volatile ___ = 1;
# 132
exit(___);}
#if 0
# 130
{ 
# 131
return __syncthreads_count((int)pred); 
# 132
} 
#endif
# 134 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_and(bool pred) 
# 135
{int volatile ___ = 1;
# 137
exit(___);}
#if 0
# 135
{ 
# 136
return (bool)__syncthreads_and((int)pred); 
# 137
} 
#endif
# 139 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_or(bool pred) 
# 140
{int volatile ___ = 1;
# 142
exit(___);}
#if 0
# 140
{ 
# 141
return (bool)__syncthreads_or((int)pred); 
# 142
} 
#endif
# 97 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 98
surf1Dread(T *res, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 99
{int volatile ___ = 1;
# 106
exit(___);}
#if 0
# 99
{ 
# 100
(s == 1) ? ((void)((*((uchar1 *)res)) = __surf1Dreadc1(surf, x, cudaBoundaryModeTrap))) : ((s == 2) ? ((void)((*((ushort1 *)res)) = __surf1Dreads1(surf, x, cudaBoundaryModeTrap))) : ((s == 4) ? ((void)((*((uint1 *)res)) = __surf1Dreadu1(surf, x, cudaBoundaryModeTrap))) : ((s == 8) ? ((void)((*((uint2 *)res)) = __surf1Dreadu2(surf, x, cudaBoundaryModeTrap))) : ((s == 16) ? ((void)((*((uint4 *)res)) = __surf1Dreadu4(surf, x, cudaBoundaryModeTrap))) : ((void)0))))); 
# 106
} 
#endif
# 108 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T 
# 109
surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 110
{int volatile ___ = 1;
# 116
exit(___);}
#if 0
# 110
{ 
# 111
T tmp; 
# 113
surf1Dread(&tmp, surf, x, (int)sizeof(T), mode); 
# 115
return tmp; 
# 116
} 
#endif
# 118 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 119
surf1Dread(T *res, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 120
{int volatile ___ = 1;
# 122
exit(___);}
#if 0
# 120
{ 
# 121
(*res) = surf1Dread< T> (surf, x, mode); 
# 122
} 
#endif
# 125 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 126
{int volatile ___ = 1;
# 128
exit(___);}
#if 0
# 126
{ 
# 127
return (char)(__surf1Dreadc1(surf, x, cudaBoundaryModeTrap).x); 
# 128
} 
#endif
# 131 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline signed char surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 132
{int volatile ___ = 1;
# 134
exit(___);}
#if 0
# 132
{ 
# 133
return (signed char)(__surf1Dreadc1(surf, x, cudaBoundaryModeTrap).x); 
# 134
} 
#endif
# 137 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned char surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 138
{int volatile ___ = 1;
# 140
exit(___);}
#if 0
# 138
{ 
# 139
return __surf1Dreadc1(surf, x, cudaBoundaryModeTrap).x; 
# 140
} 
#endif
# 143 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 144
{int volatile ___ = 1;
# 146
exit(___);}
#if 0
# 144
{ 
# 145
return make_char1((signed char)(__surf1Dreadc1(surf, x, cudaBoundaryModeTrap).x)); 
# 146
} 
#endif
# 149 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 150
{int volatile ___ = 1;
# 152
exit(___);}
#if 0
# 150
{ 
# 151
return __surf1Dreadc1(surf, x, cudaBoundaryModeTrap); 
# 152
} 
#endif
# 155 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 156
{int volatile ___ = 1;
# 160
exit(___);}
#if 0
# 156
{ 
# 157
uchar2 tmp = __surf1Dreadc2(surf, x, cudaBoundaryModeTrap); 
# 159
return make_char2((signed char)(tmp.x), (signed char)(tmp.y)); 
# 160
} 
#endif
# 163 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 164
{int volatile ___ = 1;
# 166
exit(___);}
#if 0
# 164
{ 
# 165
return __surf1Dreadc2(surf, x, cudaBoundaryModeTrap); 
# 166
} 
#endif
# 169 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 170
{int volatile ___ = 1;
# 174
exit(___);}
#if 0
# 170
{ 
# 171
uchar4 tmp = __surf1Dreadc4(surf, x, cudaBoundaryModeTrap); 
# 173
return make_char4((signed char)(tmp.x), (signed char)(tmp.y), (signed char)(tmp.z), (signed char)(tmp.w)); 
# 174
} 
#endif
# 177 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 178
{int volatile ___ = 1;
# 180
exit(___);}
#if 0
# 178
{ 
# 179
return __surf1Dreadc4(surf, x, cudaBoundaryModeTrap); 
# 180
} 
#endif
# 183 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 184
{int volatile ___ = 1;
# 186
exit(___);}
#if 0
# 184
{ 
# 185
return (short)(__surf1Dreads1(surf, x, cudaBoundaryModeTrap).x); 
# 186
} 
#endif
# 189 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned short surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 190
{int volatile ___ = 1;
# 192
exit(___);}
#if 0
# 190
{ 
# 191
return __surf1Dreads1(surf, x, cudaBoundaryModeTrap).x; 
# 192
} 
#endif
# 195 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 196
{int volatile ___ = 1;
# 198
exit(___);}
#if 0
# 196
{ 
# 197
return make_short1((signed short)(__surf1Dreads1(surf, x, cudaBoundaryModeTrap).x)); 
# 198
} 
#endif
# 201 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 202
{int volatile ___ = 1;
# 204
exit(___);}
#if 0
# 202
{ 
# 203
return __surf1Dreads1(surf, x, cudaBoundaryModeTrap); 
# 204
} 
#endif
# 207 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 208
{int volatile ___ = 1;
# 212
exit(___);}
#if 0
# 208
{ 
# 209
ushort2 tmp = __surf1Dreads2(surf, x, cudaBoundaryModeTrap); 
# 211
return make_short2((signed short)(tmp.x), (signed short)(tmp.y)); 
# 212
} 
#endif
# 215 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 216
{int volatile ___ = 1;
# 218
exit(___);}
#if 0
# 216
{ 
# 217
return __surf1Dreads2(surf, x, cudaBoundaryModeTrap); 
# 218
} 
#endif
# 221 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 222
{int volatile ___ = 1;
# 226
exit(___);}
#if 0
# 222
{ 
# 223
ushort4 tmp = __surf1Dreads4(surf, x, cudaBoundaryModeTrap); 
# 225
return make_short4((signed short)(tmp.x), (signed short)(tmp.y), (signed short)(tmp.z), (signed short)(tmp.w)); 
# 226
} 
#endif
# 229 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 230
{int volatile ___ = 1;
# 232
exit(___);}
#if 0
# 230
{ 
# 231
return __surf1Dreads4(surf, x, cudaBoundaryModeTrap); 
# 232
} 
#endif
# 235 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 236
{int volatile ___ = 1;
# 238
exit(___);}
#if 0
# 236
{ 
# 237
return (int)(__surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x); 
# 238
} 
#endif
# 241 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 242
{int volatile ___ = 1;
# 244
exit(___);}
#if 0
# 242
{ 
# 243
return __surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x; 
# 244
} 
#endif
# 247 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 248
{int volatile ___ = 1;
# 250
exit(___);}
#if 0
# 248
{ 
# 249
return make_int1((signed int)(__surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x)); 
# 250
} 
#endif
# 253 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 254
{int volatile ___ = 1;
# 256
exit(___);}
#if 0
# 254
{ 
# 255
return __surf1Dreadu1(surf, x, cudaBoundaryModeTrap); 
# 256
} 
#endif
# 259 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 260
{int volatile ___ = 1;
# 264
exit(___);}
#if 0
# 260
{ 
# 261
uint2 tmp = __surf1Dreadu2(surf, x, cudaBoundaryModeTrap); 
# 263
return make_int2((int)(tmp.x), (int)(tmp.y)); 
# 264
} 
#endif
# 267 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 268
{int volatile ___ = 1;
# 270
exit(___);}
#if 0
# 268
{ 
# 269
return __surf1Dreadu2(surf, x, cudaBoundaryModeTrap); 
# 270
} 
#endif
# 273 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 274
{int volatile ___ = 1;
# 278
exit(___);}
#if 0
# 274
{ 
# 275
uint4 tmp = __surf1Dreadu4(surf, x, cudaBoundaryModeTrap); 
# 277
return make_int4((int)(tmp.x), (int)(tmp.y), (int)(tmp.z), (int)(tmp.w)); 
# 278
} 
#endif
# 281 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 282
{int volatile ___ = 1;
# 284
exit(___);}
#if 0
# 282
{ 
# 283
return __surf1Dreadu4(surf, x, cudaBoundaryModeTrap); 
# 284
} 
#endif
# 287 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline long long surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 288
{int volatile ___ = 1;
# 290
exit(___);}
#if 0
# 288
{ 
# 289
return (long long)(__surf1Dreadl1(surf, x, cudaBoundaryModeTrap).x); 
# 290
} 
#endif
# 293 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned long long surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 294
{int volatile ___ = 1;
# 296
exit(___);}
#if 0
# 294
{ 
# 295
return __surf1Dreadl1(surf, x, cudaBoundaryModeTrap).x; 
# 296
} 
#endif
# 299 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 300
{int volatile ___ = 1;
# 302
exit(___);}
#if 0
# 300
{ 
# 301
return make_longlong1((long long)(__surf1Dreadl1(surf, x, cudaBoundaryModeTrap).x)); 
# 302
} 
#endif
# 305 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 306
{int volatile ___ = 1;
# 308
exit(___);}
#if 0
# 306
{ 
# 307
return __surf1Dreadl1(surf, x, cudaBoundaryModeTrap); 
# 308
} 
#endif
# 311 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 312
{int volatile ___ = 1;
# 316
exit(___);}
#if 0
# 312
{ 
# 313
ulonglong2 tmp = __surf1Dreadl2(surf, x, cudaBoundaryModeTrap); 
# 315
return make_longlong2((long long)(tmp.x), (long long)(tmp.y)); 
# 316
} 
#endif
# 319 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 320
{int volatile ___ = 1;
# 322
exit(___);}
#if 0
# 320
{ 
# 321
return __surf1Dreadl2(surf, x, cudaBoundaryModeTrap); 
# 322
} 
#endif
# 385 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 386
{int volatile ___ = 1;
# 388
exit(___);}
#if 0
# 386
{ 
# 387
return __int_as_float((int)(__surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x)); 
# 388
} 
#endif
# 391 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float1 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 392
{int volatile ___ = 1;
# 394
exit(___);}
#if 0
# 392
{ 
# 393
return make_float1(__int_as_float((int)(__surf1Dreadu1(surf, x, cudaBoundaryModeTrap).x))); 
# 394
} 
#endif
# 397 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float2 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 398
{int volatile ___ = 1;
# 402
exit(___);}
#if 0
# 398
{ 
# 399
uint2 tmp = __surf1Dreadu2(surf, x, cudaBoundaryModeTrap); 
# 401
return make_float2(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y))); 
# 402
} 
#endif
# 405 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float4 surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode) 
# 406
{int volatile ___ = 1;
# 410
exit(___);}
#if 0
# 406
{ 
# 407
uint4 tmp = __surf1Dreadu4(surf, x, cudaBoundaryModeTrap); 
# 409
return make_float4(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y)), __int_as_float((int)(tmp.z)), __int_as_float((int)(tmp.w))); 
# 410
} 
#endif
# 457 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 458
surf2Dread(T *res, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 459
{int volatile ___ = 1;
# 466
exit(___);}
#if 0
# 459
{ 
# 460
(s == 1) ? ((void)((*((uchar1 *)res)) = __surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap))) : ((s == 2) ? ((void)((*((ushort1 *)res)) = __surf2Dreads1(surf, x, y, cudaBoundaryModeTrap))) : ((s == 4) ? ((void)((*((uint1 *)res)) = __surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap))) : ((s == 8) ? ((void)((*((uint2 *)res)) = __surf2Dreadu2(surf, x, y, cudaBoundaryModeTrap))) : ((s == 16) ? ((void)((*((uint4 *)res)) = __surf2Dreadu4(surf, x, y, cudaBoundaryModeTrap))) : ((void)0))))); 
# 466
} 
#endif
# 468 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T 
# 469
surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 470
{int volatile ___ = 1;
# 476
exit(___);}
#if 0
# 470
{ 
# 471
T tmp; 
# 473
surf2Dread(&tmp, surf, x, y, (int)sizeof(T), mode); 
# 475
return tmp; 
# 476
} 
#endif
# 478 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 479
surf2Dread(T *res, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 480
{int volatile ___ = 1;
# 482
exit(___);}
#if 0
# 480
{ 
# 481
(*res) = surf2Dread< T> (surf, x, y, mode); 
# 482
} 
#endif
# 485 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 486
{int volatile ___ = 1;
# 488
exit(___);}
#if 0
# 486
{ 
# 487
return (char)(__surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap).x); 
# 488
} 
#endif
# 491 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline signed char surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 492
{int volatile ___ = 1;
# 494
exit(___);}
#if 0
# 492
{ 
# 493
return (signed char)(__surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap).x); 
# 494
} 
#endif
# 497 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned char surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 498
{int volatile ___ = 1;
# 500
exit(___);}
#if 0
# 498
{ 
# 499
return __surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap).x; 
# 500
} 
#endif
# 503 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 504
{int volatile ___ = 1;
# 506
exit(___);}
#if 0
# 504
{ 
# 505
return make_char1((signed char)(__surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap).x)); 
# 506
} 
#endif
# 509 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 510
{int volatile ___ = 1;
# 512
exit(___);}
#if 0
# 510
{ 
# 511
return __surf2Dreadc1(surf, x, y, cudaBoundaryModeTrap); 
# 512
} 
#endif
# 515 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 516
{int volatile ___ = 1;
# 520
exit(___);}
#if 0
# 516
{ 
# 517
uchar2 tmp = __surf2Dreadc2(surf, x, y, cudaBoundaryModeTrap); 
# 519
return make_char2((signed char)(tmp.x), (signed char)(tmp.y)); 
# 520
} 
#endif
# 523 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 524
{int volatile ___ = 1;
# 526
exit(___);}
#if 0
# 524
{ 
# 525
return __surf2Dreadc2(surf, x, y, cudaBoundaryModeTrap); 
# 526
} 
#endif
# 529 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline char4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 530
{int volatile ___ = 1;
# 534
exit(___);}
#if 0
# 530
{ 
# 531
uchar4 tmp = __surf2Dreadc4(surf, x, y, cudaBoundaryModeTrap); 
# 533
return make_char4((signed char)(tmp.x), (signed char)(tmp.y), (signed char)(tmp.z), (signed char)(tmp.w)); 
# 534
} 
#endif
# 537 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uchar4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 538
{int volatile ___ = 1;
# 540
exit(___);}
#if 0
# 538
{ 
# 539
return __surf2Dreadc4(surf, x, y, cudaBoundaryModeTrap); 
# 540
} 
#endif
# 543 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 544
{int volatile ___ = 1;
# 546
exit(___);}
#if 0
# 544
{ 
# 545
return (short)(__surf2Dreads1(surf, x, y, cudaBoundaryModeTrap).x); 
# 546
} 
#endif
# 549 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned short surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 550
{int volatile ___ = 1;
# 552
exit(___);}
#if 0
# 550
{ 
# 551
return __surf2Dreads1(surf, x, y, cudaBoundaryModeTrap).x; 
# 552
} 
#endif
# 555 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 556
{int volatile ___ = 1;
# 558
exit(___);}
#if 0
# 556
{ 
# 557
return make_short1((signed short)(__surf2Dreads1(surf, x, y, cudaBoundaryModeTrap).x)); 
# 558
} 
#endif
# 561 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 562
{int volatile ___ = 1;
# 564
exit(___);}
#if 0
# 562
{ 
# 563
return __surf2Dreads1(surf, x, y, cudaBoundaryModeTrap); 
# 564
} 
#endif
# 567 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 568
{int volatile ___ = 1;
# 572
exit(___);}
#if 0
# 568
{ 
# 569
ushort2 tmp = __surf2Dreads2(surf, x, y, cudaBoundaryModeTrap); 
# 571
return make_short2((signed short)(tmp.x), (signed short)(tmp.y)); 
# 572
} 
#endif
# 575 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 576
{int volatile ___ = 1;
# 578
exit(___);}
#if 0
# 576
{ 
# 577
return __surf2Dreads2(surf, x, y, cudaBoundaryModeTrap); 
# 578
} 
#endif
# 581 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline short4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 582
{int volatile ___ = 1;
# 586
exit(___);}
#if 0
# 582
{ 
# 583
ushort4 tmp = __surf2Dreads4(surf, x, y, cudaBoundaryModeTrap); 
# 585
return make_short4((signed short)(tmp.x), (signed short)(tmp.y), (signed short)(tmp.z), (signed short)(tmp.w)); 
# 586
} 
#endif
# 589 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ushort4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 590
{int volatile ___ = 1;
# 592
exit(___);}
#if 0
# 590
{ 
# 591
return __surf2Dreads4(surf, x, y, cudaBoundaryModeTrap); 
# 592
} 
#endif
# 595 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 596
{int volatile ___ = 1;
# 598
exit(___);}
#if 0
# 596
{ 
# 597
return (int)(__surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x); 
# 598
} 
#endif
# 601 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 602
{int volatile ___ = 1;
# 604
exit(___);}
#if 0
# 602
{ 
# 603
return __surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x; 
# 604
} 
#endif
# 607 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 608
{int volatile ___ = 1;
# 610
exit(___);}
#if 0
# 608
{ 
# 609
return make_int1((signed int)(__surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x)); 
# 610
} 
#endif
# 613 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 614
{int volatile ___ = 1;
# 616
exit(___);}
#if 0
# 614
{ 
# 615
return __surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap); 
# 616
} 
#endif
# 619 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 620
{int volatile ___ = 1;
# 624
exit(___);}
#if 0
# 620
{ 
# 621
uint2 tmp = __surf2Dreadu2(surf, x, y, cudaBoundaryModeTrap); 
# 623
return make_int2((int)(tmp.x), (int)(tmp.y)); 
# 624
} 
#endif
# 627 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 628
{int volatile ___ = 1;
# 630
exit(___);}
#if 0
# 628
{ 
# 629
return __surf2Dreadu2(surf, x, y, cudaBoundaryModeTrap); 
# 630
} 
#endif
# 633 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline int4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 634
{int volatile ___ = 1;
# 638
exit(___);}
#if 0
# 634
{ 
# 635
uint4 tmp = __surf2Dreadu4(surf, x, y, cudaBoundaryModeTrap); 
# 637
return make_int4((int)(tmp.x), (int)(tmp.y), (int)(tmp.z), (int)(tmp.w)); 
# 638
} 
#endif
# 641 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline uint4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 642
{int volatile ___ = 1;
# 644
exit(___);}
#if 0
# 642
{ 
# 643
return __surf2Dreadu4(surf, x, y, cudaBoundaryModeTrap); 
# 644
} 
#endif
# 647 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline long long surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 648
{int volatile ___ = 1;
# 650
exit(___);}
#if 0
# 648
{ 
# 649
return (long long)(__surf2Dreadl1(surf, x, y, cudaBoundaryModeTrap).x); 
# 650
} 
#endif
# 653 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline unsigned long long surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 654
{int volatile ___ = 1;
# 656
exit(___);}
#if 0
# 654
{ 
# 655
return __surf2Dreadl1(surf, x, y, cudaBoundaryModeTrap).x; 
# 656
} 
#endif
# 659 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 660
{int volatile ___ = 1;
# 662
exit(___);}
#if 0
# 660
{ 
# 661
return make_longlong1((long long)(__surf2Dreadl1(surf, x, y, cudaBoundaryModeTrap).x)); 
# 662
} 
#endif
# 665 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 666
{int volatile ___ = 1;
# 668
exit(___);}
#if 0
# 666
{ 
# 667
return __surf2Dreadl1(surf, x, y, cudaBoundaryModeTrap); 
# 668
} 
#endif
# 671 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline longlong2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 672
{int volatile ___ = 1;
# 676
exit(___);}
#if 0
# 672
{ 
# 673
ulonglong2 tmp = __surf2Dreadl2(surf, x, y, cudaBoundaryModeTrap); 
# 675
return make_longlong2((long long)(tmp.x), (long long)(tmp.y)); 
# 676
} 
#endif
# 679 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline ulonglong2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 680
{int volatile ___ = 1;
# 682
exit(___);}
#if 0
# 680
{ 
# 681
return __surf2Dreadl2(surf, x, y, cudaBoundaryModeTrap); 
# 682
} 
#endif
# 745 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 746
{int volatile ___ = 1;
# 748
exit(___);}
#if 0
# 746
{ 
# 747
return __int_as_float((int)(__surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x)); 
# 748
} 
#endif
# 751 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float1 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 752
{int volatile ___ = 1;
# 754
exit(___);}
#if 0
# 752
{ 
# 753
return make_float1(__int_as_float((int)(__surf2Dreadu1(surf, x, y, cudaBoundaryModeTrap).x))); 
# 754
} 
#endif
# 757 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float2 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 758
{int volatile ___ = 1;
# 762
exit(___);}
#if 0
# 758
{ 
# 759
uint2 tmp = __surf2Dreadu2(surf, x, y, cudaBoundaryModeTrap); 
# 761
return make_float2(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y))); 
# 762
} 
#endif
# 765 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) __specialization_static inline float4 surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode) 
# 766
{int volatile ___ = 1;
# 770
exit(___);}
#if 0
# 766
{ 
# 767
uint4 tmp = __surf2Dreadu4(surf, x, y, cudaBoundaryModeTrap); 
# 769
return make_float4(__int_as_float((int)(tmp.x)), __int_as_float((int)(tmp.y)), __int_as_float((int)(tmp.z)), __int_as_float((int)(tmp.w))); 
# 770
} 
#endif
# 817 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 818
surf1Dwrite(T val, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 819
{int volatile ___ = 1;
# 837
exit(___);}
#if 0
# 819
{ 
# 820
union { 
# 821
T val; 
# 822
uchar1 c1; 
# 823
ushort1 s1; 
# 824
uint1 u1; 
# 825
uint2 u2; 
# 826
uint4 u4; 
# 827
} tmp; 
# 829
(tmp.val) = val; 
# 831
(s == 1) ? ((void)__surf1Dwritec1(tmp.c1, surf, x, cudaBoundaryModeTrap)) : ((s == 2) ? ((void)__surf1Dwrites1(tmp.s1, surf, x, cudaBoundaryModeTrap)) : ((s == 4) ? ((void)__surf1Dwriteu1(tmp.u1, surf, x, cudaBoundaryModeTrap)) : ((s == 8) ? ((void)__surf1Dwriteu2(tmp.u2, surf, x, cudaBoundaryModeTrap)) : ((s == 16) ? ((void)__surf1Dwriteu4(tmp.u4, surf, x, cudaBoundaryModeTrap)) : ((void)0))))); 
# 837
} 
#endif
# 839 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 840
surf1Dwrite(T val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 841
{int volatile ___ = 1;
# 843
exit(___);}
#if 0
# 841
{ ; 
# 842
surf1Dwrite(val, surf, x, (int)sizeof(T), mode); 
# 843
} 
#endif
# 846 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 847
{int volatile ___ = 1;
# 849
exit(___);}
#if 0
# 847
{ 
# 848
__surf1Dwritec1(make_uchar1((unsigned char)val), surf, x, cudaBoundaryModeTrap); 
# 849
} 
#endif
# 851 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(signed char val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 852
{int volatile ___ = 1;
# 854
exit(___);}
#if 0
# 852
{ 
# 853
__surf1Dwritec1(make_uchar1((unsigned char)val), surf, x, cudaBoundaryModeTrap); 
# 854
} 
#endif
# 856 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned char val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 857
{int volatile ___ = 1;
# 859
exit(___);}
#if 0
# 857
{ 
# 858
__surf1Dwritec1(make_uchar1(val), surf, x, cudaBoundaryModeTrap); 
# 859
} 
#endif
# 861 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 862
{int volatile ___ = 1;
# 864
exit(___);}
#if 0
# 862
{ 
# 863
__surf1Dwritec1(make_uchar1((unsigned char)(val.x)), surf, x, cudaBoundaryModeTrap); 
# 864
} 
#endif
# 866 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 867
{int volatile ___ = 1;
# 869
exit(___);}
#if 0
# 867
{ 
# 868
__surf1Dwritec1(val, surf, x, cudaBoundaryModeTrap); 
# 869
} 
#endif
# 871 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 872
{int volatile ___ = 1;
# 874
exit(___);}
#if 0
# 872
{ 
# 873
__surf1Dwritec2(make_uchar2((unsigned char)(val.x), (unsigned char)(val.y)), surf, x, cudaBoundaryModeTrap); 
# 874
} 
#endif
# 876 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 877
{int volatile ___ = 1;
# 879
exit(___);}
#if 0
# 877
{ 
# 878
__surf1Dwritec2(val, surf, x, cudaBoundaryModeTrap); 
# 879
} 
#endif
# 881 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 882
{int volatile ___ = 1;
# 884
exit(___);}
#if 0
# 882
{ 
# 883
__surf1Dwritec4(make_uchar4((unsigned char)(val.x), (unsigned char)(val.y), (unsigned char)(val.z), (unsigned char)(val.w)), surf, x, cudaBoundaryModeTrap); 
# 884
} 
#endif
# 886 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 887
{int volatile ___ = 1;
# 889
exit(___);}
#if 0
# 887
{ 
# 888
__surf1Dwritec4(val, surf, x, cudaBoundaryModeTrap); 
# 889
} 
#endif
# 891 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 892
{int volatile ___ = 1;
# 894
exit(___);}
#if 0
# 892
{ 
# 893
__surf1Dwrites1(make_ushort1((unsigned short)val), surf, x, cudaBoundaryModeTrap); 
# 894
} 
#endif
# 896 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned short val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 897
{int volatile ___ = 1;
# 899
exit(___);}
#if 0
# 897
{ 
# 898
__surf1Dwrites1(make_ushort1(val), surf, x, cudaBoundaryModeTrap); 
# 899
} 
#endif
# 901 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 902
{int volatile ___ = 1;
# 904
exit(___);}
#if 0
# 902
{ 
# 903
__surf1Dwrites1(make_ushort1((unsigned short)(val.x)), surf, x, cudaBoundaryModeTrap); 
# 904
} 
#endif
# 906 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 907
{int volatile ___ = 1;
# 909
exit(___);}
#if 0
# 907
{ 
# 908
__surf1Dwrites1(val, surf, x, cudaBoundaryModeTrap); 
# 909
} 
#endif
# 911 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 912
{int volatile ___ = 1;
# 914
exit(___);}
#if 0
# 912
{ 
# 913
__surf1Dwrites2(make_ushort2((unsigned short)(val.x), (unsigned short)(val.y)), surf, x, cudaBoundaryModeTrap); 
# 914
} 
#endif
# 916 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 917
{int volatile ___ = 1;
# 919
exit(___);}
#if 0
# 917
{ 
# 918
__surf1Dwrites2(val, surf, x, cudaBoundaryModeTrap); 
# 919
} 
#endif
# 921 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 922
{int volatile ___ = 1;
# 924
exit(___);}
#if 0
# 922
{ 
# 923
__surf1Dwrites4(make_ushort4((unsigned short)(val.x), (unsigned short)(val.y), (unsigned short)(val.z), (unsigned short)(val.w)), surf, x, cudaBoundaryModeTrap); 
# 924
} 
#endif
# 926 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 927
{int volatile ___ = 1;
# 929
exit(___);}
#if 0
# 927
{ 
# 928
__surf1Dwrites4(val, surf, x, cudaBoundaryModeTrap); 
# 929
} 
#endif
# 931 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 932
{int volatile ___ = 1;
# 934
exit(___);}
#if 0
# 932
{ 
# 933
__surf1Dwriteu1(make_uint1((unsigned)val), surf, x, cudaBoundaryModeTrap); 
# 934
} 
#endif
# 936 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 937
{int volatile ___ = 1;
# 939
exit(___);}
#if 0
# 937
{ 
# 938
__surf1Dwriteu1(make_uint1(val), surf, x, cudaBoundaryModeTrap); 
# 939
} 
#endif
# 941 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 942
{int volatile ___ = 1;
# 944
exit(___);}
#if 0
# 942
{ 
# 943
__surf1Dwriteu1(make_uint1((unsigned)(val.x)), surf, x, cudaBoundaryModeTrap); 
# 944
} 
#endif
# 946 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 947
{int volatile ___ = 1;
# 949
exit(___);}
#if 0
# 947
{ 
# 948
__surf1Dwriteu1(val, surf, x, cudaBoundaryModeTrap); 
# 949
} 
#endif
# 951 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 952
{int volatile ___ = 1;
# 954
exit(___);}
#if 0
# 952
{ 
# 953
__surf1Dwriteu2(make_uint2((unsigned)(val.x), (unsigned)(val.y)), surf, x, cudaBoundaryModeTrap); 
# 954
} 
#endif
# 956 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 957
{int volatile ___ = 1;
# 959
exit(___);}
#if 0
# 957
{ 
# 958
__surf1Dwriteu2(val, surf, x, cudaBoundaryModeTrap); 
# 959
} 
#endif
# 961 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 962
{int volatile ___ = 1;
# 964
exit(___);}
#if 0
# 962
{ 
# 963
__surf1Dwriteu4(make_uint4((unsigned)(val.x), (unsigned)(val.y), (unsigned)(val.z), (unsigned)(val.w)), surf, x, cudaBoundaryModeTrap); 
# 964
} 
#endif
# 966 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 967
{int volatile ___ = 1;
# 969
exit(___);}
#if 0
# 967
{ 
# 968
__surf1Dwriteu4(val, surf, x, cudaBoundaryModeTrap); 
# 969
} 
#endif
# 971 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(long long val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 972
{int volatile ___ = 1;
# 974
exit(___);}
#if 0
# 972
{ 
# 973
__surf1Dwritel1(make_ulonglong1((unsigned long long)val), surf, x, cudaBoundaryModeTrap); 
# 974
} 
#endif
# 976 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned long long val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 977
{int volatile ___ = 1;
# 979
exit(___);}
#if 0
# 977
{ 
# 978
__surf1Dwritel1(make_ulonglong1(val), surf, x, cudaBoundaryModeTrap); 
# 979
} 
#endif
# 981 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 982
{int volatile ___ = 1;
# 984
exit(___);}
#if 0
# 982
{ 
# 983
__surf1Dwritel1(make_ulonglong1((unsigned long long)(val.x)), surf, x, cudaBoundaryModeTrap); 
# 984
} 
#endif
# 986 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 987
{int volatile ___ = 1;
# 989
exit(___);}
#if 0
# 987
{ 
# 988
__surf1Dwritel1(val, surf, x, cudaBoundaryModeTrap); 
# 989
} 
#endif
# 991 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 992
{int volatile ___ = 1;
# 994
exit(___);}
#if 0
# 992
{ 
# 993
__surf1Dwritel2(make_ulonglong2((unsigned long long)(val.x), (unsigned long long)(val.y)), surf, x, cudaBoundaryModeTrap); 
# 994
} 
#endif
# 996 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 997
{int volatile ___ = 1;
# 999
exit(___);}
#if 0
# 997
{ 
# 998
__surf1Dwritel2(val, surf, x, cudaBoundaryModeTrap); 
# 999
} 
#endif
# 1045 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1046
{int volatile ___ = 1;
# 1048
exit(___);}
#if 0
# 1046
{ 
# 1047
__surf1Dwriteu1(make_uint1((unsigned)__float_as_int(val)), surf, x, cudaBoundaryModeTrap); 
# 1048
} 
#endif
# 1050 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float1 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1051
{int volatile ___ = 1;
# 1053
exit(___);}
#if 0
# 1051
{ 
# 1052
__surf1Dwriteu1(make_uint1((unsigned)__float_as_int(val.x)), surf, x, cudaBoundaryModeTrap); 
# 1053
} 
#endif
# 1055 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float2 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1056
{int volatile ___ = 1;
# 1058
exit(___);}
#if 0
# 1056
{ 
# 1057
__surf1Dwriteu2(make_uint2((unsigned)__float_as_int(val.x), __float_as_int((unsigned)(val.y))), surf, x, cudaBoundaryModeTrap); 
# 1058
} 
#endif
# 1060 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float4 val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1061
{int volatile ___ = 1;
# 1063
exit(___);}
#if 0
# 1061
{ 
# 1062
__surf1Dwriteu4(make_uint4((unsigned)__float_as_int(val.x), (unsigned)__float_as_int(val.y), (unsigned)__float_as_int(val.z), (unsigned)__float_as_int(val.w)), surf, x, cudaBoundaryModeTrap); 
# 1063
} 
#endif
# 1110 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 1111
surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1112
{int volatile ___ = 1;
# 1130
exit(___);}
#if 0
# 1112
{ 
# 1113
union { 
# 1114
T val; 
# 1115
uchar1 c1; 
# 1116
ushort1 s1; 
# 1117
uint1 u1; 
# 1118
uint2 u2; 
# 1119
uint4 u4; 
# 1120
} tmp; 
# 1122
(tmp.val) = val; 
# 1124
(s == 1) ? ((void)__surf2Dwritec1(tmp.c1, surf, x, y, cudaBoundaryModeTrap)) : ((s == 2) ? ((void)__surf2Dwrites1(tmp.s1, surf, x, y, cudaBoundaryModeTrap)) : ((s == 4) ? ((void)__surf2Dwriteu1(tmp.u1, surf, x, y, cudaBoundaryModeTrap)) : ((s == 8) ? ((void)__surf2Dwriteu2(tmp.u2, surf, x, y, cudaBoundaryModeTrap)) : ((s == 16) ? ((void)__surf2Dwriteu4(tmp.u4, surf, x, y, cudaBoundaryModeTrap)) : ((void)0))))); 
# 1130
} 
#endif
# 1132 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void 
# 1133
surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1134
{int volatile ___ = 1;
# 1136
exit(___);}
#if 0
# 1134
{ ; 
# 1135
surf2Dwrite(val, surf, x, y, (int)sizeof(T), mode); 
# 1136
} 
#endif
# 1139 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1140
{int volatile ___ = 1;
# 1142
exit(___);}
#if 0
# 1140
{ 
# 1141
__surf2Dwritec1(make_uchar1((unsigned char)val), surf, x, y, cudaBoundaryModeTrap); 
# 1142
} 
#endif
# 1144 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(signed char val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1145
{int volatile ___ = 1;
# 1147
exit(___);}
#if 0
# 1145
{ 
# 1146
__surf2Dwritec1(make_uchar1((unsigned char)val), surf, x, y, cudaBoundaryModeTrap); 
# 1147
} 
#endif
# 1149 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned char val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1150
{int volatile ___ = 1;
# 1152
exit(___);}
#if 0
# 1150
{ 
# 1151
__surf2Dwritec1(make_uchar1(val), surf, x, y, cudaBoundaryModeTrap); 
# 1152
} 
#endif
# 1154 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1155
{int volatile ___ = 1;
# 1157
exit(___);}
#if 0
# 1155
{ 
# 1156
__surf2Dwritec1(make_uchar1((unsigned char)(val.x)), surf, x, y, cudaBoundaryModeTrap); 
# 1157
} 
#endif
# 1159 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1160
{int volatile ___ = 1;
# 1162
exit(___);}
#if 0
# 1160
{ 
# 1161
__surf2Dwritec1(val, surf, x, y, cudaBoundaryModeTrap); 
# 1162
} 
#endif
# 1164 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1165
{int volatile ___ = 1;
# 1167
exit(___);}
#if 0
# 1165
{ 
# 1166
__surf2Dwritec2(make_uchar2((unsigned char)(val.x), (unsigned char)(val.y)), surf, x, y, cudaBoundaryModeTrap); 
# 1167
} 
#endif
# 1169 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1170
{int volatile ___ = 1;
# 1172
exit(___);}
#if 0
# 1170
{ 
# 1171
__surf2Dwritec2(val, surf, x, y, cudaBoundaryModeTrap); 
# 1172
} 
#endif
# 1174 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1175
{int volatile ___ = 1;
# 1177
exit(___);}
#if 0
# 1175
{ 
# 1176
__surf2Dwritec4(make_uchar4((unsigned char)(val.x), (unsigned char)(val.y), (unsigned char)(val.z), (unsigned char)(val.w)), surf, x, y, cudaBoundaryModeTrap); 
# 1177
} 
#endif
# 1179 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1180
{int volatile ___ = 1;
# 1182
exit(___);}
#if 0
# 1180
{ 
# 1181
__surf2Dwritec4(val, surf, x, y, cudaBoundaryModeTrap); 
# 1182
} 
#endif
# 1184 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1185
{int volatile ___ = 1;
# 1187
exit(___);}
#if 0
# 1185
{ 
# 1186
__surf2Dwrites1(make_ushort1((unsigned short)val), surf, x, y, cudaBoundaryModeTrap); 
# 1187
} 
#endif
# 1189 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned short val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1190
{int volatile ___ = 1;
# 1192
exit(___);}
#if 0
# 1190
{ 
# 1191
__surf2Dwrites1(make_ushort1(val), surf, x, y, cudaBoundaryModeTrap); 
# 1192
} 
#endif
# 1194 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1195
{int volatile ___ = 1;
# 1197
exit(___);}
#if 0
# 1195
{ 
# 1196
__surf2Dwrites1(make_ushort1((unsigned short)(val.x)), surf, x, y, cudaBoundaryModeTrap); 
# 1197
} 
#endif
# 1199 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1200
{int volatile ___ = 1;
# 1202
exit(___);}
#if 0
# 1200
{ 
# 1201
__surf2Dwrites1(val, surf, x, y, cudaBoundaryModeTrap); 
# 1202
} 
#endif
# 1204 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1205
{int volatile ___ = 1;
# 1207
exit(___);}
#if 0
# 1205
{ 
# 1206
__surf2Dwrites2(make_ushort2((unsigned short)(val.x), (unsigned short)(val.y)), surf, x, y, cudaBoundaryModeTrap); 
# 1207
} 
#endif
# 1209 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1210
{int volatile ___ = 1;
# 1212
exit(___);}
#if 0
# 1210
{ 
# 1211
__surf2Dwrites2(val, surf, x, y, cudaBoundaryModeTrap); 
# 1212
} 
#endif
# 1214 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1215
{int volatile ___ = 1;
# 1217
exit(___);}
#if 0
# 1215
{ 
# 1216
__surf2Dwrites4(make_ushort4((unsigned short)(val.x), (unsigned short)(val.y), (unsigned short)(val.z), (unsigned short)(val.w)), surf, x, y, cudaBoundaryModeTrap); 
# 1217
} 
#endif
# 1219 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1220
{int volatile ___ = 1;
# 1222
exit(___);}
#if 0
# 1220
{ 
# 1221
__surf2Dwrites4(val, surf, x, y, cudaBoundaryModeTrap); 
# 1222
} 
#endif
# 1224 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1225
{int volatile ___ = 1;
# 1227
exit(___);}
#if 0
# 1225
{ 
# 1226
__surf2Dwriteu1(make_uint1((unsigned)val), surf, x, y, cudaBoundaryModeTrap); 
# 1227
} 
#endif
# 1229 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1230
{int volatile ___ = 1;
# 1232
exit(___);}
#if 0
# 1230
{ 
# 1231
__surf2Dwriteu1(make_uint1(val), surf, x, y, cudaBoundaryModeTrap); 
# 1232
} 
#endif
# 1234 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1235
{int volatile ___ = 1;
# 1237
exit(___);}
#if 0
# 1235
{ 
# 1236
__surf2Dwriteu1(make_uint1((unsigned)(val.x)), surf, x, y, cudaBoundaryModeTrap); 
# 1237
} 
#endif
# 1239 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1240
{int volatile ___ = 1;
# 1242
exit(___);}
#if 0
# 1240
{ 
# 1241
__surf2Dwriteu1(val, surf, x, y, cudaBoundaryModeTrap); 
# 1242
} 
#endif
# 1244 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1245
{int volatile ___ = 1;
# 1247
exit(___);}
#if 0
# 1245
{ 
# 1246
__surf2Dwriteu2(make_uint2((unsigned)(val.x), (unsigned)(val.y)), surf, x, y, cudaBoundaryModeTrap); 
# 1247
} 
#endif
# 1249 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1250
{int volatile ___ = 1;
# 1252
exit(___);}
#if 0
# 1250
{ 
# 1251
__surf2Dwriteu2(val, surf, x, y, cudaBoundaryModeTrap); 
# 1252
} 
#endif
# 1254 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1255
{int volatile ___ = 1;
# 1257
exit(___);}
#if 0
# 1255
{ 
# 1256
__surf2Dwriteu4(make_uint4((unsigned)(val.x), (unsigned)(val.y), (unsigned)(val.z), (unsigned)(val.w)), surf, x, y, cudaBoundaryModeTrap); 
# 1257
} 
#endif
# 1259 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1260
{int volatile ___ = 1;
# 1262
exit(___);}
#if 0
# 1260
{ 
# 1261
__surf2Dwriteu4(val, surf, x, y, cudaBoundaryModeTrap); 
# 1262
} 
#endif
# 1264 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(long long val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1265
{int volatile ___ = 1;
# 1267
exit(___);}
#if 0
# 1265
{ 
# 1266
__surf2Dwritel1(make_ulonglong1((unsigned long long)val), surf, x, y, cudaBoundaryModeTrap); 
# 1267
} 
#endif
# 1269 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned long long val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1270
{int volatile ___ = 1;
# 1272
exit(___);}
#if 0
# 1270
{ 
# 1271
__surf2Dwritel1(make_ulonglong1(val), surf, x, y, cudaBoundaryModeTrap); 
# 1272
} 
#endif
# 1274 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1275
{int volatile ___ = 1;
# 1277
exit(___);}
#if 0
# 1275
{ 
# 1276
__surf2Dwritel1(make_ulonglong1((unsigned long long)(val.x)), surf, x, y, cudaBoundaryModeTrap); 
# 1277
} 
#endif
# 1279 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1280
{int volatile ___ = 1;
# 1282
exit(___);}
#if 0
# 1280
{ 
# 1281
__surf2Dwritel1(val, surf, x, y, cudaBoundaryModeTrap); 
# 1282
} 
#endif
# 1284 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1285
{int volatile ___ = 1;
# 1287
exit(___);}
#if 0
# 1285
{ 
# 1286
__surf2Dwritel2(make_ulonglong2((unsigned long long)(val.x), (unsigned long long)(val.y)), surf, x, y, cudaBoundaryModeTrap); 
# 1287
} 
#endif
# 1289 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1290
{int volatile ___ = 1;
# 1292
exit(___);}
#if 0
# 1290
{ 
# 1291
__surf2Dwritel2(val, surf, x, y, cudaBoundaryModeTrap); 
# 1292
} 
#endif
# 1338 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1339
{int volatile ___ = 1;
# 1341
exit(___);}
#if 0
# 1339
{ 
# 1340
__surf2Dwriteu1(make_uint1((unsigned)__float_as_int(val)), surf, x, y, cudaBoundaryModeTrap); 
# 1341
} 
#endif
# 1343 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float1 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1344
{int volatile ___ = 1;
# 1346
exit(___);}
#if 0
# 1344
{ 
# 1345
__surf2Dwriteu1(make_uint1((unsigned)__float_as_int(val.x)), surf, x, y, cudaBoundaryModeTrap); 
# 1346
} 
#endif
# 1348 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float2 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1349
{int volatile ___ = 1;
# 1351
exit(___);}
#if 0
# 1349
{ 
# 1350
__surf2Dwriteu2(make_uint2((unsigned)__float_as_int(val.x), __float_as_int((unsigned)(val.y))), surf, x, y, cudaBoundaryModeTrap); 
# 1351
} 
#endif
# 1353 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float4 val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1354
{int volatile ___ = 1;
# 1356
exit(___);}
#if 0
# 1354
{ 
# 1355
__surf2Dwriteu4(make_uint4((unsigned)__float_as_int(val.x), (unsigned)__float_as_int(val.y), (unsigned)__float_as_int(val.z), (unsigned)__float_as_int(val.w)), surf, x, y, cudaBoundaryModeTrap); 
# 1356
} 
#endif
# 61 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetchi(texture< T, 1, readMode> , int4); 
# 63
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetchi(texture< T, 1, readMode> , int4); 
# 65
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetchi(texture< T, 1, readMode> , int4); 
# 68
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetch(texture< T, dim, readMode> , float4, int = dim); 
# 70
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetch(texture< T, dim, readMode> , float4, int = dim); 
# 72
template< class T, int dim, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetch(texture< T, dim, readMode> , float4, int = dim); 
# 80
__attribute__((unused)) static inline char tex1Dfetch(texture< char, 1, cudaReadModeElementType>  t, int x) 
# 81
{int volatile ___ = 1;
# 89
exit(___);}
#if 0
# 81
{ 
# 85
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 88
return (char)(v.x); 
# 89
} 
#endif
# 91 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1Dfetch(texture< signed char, 1, cudaReadModeElementType>  t, int x) 
# 92
{int volatile ___ = 1;
# 96
exit(___);}
#if 0
# 92
{ 
# 93
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 95
return (signed char)(v.x); 
# 96
} 
#endif
# 98 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1Dfetch(texture< unsigned char, 1, cudaReadModeElementType>  t, int x) 
# 99
{int volatile ___ = 1;
# 103
exit(___);}
#if 0
# 99
{ 
# 100
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 102
return (unsigned char)(v.x); 
# 103
} 
#endif
# 105 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1Dfetch(texture< char1, 1, cudaReadModeElementType>  t, int x) 
# 106
{int volatile ___ = 1;
# 110
exit(___);}
#if 0
# 106
{ 
# 107
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 109
return make_char1(v.x); 
# 110
} 
#endif
# 112 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1Dfetch(texture< uchar1, 1, cudaReadModeElementType>  t, int x) 
# 113
{int volatile ___ = 1;
# 117
exit(___);}
#if 0
# 113
{ 
# 114
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 116
return make_uchar1(v.x); 
# 117
} 
#endif
# 119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1Dfetch(texture< char2, 1, cudaReadModeElementType>  t, int x) 
# 120
{int volatile ___ = 1;
# 124
exit(___);}
#if 0
# 120
{ 
# 121
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 123
return make_char2(v.x, v.y); 
# 124
} 
#endif
# 126 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1Dfetch(texture< uchar2, 1, cudaReadModeElementType>  t, int x) 
# 127
{int volatile ___ = 1;
# 131
exit(___);}
#if 0
# 127
{ 
# 128
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 130
return make_uchar2(v.x, v.y); 
# 131
} 
#endif
# 133 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1Dfetch(texture< char4, 1, cudaReadModeElementType>  t, int x) 
# 134
{int volatile ___ = 1;
# 138
exit(___);}
#if 0
# 134
{ 
# 135
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 137
return make_char4(v.x, v.y, v.z, v.w); 
# 138
} 
#endif
# 140 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1Dfetch(texture< uchar4, 1, cudaReadModeElementType>  t, int x) 
# 141
{int volatile ___ = 1;
# 145
exit(___);}
#if 0
# 141
{ 
# 142
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 144
return make_uchar4(v.x, v.y, v.z, v.w); 
# 145
} 
#endif
# 153 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1Dfetch(texture< short, 1, cudaReadModeElementType>  t, int x) 
# 154
{int volatile ___ = 1;
# 158
exit(___);}
#if 0
# 154
{ 
# 155
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 157
return (short)(v.x); 
# 158
} 
#endif
# 160 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1Dfetch(texture< unsigned short, 1, cudaReadModeElementType>  t, int x) 
# 161
{int volatile ___ = 1;
# 165
exit(___);}
#if 0
# 161
{ 
# 162
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 164
return (unsigned short)(v.x); 
# 165
} 
#endif
# 167 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1Dfetch(texture< short1, 1, cudaReadModeElementType>  t, int x) 
# 168
{int volatile ___ = 1;
# 172
exit(___);}
#if 0
# 168
{ 
# 169
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 171
return make_short1(v.x); 
# 172
} 
#endif
# 174 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1Dfetch(texture< ushort1, 1, cudaReadModeElementType>  t, int x) 
# 175
{int volatile ___ = 1;
# 179
exit(___);}
#if 0
# 175
{ 
# 176
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 178
return make_ushort1(v.x); 
# 179
} 
#endif
# 181 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1Dfetch(texture< short2, 1, cudaReadModeElementType>  t, int x) 
# 182
{int volatile ___ = 1;
# 186
exit(___);}
#if 0
# 182
{ 
# 183
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 185
return make_short2(v.x, v.y); 
# 186
} 
#endif
# 188 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1Dfetch(texture< ushort2, 1, cudaReadModeElementType>  t, int x) 
# 189
{int volatile ___ = 1;
# 193
exit(___);}
#if 0
# 189
{ 
# 190
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 192
return make_ushort2(v.x, v.y); 
# 193
} 
#endif
# 195 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1Dfetch(texture< short4, 1, cudaReadModeElementType>  t, int x) 
# 196
{int volatile ___ = 1;
# 200
exit(___);}
#if 0
# 196
{ 
# 197
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 199
return make_short4(v.x, v.y, v.z, v.w); 
# 200
} 
#endif
# 202 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1Dfetch(texture< ushort4, 1, cudaReadModeElementType>  t, int x) 
# 203
{int volatile ___ = 1;
# 207
exit(___);}
#if 0
# 203
{ 
# 204
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 206
return make_ushort4(v.x, v.y, v.z, v.w); 
# 207
} 
#endif
# 215 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1Dfetch(texture< int, 1, cudaReadModeElementType>  t, int x) 
# 216
{int volatile ___ = 1;
# 220
exit(___);}
#if 0
# 216
{ 
# 217
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 219
return (int)(v.x); 
# 220
} 
#endif
# 222 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1Dfetch(texture< unsigned, 1, cudaReadModeElementType>  t, int x) 
# 223
{int volatile ___ = 1;
# 227
exit(___);}
#if 0
# 223
{ 
# 224
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 226
return (unsigned)(v.x); 
# 227
} 
#endif
# 229 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1Dfetch(texture< int1, 1, cudaReadModeElementType>  t, int x) 
# 230
{int volatile ___ = 1;
# 234
exit(___);}
#if 0
# 230
{ 
# 231
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 233
return make_int1(v.x); 
# 234
} 
#endif
# 236 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1Dfetch(texture< uint1, 1, cudaReadModeElementType>  t, int x) 
# 237
{int volatile ___ = 1;
# 241
exit(___);}
#if 0
# 237
{ 
# 238
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 240
return make_uint1(v.x); 
# 241
} 
#endif
# 243 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1Dfetch(texture< int2, 1, cudaReadModeElementType>  t, int x) 
# 244
{int volatile ___ = 1;
# 248
exit(___);}
#if 0
# 244
{ 
# 245
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 247
return make_int2(v.x, v.y); 
# 248
} 
#endif
# 250 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1Dfetch(texture< uint2, 1, cudaReadModeElementType>  t, int x) 
# 251
{int volatile ___ = 1;
# 255
exit(___);}
#if 0
# 251
{ 
# 252
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 254
return make_uint2(v.x, v.y); 
# 255
} 
#endif
# 257 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1Dfetch(texture< int4, 1, cudaReadModeElementType>  t, int x) 
# 258
{int volatile ___ = 1;
# 262
exit(___);}
#if 0
# 258
{ 
# 259
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 261
return make_int4(v.x, v.y, v.z, v.w); 
# 262
} 
#endif
# 264 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1Dfetch(texture< uint4, 1, cudaReadModeElementType>  t, int x) 
# 265
{int volatile ___ = 1;
# 269
exit(___);}
#if 0
# 265
{ 
# 266
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 268
return make_uint4(v.x, v.y, v.z, v.w); 
# 269
} 
#endif
# 343 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< float, 1, cudaReadModeElementType>  t, int x) 
# 344
{int volatile ___ = 1;
# 348
exit(___);}
#if 0
# 344
{ 
# 345
float4 v = __ftexfetchi(t, make_int4(x, 0, 0, 0)); 
# 347
return v.x; 
# 348
} 
#endif
# 350 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< float1, 1, cudaReadModeElementType>  t, int x) 
# 351
{int volatile ___ = 1;
# 355
exit(___);}
#if 0
# 351
{ 
# 352
float4 v = __ftexfetchi(t, make_int4(x, 0, 0, 0)); 
# 354
return make_float1(v.x); 
# 355
} 
#endif
# 357 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< float2, 1, cudaReadModeElementType>  t, int x) 
# 358
{int volatile ___ = 1;
# 362
exit(___);}
#if 0
# 358
{ 
# 359
float4 v = __ftexfetchi(t, make_int4(x, 0, 0, 0)); 
# 361
return make_float2(v.x, v.y); 
# 362
} 
#endif
# 364 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< float4, 1, cudaReadModeElementType>  t, int x) 
# 365
{int volatile ___ = 1;
# 369
exit(___);}
#if 0
# 365
{ 
# 366
float4 v = __ftexfetchi(t, make_int4(x, 0, 0, 0)); 
# 368
return make_float4(v.x, v.y, v.z, v.w); 
# 369
} 
#endif
# 377 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< char, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 378
{int volatile ___ = 1;
# 387
exit(___);}
#if 0
# 378
{ 
# 382
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 384
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 386
return w.x; 
# 387
} 
#endif
# 389 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< signed char, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 390
{int volatile ___ = 1;
# 395
exit(___);}
#if 0
# 390
{ 
# 391
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 392
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 394
return w.x; 
# 395
} 
#endif
# 397 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned char, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 398
{int volatile ___ = 1;
# 403
exit(___);}
#if 0
# 398
{ 
# 399
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 400
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 402
return w.x; 
# 403
} 
#endif
# 405 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< char1, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 406
{int volatile ___ = 1;
# 411
exit(___);}
#if 0
# 406
{ 
# 407
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 408
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 410
return make_float1(w.x); 
# 411
} 
#endif
# 413 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< uchar1, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 414
{int volatile ___ = 1;
# 419
exit(___);}
#if 0
# 414
{ 
# 415
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 416
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 418
return make_float1(w.x); 
# 419
} 
#endif
# 421 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< char2, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 422
{int volatile ___ = 1;
# 427
exit(___);}
#if 0
# 422
{ 
# 423
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 424
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 426
return make_float2(w.x, w.y); 
# 427
} 
#endif
# 429 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< uchar2, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 430
{int volatile ___ = 1;
# 435
exit(___);}
#if 0
# 430
{ 
# 431
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 432
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 434
return make_float2(w.x, w.y); 
# 435
} 
#endif
# 437 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< char4, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 438
{int volatile ___ = 1;
# 443
exit(___);}
#if 0
# 438
{ 
# 439
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 440
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 442
return make_float4(w.x, w.y, w.z, w.w); 
# 443
} 
#endif
# 445 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< uchar4, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 446
{int volatile ___ = 1;
# 451
exit(___);}
#if 0
# 446
{ 
# 447
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 448
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 450
return make_float4(w.x, w.y, w.z, w.w); 
# 451
} 
#endif
# 459 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< short, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 460
{int volatile ___ = 1;
# 465
exit(___);}
#if 0
# 460
{ 
# 461
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 462
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 464
return w.x; 
# 465
} 
#endif
# 467 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned short, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 468
{int volatile ___ = 1;
# 473
exit(___);}
#if 0
# 468
{ 
# 469
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 470
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 472
return w.x; 
# 473
} 
#endif
# 475 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< short1, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 476
{int volatile ___ = 1;
# 481
exit(___);}
#if 0
# 476
{ 
# 477
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 478
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 480
return make_float1(w.x); 
# 481
} 
#endif
# 483 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< ushort1, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 484
{int volatile ___ = 1;
# 489
exit(___);}
#if 0
# 484
{ 
# 485
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 486
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 488
return make_float1(w.x); 
# 489
} 
#endif
# 491 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< short2, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 492
{int volatile ___ = 1;
# 497
exit(___);}
#if 0
# 492
{ 
# 493
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 494
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 496
return make_float2(w.x, w.y); 
# 497
} 
#endif
# 499 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< ushort2, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 500
{int volatile ___ = 1;
# 505
exit(___);}
#if 0
# 500
{ 
# 501
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 502
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 504
return make_float2(w.x, w.y); 
# 505
} 
#endif
# 507 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< short4, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 508
{int volatile ___ = 1;
# 513
exit(___);}
#if 0
# 508
{ 
# 509
int4 v = __itexfetchi(t, make_int4(x, 0, 0, 0)); 
# 510
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 512
return make_float4(w.x, w.y, w.z, w.w); 
# 513
} 
#endif
# 515 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< ushort4, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 516
{int volatile ___ = 1;
# 521
exit(___);}
#if 0
# 516
{ 
# 517
uint4 v = __utexfetchi(t, make_int4(x, 0, 0, 0)); 
# 518
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 520
return make_float4(w.x, w.y, w.z, w.w); 
# 521
} 
#endif
# 529 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1D(texture< char, 1, cudaReadModeElementType>  t, float x) 
# 530
{int volatile ___ = 1;
# 538
exit(___);}
#if 0
# 530
{ 
# 534
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 537
return (char)(v.x); 
# 538
} 
#endif
# 540 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1D(texture< signed char, 1, cudaReadModeElementType>  t, float x) 
# 541
{int volatile ___ = 1;
# 545
exit(___);}
#if 0
# 541
{ 
# 542
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 544
return (signed char)(v.x); 
# 545
} 
#endif
# 547 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1D(texture< unsigned char, 1, cudaReadModeElementType>  t, float x) 
# 548
{int volatile ___ = 1;
# 552
exit(___);}
#if 0
# 548
{ 
# 549
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 551
return (unsigned char)(v.x); 
# 552
} 
#endif
# 554 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1D(texture< char1, 1, cudaReadModeElementType>  t, float x) 
# 555
{int volatile ___ = 1;
# 559
exit(___);}
#if 0
# 555
{ 
# 556
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 558
return make_char1(v.x); 
# 559
} 
#endif
# 561 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1D(texture< uchar1, 1, cudaReadModeElementType>  t, float x) 
# 562
{int volatile ___ = 1;
# 566
exit(___);}
#if 0
# 562
{ 
# 563
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 565
return make_uchar1(v.x); 
# 566
} 
#endif
# 568 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1D(texture< char2, 1, cudaReadModeElementType>  t, float x) 
# 569
{int volatile ___ = 1;
# 573
exit(___);}
#if 0
# 569
{ 
# 570
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 572
return make_char2(v.x, v.y); 
# 573
} 
#endif
# 575 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1D(texture< uchar2, 1, cudaReadModeElementType>  t, float x) 
# 576
{int volatile ___ = 1;
# 580
exit(___);}
#if 0
# 576
{ 
# 577
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 579
return make_uchar2(v.x, v.y); 
# 580
} 
#endif
# 582 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1D(texture< char4, 1, cudaReadModeElementType>  t, float x) 
# 583
{int volatile ___ = 1;
# 587
exit(___);}
#if 0
# 583
{ 
# 584
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 586
return make_char4(v.x, v.y, v.z, v.w); 
# 587
} 
#endif
# 589 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1D(texture< uchar4, 1, cudaReadModeElementType>  t, float x) 
# 590
{int volatile ___ = 1;
# 594
exit(___);}
#if 0
# 590
{ 
# 591
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 593
return make_uchar4(v.x, v.y, v.z, v.w); 
# 594
} 
#endif
# 602 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1D(texture< short, 1, cudaReadModeElementType>  t, float x) 
# 603
{int volatile ___ = 1;
# 607
exit(___);}
#if 0
# 603
{ 
# 604
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 606
return (short)(v.x); 
# 607
} 
#endif
# 609 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1D(texture< unsigned short, 1, cudaReadModeElementType>  t, float x) 
# 610
{int volatile ___ = 1;
# 614
exit(___);}
#if 0
# 610
{ 
# 611
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 613
return (unsigned short)(v.x); 
# 614
} 
#endif
# 616 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1D(texture< short1, 1, cudaReadModeElementType>  t, float x) 
# 617
{int volatile ___ = 1;
# 621
exit(___);}
#if 0
# 617
{ 
# 618
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 620
return make_short1(v.x); 
# 621
} 
#endif
# 623 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1D(texture< ushort1, 1, cudaReadModeElementType>  t, float x) 
# 624
{int volatile ___ = 1;
# 628
exit(___);}
#if 0
# 624
{ 
# 625
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 627
return make_ushort1(v.x); 
# 628
} 
#endif
# 630 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1D(texture< short2, 1, cudaReadModeElementType>  t, float x) 
# 631
{int volatile ___ = 1;
# 635
exit(___);}
#if 0
# 631
{ 
# 632
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 634
return make_short2(v.x, v.y); 
# 635
} 
#endif
# 637 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1D(texture< ushort2, 1, cudaReadModeElementType>  t, float x) 
# 638
{int volatile ___ = 1;
# 642
exit(___);}
#if 0
# 638
{ 
# 639
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 641
return make_ushort2(v.x, v.y); 
# 642
} 
#endif
# 644 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1D(texture< short4, 1, cudaReadModeElementType>  t, float x) 
# 645
{int volatile ___ = 1;
# 649
exit(___);}
#if 0
# 645
{ 
# 646
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 648
return make_short4(v.x, v.y, v.z, v.w); 
# 649
} 
#endif
# 651 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1D(texture< ushort4, 1, cudaReadModeElementType>  t, float x) 
# 652
{int volatile ___ = 1;
# 656
exit(___);}
#if 0
# 652
{ 
# 653
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 655
return make_ushort4(v.x, v.y, v.z, v.w); 
# 656
} 
#endif
# 664 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1D(texture< int, 1, cudaReadModeElementType>  t, float x) 
# 665
{int volatile ___ = 1;
# 669
exit(___);}
#if 0
# 665
{ 
# 666
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 668
return (int)(v.x); 
# 669
} 
#endif
# 671 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1D(texture< unsigned, 1, cudaReadModeElementType>  t, float x) 
# 672
{int volatile ___ = 1;
# 676
exit(___);}
#if 0
# 672
{ 
# 673
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 675
return (unsigned)(v.x); 
# 676
} 
#endif
# 678 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1D(texture< int1, 1, cudaReadModeElementType>  t, float x) 
# 679
{int volatile ___ = 1;
# 683
exit(___);}
#if 0
# 679
{ 
# 680
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 682
return make_int1(v.x); 
# 683
} 
#endif
# 685 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1D(texture< uint1, 1, cudaReadModeElementType>  t, float x) 
# 686
{int volatile ___ = 1;
# 690
exit(___);}
#if 0
# 686
{ 
# 687
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 689
return make_uint1(v.x); 
# 690
} 
#endif
# 692 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1D(texture< int2, 1, cudaReadModeElementType>  t, float x) 
# 693
{int volatile ___ = 1;
# 697
exit(___);}
#if 0
# 693
{ 
# 694
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 696
return make_int2(v.x, v.y); 
# 697
} 
#endif
# 699 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1D(texture< uint2, 1, cudaReadModeElementType>  t, float x) 
# 700
{int volatile ___ = 1;
# 704
exit(___);}
#if 0
# 700
{ 
# 701
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 703
return make_uint2(v.x, v.y); 
# 704
} 
#endif
# 706 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1D(texture< int4, 1, cudaReadModeElementType>  t, float x) 
# 707
{int volatile ___ = 1;
# 711
exit(___);}
#if 0
# 707
{ 
# 708
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 710
return make_int4(v.x, v.y, v.z, v.w); 
# 711
} 
#endif
# 713 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1D(texture< uint4, 1, cudaReadModeElementType>  t, float x) 
# 714
{int volatile ___ = 1;
# 718
exit(___);}
#if 0
# 714
{ 
# 715
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 717
return make_uint4(v.x, v.y, v.z, v.w); 
# 718
} 
#endif
# 798 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< float, 1, cudaReadModeElementType>  t, float x) 
# 799
{int volatile ___ = 1;
# 803
exit(___);}
#if 0
# 799
{ 
# 800
float4 v = __ftexfetch(t, make_float4(x, 0, 0, 0)); 
# 802
return v.x; 
# 803
} 
#endif
# 805 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< float1, 1, cudaReadModeElementType>  t, float x) 
# 806
{int volatile ___ = 1;
# 810
exit(___);}
#if 0
# 806
{ 
# 807
float4 v = __ftexfetch(t, make_float4(x, 0, 0, 0)); 
# 809
return make_float1(v.x); 
# 810
} 
#endif
# 812 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< float2, 1, cudaReadModeElementType>  t, float x) 
# 813
{int volatile ___ = 1;
# 817
exit(___);}
#if 0
# 813
{ 
# 814
float4 v = __ftexfetch(t, make_float4(x, 0, 0, 0)); 
# 816
return make_float2(v.x, v.y); 
# 817
} 
#endif
# 819 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< float4, 1, cudaReadModeElementType>  t, float x) 
# 820
{int volatile ___ = 1;
# 824
exit(___);}
#if 0
# 820
{ 
# 821
float4 v = __ftexfetch(t, make_float4(x, 0, 0, 0)); 
# 823
return make_float4(v.x, v.y, v.z, v.w); 
# 824
} 
#endif
# 832 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< char, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 833
{int volatile ___ = 1;
# 842
exit(___);}
#if 0
# 833
{ 
# 837
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 839
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 841
return w.x; 
# 842
} 
#endif
# 844 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< signed char, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 845
{int volatile ___ = 1;
# 850
exit(___);}
#if 0
# 845
{ 
# 846
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 847
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 849
return w.x; 
# 850
} 
#endif
# 852 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned char, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 853
{int volatile ___ = 1;
# 858
exit(___);}
#if 0
# 853
{ 
# 854
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 855
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 857
return w.x; 
# 858
} 
#endif
# 860 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< char1, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 861
{int volatile ___ = 1;
# 866
exit(___);}
#if 0
# 861
{ 
# 862
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 863
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 865
return make_float1(w.x); 
# 866
} 
#endif
# 868 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< uchar1, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 869
{int volatile ___ = 1;
# 874
exit(___);}
#if 0
# 869
{ 
# 870
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 871
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 873
return make_float1(w.x); 
# 874
} 
#endif
# 876 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< char2, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 877
{int volatile ___ = 1;
# 882
exit(___);}
#if 0
# 877
{ 
# 878
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 879
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 881
return make_float2(w.x, w.y); 
# 882
} 
#endif
# 884 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< uchar2, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 885
{int volatile ___ = 1;
# 890
exit(___);}
#if 0
# 885
{ 
# 886
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 887
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 889
return make_float2(w.x, w.y); 
# 890
} 
#endif
# 892 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< char4, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 893
{int volatile ___ = 1;
# 898
exit(___);}
#if 0
# 893
{ 
# 894
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 895
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 897
return make_float4(w.x, w.y, w.z, w.w); 
# 898
} 
#endif
# 900 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< uchar4, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 901
{int volatile ___ = 1;
# 906
exit(___);}
#if 0
# 901
{ 
# 902
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 903
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 905
return make_float4(w.x, w.y, w.z, w.w); 
# 906
} 
#endif
# 914 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< short, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 915
{int volatile ___ = 1;
# 920
exit(___);}
#if 0
# 915
{ 
# 916
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 917
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 919
return w.x; 
# 920
} 
#endif
# 922 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned short, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 923
{int volatile ___ = 1;
# 928
exit(___);}
#if 0
# 923
{ 
# 924
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 925
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 927
return w.x; 
# 928
} 
#endif
# 930 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< short1, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 931
{int volatile ___ = 1;
# 936
exit(___);}
#if 0
# 931
{ 
# 932
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 933
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 935
return make_float1(w.x); 
# 936
} 
#endif
# 938 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< ushort1, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 939
{int volatile ___ = 1;
# 944
exit(___);}
#if 0
# 939
{ 
# 940
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 941
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 943
return make_float1(w.x); 
# 944
} 
#endif
# 946 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< short2, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 947
{int volatile ___ = 1;
# 952
exit(___);}
#if 0
# 947
{ 
# 948
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 949
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 951
return make_float2(w.x, w.y); 
# 952
} 
#endif
# 954 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< ushort2, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 955
{int volatile ___ = 1;
# 960
exit(___);}
#if 0
# 955
{ 
# 956
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 957
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 959
return make_float2(w.x, w.y); 
# 960
} 
#endif
# 962 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< short4, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 963
{int volatile ___ = 1;
# 968
exit(___);}
#if 0
# 963
{ 
# 964
int4 v = __itexfetch(t, make_float4(x, 0, 0, 0)); 
# 965
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 967
return make_float4(w.x, w.y, w.z, w.w); 
# 968
} 
#endif
# 970 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< ushort4, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 971
{int volatile ___ = 1;
# 976
exit(___);}
#if 0
# 971
{ 
# 972
uint4 v = __utexfetch(t, make_float4(x, 0, 0, 0)); 
# 973
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 975
return make_float4(w.x, w.y, w.z, w.w); 
# 976
} 
#endif
# 984 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex2D(texture< char, 2, cudaReadModeElementType>  t, float x, float y) 
# 985
{int volatile ___ = 1;
# 993
exit(___);}
#if 0
# 985
{ 
# 989
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 992
return (char)(v.x); 
# 993
} 
#endif
# 995 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex2D(texture< signed char, 2, cudaReadModeElementType>  t, float x, float y) 
# 996
{int volatile ___ = 1;
# 1000
exit(___);}
#if 0
# 996
{ 
# 997
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 999
return (signed char)(v.x); 
# 1000
} 
#endif
# 1002 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex2D(texture< unsigned char, 2, cudaReadModeElementType>  t, float x, float y) 
# 1003
{int volatile ___ = 1;
# 1007
exit(___);}
#if 0
# 1003
{ 
# 1004
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1006
return (unsigned char)(v.x); 
# 1007
} 
#endif
# 1009 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex2D(texture< char1, 2, cudaReadModeElementType>  t, float x, float y) 
# 1010
{int volatile ___ = 1;
# 1014
exit(___);}
#if 0
# 1010
{ 
# 1011
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1013
return make_char1(v.x); 
# 1014
} 
#endif
# 1016 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex2D(texture< uchar1, 2, cudaReadModeElementType>  t, float x, float y) 
# 1017
{int volatile ___ = 1;
# 1021
exit(___);}
#if 0
# 1017
{ 
# 1018
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1020
return make_uchar1(v.x); 
# 1021
} 
#endif
# 1023 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex2D(texture< char2, 2, cudaReadModeElementType>  t, float x, float y) 
# 1024
{int volatile ___ = 1;
# 1028
exit(___);}
#if 0
# 1024
{ 
# 1025
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1027
return make_char2(v.x, v.y); 
# 1028
} 
#endif
# 1030 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex2D(texture< uchar2, 2, cudaReadModeElementType>  t, float x, float y) 
# 1031
{int volatile ___ = 1;
# 1035
exit(___);}
#if 0
# 1031
{ 
# 1032
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1034
return make_uchar2(v.x, v.y); 
# 1035
} 
#endif
# 1037 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2D(texture< char4, 2, cudaReadModeElementType>  t, float x, float y) 
# 1038
{int volatile ___ = 1;
# 1042
exit(___);}
#if 0
# 1038
{ 
# 1039
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1041
return make_char4(v.x, v.y, v.z, v.w); 
# 1042
} 
#endif
# 1044 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2D(texture< uchar4, 2, cudaReadModeElementType>  t, float x, float y) 
# 1045
{int volatile ___ = 1;
# 1049
exit(___);}
#if 0
# 1045
{ 
# 1046
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1048
return make_uchar4(v.x, v.y, v.z, v.w); 
# 1049
} 
#endif
# 1057 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex2D(texture< short, 2, cudaReadModeElementType>  t, float x, float y) 
# 1058
{int volatile ___ = 1;
# 1062
exit(___);}
#if 0
# 1058
{ 
# 1059
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1061
return (short)(v.x); 
# 1062
} 
#endif
# 1064 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex2D(texture< unsigned short, 2, cudaReadModeElementType>  t, float x, float y) 
# 1065
{int volatile ___ = 1;
# 1069
exit(___);}
#if 0
# 1065
{ 
# 1066
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1068
return (unsigned short)(v.x); 
# 1069
} 
#endif
# 1071 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex2D(texture< short1, 2, cudaReadModeElementType>  t, float x, float y) 
# 1072
{int volatile ___ = 1;
# 1076
exit(___);}
#if 0
# 1072
{ 
# 1073
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1075
return make_short1(v.x); 
# 1076
} 
#endif
# 1078 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex2D(texture< ushort1, 2, cudaReadModeElementType>  t, float x, float y) 
# 1079
{int volatile ___ = 1;
# 1083
exit(___);}
#if 0
# 1079
{ 
# 1080
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1082
return make_ushort1(v.x); 
# 1083
} 
#endif
# 1085 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex2D(texture< short2, 2, cudaReadModeElementType>  t, float x, float y) 
# 1086
{int volatile ___ = 1;
# 1090
exit(___);}
#if 0
# 1086
{ 
# 1087
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1089
return make_short2(v.x, v.y); 
# 1090
} 
#endif
# 1092 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex2D(texture< ushort2, 2, cudaReadModeElementType>  t, float x, float y) 
# 1093
{int volatile ___ = 1;
# 1097
exit(___);}
#if 0
# 1093
{ 
# 1094
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1096
return make_ushort2(v.x, v.y); 
# 1097
} 
#endif
# 1099 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2D(texture< short4, 2, cudaReadModeElementType>  t, float x, float y) 
# 1100
{int volatile ___ = 1;
# 1104
exit(___);}
#if 0
# 1100
{ 
# 1101
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1103
return make_short4(v.x, v.y, v.z, v.w); 
# 1104
} 
#endif
# 1106 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2D(texture< ushort4, 2, cudaReadModeElementType>  t, float x, float y) 
# 1107
{int volatile ___ = 1;
# 1111
exit(___);}
#if 0
# 1107
{ 
# 1108
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1110
return make_ushort4(v.x, v.y, v.z, v.w); 
# 1111
} 
#endif
# 1119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex2D(texture< int, 2, cudaReadModeElementType>  t, float x, float y) 
# 1120
{int volatile ___ = 1;
# 1124
exit(___);}
#if 0
# 1120
{ 
# 1121
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1123
return (int)(v.x); 
# 1124
} 
#endif
# 1126 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex2D(texture< unsigned, 2, cudaReadModeElementType>  t, float x, float y) 
# 1127
{int volatile ___ = 1;
# 1131
exit(___);}
#if 0
# 1127
{ 
# 1128
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1130
return (unsigned)(v.x); 
# 1131
} 
#endif
# 1133 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex2D(texture< int1, 2, cudaReadModeElementType>  t, float x, float y) 
# 1134
{int volatile ___ = 1;
# 1138
exit(___);}
#if 0
# 1134
{ 
# 1135
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1137
return make_int1(v.x); 
# 1138
} 
#endif
# 1140 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex2D(texture< uint1, 2, cudaReadModeElementType>  t, float x, float y) 
# 1141
{int volatile ___ = 1;
# 1145
exit(___);}
#if 0
# 1141
{ 
# 1142
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1144
return make_uint1(v.x); 
# 1145
} 
#endif
# 1147 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex2D(texture< int2, 2, cudaReadModeElementType>  t, float x, float y) 
# 1148
{int volatile ___ = 1;
# 1152
exit(___);}
#if 0
# 1148
{ 
# 1149
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1151
return make_int2(v.x, v.y); 
# 1152
} 
#endif
# 1154 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex2D(texture< uint2, 2, cudaReadModeElementType>  t, float x, float y) 
# 1155
{int volatile ___ = 1;
# 1159
exit(___);}
#if 0
# 1155
{ 
# 1156
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1158
return make_uint2(v.x, v.y); 
# 1159
} 
#endif
# 1161 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2D(texture< int4, 2, cudaReadModeElementType>  t, float x, float y) 
# 1162
{int volatile ___ = 1;
# 1166
exit(___);}
#if 0
# 1162
{ 
# 1163
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1165
return make_int4(v.x, v.y, v.z, v.w); 
# 1166
} 
#endif
# 1168 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2D(texture< uint4, 2, cudaReadModeElementType>  t, float x, float y) 
# 1169
{int volatile ___ = 1;
# 1173
exit(___);}
#if 0
# 1169
{ 
# 1170
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1172
return make_uint4(v.x, v.y, v.z, v.w); 
# 1173
} 
#endif
# 1247 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< float, 2, cudaReadModeElementType>  t, float x, float y) 
# 1248
{int volatile ___ = 1;
# 1252
exit(___);}
#if 0
# 1248
{ 
# 1249
float4 v = __ftexfetch(t, make_float4(x, y, 0, 0)); 
# 1251
return v.x; 
# 1252
} 
#endif
# 1254 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< float1, 2, cudaReadModeElementType>  t, float x, float y) 
# 1255
{int volatile ___ = 1;
# 1259
exit(___);}
#if 0
# 1255
{ 
# 1256
float4 v = __ftexfetch(t, make_float4(x, y, 0, 0)); 
# 1258
return make_float1(v.x); 
# 1259
} 
#endif
# 1261 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< float2, 2, cudaReadModeElementType>  t, float x, float y) 
# 1262
{int volatile ___ = 1;
# 1266
exit(___);}
#if 0
# 1262
{ 
# 1263
float4 v = __ftexfetch(t, make_float4(x, y, 0, 0)); 
# 1265
return make_float2(v.x, v.y); 
# 1266
} 
#endif
# 1268 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< float4, 2, cudaReadModeElementType>  t, float x, float y) 
# 1269
{int volatile ___ = 1;
# 1273
exit(___);}
#if 0
# 1269
{ 
# 1270
float4 v = __ftexfetch(t, make_float4(x, y, 0, 0)); 
# 1272
return make_float4(v.x, v.y, v.z, v.w); 
# 1273
} 
#endif
# 1281 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< char, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1282
{int volatile ___ = 1;
# 1291
exit(___);}
#if 0
# 1282
{ 
# 1286
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1288
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1290
return w.x; 
# 1291
} 
#endif
# 1293 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< signed char, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1294
{int volatile ___ = 1;
# 1299
exit(___);}
#if 0
# 1294
{ 
# 1295
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1296
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1298
return w.x; 
# 1299
} 
#endif
# 1301 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned char, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1302
{int volatile ___ = 1;
# 1307
exit(___);}
#if 0
# 1302
{ 
# 1303
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1304
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1306
return w.x; 
# 1307
} 
#endif
# 1309 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< char1, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1310
{int volatile ___ = 1;
# 1315
exit(___);}
#if 0
# 1310
{ 
# 1311
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1312
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1314
return make_float1(w.x); 
# 1315
} 
#endif
# 1317 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< uchar1, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1318
{int volatile ___ = 1;
# 1323
exit(___);}
#if 0
# 1318
{ 
# 1319
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1320
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1322
return make_float1(w.x); 
# 1323
} 
#endif
# 1325 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< char2, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1326
{int volatile ___ = 1;
# 1331
exit(___);}
#if 0
# 1326
{ 
# 1327
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1328
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1330
return make_float2(w.x, w.y); 
# 1331
} 
#endif
# 1333 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< uchar2, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1334
{int volatile ___ = 1;
# 1339
exit(___);}
#if 0
# 1334
{ 
# 1335
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1336
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1338
return make_float2(w.x, w.y); 
# 1339
} 
#endif
# 1341 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< char4, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1342
{int volatile ___ = 1;
# 1347
exit(___);}
#if 0
# 1342
{ 
# 1343
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1344
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1346
return make_float4(w.x, w.y, w.z, w.w); 
# 1347
} 
#endif
# 1349 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< uchar4, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1350
{int volatile ___ = 1;
# 1355
exit(___);}
#if 0
# 1350
{ 
# 1351
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1352
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1354
return make_float4(w.x, w.y, w.z, w.w); 
# 1355
} 
#endif
# 1363 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< short, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1364
{int volatile ___ = 1;
# 1369
exit(___);}
#if 0
# 1364
{ 
# 1365
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1366
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1368
return w.x; 
# 1369
} 
#endif
# 1371 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned short, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1372
{int volatile ___ = 1;
# 1377
exit(___);}
#if 0
# 1372
{ 
# 1373
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1374
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1376
return w.x; 
# 1377
} 
#endif
# 1379 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< short1, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1380
{int volatile ___ = 1;
# 1385
exit(___);}
#if 0
# 1380
{ 
# 1381
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1382
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1384
return make_float1(w.x); 
# 1385
} 
#endif
# 1387 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< ushort1, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1388
{int volatile ___ = 1;
# 1393
exit(___);}
#if 0
# 1388
{ 
# 1389
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1390
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1392
return make_float1(w.x); 
# 1393
} 
#endif
# 1395 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< short2, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1396
{int volatile ___ = 1;
# 1401
exit(___);}
#if 0
# 1396
{ 
# 1397
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1398
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1400
return make_float2(w.x, w.y); 
# 1401
} 
#endif
# 1403 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< ushort2, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1404
{int volatile ___ = 1;
# 1409
exit(___);}
#if 0
# 1404
{ 
# 1405
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1406
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1408
return make_float2(w.x, w.y); 
# 1409
} 
#endif
# 1411 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< short4, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1412
{int volatile ___ = 1;
# 1417
exit(___);}
#if 0
# 1412
{ 
# 1413
int4 v = __itexfetch(t, make_float4(x, y, 0, 0)); 
# 1414
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1416
return make_float4(w.x, w.y, w.z, w.w); 
# 1417
} 
#endif
# 1419 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< ushort4, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 1420
{int volatile ___ = 1;
# 1425
exit(___);}
#if 0
# 1420
{ 
# 1421
uint4 v = __utexfetch(t, make_float4(x, y, 0, 0)); 
# 1422
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1424
return make_float4(w.x, w.y, w.z, w.w); 
# 1425
} 
#endif
# 1433 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex3D(texture< char, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1434
{int volatile ___ = 1;
# 1442
exit(___);}
#if 0
# 1434
{ 
# 1438
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1441
return (char)(v.x); 
# 1442
} 
#endif
# 1444 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex3D(texture< signed char, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1445
{int volatile ___ = 1;
# 1449
exit(___);}
#if 0
# 1445
{ 
# 1446
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1448
return (signed char)(v.x); 
# 1449
} 
#endif
# 1451 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex3D(texture< unsigned char, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1452
{int volatile ___ = 1;
# 1456
exit(___);}
#if 0
# 1452
{ 
# 1453
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1455
return (unsigned char)(v.x); 
# 1456
} 
#endif
# 1458 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex3D(texture< char1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1459
{int volatile ___ = 1;
# 1463
exit(___);}
#if 0
# 1459
{ 
# 1460
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1462
return make_char1(v.x); 
# 1463
} 
#endif
# 1465 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex3D(texture< uchar1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1466
{int volatile ___ = 1;
# 1470
exit(___);}
#if 0
# 1466
{ 
# 1467
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1469
return make_uchar1(v.x); 
# 1470
} 
#endif
# 1472 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex3D(texture< char2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1473
{int volatile ___ = 1;
# 1477
exit(___);}
#if 0
# 1473
{ 
# 1474
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1476
return make_char2(v.x, v.y); 
# 1477
} 
#endif
# 1479 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex3D(texture< uchar2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1480
{int volatile ___ = 1;
# 1484
exit(___);}
#if 0
# 1480
{ 
# 1481
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1483
return make_uchar2(v.x, v.y); 
# 1484
} 
#endif
# 1486 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex3D(texture< char4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1487
{int volatile ___ = 1;
# 1491
exit(___);}
#if 0
# 1487
{ 
# 1488
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1490
return make_char4(v.x, v.y, v.z, v.w); 
# 1491
} 
#endif
# 1493 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex3D(texture< uchar4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1494
{int volatile ___ = 1;
# 1498
exit(___);}
#if 0
# 1494
{ 
# 1495
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1497
return make_uchar4(v.x, v.y, v.z, v.w); 
# 1498
} 
#endif
# 1506 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex3D(texture< short, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1507
{int volatile ___ = 1;
# 1511
exit(___);}
#if 0
# 1507
{ 
# 1508
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1510
return (short)(v.x); 
# 1511
} 
#endif
# 1513 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex3D(texture< unsigned short, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1514
{int volatile ___ = 1;
# 1518
exit(___);}
#if 0
# 1514
{ 
# 1515
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1517
return (unsigned short)(v.x); 
# 1518
} 
#endif
# 1520 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex3D(texture< short1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1521
{int volatile ___ = 1;
# 1525
exit(___);}
#if 0
# 1521
{ 
# 1522
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1524
return make_short1(v.x); 
# 1525
} 
#endif
# 1527 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex3D(texture< ushort1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1528
{int volatile ___ = 1;
# 1532
exit(___);}
#if 0
# 1528
{ 
# 1529
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1531
return make_ushort1(v.x); 
# 1532
} 
#endif
# 1534 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex3D(texture< short2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1535
{int volatile ___ = 1;
# 1539
exit(___);}
#if 0
# 1535
{ 
# 1536
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1538
return make_short2(v.x, v.y); 
# 1539
} 
#endif
# 1541 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex3D(texture< ushort2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1542
{int volatile ___ = 1;
# 1546
exit(___);}
#if 0
# 1542
{ 
# 1543
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1545
return make_ushort2(v.x, v.y); 
# 1546
} 
#endif
# 1548 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex3D(texture< short4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1549
{int volatile ___ = 1;
# 1553
exit(___);}
#if 0
# 1549
{ 
# 1550
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1552
return make_short4(v.x, v.y, v.z, v.w); 
# 1553
} 
#endif
# 1555 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex3D(texture< ushort4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1556
{int volatile ___ = 1;
# 1560
exit(___);}
#if 0
# 1556
{ 
# 1557
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1559
return make_ushort4(v.x, v.y, v.z, v.w); 
# 1560
} 
#endif
# 1568 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex3D(texture< int, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1569
{int volatile ___ = 1;
# 1573
exit(___);}
#if 0
# 1569
{ 
# 1570
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1572
return (int)(v.x); 
# 1573
} 
#endif
# 1575 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex3D(texture< unsigned, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1576
{int volatile ___ = 1;
# 1580
exit(___);}
#if 0
# 1576
{ 
# 1577
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1579
return (unsigned)(v.x); 
# 1580
} 
#endif
# 1582 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex3D(texture< int1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1583
{int volatile ___ = 1;
# 1587
exit(___);}
#if 0
# 1583
{ 
# 1584
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1586
return make_int1(v.x); 
# 1587
} 
#endif
# 1589 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex3D(texture< uint1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1590
{int volatile ___ = 1;
# 1594
exit(___);}
#if 0
# 1590
{ 
# 1591
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1593
return make_uint1(v.x); 
# 1594
} 
#endif
# 1596 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex3D(texture< int2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1597
{int volatile ___ = 1;
# 1601
exit(___);}
#if 0
# 1597
{ 
# 1598
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1600
return make_int2(v.x, v.y); 
# 1601
} 
#endif
# 1603 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex3D(texture< uint2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1604
{int volatile ___ = 1;
# 1608
exit(___);}
#if 0
# 1604
{ 
# 1605
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1607
return make_uint2(v.x, v.y); 
# 1608
} 
#endif
# 1610 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex3D(texture< int4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1611
{int volatile ___ = 1;
# 1615
exit(___);}
#if 0
# 1611
{ 
# 1612
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1614
return make_int4(v.x, v.y, v.z, v.w); 
# 1615
} 
#endif
# 1617 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex3D(texture< uint4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1618
{int volatile ___ = 1;
# 1622
exit(___);}
#if 0
# 1618
{ 
# 1619
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1621
return make_uint4(v.x, v.y, v.z, v.w); 
# 1622
} 
#endif
# 1696 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< float, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1697
{int volatile ___ = 1;
# 1701
exit(___);}
#if 0
# 1697
{ 
# 1698
float4 v = __ftexfetch(t, make_float4(x, y, z, 0)); 
# 1700
return v.x; 
# 1701
} 
#endif
# 1703 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< float1, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1704
{int volatile ___ = 1;
# 1708
exit(___);}
#if 0
# 1704
{ 
# 1705
float4 v = __ftexfetch(t, make_float4(x, y, z, 0)); 
# 1707
return make_float1(v.x); 
# 1708
} 
#endif
# 1710 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< float2, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1711
{int volatile ___ = 1;
# 1715
exit(___);}
#if 0
# 1711
{ 
# 1712
float4 v = __ftexfetch(t, make_float4(x, y, z, 0)); 
# 1714
return make_float2(v.x, v.y); 
# 1715
} 
#endif
# 1717 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< float4, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 1718
{int volatile ___ = 1;
# 1722
exit(___);}
#if 0
# 1718
{ 
# 1719
float4 v = __ftexfetch(t, make_float4(x, y, z, 0)); 
# 1721
return make_float4(v.x, v.y, v.z, v.w); 
# 1722
} 
#endif
# 1730 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< char, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1731
{int volatile ___ = 1;
# 1740
exit(___);}
#if 0
# 1731
{ 
# 1735
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1737
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1739
return w.x; 
# 1740
} 
#endif
# 1742 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< signed char, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1743
{int volatile ___ = 1;
# 1748
exit(___);}
#if 0
# 1743
{ 
# 1744
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1745
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1747
return w.x; 
# 1748
} 
#endif
# 1750 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned char, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1751
{int volatile ___ = 1;
# 1756
exit(___);}
#if 0
# 1751
{ 
# 1752
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1753
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1755
return w.x; 
# 1756
} 
#endif
# 1758 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< char1, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1759
{int volatile ___ = 1;
# 1764
exit(___);}
#if 0
# 1759
{ 
# 1760
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1761
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1763
return make_float1(w.x); 
# 1764
} 
#endif
# 1766 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< uchar1, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1767
{int volatile ___ = 1;
# 1772
exit(___);}
#if 0
# 1767
{ 
# 1768
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1769
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1771
return make_float1(w.x); 
# 1772
} 
#endif
# 1774 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< char2, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1775
{int volatile ___ = 1;
# 1780
exit(___);}
#if 0
# 1775
{ 
# 1776
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1777
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1779
return make_float2(w.x, w.y); 
# 1780
} 
#endif
# 1782 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< uchar2, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1783
{int volatile ___ = 1;
# 1788
exit(___);}
#if 0
# 1783
{ 
# 1784
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1785
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1787
return make_float2(w.x, w.y); 
# 1788
} 
#endif
# 1790 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< char4, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1791
{int volatile ___ = 1;
# 1796
exit(___);}
#if 0
# 1791
{ 
# 1792
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1793
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1795
return make_float4(w.x, w.y, w.z, w.w); 
# 1796
} 
#endif
# 1798 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< uchar4, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1799
{int volatile ___ = 1;
# 1804
exit(___);}
#if 0
# 1799
{ 
# 1800
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1801
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1803
return make_float4(w.x, w.y, w.z, w.w); 
# 1804
} 
#endif
# 1812 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< short, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1813
{int volatile ___ = 1;
# 1818
exit(___);}
#if 0
# 1813
{ 
# 1814
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1815
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1817
return w.x; 
# 1818
} 
#endif
# 1820 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned short, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1821
{int volatile ___ = 1;
# 1826
exit(___);}
#if 0
# 1821
{ 
# 1822
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1823
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1825
return w.x; 
# 1826
} 
#endif
# 1828 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< short1, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1829
{int volatile ___ = 1;
# 1834
exit(___);}
#if 0
# 1829
{ 
# 1830
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1831
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1833
return make_float1(w.x); 
# 1834
} 
#endif
# 1836 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< ushort1, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1837
{int volatile ___ = 1;
# 1842
exit(___);}
#if 0
# 1837
{ 
# 1838
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1839
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1841
return make_float1(w.x); 
# 1842
} 
#endif
# 1844 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< short2, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1845
{int volatile ___ = 1;
# 1850
exit(___);}
#if 0
# 1845
{ 
# 1846
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1847
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1849
return make_float2(w.x, w.y); 
# 1850
} 
#endif
# 1852 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< ushort2, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1853
{int volatile ___ = 1;
# 1858
exit(___);}
#if 0
# 1853
{ 
# 1854
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1855
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1857
return make_float2(w.x, w.y); 
# 1858
} 
#endif
# 1860 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< short4, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1861
{int volatile ___ = 1;
# 1866
exit(___);}
#if 0
# 1861
{ 
# 1862
int4 v = __itexfetch(t, make_float4(x, y, z, 0)); 
# 1863
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1865
return make_float4(w.x, w.y, w.z, w.w); 
# 1866
} 
#endif
# 1868 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< ushort4, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 1869
{int volatile ___ = 1;
# 1874
exit(___);}
#if 0
# 1869
{ 
# 1870
uint4 v = __utexfetch(t, make_float4(x, y, z, 0)); 
# 1871
float4 w = make_float4(__int_as_float(v.x), __int_as_float(v.y), __int_as_float(v.z), __int_as_float(v.w)); 
# 1873
return make_float4(w.x, w.y, w.z, w.w); 
# 1874
} 
#endif
# 1930 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< int comp, class T> __attribute__((unused)) extern int4 __itex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp); 
# 1932
template< int comp, class T> __attribute__((unused)) extern uint4 __utex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp); 
# 1934
template< int comp, class T> __attribute__((unused)) extern float4 __ftex2Dgather(texture< T, 2, cudaReadModeElementType> , float2, int = comp); 
# 1954 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 1955
{int volatile ___ = 1;
# 1957
exit(___);}
#if 0
# 1955
{ 
# 1956
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } ; 
# 1957
} 
#endif
# 1959 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< signed char, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 1960
{int volatile ___ = 1;
# 1962
exit(___);}
#if 0
# 1960
{ 
# 1961
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } ; 
# 1962
} 
#endif
# 1964 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< unsigned char, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 1965
{int volatile ___ = 1;
# 1967
exit(___);}
#if 0
# 1965
{ 
# 1966
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } ; 
# 1967
} 
#endif
# 1969 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char1, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 1970
{int volatile ___ = 1;
# 1972
exit(___);}
#if 0
# 1970
{ 
# 1971
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } ; 
# 1972
} 
#endif
# 1974 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar1, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 1975
{int volatile ___ = 1;
# 1977
exit(___);}
#if 0
# 1975
{ 
# 1976
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } ; 
# 1977
} 
#endif
# 1979 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char2, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 1980
{int volatile ___ = 1;
# 1982
exit(___);}
#if 0
# 1980
{ 
# 1981
if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); }  ; 
# 1982
} 
#endif
# 1984 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar2, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 1985
{int volatile ___ = 1;
# 1987
exit(___);}
#if 0
# 1985
{ 
# 1986
if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); }  ; 
# 1987
} 
#endif
# 1989 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char3, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 1990
{int volatile ___ = 1;
# 1992
exit(___);}
#if 0
# 1990
{ 
# 1991
if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); }  }  ; 
# 1992
} 
#endif
# 1994 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar3, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 1995
{int volatile ___ = 1;
# 1997
exit(___);}
#if 0
# 1995
{ 
# 1996
if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); }  }  ; 
# 1997
} 
#endif
# 1999 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char4, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2000
{int volatile ___ = 1;
# 2002
exit(___);}
#if 0
# 2000
{ 
# 2001
if (comp == 3) { int4 v = __itex2Dgather< 3> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } else { if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_char4(v.x, v.y, v.z, v.w); }  }  }  ; 
# 2002
} 
#endif
# 2004 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar4, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2005
{int volatile ___ = 1;
# 2007
exit(___);}
#if 0
# 2005
{ 
# 2006
if (comp == 3) { uint4 v = __utex2Dgather< 3> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } else { if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_uchar4(v.x, v.y, v.z, v.w); }  }  }  ; 
# 2007
} 
#endif
# 2009 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2010
{int volatile ___ = 1;
# 2012
exit(___);}
#if 0
# 2010
{ 
# 2011
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } ; 
# 2012
} 
#endif
# 2014 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< unsigned short, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2015
{int volatile ___ = 1;
# 2017
exit(___);}
#if 0
# 2015
{ 
# 2016
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } ; 
# 2017
} 
#endif
# 2019 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short1, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2020
{int volatile ___ = 1;
# 2022
exit(___);}
#if 0
# 2020
{ 
# 2021
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } ; 
# 2022
} 
#endif
# 2024 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort1, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2025
{int volatile ___ = 1;
# 2027
exit(___);}
#if 0
# 2025
{ 
# 2026
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } ; 
# 2027
} 
#endif
# 2029 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short2, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2030
{int volatile ___ = 1;
# 2032
exit(___);}
#if 0
# 2030
{ 
# 2031
if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); }  ; 
# 2032
} 
#endif
# 2034 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort2, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2035
{int volatile ___ = 1;
# 2037
exit(___);}
#if 0
# 2035
{ 
# 2036
if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); }  ; 
# 2037
} 
#endif
# 2039 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short3, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2040
{int volatile ___ = 1;
# 2042
exit(___);}
#if 0
# 2040
{ 
# 2041
if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); }  }  ; 
# 2042
} 
#endif
# 2044 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort3, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2045
{int volatile ___ = 1;
# 2047
exit(___);}
#if 0
# 2045
{ 
# 2046
if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); }  }  ; 
# 2047
} 
#endif
# 2049 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short4, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2050
{int volatile ___ = 1;
# 2052
exit(___);}
#if 0
# 2050
{ 
# 2051
if (comp == 3) { int4 v = __itex2Dgather< 3> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } else { if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return make_short4(v.x, v.y, v.z, v.w); }  }  }  ; 
# 2052
} 
#endif
# 2054 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort4, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2055
{int volatile ___ = 1;
# 2057
exit(___);}
#if 0
# 2055
{ 
# 2056
if (comp == 3) { uint4 v = __utex2Dgather< 3> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } else { if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return make_ushort4(v.x, v.y, v.z, v.w); }  }  }  ; 
# 2057
} 
#endif
# 2059 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2060
{int volatile ___ = 1;
# 2062
exit(___);}
#if 0
# 2060
{ 
# 2061
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return v; } ; 
# 2062
} 
#endif
# 2064 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< unsigned, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2065
{int volatile ___ = 1;
# 2067
exit(___);}
#if 0
# 2065
{ 
# 2066
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return v; } ; 
# 2067
} 
#endif
# 2069 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int1, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2070
{int volatile ___ = 1;
# 2072
exit(___);}
#if 0
# 2070
{ 
# 2071
{ int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return v; } ; 
# 2072
} 
#endif
# 2074 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint1, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2075
{int volatile ___ = 1;
# 2077
exit(___);}
#if 0
# 2075
{ 
# 2076
{ uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return v; } ; 
# 2077
} 
#endif
# 2079 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int2, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2080
{int volatile ___ = 1;
# 2082
exit(___);}
#if 0
# 2080
{ 
# 2081
if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return v; } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return v; }  ; 
# 2082
} 
#endif
# 2084 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint2, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2085
{int volatile ___ = 1;
# 2087
exit(___);}
#if 0
# 2085
{ 
# 2086
if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return v; } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return v; }  ; 
# 2087
} 
#endif
# 2089 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int3, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2090
{int volatile ___ = 1;
# 2092
exit(___);}
#if 0
# 2090
{ 
# 2091
if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return v; } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return v; } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return v; }  }  ; 
# 2092
} 
#endif
# 2094 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint3, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2095
{int volatile ___ = 1;
# 2097
exit(___);}
#if 0
# 2095
{ 
# 2096
if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return v; } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return v; } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return v; }  }  ; 
# 2097
} 
#endif
# 2099 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int4, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2100
{int volatile ___ = 1;
# 2102
exit(___);}
#if 0
# 2100
{ 
# 2101
if (comp == 3) { int4 v = __itex2Dgather< 3> (t, make_float2(x, y)); return v; } else { if (comp == 2) { int4 v = __itex2Dgather< 2> (t, make_float2(x, y)); return v; } else { if (comp == 1) { int4 v = __itex2Dgather< 1> (t, make_float2(x, y)); return v; } else { int4 v = __itex2Dgather< 0> (t, make_float2(x, y)); return v; }  }  }  ; 
# 2102
} 
#endif
# 2104 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint4, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2105
{int volatile ___ = 1;
# 2107
exit(___);}
#if 0
# 2105
{ 
# 2106
if (comp == 3) { uint4 v = __utex2Dgather< 3> (t, make_float2(x, y)); return v; } else { if (comp == 2) { uint4 v = __utex2Dgather< 2> (t, make_float2(x, y)); return v; } else { if (comp == 1) { uint4 v = __utex2Dgather< 1> (t, make_float2(x, y)); return v; } else { uint4 v = __utex2Dgather< 0> (t, make_float2(x, y)); return v; }  }  }  ; 
# 2107
} 
#endif
# 2109 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2110
{int volatile ___ = 1;
# 2112
exit(___);}
#if 0
# 2110
{ 
# 2111
{ float4 v = __ftex2Dgather< 0> (t, make_float2(x, y)); return v; } ; 
# 2112
} 
#endif
# 2114 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float1, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2115
{int volatile ___ = 1;
# 2117
exit(___);}
#if 0
# 2115
{ 
# 2116
{ float4 v = __ftex2Dgather< 0> (t, make_float2(x, y)); return v; } ; 
# 2117
} 
#endif
# 2119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float2, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2120
{int volatile ___ = 1;
# 2122
exit(___);}
#if 0
# 2120
{ 
# 2121
if (comp == 1) { float4 v = __ftex2Dgather< 1> (t, make_float2(x, y)); return v; } else { float4 v = __ftex2Dgather< 0> (t, make_float2(x, y)); return v; }  ; 
# 2122
} 
#endif
# 2124 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float3, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2125
{int volatile ___ = 1;
# 2127
exit(___);}
#if 0
# 2125
{ 
# 2126
if (comp == 2) { float4 v = __ftex2Dgather< 2> (t, make_float2(x, y)); return v; } else { if (comp == 1) { float4 v = __ftex2Dgather< 1> (t, make_float2(x, y)); return v; } else { float4 v = __ftex2Dgather< 0> (t, make_float2(x, y)); return v; }  }  ; 
# 2127
} 
#endif
# 2129 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float4, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 2130
{int volatile ___ = 1;
# 2132
exit(___);}
#if 0
# 2130
{ 
# 2131
if (comp == 3) { float4 v = __ftex2Dgather< 3> (t, make_float2(x, y)); return v; } else { if (comp == 2) { float4 v = __ftex2Dgather< 2> (t, make_float2(x, y)); return v; } else { if (comp == 1) { float4 v = __ftex2Dgather< 1> (t, make_float2(x, y)); return v; } else { float4 v = __ftex2Dgather< 0> (t, make_float2(x, y)); return v; }  }  }  ; 
# 2132
} 
#endif
# 53 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const uint3 threadIdx; } 
# 55
extern "C" { extern const uint3 blockIdx; } 
# 57
extern "C" { extern const dim3 blockDim; } 
# 59
extern "C" { extern const dim3 gridDim; } 
# 61
extern "C" { extern const int warpSize; } 
# 106 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 107
cudaSetupArgument(T 
# 108
arg, size_t 
# 109
offset) 
# 111
{ 
# 112
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset); 
# 113
} 
# 145
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 146
event, unsigned 
# 147
flags) 
# 149
{ 
# 150
return cudaEventCreateWithFlags(event, 0); 
# 151
} 
# 208
static inline cudaError_t cudaMallocHost(void **
# 209
ptr, size_t 
# 210
size, unsigned 
# 211
flags) 
# 213
{ 
# 214
return cudaHostAlloc(ptr, size, flags); 
# 215
} 
# 217
template< class T> inline cudaError_t 
# 218
cudaHostAlloc(T **
# 219
ptr, size_t 
# 220
size, unsigned 
# 221
flags) 
# 223
{ 
# 224
return cudaHostAlloc((void **)((void *)ptr), size, flags); 
# 225
} 
# 227
template< class T> inline cudaError_t 
# 228
cudaHostGetDevicePointer(T **
# 229
pDevice, void *
# 230
pHost, unsigned 
# 231
flags) 
# 233
{ 
# 234
return cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags); 
# 235
} 
# 237
template< class T> inline cudaError_t 
# 238
cudaMalloc(T **
# 239
devPtr, size_t 
# 240
size) 
# 242
{ 
# 243
return cudaMalloc((void **)((void *)devPtr), size); 
# 244
} 
# 246
template< class T> inline cudaError_t 
# 247
cudaMallocHost(T **
# 248
ptr, size_t 
# 249
size, unsigned 
# 250
flags = (0)) 
# 252
{ 
# 253
return cudaMallocHost((void **)((void *)ptr), size, flags); 
# 254
} 
# 256
template< class T> inline cudaError_t 
# 257
cudaMallocPitch(T **
# 258
devPtr, size_t *
# 259
pitch, size_t 
# 260
width, size_t 
# 261
height) 
# 263
{ 
# 264
return cudaMallocPitch((void **)((void *)devPtr), pitch, width, height); 
# 265
} 
# 275
static inline cudaError_t cudaMemcpyToSymbol(char *
# 276
symbol, const void *
# 277
src, size_t 
# 278
count, size_t 
# 279
offset = (0), cudaMemcpyKind 
# 280
kind = cudaMemcpyHostToDevice) 
# 282
{ 
# 283
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind); 
# 284
} 
# 286
template< class T> inline cudaError_t 
# 287
cudaMemcpyToSymbol(const T &
# 288
symbol, const void *
# 289
src, size_t 
# 290
count, size_t 
# 291
offset = (0), cudaMemcpyKind 
# 292
kind = cudaMemcpyHostToDevice) 
# 294
{ 
# 295
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind); 
# 296
} 
# 298
static inline cudaError_t cudaMemcpyToSymbolAsync(char *
# 299
symbol, const void *
# 300
src, size_t 
# 301
count, size_t 
# 302
offset = (0), cudaMemcpyKind 
# 303
kind = cudaMemcpyHostToDevice, cudaStream_t 
# 304
stream = 0) 
# 306
{ 
# 307
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream); 
# 308
} 
# 310
template< class T> inline cudaError_t 
# 311
cudaMemcpyToSymbolAsync(const T &
# 312
symbol, const void *
# 313
src, size_t 
# 314
count, size_t 
# 315
offset = (0), cudaMemcpyKind 
# 316
kind = cudaMemcpyHostToDevice, cudaStream_t 
# 317
stream = 0) 
# 319
{ 
# 320
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream); 
# 321
} 
# 329
static inline cudaError_t cudaMemcpyFromSymbol(void *
# 330
dst, char *
# 331
symbol, size_t 
# 332
count, size_t 
# 333
offset = (0), cudaMemcpyKind 
# 334
kind = cudaMemcpyDeviceToHost) 
# 336
{ 
# 337
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind); 
# 338
} 
# 340
template< class T> inline cudaError_t 
# 341
cudaMemcpyFromSymbol(void *
# 342
dst, const T &
# 343
symbol, size_t 
# 344
count, size_t 
# 345
offset = (0), cudaMemcpyKind 
# 346
kind = cudaMemcpyDeviceToHost) 
# 348
{ 
# 349
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind); 
# 350
} 
# 352
static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
# 353
dst, char *
# 354
symbol, size_t 
# 355
count, size_t 
# 356
offset = (0), cudaMemcpyKind 
# 357
kind = cudaMemcpyDeviceToHost, cudaStream_t 
# 358
stream = 0) 
# 360
{ 
# 361
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream); 
# 362
} 
# 364
template< class T> inline cudaError_t 
# 365
cudaMemcpyFromSymbolAsync(void *
# 366
dst, const T &
# 367
symbol, size_t 
# 368
count, size_t 
# 369
offset = (0), cudaMemcpyKind 
# 370
kind = cudaMemcpyDeviceToHost, cudaStream_t 
# 371
stream = 0) 
# 373
{ 
# 374
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream); 
# 375
} 
# 377
static inline cudaError_t cudaGetSymbolAddress(void **
# 378
devPtr, char *
# 379
symbol) 
# 381
{ 
# 382
return cudaGetSymbolAddress(devPtr, (const char *)symbol); 
# 383
} 
# 410
template< class T> inline cudaError_t 
# 411
cudaGetSymbolAddress(void **
# 412
devPtr, const T &
# 413
symbol) 
# 415
{ 
# 416
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol)); 
# 417
} 
# 425
static inline cudaError_t cudaGetSymbolSize(size_t *
# 426
size, char *
# 427
symbol) 
# 429
{ 
# 430
return cudaGetSymbolSize(size, (const char *)symbol); 
# 431
} 
# 458
template< class T> inline cudaError_t 
# 459
cudaGetSymbolSize(size_t *
# 460
size, const T &
# 461
symbol) 
# 463
{ 
# 464
return cudaGetSymbolSize(size, (const char *)(&symbol)); 
# 465
} 
# 507
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 508
cudaBindTexture(size_t *
# 509
offset, const texture< T, dim, readMode>  &
# 510
tex, const void *
# 511
devPtr, const cudaChannelFormatDesc &
# 512
desc, size_t 
# 513
size = (((2147483647) * 2U) + 1U)) 
# 515
{ 
# 516
return cudaBindTexture(offset, &tex, devPtr, &desc, size); 
# 517
} 
# 552
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 553
cudaBindTexture(size_t *
# 554
offset, const texture< T, dim, readMode>  &
# 555
tex, const void *
# 556
devPtr, size_t 
# 557
size = (((2147483647) * 2U) + 1U)) 
# 559
{ 
# 560
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size); 
# 561
} 
# 608
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 609
cudaBindTexture2D(size_t *
# 610
offset, const texture< T, dim, readMode>  &
# 611
tex, const void *
# 612
devPtr, const cudaChannelFormatDesc &
# 613
desc, size_t 
# 614
width, size_t 
# 615
height, size_t 
# 616
pitch) 
# 618
{ 
# 619
return cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch); 
# 620
} 
# 666
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 667
cudaBindTexture2D(size_t *
# 668
offset, const texture< T, dim, readMode>  &
# 669
tex, const void *
# 670
devPtr, size_t 
# 671
width, size_t 
# 672
height, size_t 
# 673
pitch) 
# 675
{ 
# 676
return cudaBindTexture2D(offset, &tex, devPtr, &(tex.texture< T, dim, readMode> ::channelDesc), width, height, pitch); 
# 677
} 
# 708
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 709
cudaBindTextureToArray(const texture< T, dim, readMode>  &
# 710
tex, const cudaArray *
# 711
array, const cudaChannelFormatDesc &
# 712
desc) 
# 714
{ 
# 715
return cudaBindTextureToArray(&tex, array, &desc); 
# 716
} 
# 746
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 747
cudaBindTextureToArray(const texture< T, dim, readMode>  &
# 748
tex, const cudaArray *
# 749
array) 
# 751
{ 
# 752
cudaChannelFormatDesc desc; 
# 753
cudaError_t err = cudaGetChannelDesc(&desc, array); 
# 755
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err; 
# 756
} 
# 785
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 786
cudaUnbindTexture(const texture< T, dim, readMode>  &
# 787
tex) 
# 789
{ 
# 790
return cudaUnbindTexture(&tex); 
# 791
} 
# 825
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t 
# 826
cudaGetTextureAlignmentOffset(size_t *
# 827
offset, const texture< T, dim, readMode>  &
# 828
tex) 
# 830
{ 
# 831
return cudaGetTextureAlignmentOffset(offset, &tex); 
# 832
} 
# 886
template< class T> inline cudaError_t 
# 887
cudaFuncSetCacheConfig(T *
# 888
func, cudaFuncCache 
# 889
cacheConfig) 
# 891
{ 
# 892
return cudaFuncSetCacheConfig((const char *)func, cacheConfig); 
# 893
} 
# 930
template< class T> inline cudaError_t 
# 931
cudaLaunch(T *
# 932
entry) 
# 934
{ 
# 935
return cudaLaunch((const char *)entry); 
# 936
} 
# 970
template< class T> inline cudaError_t 
# 971
cudaFuncGetAttributes(cudaFuncAttributes *
# 972
attr, T *
# 973
entry) 
# 975
{ 
# 976
return cudaFuncGetAttributes(attr, (const char *)entry); 
# 977
} 
# 999
template< class T, int dim> inline cudaError_t 
# 1000
cudaBindSurfaceToArray(const surface< T, dim>  &
# 1001
surf, const cudaArray *
# 1002
array, const cudaChannelFormatDesc &
# 1003
desc) 
# 1005
{ 
# 1006
return cudaBindSurfaceToArray(&surf, array, &desc); 
# 1007
} 
# 1028
template< class T, int dim> inline cudaError_t 
# 1029
cudaBindSurfaceToArray(const surface< T, dim>  &
# 1030
surf, const cudaArray *
# 1031
array) 
# 1033
{ 
# 1034
cudaChannelFormatDesc desc; 
# 1035
cudaError_t err = cudaGetChannelDesc(&desc, array); 
# 1037
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err; 
# 1038
} 
# 46 "support/common.h"
typedef 
# 41
struct { 
# 42
int x; 
# 43
int y; 
# 44
int vx; 
# 45
int vy; 
# 46
} flowvector; 
# 71 "support/partitioner.h"
typedef 
# 49
struct Partitioner { 
# 51
int n_tasks; 
# 52
int cut; 
# 53
int current; 
# 62
int strategy; 
# 64
int *worklist; 
# 65
int *tmp; 
# 71
} Partitioner; 
# 82
__attribute__((unused)) inline Partitioner partitioner_create(int n_tasks, float alpha, int *
# 88
worklist, int *
# 89
tmp) 
# 94
{int volatile ___ = 1;
# 116
exit(___);}
#if 0
# 94
{ 
# 95
Partitioner p; 
# 96
(p.n_tasks) = n_tasks; 
# 101
if ((alpha >= (0.0)) && (alpha <= (1.0))) { 
# 102
(p.cut) = ((p.n_tasks) * alpha); 
# 104
(p.strategy) = 0; 
# 106
} else { 
# 108
(p.strategy) = 1; 
# 109
(p.worklist) = worklist; 
# 111
(p.tmp) = tmp; 
# 114
}  
# 115
return p; 
# 116
} 
#endif
# 136 "support/partitioner.h"
__attribute__((unused)) inline int gpu_first(Partitioner *p) {int volatile ___ = 1;
# 150
exit(___);}
#if 0
# 136
{ 
# 138
if ((p->strategy) == 1) { 
# 139
if (((threadIdx.y) == (0)) && ((threadIdx.x) == (0))) { 
# 140
((p->tmp)[0]) = atomicAdd(p->worklist, 1); 
# 141
}  
# 142
__syncthreads(); 
# 143
(p->current) = ((p->tmp)[0]); 
# 144
} else 
# 146
{ 
# 147
(p->current) = ((p->cut) + (blockIdx.x)); 
# 148
}  
# 149
return p->current; 
# 150
} 
#endif
# 171 "support/partitioner.h"
__attribute__((unused)) inline bool gpu_more(const Partitioner *p) {int volatile ___ = 1;
# 173
exit(___);}
#if 0
# 171
{ 
# 172
return (p->current) < (p->n_tasks); 
# 173
} 
#endif
# 195 "support/partitioner.h"
__attribute__((unused)) inline int gpu_next(Partitioner *p) {int volatile ___ = 1;
# 209
exit(___);}
#if 0
# 195
{ 
# 197
if ((p->strategy) == 1) { 
# 198
if (((threadIdx.y) == (0)) && ((threadIdx.x) == (0))) { 
# 199
((p->tmp)[0]) = atomicAdd(p->worklist, 1); 
# 200
}  
# 201
__syncthreads(); 
# 202
(p->current) = ((p->tmp)[0]); 
# 203
} else 
# 205
{ 
# 206
(p->current) = ((p->current) + (gridDim.x)); 
# 207
}  
# 208
return p->current; 
# 209
} 
#endif
# 43 "kernel.cu"
__attribute__((unused)) int gen_model_paramGPU(int x1, int y1, int vx1, int vy1, int x2, int y2, int vx2, int vy2, float *model_param) {int volatile ___ = 1;
# 66
exit(___);}
#if 0
# 43
{ 
# 44
float temp; 
# 46
temp = ((float)((((vx1 * (vx1 - (2 * vx2))) + (vx2 * vx2)) + (vy1 * vy1)) - (vy2 * ((2 * vy1) - vy2)))); 
# 47
if (temp == (0)) { 
# 48
return 0; 
# 49
}  
# 50
(model_param[0]) = ((((vx1 * ((((((-vx2) * x1) + (vx1 * x2)) - (vx2 * x2)) + (vy2 * y1)) - (vy2 * y2))) + (vy1 * ((((((-vy2) * x1) + (vy1 * x2)) - (vy2 * x2)) - (vx2 * y1)) + (vx2 * y2)))) + (x1 * ((vy2 * vy2) + (vx2 * vx2)))) / temp); 
# 54
(model_param[1]) = ((((vx2 * (((((vy1 * x1) - (vy1 * x2)) - (vx1 * y1)) + (vx2 * y1)) - (vx1 * y2))) + (vy2 * ((((((-vx1) * x1) + (vx1 * x2)) - (vy1 * y1)) + (vy2 * y1)) - (vy1 * y2)))) + (y2 * ((vx1 * vx1) + (vy1 * vy1)))) / temp); 
# 59
temp = ((float)((((x1 * (x1 - (2 * x2))) + (x2 * x2)) + (y1 * (y1 - (2 * y2)))) + (y2 * y2))); 
# 60
if (temp == (0)) { 
# 61
return 0; 
# 62
}  
# 63
(model_param[2]) = ((((x1 - x2) * (vx1 - vx2)) + ((y1 - y2) * (vy1 - vy2))) / temp); 
# 64
(model_param[3]) = ((((x1 - x2) * (vy1 - vy2)) + ((y2 - y1) * (vx1 - vx2))) / temp); 
# 65
return 1; 
# 66
} 
#endif
# 68 "kernel.cu"
void RANSAC_kernel_block(int flowvector_count, int max_iter, int error_threshold, float convergence_threshold, int 
# 69
n_tasks, float alpha, float *model_param_local, flowvector *flowvectors, int *
# 70
random_numbers, int *model_candidate, int *outliers_candidate, int *
# 71
g_out_id, int *
# 73
worklist) ;
#if 0
{ 
# 77
__attribute__((unused)) extern int l_mem[]; 
# 78
int *outlier_block_count = (l_mem); 
# 80
int *l_tmp = (&(outlier_block_count[1])); 
# 84
Partitioner p = partitioner_create(n_tasks, alpha, worklist, l_tmp); 
# 89
const int tx = (threadIdx.x); 
# 90
const int bx = (blockIdx.x); 
# 91
const int num_blocks = (gridDim.x); 
# 93
float vx_error, vy_error; 
# 94
int outlier_local_count = 0; 
# 97
for (int iter = gpu_first(&p); gpu_more(&p); iter = gpu_next(&p)) { { 
# 99
float *model_param = (&(model_param_local[4 * iter])); 
# 103
if (tx == 0) { 
# 104
(outlier_block_count[0]) = 0; 
# 106
int rand_num = (random_numbers[(iter * 2) + 0]); 
# 107
flowvector fv[2]; 
# 108
((fv)[0]) = (flowvectors[rand_num]); 
# 109
rand_num = (random_numbers[(iter * 2) + 1]); 
# 110
((fv)[1]) = (flowvectors[rand_num]); 
# 112
int ret = 0; 
# 113
int vx1 = ((((fv)[0]).vx) - (((fv)[0]).x)); 
# 114
int vy1 = ((((fv)[0]).vy) - (((fv)[0]).y)); 
# 115
int vx2 = ((((fv)[1]).vx) - (((fv)[1]).x)); 
# 116
int vy2 = ((((fv)[1]).vy) - (((fv)[1]).y)); 
# 119
ret = gen_model_paramGPU(((fv)[0]).x, ((fv)[0]).y, vx1, vy1, ((fv)[1]).x, ((fv)[1]).y, vx2, vy2, model_param); 
# 120
if (ret == 0) { 
# 121
(model_param[0]) = (-2011); }  
# 122
}  
# 123
__syncthreads(); 
# 125
if ((model_param[0]) == (-2011)) { 
# 126
continue; }  
# 130
outlier_local_count = 0; 
# 133
for (int i = tx; i < flowvector_count; i += (blockDim.x)) { 
# 134
flowvector fvreg = (flowvectors[i]); 
# 135
vx_error = (((fvreg.x) + (((int)(((fvreg.x) - (model_param[0])) * (model_param[2]))) - ((int)(((fvreg.y) - (model_param[1])) * (model_param[3]))))) - (fvreg.vx)); 
# 138
vy_error = (((fvreg.y) + (((int)(((fvreg.y) - (model_param[1])) * (model_param[2]))) + ((int)(((fvreg.x) - (model_param[0])) * (model_param[3]))))) - (fvreg.vy)); 
# 141
if ((fabs(vx_error) >= error_threshold) || (fabs(vy_error) >= error_threshold)) { 
# 142
outlier_local_count++; 
# 143
}  
# 144
}  
# 146
atomicAdd(&(outlier_block_count[0]), outlier_local_count); 
# 151
__syncthreads(); 
# 152
if (tx == 0) { 
# 155
if ((atomicAdd(&(outlier_block_count[0]), 0)) < (flowvector_count * convergence_threshold)) { 
# 156
int index = atomicAdd(g_out_id, 1); 
# 157
(outliers_candidate[index]) = atomicAdd(&(outlier_block_count[0]), 0); 
# 158
(model_candidate[index]) = iter; 
# 159
}  
# 167
}  
# 168
} }  
# 169
} 
#endif
# 171 "kernel.cu"
cudaError_t call_RANSAC_kernel_block(int blocks, int threads, int flowvector_count, int max_iter, int error_threshold, float 
# 172
convergence_threshold, int n_tasks, float alpha, float *model_param_local, flowvector *flowvectors, int *
# 173
random_numbers, int *model_candidate, int *outliers_candidate, int *
# 174
g_out_id, int l_mem_size, int *
# 176
worklist) 
# 178
{ 
# 179
dim3 dimGrid(blocks); 
# 180
dim3 dimBlock(threads); 
# 181
cudaConfigureCall(dimGrid, dimBlock, l_mem_size) ? ((void)0) : RANSAC_kernel_block(flowvector_count, max_iter, error_threshold, convergence_threshold, n_tasks, alpha, model_param_local, flowvectors, random_numbers, model_candidate, outliers_candidate, g_out_id, worklist); 
# 189
cudaError_t err = cudaGetLastError(); 
# 190
return err; 
# 191
} 
# 1 "kernel.cudafe1.stub.c"
#include "kernel.cudafe1.stub.c"
