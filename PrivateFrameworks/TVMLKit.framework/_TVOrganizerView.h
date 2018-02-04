/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVOrganizerView : _TVFocusRedirectView <TVAppTemplateImpressionable> {
    UIView * _backgroundImageView;
    UIColor * _columnDividerColor;
    double  _columnDividerPadding;
    bool  _columnDividersEnabled;
    NSArray * _components;
    NSDictionary * _divSizesByPosition;
    NSDictionary * _divsByPosition;
    UIFocusGuide * _focusGuide;
    UIView * _lastFocusedView;
    UIView * _leftColumnDivider;
    bool  _remembersLastFocusedItem;
    UIView * _rightColumnDivider;
}

@property (nonatomic, retain) UIView *backgroundImageView;
@property (nonatomic, retain) UIColor *columnDividerColor;
@property (nonatomic) double columnDividerPadding;
@property (nonatomic) bool columnDividersEnabled;
@property (nonatomic, copy) NSArray *components;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *divSizesByPosition;
@property (nonatomic, copy) NSDictionary *divsByPosition;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool remembersLastFocusedItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_contentSizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)_positionFromView:(id)arg1;
- (id)backgroundImageView;
- (bool)canBecomeFocused;
- (id)columnDividerColor;
- (double)columnDividerPadding;
- (bool)columnDividersEnabled;
- (id)components;
- (double)cornerRadius;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)divSizesByPosition;
- (id)divsByPosition;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)preferredFocusEnvironments;
- (bool)remembersLastFocusedItem;
- (void)setBackgroundImageView:(id)arg1;
- (void)setColumnDividerColor:(id)arg1;
- (void)setColumnDividerPadding:(double)arg1;
- (void)setColumnDividersEnabled:(bool)arg1;
- (void)setComponents:(id)arg1;
- (void)setComponentsNeedUpdate;
- (void)setCornerRadius:(double)arg1;
- (void)setDivSizesByPosition:(id)arg1;
- (void)setDivsByPosition:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setRemembersLastFocusedItem:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tv_alignmentInsetsForExpectedWidth:(double)arg1;

@end