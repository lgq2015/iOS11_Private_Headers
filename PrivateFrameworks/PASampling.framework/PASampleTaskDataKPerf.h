/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PASampleTaskDataKPerf : PASampleTaskData {
    bool  filledLatencyQoS;
    bool  filledMem;
    bool  filledState;
    bool  isSentinel;
    PASampleTaskDataKPerf * previousSampleTask;
}

@property bool filledLatencyQoS;
@property bool filledMem;
@property bool filledState;
@property bool isSentinel;
@property PASampleTaskDataKPerf *previousSampleTask;

- (void).cxx_destruct;
- (bool)filledLatencyQoS;
- (bool)filledMem;
- (bool)filledState;
- (bool)isSentinel;
- (id)previousSampleTask;
- (id)privateData;
- (void)setFilledLatencyQoS:(bool)arg1;
- (void)setFilledMem:(bool)arg1;
- (void)setFilledState:(bool)arg1;
- (void)setIsSentinel:(bool)arg1;
- (void)setPreviousSampleTask:(id)arg1;
- (void)setPrivateData:(id)arg1;

@end
