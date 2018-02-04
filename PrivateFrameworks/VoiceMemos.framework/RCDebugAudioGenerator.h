/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCDebugAudioGenerator : NSObject {
    id /* block */  _curveFunction;
    double  _duration;
    id /* block */  _generateCompletionHandler;
    double  _intervalBetweenPeaks;
    NSDictionary * _outputSettings;
    NSURL * _outputURL;
}

@property (nonatomic, readonly) id /* block */ curveFunction;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) id /* block */ generateCompletionHandler;
@property (nonatomic, readonly) double intervalBetweenPeaks;
@property (nonatomic, readonly) NSDictionary *outputSettings;
@property (nonatomic, readonly) NSURL *outputURL;

+ (id /* block */)_defaultCurveFunction;
+ (id)_defaultOutputSettings;

- (void).cxx_destruct;
- (id)_generateLPCMAudioSamplesWithDuration:(double)arg1 curveFunction:(id /* block */)arg2 samplesPerSecond:(double)arg3 intervalBetweenPeaks:(double)arg4;
- (void)_onBackgroundQueueGenerateAudio;
- (void)_onMainQueueGenerateFailedWithError:(id)arg1;
- (void)_onMainQueueGenerateFinished;
- (id /* block */)curveFunction;
- (double)duration;
- (id /* block */)generateCompletionHandler;
- (id)initWithOutputURL:(id)arg1 duration:(double)arg2 intervalBetweenPeaks:(double)arg3;
- (double)intervalBetweenPeaks;
- (id)outputSettings;
- (id)outputURL;
- (bool)startWithCompletionHandler:(id /* block */)arg1;

@end
