/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASServerEndpointFeatures : SABaseClientBoundCommand

@property (nonatomic) double eosLikelihood;
@property (nonatomic) long long numOfWords;
@property (nonatomic, copy) NSArray *pauseCounts;
@property (nonatomic) long long processedAudioDurationMs;
@property (nonatomic) double silenceProbability;
@property (nonatomic, copy) NSString *taskName;
@property (nonatomic) long long trailingSilenceDuration;

+ (id)serverEndpointFeatures;
+ (id)serverEndpointFeaturesWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (double)eosLikelihood;
- (id)groupIdentifier;
- (long long)numOfWords;
- (id)pauseCounts;
- (long long)processedAudioDurationMs;
- (bool)requiresResponse;
- (void)setEosLikelihood:(double)arg1;
- (void)setNumOfWords:(long long)arg1;
- (void)setPauseCounts:(id)arg1;
- (void)setProcessedAudioDurationMs:(long long)arg1;
- (void)setSilenceProbability:(double)arg1;
- (void)setTaskName:(id)arg1;
- (void)setTrailingSilenceDuration:(long long)arg1;
- (double)silenceProbability;
- (id)taskName;
- (long long)trailingSilenceDuration;

@end
