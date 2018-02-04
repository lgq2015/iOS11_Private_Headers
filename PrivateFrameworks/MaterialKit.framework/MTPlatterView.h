/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

@interface MTPlatterView : UIView <MTMaterialSettingsObserving, MTPlatter, MTPlatterInternal> {
    bool  _backgroundBlurred;
    UIView * _backgroundView;
    double  _cornerRadius;
    UIView * _customContentView;
    bool  _hasShadow;
    UIView * _mainContainerView;
    MTMaterialView * _mainOverlayView;
    unsigned long long  _options;
    long long  _recipe;
    UIImageView * _shadowView;
    bool  _usesBackgroundView;
}

@property (getter=isBackgroundBlurred, nonatomic) bool backgroundBlurred;
@property (nonatomic, readonly) MTMaterialView *backgroundMaterialView;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) UIView *customContentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic) bool hasShadow;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) long long recipe;
@property (readonly) Class superclass;
@property (nonatomic) bool usesBackgroundView;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_shadowImage:(id)arg1 frameForPlatterViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)_shadowImageMask;

- (void).cxx_destruct;
- (void)_configureBackgroundView:(id)arg1;
- (void)_configureBackgroundViewIfNecessary;
- (void)_configureCustomContentView;
- (void)_configureCustomContentViewIfNecessary;
- (void)_configureMainContainerViewIfNecessary;
- (void)_configureMainOverlayView;
- (void)_configureMainOverlayViewIfNecessary;
- (void)_configureShadowViewIfNecessary;
- (id)_newDefaultBackgroundView;
- (unsigned long long)_optionsForBackgroundWithBlur:(bool)arg1;
- (void)_willRemoveCustomContent:(id)arg1;
- (id)backgroundMaterialView;
- (id)backgroundView;
- (struct CGSize { double x1; double x2; })contentSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (double)cornerRadius;
- (id)customContentView;
- (void)dealloc;
- (id)groupName;
- (bool)hasShadow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithRecipe:(long long)arg1 options:(unsigned long long)arg2;
- (bool)isBackgroundBlurred;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (unsigned long long)options;
- (long long)recipe;
- (void)setBackgroundBlurred:(bool)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setGroupName:(id)arg1;
- (void)setHasShadow:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setUsesBackgroundView:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFitsContentWithSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)usesBackgroundView;
- (id)vibrantStylingProvider;

@end
