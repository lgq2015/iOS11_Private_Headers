/* made by EzioChiu.
 */

@protocol FxTimingAPI_v3 <FxTimingAPI_v2>

@required

- (void)durationFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 ofImageParm:(unsigned int)arg2;
- (void)durationFxTimeForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)durationFxTimeOfInputAToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)durationFxTimeOfInputBToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)durationFxTimeOfInputToFilter:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)frameDuration:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)imageFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 forParmId:(unsigned int)arg2 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (void)inPointFxTimeOfTimelineForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)inputAFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (void)inputBFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (void)inputFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromTimelineTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (void)outPointFxTimeOfTimelineForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)sampleDuration:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)startFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 ofImageParam:(unsigned int)arg2;
- (void)startFxTimeForEffect:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)startFxTimeOfInputAToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)startFxTimeOfInputBToTransition:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)startFxTimeOfInputToFilter:(union { double x1; struct { /* ? */ } *x2; }*)arg1;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromImageTime:(union { double x1; struct { /* ? */ } *x2; })arg2 forParmId:(unsigned int)arg3;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromInputATime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromInputBTime:(union { double x1; struct { /* ? */ } *x2; })arg2;
- (void)timelineFxTime:(union { double x1; struct { /* ? */ } *x2; }*)arg1 fromInputTime:(union { double x1; struct { /* ? */ } *x2; })arg2;

@end
