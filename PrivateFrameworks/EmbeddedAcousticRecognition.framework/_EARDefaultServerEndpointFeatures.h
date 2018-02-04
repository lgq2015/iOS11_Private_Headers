/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARDefaultServerEndpointFeatures : NSObject {
    float  _endOfSentenceLikelihood;
    float  _silencePosterior;
    long long  _trailingSilenceDuration;
    long long  _wordCount;
}

@property (nonatomic) float endOfSentenceLikelihood;
@property (nonatomic) float silencePosterior;
@property (nonatomic) long long trailingSilenceDuration;
@property (nonatomic) long long wordCount;

- (float)endOfSentenceLikelihood;
- (id)initWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 endOfSentenceLikelihood:(float)arg3 silencePosterior:(float)arg4;
- (void)setEndOfSentenceLikelihood:(float)arg1;
- (void)setSilencePosterior:(float)arg1;
- (void)setTrailingSilenceDuration:(long long)arg1;
- (void)setWordCount:(long long)arg1;
- (float)silencePosterior;
- (long long)trailingSilenceDuration;
- (long long)wordCount;

@end