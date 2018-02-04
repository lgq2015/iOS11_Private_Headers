/* made by EzioChiu.
 */

@protocol FxTimingAPI

@required

- (double)durationForEffect:(id <FxBaseEffect>)arg1;
- (double)durationOfImageParm:(unsigned int)arg1 forEffect:(id <FxBaseEffect>)arg2;
- (double)durationOfInputAToTransition:(id <FxTransition>)arg1;
- (double)durationOfInputBToTransition:(id <FxTransition>)arg1;
- (double)durationOfInputToFilter:(id <FxFilter>)arg1;
- (unsigned long long)fieldOrderForImageParm:(unsigned int)arg1 forEffect:(id <FxBaseEffect>)arg2;
- (unsigned long long)fieldOrderForInputAToTransition:(id <FxTransition>)arg1;
- (unsigned long long)fieldOrderForInputBToTransition:(id <FxTransition>)arg1;
- (unsigned long long)fieldOrderForInputToFilter:(id <FxFilter>)arg1;
- (double)imageTimeForParmId:(unsigned int)arg1 forEffect:(id <FxBaseEffect>)arg2 fromTimelineTime:(double)arg3;
- (double)inPointOfTimelineForEffect:(id <FxBaseEffect>)arg1;
- (double)inputATimeForTransition:(id <FxTransition>)arg1 fromTimelineTime:(double)arg2;
- (double)inputBTimeForTransition:(id <FxTransition>)arg1 fromTimelineTime:(double)arg2;
- (double)inputTimeForFilter:(id <FxFilter>)arg1 fromTimelineTime:(double)arg2;
- (double)outPointOfTimelineForEffect:(id <FxBaseEffect>)arg1;
- (double)startTimeForEffect:(id <FxBaseEffect>)arg1;
- (double)startTimeOfImageParm:(unsigned int)arg1 forEffect:(id <FxBaseEffect>)arg2;
- (double)startTimeOfInputAToTransition:(id <FxTransition>)arg1;
- (double)startTimeOfInputBToTransition:(id <FxTransition>)arg1;
- (double)startTimeOfInputToFilter:(id <FxFilter>)arg1;
- (unsigned long long)timelineFpsDenominatorForEffect:(id <FxBaseEffect>)arg1;
- (unsigned long long)timelineFpsNumeratorForEffect:(id <FxBaseEffect>)arg1;
- (double)timelineTimeFromImageTime:(double)arg1 forParmId:(unsigned int)arg2 forEffect:(id <FxBaseEffect>)arg3;
- (double)timelineTimeFromInputATime:(double)arg1 forTransition:(id <FxTransition>)arg2;
- (double)timelineTimeFromInputBTime:(double)arg1 forTransition:(id <FxTransition>)arg2;
- (double)timelineTimeFromInputTime:(double)arg1 forFilter:(id <FxFilter>)arg2;

@end
