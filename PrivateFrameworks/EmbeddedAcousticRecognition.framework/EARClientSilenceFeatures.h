/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface EARClientSilenceFeatures : NSObject {
    double  _processedAudioMs;
    double  _silenceDurationMs;
    double  _silenceFramesCountMs;
    double  _silencePosterior;
    double  _silenceProbability;
}

@property (nonatomic) double processedAudioMs;
@property (nonatomic) double silenceDurationMs;
@property (nonatomic) double silenceFramesCountMs;
@property (nonatomic) double silencePosterior;
@property (nonatomic) double silenceProbability;

- (id)initWithSilenceFramesCountMs:(double)arg1 silenceProbability:(double)arg2 silenceDurationMs:(double)arg3 silencePosterior:(double)arg4 processedAudioMs:(double)arg5;
- (double)processedAudioMs;
- (void)setProcessedAudioMs:(double)arg1;
- (void)setSilenceDurationMs:(double)arg1;
- (void)setSilenceFramesCountMs:(double)arg1;
- (void)setSilencePosterior:(double)arg1;
- (void)setSilenceProbability:(double)arg1;
- (double)silenceDurationMs;
- (double)silenceFramesCountMs;
- (double)silencePosterior;
- (double)silenceProbability;

@end
