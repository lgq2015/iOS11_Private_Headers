/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoEditLevelSlider : UIView <PUPhotoEditLayoutStaticAdaptable> {
    UIView * __sliderContentView;
    PUAdjustmentsMode * _adjustmentsMode;
    double  _baseValue;
    bool  _baseValueIndicatorHidden;
    UIView * _baseValueIndicatorView;
    NSArray * _baseValueIndicatorViewConstraints;
    NSLayoutConstraint * _baseValueIndicatorViewPositionConstraint;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    NSArray * _contentViewConstraints;
    NSLayoutConstraint * _contentViewOffsetConstraint;
    double  _currentValue;
    bool  _directionReversed;
    double  _identityOffset;
    double  _identityValue;
    long long  _layoutOrientation;
    UIView * _levelIndicatorView;
    NSArray * _levelIndicatorViewConstraints;
    NSLayoutConstraint * _levelIndicatorViewOffsetConstraint;
    NSLayoutConstraint * _levelIndicatorViewSpanConstraint;
    double  _maxValue;
    double  _minValue;
    double  _pointsPerUnitAboveIdentity;
    double  _pointsPerUnitBelowIdentity;
    bool  _scaleFactorsAreValid;
}

@property (nonatomic, retain) PUAdjustmentsMode *adjustmentsMode;
@property (nonatomic) double baseValue;
@property (getter=isBaseValueIndicatorHidden, nonatomic) bool baseValueIndicatorHidden;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) double currentValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDirectionReversed, nonatomic) bool directionReversed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double identityOffset;
@property (nonatomic) double identityValue;
@property (nonatomic, readonly) long long layoutOrientation;
@property (nonatomic) double maxValue;
@property (nonatomic) double minValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsLevelIndicator;

- (void).cxx_destruct;
- (double)_baseValueIndicatorOffset;
- (double)_contentOffsetForLevelValue:(double)arg1;
- (void)_invalidateContentViewConstraints;
- (double)_levelIndicatorOffset;
- (double)_levelIndicatorWidth;
- (id)_sliderContentView;
- (void)_updateBaseValueIndicatorVisibiliyAnimated:(bool)arg1;
- (void)_updateConversionFactorsIfNeeded;
- (void)_updateLevelDisplay;
- (id)adjustmentsMode;
- (double)baseValue;
- (struct CGSize { double x1; double x2; })contentSize;
- (double)currentValue;
- (double)identityOffset;
- (double)identityValue;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidateConversionFactors;
- (bool)isBaseValueIndicatorHidden;
- (bool)isDirectionReversed;
- (long long)layoutOrientation;
- (double)levelValueForOffset:(double)arg1;
- (double)maxValue;
- (double)minValue;
- (double)offsetForLevelValue:(double)arg1;
- (id)preferredSliderContentView;
- (void)setAdjustmentsMode:(id)arg1;
- (void)setBaseValue:(double)arg1;
- (void)setBaseValueIndicatorHidden:(bool)arg1;
- (void)setBaseValueIndicatorHidden:(bool)arg1 animated:(bool)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCurrentValue:(double)arg1;
- (void)setDirectionReversed:(bool)arg1;
- (void)setIdentityValue:(double)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setupWithLayoutOrientation:(long long)arg1;
- (void)updateConstraints;
- (bool)wantsLevelIndicator;

@end
