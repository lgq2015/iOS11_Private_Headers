/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAStackshotThread : NSObject {
    unsigned long long  _bytesBeforeThread;
    unsigned long long  _bytesUsed;
    unsigned long long  _kernelFrameSize;
    const void * _kernelFrames;
    PAStackshotTask * _task;
    unsigned long long  _userFrameSize;
    const void * _userFrames;
    struct thread_snapshot { unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; int x9; int x10; int x11; int x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18[3]; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23[4]; unsigned long long x24[4]; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; BOOL x35[64]; } * thread_snap;
}

@property (readonly) bool isFromMicrostackshot;

- (void).cxx_destruct;
- (void)_calculateOffsets;
- (unsigned long long)_frameSize:(bool)arg1;
- (unsigned long long)bytesUsedInBuffer;
- (unsigned long long)dispatchQueueId;
- (const void*)firstFrame;
- (id)frameIterator;
- (bool)hasDispatchQueue;
- (bool)hasKernelContinuation;
- (id)initWithTask:(id)arg1;
- (bool)isDarwinBG;
- (bool)isFromMicrostackshot;
- (void)iterateFrames:(id /* block */)arg1;
- (unsigned long long)kernelFrameSize;
- (unsigned int)powerstatsFlags;
- (bool)setBufferPosition:(const char *)arg1 withRemainingBytes:(unsigned long long)arg2;
- (bool)setBufferPosition:(const char *)arg1 withRemainingBytes:(unsigned long long)arg2 withBytesAlreadyUsed:(unsigned long long)arg3;
- (unsigned long long)userFrameSize;

@end
