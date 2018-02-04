/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXAppPredictionFeedbackItem : NSObject {
    NSString * _bundleId;
    double  _scoreInputs;
    double  _totalScore;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) const double*scoreInputs;
@property (nonatomic, readonly) double totalScore;

+ (id)feedbackItemsForResponse:(id)arg1;

- (void).cxx_destruct;
- (id)bundleId;
- (id)description;
- (id)init;
- (id)initWithBundleId:(id)arg1 totalScore:(double)arg2 scoreInputs:(const double*)arg3;
- (const double*)scoreInputs;
- (double)totalScore;

@end
