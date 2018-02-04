/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSServerEndpointFeatures : NSObject {
    double  _eosLikelihood;
    NSArray * _pauseCounts;
    long long  _processedAudioDurationInMilliseconds;
    double  _silencePosterior;
    NSString * _taskName;
    long long  _trailingSilenceDuration;
    long long  _wordCount;
}

@property (nonatomic) double eosLikelihood;
@property (nonatomic, copy) NSArray *pauseCounts;
@property (nonatomic) long long processedAudioDurationInMilliseconds;
@property (nonatomic) double silencePosterior;
@property (nonatomic, copy) NSString *taskName;
@property (nonatomic) long long trailingSilenceDuration;
@property (nonatomic) long long wordCount;

- (void).cxx_destruct;
- (id)description;
- (double)eosLikelihood;
- (id)initWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 taskName:(id)arg6 processedAudioDurationInMilliseconds:(long long)arg7;
- (id)initWithWordCount:(long long)arg1 trailingSilenceFrames:(long long)arg2 endOfSilenceLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 taskName:(id)arg6;
- (id)pauseCounts;
- (long long)processedAudioDurationInMilliseconds;
- (void)setEosLikelihood:(double)arg1;
- (void)setPauseCounts:(id)arg1;
- (void)setProcessedAudioDurationInMilliseconds:(long long)arg1;
- (void)setSilencePosterior:(double)arg1;
- (void)setTaskName:(id)arg1;
- (void)setTrailingSilenceDuration:(long long)arg1;
- (void)setWordCount:(long long)arg1;
- (double)silencePosterior;
- (id)taskName;
- (long long)trailingSilenceDuration;
- (long long)wordCount;

@end
