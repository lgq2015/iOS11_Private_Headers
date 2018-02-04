/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAStackshotTask : NSObject {
    long long  _bytesAvailableForThreads;
    unsigned long long  _bytesBeforeTask;
    long long  _bytesUsedByThreads;
    int * _donationReceivingPids;
    void * _imageInfos;
    void * _mainBinary;
    PAStackshot * _stackshot;
    struct task_snapshot { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned char x6[16]; unsigned long long x7; unsigned int x8; int x9; int x10; int x11; int x12; int x13; unsigned int x14; unsigned long long x15; unsigned long long x16; BOOL x17[17]; unsigned int x18; unsigned int x19; unsigned int x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25[4]; unsigned long long x26[4]; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned int x35; } * _task_snap;
}

@property (readonly) bool isDarwinBG;
@property (readonly) bool isForeground;
@property (readonly) bool isSuppressed;
@property (readonly) const char *name;
@property (readonly) int pid;

- (void).cxx_destruct;
- (unsigned long long)_bytesUsedByDonationReceivingPids;
- (unsigned long long)_bytesUsedByImageInfos;
- (unsigned long long)bytesUsedByHeader;
- (unsigned long long)bytesUsedByThreads;
- (unsigned long long)bytesUsedInBuffer;
- (id)copyDonationReceivingPids;
- (id)copyImageInfos;
- (id)initWithStackshot:(id)arg1;
- (bool)isDarwinBG;
- (bool)isForeground;
- (bool)isFromMicrostackshot;
- (bool)isSuppressed;
- (void)iterateThreads:(id /* block */)arg1;
- (struct dyld_uuid_info_64 { unsigned long long x1; unsigned char x2[16]; })mainBinary;
- (const char *)name;
- (unsigned long long)numImageInfos;
- (int)pid;
- (unsigned int)powerstatsFlags;
- (bool)setBufferPosition:(const char *)arg1 withRemainingBytes:(unsigned long long)arg2;
- (bool)setBufferPosition:(const char *)arg1 withRemainingBytes:(unsigned long long)arg2 withBytesAlreadyUsed:(unsigned long long)arg3;
- (const struct task_snapshot { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned char x6[16]; unsigned long long x7; unsigned int x8; int x9; int x10; int x11; int x12; int x13; unsigned int x14; unsigned long long x15; unsigned long long x16; BOOL x17[17]; unsigned int x18; unsigned int x19; unsigned int x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25[4]; unsigned long long x26[4]; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned int x35; }*)task_snap;

@end
