/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKActivityTodayWidgetView : UIView {
    HKUnit * _activeEnergyUnit;
    HKActivitySummary * _activitySummary;
    HKUnit * _basalEnergyUnit;
    UILabel * _exerciseTitleLabel;
    UILabel * _exerciseValueLabel;
    UILayoutGuide * _labelsBottomLayoutGuide;
    UILayoutGuide * _labelsTopLayoutGuide;
    UILabel * _moveTitleLabel;
    UILabel * _moveValueLabel;
    HKActivityRingView * _ringView;
    UIImageView * _ringViewSnapshot;
    NSMutableArray * _sizeDepedentConstraints;
    UIFont * _smallCapsValueFont;
    UILabel * _standTitleLabel;
    UILabel * _standValueLabel;
    UIView * _textContainerView;
}

@property (nonatomic, retain) NSMutableArray *sizeDepedentConstraints;

+ (id)_integerFormatter;
+ (double)preferredHeight;

- (void).cxx_destruct;
- (void)_animateCurrentActivitySummary;
- (void)_constrainLabels;
- (void)_renderRingImage;
- (void)_textSizeDidUpdate:(id)arg1;
- (void)_updateForCurrentSizeCategory;
- (void)_updateMoveValueLabelWithSummary:(id)arg1;
- (void)_updateStandTitleLabelWithSummary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 activeEnergyUnit:(id)arg2 basalEnergyUnit:(id)arg3;
- (void)setActiveEnergyUnit:(id)arg1 basalEnergyUnit:(id)arg2;
- (void)setActivitySummary:(id)arg1 animated:(bool)arg2;
- (void)setIsWheelchairUser:(bool)arg1;
- (void)setSizeDepedentConstraints:(id)arg1;
- (void)setupExerciseLabelsWithTitleFont:(id)arg1 valueFont:(id)arg2;
- (void)setupMoveLabelsWithTitleFont:(id)arg1 valueFont:(id)arg2;
- (void)setupRingViews;
- (void)setupStandLabelsWithTitleFont:(id)arg1 valueFont:(id)arg2;
- (void)setupSubviews;
- (id)sizeDepedentConstraints;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTextWithNewActivitySummary:(id)arg1;

@end
