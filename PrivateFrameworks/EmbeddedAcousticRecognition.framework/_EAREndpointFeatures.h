/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EAREndpointFeatures : NSObject {
    double  _clientSilenceFramesCountMs;
    double  _clientSilenceProbability;
    long long  _eagerResultEndTime;
    double  _endOfSentenceLikelihood;
    NSArray * _pauseCounts;
    float  _serverFeaturesLatency;
    double  _silencePosterior;
    float  _silencePosteriorNF;
    long long  _trailingSilenceDuration;
    long long  _wordCount;
}

@property (nonatomic) double clientSilenceFramesCountMs;
@property (nonatomic) double clientSilenceProbability;
@property (nonatomic) long long eagerResultEndTime;
@property (nonatomic) double endOfSentenceLikelihood;
@property (nonatomic, copy) NSArray *pauseCounts;
@property (nonatomic) float serverFeaturesLatency;
@property (nonatomic) double silencePosterior;
@property (nonatomic) float silencePosteriorNF;
@property (nonatomic) long long trailingSilenceDuration;
@property (nonatomic) long long wordCount;

- (void).cxx_destruct;
- (double)clientSilenceFramesCountMs;
- (double)clientSilenceProbability;
- (id)description;
- (long long)eagerResultEndTime;
- (double)endOfSentenceLikelihood;
- (id)initWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 endOfSentenceLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 clientSilenceFramesCountMs:(double)arg6 clientSilenceProbability:(double)arg7 silencePosteriorNF:(float)arg8 serverFeaturesLatency:(float)arg9;
- (id)initWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 endOfSentenceLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 clientSilenceFramesCountMs:(double)arg6 clientSilenceProbability:(double)arg7 silencePosteriorNF:(float)arg8 serverFeaturesLatency:(float)arg9 eagerResultEndTime:(long long)arg10;
- (id)pauseCounts;
- (float)serverFeaturesLatency;
- (void)setClientSilenceFramesCountMs:(double)arg1;
- (void)setClientSilenceProbability:(double)arg1;
- (void)setEagerResultEndTime:(long long)arg1;
- (void)setEndOfSentenceLikelihood:(double)arg1;
- (void)setPauseCounts:(id)arg1;
- (void)setServerFeaturesLatency:(float)arg1;
- (void)setSilencePosterior:(double)arg1;
- (void)setSilencePosteriorNF:(float)arg1;
- (void)setTrailingSilenceDuration:(long long)arg1;
- (void)setWordCount:(long long)arg1;
- (double)silencePosterior;
- (float)silencePosteriorNF;
- (long long)trailingSilenceDuration;
- (long long)wordCount;

@end
