/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedPersonalizedArticleScoreProfile : NSObject {
    double  _agedPersonalizationScore;
    double  _agedUserFeedbackScore;
    double  _autoSubscribeCtr;
    NSDictionary * _cohortMemberships;
    double  _computedGlobalScoreCoefficient;
    double  _diversifiedPersonalizationScore;
    double  _featureCtr;
    double  _globalScore;
    double  _paidNonpaidSubscriptionCtr;
    double  _personalizationScore;
    double  _userFeedbackScore;
}

@property (nonatomic) double agedPersonalizationScore;
@property (nonatomic) double agedUserFeedbackScore;
@property (nonatomic) double autoSubscribeCtr;
@property (nonatomic, retain) NSDictionary *cohortMemberships;
@property (nonatomic) double computedGlobalScoreCoefficient;
@property (nonatomic) double diversifiedPersonalizationScore;
@property (nonatomic) double featureCtr;
@property (nonatomic) double globalScore;
@property (nonatomic) double paidNonpaidSubscriptionCtr;
@property (nonatomic) double personalizationScore;
@property (nonatomic) double userFeedbackScore;

- (void).cxx_destruct;
- (double)agedPersonalizationScore;
- (double)agedUserFeedbackScore;
- (double)autoSubscribeCtr;
- (id)cohortMemberships;
- (double)computedGlobalScoreCoefficient;
- (id)description;
- (double)diversifiedPersonalizationScore;
- (double)featureCtr;
- (double)globalScore;
- (double)paidNonpaidSubscriptionCtr;
- (double)personalizationScore;
- (void)setAgedPersonalizationScore:(double)arg1;
- (void)setAgedUserFeedbackScore:(double)arg1;
- (void)setAutoSubscribeCtr:(double)arg1;
- (void)setCohortMemberships:(id)arg1;
- (void)setComputedGlobalScoreCoefficient:(double)arg1;
- (void)setDiversifiedPersonalizationScore:(double)arg1;
- (void)setFeatureCtr:(double)arg1;
- (void)setGlobalScore:(double)arg1;
- (void)setPaidNonpaidSubscriptionCtr:(double)arg1;
- (void)setPersonalizationScore:(double)arg1;
- (void)setUserFeedbackScore:(double)arg1;
- (double)userFeedbackScore;

@end
