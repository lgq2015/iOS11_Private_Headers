/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINavigationBar : UIView <NSCoding, UIAccessibilityHUDGestureHosting, UIBarPositioning, UIGestureRecognizerDelegate, UIStatusBarTinting, _UIBarPositioningInternal> {
    double  __backgroundOpacity;
    double  __overrideBackgroundExtension;
    bool  __startedAnimationTracking;
    double  __titleOpacity;
    bool  __useInlineBackgroundHeightWhenLarge;
    UIColor * _accessibilityButtonBackgroundTintColor;
    bool  _alwaysUseDefaultMetrics;
    long long  _animationDisabledCount;
    id  _appearanceStorage;
    UIAccessibilityHUDGestureManager * _axHUDGestureManager;
    NSArray * _backgroundEffects;
    long long  _barPosition;
    long long  _barStyle;
    UIColor * _barTintColor;
    long long  _barTranslucence;
    int  _currentPushTransition;
    <_UINavigationBarDelegatePrivate> * _delegate;
    NSDictionary * _largeTitleTextAttributes;
    _UIViewControllerTransitionContext * _navControllerAnimatingContext;
    struct { 
        unsigned int titleAutosizesToFit : 1; 
        unsigned int forceFullHeightInLandscape : 1; 
        unsigned int isLocked : 1; 
        unsigned int isIgnoringLock : 1; 
        unsigned int isContainedInPopover : 1; 
        unsigned int layoutInProgress : 1; 
        unsigned int delegateRespondsToFreezeLayoutForDismissalSelector : 1; 
    }  _navbarFlags;
    bool  _prefersLargeTitles;
    long long  _requestedContentSize;
    double  _requestedMaxBackButtonWidth;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _resolvedLayoutMargins;
    double  _shadowAlpha;
    _UINavigationBarItemStack * _stack;
    _UINavigationBarVisualProvider * _visualProvider;
    _UINavigationBarVisualStyle * _visualStyle;
    bool  _wantsLetterpressContent;
}

@property (setter=_setAccessibilityButtonBackgroundTintColor:, nonatomic, retain) UIColor *_accessibilityButtonBackgroundTintColor;
@property (nonatomic, readonly) NSArray *_animationIds;
@property (setter=_setBackIndicatorLeftMargin:, nonatomic) double _backIndicatorLeftMargin;
@property (nonatomic, readonly, retain) NSString *_backdropViewLayerGroupName;
@property (setter=_setBackgroundOpacity:, nonatomic) double _backgroundOpacity;
@property (setter=_setBackgroundView:, nonatomic, retain) UIView *_backgroundView;
@property (nonatomic, readonly) long long _barTranslucence;
@property (setter=_setDeferShadowToSearchBar:, nonatomic) bool _deferShadowToSearchBar;
@property (setter=_setDisableBlurTinting:, nonatomic) bool _disableBlurTinting;
@property (nonatomic, readonly) double _heightIncludingBackground;
@property (setter=_setHidesShadow:, nonatomic) bool _hidesShadow;
@property (nonatomic, readonly) bool _isContainedInPopover;
@property (setter=_setOverrideBackgroundExtension:, nonatomic) double _overrideBackgroundExtension;
@property (setter=_setRequestedMaxBackButtonWidth:, nonatomic) double _requestedMaxBackButtonWidth;
@property (setter=_setShadowAlpha:, nonatomic) double _shadowAlpha;
@property (nonatomic, readonly) _UINavigationBarItemStack *_stack;
@property (nonatomic, readonly) bool _startedAnimationTracking;
@property (setter=_setTitleOpacity:, nonatomic) double _titleOpacity;
@property (setter=_setUseInlineBackgroundHeightWhenLarge:, nonatomic) bool _useInlineBackgroundHeightWhenLarge;
@property (nonatomic, readonly) UILayoutGuide *_userContentGuide;
@property (nonatomic, readonly) bool _wantsLargeTitleDisplayed;
@property (setter=_setWantsLetterpressContent:, nonatomic) bool _wantsLetterpressContent;
@property (setter=_setAlwaysUseDefaultMetrics:, nonatomic) bool alwaysUseDefaultMetrics;
@property (nonatomic, retain) UIImage *backIndicatorImage;
@property (nonatomic, retain) UIImage *backIndicatorTransitionMaskImage;
@property (nonatomic, readonly) UINavigationItem *backItem;
@property (nonatomic, copy) NSArray *backgroundEffects;
@property (nonatomic, readonly) long long barPosition;
@property (nonatomic) long long barStyle;
@property (nonatomic, retain) UIColor *barTintColor;
@property (nonatomic, readonly) _UINavigationItemButtonView *currentBackButton;
@property (nonatomic, readonly) long long currentContentSize;
@property (nonatomic, readonly) UIView *currentLeftView;
@property (nonatomic, readonly) UIView *currentRightView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UINavigationBarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceFullHeightInLandscape;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isMinibar;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, copy) NSDictionary *largeTitleTextAttributes;
@property (getter=isLocked, nonatomic) bool locked;
@property (nonatomic) bool prefersLargeTitles;
@property (nonatomic, retain) _UINavigationControllerRefreshControlHost *refreshControlHost;
@property (nonatomic) long long requestedContentSize;
@property (nonatomic, retain) UIImage *shadowImage;
@property (nonatomic, readonly) int state;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, copy) NSDictionary *titleTextAttributes;
@property (nonatomic, readonly) UINavigationItem *topItem;
@property (getter=isTranslucent, nonatomic) bool translucent;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)_defaultVisualStyleForOrientation:(long long)arg1;
+ (void)_initializeForIdiom:(long long)arg1;
+ (void)_setUseCustomBackButtonAction:(bool)arg1;
+ (id)_statusBarBaseTintColorForStyle:(long long)arg1 translucent:(bool)arg2 tintColor:(id)arg3;
+ (id)_statusBarBaseTintColorForStyle:(long long)arg1 translucent:(bool)arg2 tintColor:(id)arg3 backgroundImage:(id)arg4 viewSize:(struct CGSize { double x1; double x2; })arg5;
+ (bool)_supportsCanvasView;
+ (bool)_useCustomBackButtonAction;
+ (id)_visualProviderForNavigationBar:(id)arg1;
+ (double)defaultAnimationDuration;
+ (id)defaultPromptFont;
+ (struct CGSize { double x1; double x2; })defaultSize;
+ (struct CGSize { double x1; double x2; })defaultSizeForOrientation:(long long)arg1;
+ (struct CGSize { double x1; double x2; })defaultSizeWithPrompt;
+ (struct CGSize { double x1; double x2; })defaultSizeWithPromptForOrientation:(long long)arg1;

- (void).cxx_destruct;
- (id)_accessibilityButtonBackgroundTintColor;
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;
- (void)_accessibilityButtonShapesParametersDidChange;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_accessibility_contentsOfNavigationBar;
- (void)_accessibility_navigationBarContentsDidChange;
- (id)_accessibility_navigationController;
- (void)_accessibility_triggerBackButton;
- (void)_accessibility_triggerBarButtonItem:(id)arg1;
- (long long)_activeBarMetrics;
- (void)_addItem:(id)arg1 withEffectiveDelegate:(id)arg2 transition:(int)arg3;
- (void)_addItems:(id)arg1 withEffectiveDelegate:(id)arg2 transition:(int)arg3;
- (id)_allViews;
- (bool)_allowInteractionDuringTransition;
- (void)_animateForSearchPresentation:(bool)arg1;
- (id)_animationIds;
- (id)_appearanceStorage;
- (void)_applySPIAppearanceToButtons;
- (double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(bool)arg4;
- (id)_backButtonForBackItem:(id)arg1 topItem:(id)arg2;
- (double)_backIndicatorLeftMargin;
- (id)_backdropViewLayerGroupName;
- (long long)_backgroundBackdropStyle;
- (double)_backgroundOpacity;
- (id)_backgroundView;
- (id)_backgroundViewForPalette:(id)arg1;
- (long long)_barPosition;
- (void)_barSizeDidChange:(struct CGSize { double x1; double x2; })arg1;
- (long long)_barStyle;
- (long long)_barTranslucence;
- (bool)_canHandleStatusBarTouchAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_cancelInProgressPushOrPop;
- (void)_cancelInteractiveTransition;
- (void)_cancelInteractiveTransition:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)_commonNavBarInit;
- (void)_completePopOperationAnimated:(bool)arg1 transitionAssistant:(id)arg2;
- (void)_completePushOperationAnimated:(bool)arg1 transitionAssistant:(id)arg2;
- (void)_configurePaletteConstraintsIfNecessary;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (id)_contentView;
- (long long)_currentBarStyle;
- (id)_currentLeftViews;
- (id)_currentRightViews;
- (id)_currentVisualStyle;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (double)_defaultAutolayoutSpacing;
- (id)_defaultTitleFont;
- (id)_defaultTitleFontFittingHeight:(double)arg1 withScaleAdjustment:(double)arg2;
- (id)_defaultTitleFontWithScaleAdjustment:(double)arg1;
- (bool)_deferShadowToSearchBar;
- (bool)_delegateWantsNavigationBarHidden;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (bool)_didVisibleItemsChangeWithNewItems:(id)arg1 oldItems:(id)arg2;
- (void)_disableAnimation;
- (bool)_disableBlurTinting;
- (void)_displayItemsKeepingOwningNavigationBar:(id)arg1;
- (double)_effectiveBackIndicatorLeftMargin;
- (id)_effectiveBarTintColor;
- (void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg1;
- (id)_effectiveDelegate;
- (long long)_effectiveMetricsForMetrics:(long long)arg1;
- (void)_enableAnimation;
- (void)_evaluateBackIndicatorForHilightedState:(bool)arg1 ofBarButtonItem:(id)arg2 inNavigationItem:(id)arg3;
- (void)_fadeAllViewsIn;
- (void)_fadeAllViewsOut;
- (void)_finishInteractiveTransition:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)_getBackgroundImage:(id*)arg1 shouldRespectOversizedBackgroundImage:(bool*)arg2 actualBarMetrics:(long long*)arg3 actualBarPosition:(long long*)arg4;
- (bool)_hasBackButton;
- (bool)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1;
- (double)_heightIncludingBackground;
- (struct { double x1; double x2; })_heightRangeForNavigationItem:(id)arg1 fittingWidth:(double)arg2;
- (bool)_hidesShadow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_incomingNavigationBarFrame;
- (double)_internalShadowAlpha;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (bool)_isAlwaysHidden;
- (bool)_isAnimationEnabled;
- (bool)_isContainedInPopover;
- (long long)_itemStackCount;
- (bool)_legacyIsTranslucent;
- (bool)_modernIsTranslucent;
- (double)_overrideBackgroundExtension;
- (void)_palette:(id)arg1 isAttaching:(bool)arg2 didComplete:(bool)arg3;
- (void)_performUpdatesIgnoringLock:(id /* block */)arg1;
- (id)_popNavigationItemWithTransition:(int)arg1;
- (void)_popNavigationItemWithTransitionAssistant:(id)arg1;
- (void)_popNestedNavigationItem;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_propagateEffectiveBarTintColorWithPreviousColor:(id)arg1;
- (void)_pushNavigationItem:(id)arg1 transition:(int)arg2;
- (void)_pushNavigationItem:(id)arg1 transitionAssistant:(id)arg2;
- (void)_pushNavigationItemUsingCurrentTransition:(id)arg1;
- (void)_pushNestedNavigationItem:(id)arg1;
- (void)_redisplayItems;
- (void)_reenableUserInteraction;
- (void)_reenableUserInteractionWhenReadyWithContext:(id)arg1;
- (double)_requestedMaxBackButtonWidth;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_resolvedLayoutMargins;
- (void)_sendNavigationBarAnimateTransition;
- (void)_sendNavigationBarDidChangeStyle;
- (void)_sendNavigationBarResize;
- (void)_sendResizeForPromptChange;
- (void)_setAccessibilityButtonBackgroundTintColor:(id)arg1;
- (void)_setAlwaysUseDefaultMetrics:(bool)arg1;
- (void)_setAutoAdjustTitle:(bool)arg1;
- (void)_setBackButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3;
- (void)_setBackIndicatorLeftMargin:(double)arg1;
- (void)_setBackIndicatorPressed:(bool)arg1 initialPress:(bool)arg2;
- (void)_setBackdropViewLayerGroupName:(id)arg1;
- (void)_setBackgroundImage:(id)arg1 mini:(id)arg2;
- (void)_setBackgroundOpacity:(double)arg1;
- (void)_setBackgroundView:(id)arg1;
- (void)_setBarPosition:(long long)arg1;
- (void)_setBarStyle:(long long)arg1;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3;
- (void)_setButtonItemTextColor:(id)arg1 shadowColor:(id)arg2;
- (void)_setButtonItemTextColor:(id)arg1 shadowColor:(id)arg2 forState:(unsigned long long)arg3;
- (void)_setButtonTextShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)_setDecodedItems:(id)arg1;
- (void)_setDeferShadowToSearchBar:(bool)arg1;
- (void)_setDisableBlurTinting:(bool)arg1;
- (void)_setHidesShadow:(bool)arg1;
- (void)_setIsContainedInPopover:(bool)arg1;
- (void)_setItems:(id)arg1 transition:(int)arg2;
- (void)_setItems:(id)arg1 transition:(int)arg2 reset:(bool)arg3;
- (void)_setItems:(id)arg1 transition:(int)arg2 reset:(bool)arg3 resetOwningRelationship:(bool)arg4;
- (void)_setItemsUpToItem:(id)arg1 transition:(int)arg2;
- (void)_setNeedsBackgroundViewUpdate;
- (void)_setOverrideBackgroundExtension:(double)arg1;
- (void)_setPressedButtonItemTextColor:(id)arg1 shadowColor:(id)arg2;
- (void)_setPrompt:(id)arg1;
- (void)_setRequestedMaxBackButtonWidth:(double)arg1;
- (void)_setReversesButtonTextShadowOffsetWhenPressed:(bool)arg1;
- (void)_setShadowAlpha:(double)arg1;
- (void)_setTitleOpacity:(double)arg1;
- (void)_setUseInlineBackgroundHeightWhenLarge:(bool)arg1;
- (void)_setWantsLetterpressContent:(bool)arg1;
- (void)_setupAXHUDGestureIfNecessary;
- (double)_shadowAlpha;
- (bool)_shouldShowBackButtonForNavigationItem:(id)arg1;
- (bool)_shouldShowBackButtonForScreen:(id)arg1;
- (id)_stack;
- (bool)_startedAnimationTracking;
- (long long)_statusBarStyle;
- (id)_statusBarTintColor;
- (bool)_subclassImplementsDrawRect;
- (bool)_suppressBackIndicator;
- (void)_tintViewAppearanceDidChange;
- (bool)_titleAutoresizesToFit;
- (double)_titleOpacity;
- (id)_titleTextColor;
- (int)_transitionForOldItems:(id)arg1 newItems:(id)arg2;
- (void)_uikit_applyValueFromTraitStorage:(id)arg1 forKeyPath:(id)arg2;
- (void)_updateActiveBarMetrics;
- (void)_updateBackButtonVisibilityIfTop:(id)arg1 animated:(bool)arg2;
- (void)_updateBackIndicatorImage;
- (void)_updateContentIfTopItem:(id)arg1 animated:(bool)arg2;
- (void)_updateInteractiveTransition:(double)arg1;
- (void)_updateNavigationBarItem:(id)arg1 forStyle:(long long)arg2 previousTintColor:(id)arg3;
- (void)_updateNavigationBarItemsForStyle:(long long)arg1;
- (void)_updateNavigationBarItemsForStyle:(long long)arg1 previousTintColor:(id)arg2;
- (void)_updateOpacity;
- (void)_updatePalette:(id)arg1;
- (void)_updatePaletteBackgroundIfNecessary;
- (void)_updateTitleViewIfTop:(id)arg1;
- (bool)_useInlineBackgroundHeightWhenLarge;
- (id)_userContentGuide;
- (bool)_wantsLargeTitleDisplayed;
- (bool)_wantsLetterpressContent;
- (void)_willMoveToWindow:(id)arg1;
- (void)addConstraint:(id)arg1;
- (bool)alwaysUseDefaultMetrics;
- (long long)animationDisabledCount;
- (id)animationFactory;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })availableTitleArea;
- (id)backButtonViewAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)backIndicatorImage;
- (id)backIndicatorTransitionMaskImage;
- (id)backItem;
- (id)backgroundEffects;
- (id)backgroundImageForBarMetrics:(long long)arg1;
- (id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (long long)barPosition;
- (long long)barStyle;
- (id)buttonItemShadowColor;
- (id)buttonItemTextColor;
- (id)createButtonWithContents:(id)arg1 width:(double)arg2 barStyle:(long long)arg3 buttonStyle:(int)arg4 isRight:(bool)arg5;
- (id)currentBackButton;
- (long long)currentContentSize;
- (id)currentLeftView;
- (id)currentRightView;
- (void)dealloc;
- (double)defaultBackButtonAlignmentHeight;
- (double)defaultHeight;
- (double)defaultHeightForMetrics:(long long)arg1;
- (struct CGSize { double x1; double x2; })defaultSizeForOrientation:(long long)arg1;
- (id)delegate;
- (void)didAddSubview:(id)arg1;
- (void)disableAnimation;
- (void)drawBackButtonBackgroundInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withStyle:(long long)arg2 pressed:(bool)arg3;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withStyle:(long long)arg2;
- (long long)effectiveInterfaceOrientation;
- (void)enableAnimation;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceFullHeightInLandscape;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)hideButtons;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (bool)isAnimationEnabled;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isLocked;
- (bool)isMinibar;
- (bool)isTranslucent;
- (id)items;
- (id)largeTitleTextAttributes;
- (void)layoutMarginsDidChange;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)navigationItemAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)navigationItems;
- (void)popForCarplayPressAtFakePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)popNavigationItem;
- (id)popNavigationItemAnimated:(bool)arg1;
- (id)preferredFocusedView;
- (bool)prefersLargeTitles;
- (id)prompt;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })promptBounds;
- (id)promptView;
- (void)pushNavigationItem:(id)arg1;
- (void)pushNavigationItem:(id)arg1 animated:(bool)arg2;
- (id)refreshControlHost;
- (void)removeConstraint:(id)arg1;
- (long long)requestedContentSize;
- (void)safeAreaInsetsDidChange;
- (void)setBackIndicatorImage:(id)arg1;
- (void)setBackIndicatorTransitionMaskImage:(id)arg1;
- (void)setBackgroundEffects:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forBarMetrics:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setBarStyle:(long long)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setButton:(int)arg1 enabled:(bool)arg2;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceFullHeightInLandscape:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 animated:(bool)arg2;
- (void)setLargeTitleTextAttributes:(id)arg1;
- (void)setLocked:(bool)arg1;
- (void)setNavigationItems:(id)arg1;
- (void)setNeedsLayout;
- (void)setPrefersLargeTitles:(bool)arg1;
- (void)setPrompt:(id)arg1;
- (void)setRefreshControlHost:(id)arg1;
- (void)setRequestedContentSize:(long long)arg1;
- (void)setRightMargin:(double)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setShadowImage:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitleAutoresizesToFit:(bool)arg1;
- (void)setTitleTextAttributes:(id)arg1;
- (void)setTitleVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)setTitleView:(id)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(bool)arg1;
- (void)setTranslucent:(bool)arg1;
- (id)shadowImage;
- (void)showBackButton:(bool)arg1 animated:(bool)arg2;
- (void)showButtonsWithLeft:(id)arg1 right:(id)arg2 leftBack:(bool)arg3;
- (void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2;
- (void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2 leftBack:(bool)arg3;
- (void)showLeftButton:(id)arg1 withStyle:(int)arg2 rightButton:(id)arg3 withStyle:(int)arg4;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (int)state;
- (bool)supportsRefreshControlHosting;
- (void)tintColorDidChange;
- (bool)titleAutoresizesToFit;
- (id)titleTextAttributes;
- (double)titleVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (id)topItem;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)updatePrompt;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void)_cnui_applyContactStyle;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (void)setBizEffectStyle:(bool)arg1;
- (void)setDarkEffectStyle:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (void)_gkApplyTheme:(id)arg1;
- (void)_gkApplyTheme:(id)arg1 navbarStyle:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

// Image: /bootstrap/Library/SBInject/AnemoneColors.dylib

- (id)barTintColor;
- (void)layoutSubviews;

@end
