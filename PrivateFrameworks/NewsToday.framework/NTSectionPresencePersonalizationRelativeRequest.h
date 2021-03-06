/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTSectionPresencePersonalizationRelativeRequest : NSObject <NSCopying> {
    FRPersonalizationFeature * _competingSectionFeature;
    double  _competingSectionFeatureClickPrior;
    double  _competingSectionFeatureImpressionPrior;
    double  _scalar;
    FRPersonalizationFeature * _targetSectionFeature;
    double  _targetSectionFeatureClickPrior;
    double  _targetSectionFeatureImpressionPrior;
}

@property (nonatomic, copy) FRPersonalizationFeature *competingSectionFeature;
@property (nonatomic) double competingSectionFeatureClickPrior;
@property (nonatomic) double competingSectionFeatureImpressionPrior;
@property (nonatomic) double scalar;
@property (nonatomic, copy) FRPersonalizationFeature *targetSectionFeature;
@property (nonatomic) double targetSectionFeatureClickPrior;
@property (nonatomic) double targetSectionFeatureImpressionPrior;

- (void).cxx_destruct;
- (id)competingSectionFeature;
- (double)competingSectionFeatureClickPrior;
- (double)competingSectionFeatureImpressionPrior;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (double)scalar;
- (void)setCompetingSectionFeature:(id)arg1;
- (void)setCompetingSectionFeatureClickPrior:(double)arg1;
- (void)setCompetingSectionFeatureImpressionPrior:(double)arg1;
- (void)setScalar:(double)arg1;
- (void)setTargetSectionFeature:(id)arg1;
- (void)setTargetSectionFeatureClickPrior:(double)arg1;
- (void)setTargetSectionFeatureImpressionPrior:(double)arg1;
- (id)targetSectionFeature;
- (double)targetSectionFeatureClickPrior;
- (double)targetSectionFeatureImpressionPrior;

@end
