/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXFeedback : NSObject {
    NSString * _abGroupIdentifier;
    double  _baseAlpha;
    double  _baseBeta;
    double  _decayHalfLifeSeconds;
    double  _priorAlpha;
    double  _priorBeta;
    double  _priorMean;
    _ATXDataStore * _store;
    _ATXInternalUninstallNotification * _uninstallNotificationListener;
}

@property (nonatomic, readonly) NSString *abGroupIdentifier;
@property (nonatomic, readonly) double baseAlpha;
@property (nonatomic, readonly) double baseBeta;
@property (nonatomic, readonly) double currentAlpha;
@property (nonatomic, readonly) double currentBeta;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)abGroupIdentifier;
- (double)baseAlpha;
- (double)baseBeta;
- (double)currentAlpha;
- (double)currentBeta;
- (void)decayCounts;
- (void)doDecayAtTime:(double)arg1;
- (void)feedbackLaunched:(id)arg1 rejected:(id)arg2;
- (void)feedbackLaunched:(id)arg1 rejected:(id)arg2 inUnitTest:(bool)arg3;
- (id)init;
- (id)initWithDataStore:(id)arg1;
- (void)putFeedbackScoresForApps:(id)arg1 intoScores:(double*)arg2 confirms:(double*)arg3 rejects:(double*)arg4;
- (void)putNopScoresForApps:(id)arg1 into:(double*)arg2 atTime:(double)arg3;
- (void)removeFeedbackForBundle:(id)arg1;
- (void)removeFeedbackForBundles:(id)arg1;
- (void)resetData;

@end
