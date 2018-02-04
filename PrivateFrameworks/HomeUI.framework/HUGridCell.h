/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridCell : UICollectionViewCell <HUGridCellProtocol> {
    bool  _cellContentsHidden;
    UIVisualEffect * _contentEffect;
    HUGridCellBackgroundView * _gridBackgroundView;
    UIVisualEffectView * _gridForegroundView;
    HFItem * _item;
    HUGridCellLayoutOptions * _layoutOptions;
    long long  _primaryState;
    bool  _rearranging;
    double  _secondaryContentDimmingFactor;
    UIVisualEffect * _secondaryContentEffect;
}

@property (nonatomic, readonly) unsigned long long backgroundState;
@property (getter=areCellContentsHidden, nonatomic) bool cellContentsHidden;
@property (nonatomic, retain) UIVisualEffect *contentEffect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HUGridCellBackgroundView *gridBackgroundView;
@property (nonatomic, readonly) UIView *gridForegroundContentView;
@property (nonatomic, retain) UIVisualEffectView *gridForegroundView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long iconDisplayStyle;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) HUGridCellLayoutOptions *layoutOptions;
@property (nonatomic) long long primaryState;
@property (getter=isRearranging, nonatomic) bool rearranging;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic) double secondaryContentDimmingFactor;
@property (nonatomic, retain) UIVisualEffect *secondaryContentEffect;
@property (readonly) Class superclass;

+ (id)_jitterPositionAnimation;
+ (id)_jitterTransformAnimationWithAspectRatio:(double)arg1;
+ (Class)layoutOptionsClass;

- (void).cxx_destruct;
- (void)_setupCommonCellAppearance;
- (void)_updateForegroundStyle;
- (void)_updateTintColorSettingsForSubviewsOfView:(id)arg1 desiredDisplayStyle:(unsigned long long)arg2;
- (void)applyLayoutAttributes:(id)arg1;
- (bool)areCellContentsHidden;
- (unsigned long long)backgroundState;
- (id)contentEffect;
- (void)displayStyleDidChange;
- (id)gridBackgroundView;
- (id)gridForegroundContentView;
- (id)gridForegroundView;
- (unsigned long long)iconDisplayStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isRearranging;
- (id)item;
- (id)layoutOptions;
- (void)layoutOptionsDidChange;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)prepareForReuse;
- (long long)primaryState;
- (double)secondaryContentDimmingFactor;
- (id)secondaryContentEffect;
- (void)setCellContentsHidden:(bool)arg1;
- (void)setContentEffect:(id)arg1;
- (void)setGridBackgroundView:(id)arg1;
- (void)setGridForegroundView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setPrimaryState:(long long)arg1;
- (void)setRearranging:(bool)arg1;
- (void)setSecondaryContentDimmingFactor:(double)arg1;
- (void)setSecondaryContentEffect:(id)arg1;
- (void)updateUIWithAnimation:(bool)arg1;

@end
