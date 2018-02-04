/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PASampleTaskDataPrivateData : NSObject <PASerializable> {
    int  _cow_faults;
    int  _faults;
    unsigned int  _latency_qos;
    int  _pageins;
    unsigned long long  _ss_flags;
    int  _suspend_count;
    long long  _task_size_bytes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isBoosted;
@property (readonly) bool isDarwinBG;
@property (readonly) bool isDarwinExtBG;
@property (readonly) bool isDirty;
@property (readonly) bool isForeground;
@property (readonly) bool isFrozen;
@property (readonly) bool isImpDonor;
@property (readonly) bool isLiveImpDonor;
@property (readonly) bool isNonVisible;
@property (readonly) bool isPidSuspended;
@property (readonly) bool isSuppressed;
@property (readonly) bool isTaskResourceFlagged;
@property (readonly) bool isTerminatedSnapshot;
@property (readonly) bool isTimerThrottled;
@property (readonly) bool isVisible;
@property (readonly) unsigned int latencyQos;
@property (readonly) int numberOfCopyOnWritePageFaults;
@property (readonly) int numberOfPageFaults;
@property (readonly) int numberOfPageIns;
@property (readonly) unsigned long long ss_flags;
@property (readonly) Class superclass;
@property (readonly) int suspendCount;
@property (readonly) long long taskSizeInBytes;
@property (readonly) bool wqExceededConstrainedThreadLimit;
@property (readonly) bool wqExceededTotalThreadLimit;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (bool)correspondsToKCDataStackshotDeltaTask:(const struct task_delta_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; }*)arg1;
- (bool)correspondsToKCDataStackshotTask:(const struct task_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; int x15; BOOL x16[32]; }*)arg1;
- (bool)correspondsToTaskSnapshot:(const struct task_snapshot { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned char x6[16]; unsigned long long x7; unsigned int x8; int x9; int x10; int x11; int x12; int x13; unsigned int x14; unsigned long long x15; unsigned long long x16; BOOL x17[17]; unsigned int x18; unsigned int x19; unsigned int x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25[4]; unsigned long long x26[4]; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned int x35; }*)arg1;
- (id)initWithKCDataStackshotDeltaTask:(const struct task_delta_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; }*)arg1;
- (id)initWithKCDataStackshotTask:(const struct task_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; int x15; BOOL x16[32]; }*)arg1;
- (id)initWithTaskSnapshot:(const struct task_snapshot { unsigned int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned char x6[16]; unsigned long long x7; unsigned int x8; int x9; int x10; int x11; int x12; int x13; unsigned int x14; unsigned long long x15; unsigned long long x16; BOOL x17[17]; unsigned int x18; unsigned int x19; unsigned int x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25[4]; unsigned long long x26[4]; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; unsigned int x35; }*)arg1;
- (bool)isBoosted;
- (bool)isDarwinBG;
- (bool)isDarwinExtBG;
- (bool)isDirty;
- (bool)isForeground;
- (bool)isFrozen;
- (bool)isImpDonor;
- (bool)isLiveImpDonor;
- (bool)isNonVisible;
- (bool)isPidSuspended;
- (bool)isSuppressed;
- (bool)isTaskResourceFlagged;
- (bool)isTerminatedSnapshot;
- (bool)isTimerThrottled;
- (bool)isVisible;
- (unsigned int)latencyQos;
- (int)numberOfCopyOnWritePageFaults;
- (int)numberOfPageFaults;
- (int)numberOfPageIns;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned long long)ss_flags;
- (int)suspendCount;
- (long long)taskSizeInBytes;
- (bool)wqExceededConstrainedThreadLimit;
- (bool)wqExceededTotalThreadLimit;

@end
