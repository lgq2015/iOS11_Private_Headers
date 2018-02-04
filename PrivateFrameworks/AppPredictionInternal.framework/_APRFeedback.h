/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _APRFeedback : NSObject {
    double  _decayHalfLifeSeconds;
}

+ (id)sharedInstance;

- (void)decayCounts;
- (id)init;
- (void)intentType:(id)arg1 experience:(unsigned long long)arg2 feedbackSource:(unsigned long long)arg3 engagementType:(unsigned long long)arg4 launchedBundleId:(id)arg5 predictedBundleIds:(id)arg6;
- (void)resetData;

@end
