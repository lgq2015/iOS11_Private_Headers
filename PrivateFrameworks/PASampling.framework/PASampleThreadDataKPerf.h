/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PASampleThreadDataKPerf : PASampleThreadData {
    bool  filledDispatchQueue;
    bool  filledThreadSnapshotInfo;
    bool  hasEmptyKernelStack;
    bool  isSentinel;
    PASampleThreadDataKPerf * previousSampleThread;
}

@property bool filledDispatchQueue;
@property bool filledThreadSnapshotInfo;
@property bool hasEmptyKernelStack;
@property bool isSentinel;
@property PASampleThreadDataKPerf *previousSampleThread;

- (void).cxx_destruct;
- (bool)filledDispatchQueue;
- (bool)filledThreadSnapshotInfo;
- (bool)hasAnyInfo;
- (bool)hasEmptyKernelStack;
- (bool)isSentinel;
- (id)previousSampleThread;
- (void)setFilledDispatchQueue:(bool)arg1;
- (void)setFilledThreadSnapshotInfo:(bool)arg1;
- (void)setHasEmptyKernelStack:(bool)arg1;
- (void)setIsSentinel:(bool)arg1;
- (void)setPreviousSampleThread:(id)arg1;

@end