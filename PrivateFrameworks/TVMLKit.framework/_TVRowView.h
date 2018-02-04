/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVRowView : _TVFocusRedirectView <TVAppTemplateImpressionable> {
    NSArray * _allComponents;
    NSArray * _centerComponents;
    NSArray * _components;
    long long  _contentVerticalAlignment;
    UIView * _lastFocusedView;
    NSArray * _leftComponents;
    UIView * _preferredFocusedComponent;
    NSArray * _rightComponents;
}

@property (nonatomic, readonly, copy) NSArray *allComponents;
@property (nonatomic, readonly, copy) NSArray *centerComponents;
@property (nonatomic, copy) NSArray *components;
@property (nonatomic) long long contentVerticalAlignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *lastFocusedView;
@property (nonatomic, readonly, copy) NSArray *leftComponents;
@property (nonatomic) UIView *preferredFocusedComponent;
@property (nonatomic, readonly, copy) NSArray *rightComponents;
@property (readonly) Class superclass;

+ (void)_alignComponents:(id)arg1 withLineSize:(struct CGSize { double x1; double x2; })arg2 boundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 originYBump:(double)arg4 verticalAlignment:(long long)arg5 horizontalAlignment:(long long)arg6;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundingRectForComponents:(id)arg1 interitemSpacing:(double)arg2 boundingSize:(struct CGSize { double x1; double x2; })arg3 horizontalAlignment:(long long)arg4 allowsOverflow:(bool)arg5;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_leftAlignedFrameForComponent:(id)arg1 previousComponent:(id)arg2 interitemSpacing:(double)arg3;

- (void).cxx_destruct;
- (void)_addSubview:(id)arg1 maxViewWidth:(double)arg2;
- (long long)_alignmentFromView:(id)arg1;
- (void)_lineUpComponents:(id)arg1 alignment:(long long)arg2 attribute:(long long)arg3;
- (void)_resetSubviews;
- (struct CGSize { double x1; double x2; })_sizeThatFitsComponents:(id)arg1 boundingSize:(struct CGSize { double x1; double x2; })arg2;
- (id)allComponents;
- (bool)canBecomeFocused;
- (id)centerComponents;
- (id)components;
- (long long)contentVerticalAlignment;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lastFocusedView;
- (void)layoutSubviews;
- (id)leftComponents;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedComponent;
- (id)rightComponents;
- (void)setComponents:(id)arg1;
- (void)setContentVerticalAlignment:(long long)arg1;
- (void)setPreferredFocusedComponent:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
