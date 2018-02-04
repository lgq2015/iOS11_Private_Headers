/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface APRAppPredictions : NSObject {
    ATXResponse * _atxResponse;
    NSError * _error;
    unsigned long long  _experience;
    NSArray * _scoredBundleIds;
}

@property (nonatomic, readonly) ATXResponse *atxResponse;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic) unsigned long long experience;
@property (nonatomic, readonly) NSArray *scoredBundleIds;

+ (unsigned long long)_experienceForPredictions:(id)arg1 intentType:(id)arg2;

- (void).cxx_destruct;
- (id)atxResponse;
- (id)error;
- (unsigned long long)experience;
- (id)init;
- (id)initWithIntent:(id)arg1 candidateBundleIdentifiers:(id)arg2 limit:(int)arg3;
- (id)initWithScoredBundleIds:(id)arg1 experience:(unsigned long long)arg2 error:(id)arg3;
- (id)scoredBundleIds;
- (void)setExperience:(unsigned long long)arg1;

@end
