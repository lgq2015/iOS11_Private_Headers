/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUExtendedToolbar : UIToolbar <PUToolbarViewModelChangeObserver> {
    UIView * __accessoryView;
    UIView * __accessoryViewContainer;
    NSMutableSet * __accessoryViewContainers;
    double  __accessoryViewTopOutset;
    UIToolbar * __containedToolbar;
    double  __containedToolbarHeight;
    bool  __isUpdating;
    double  __minimumBackgroundHeight;
    bool  __needsUpdateAccessoryView;
    bool  __needsUpdateAccessoryViewContainer;
    bool  __needsUpdateAccessoryViewTopOutset;
    bool  __needsUpdateContainedToolbar;
    bool  __needsUpdateToolbarItems;
    long long  __numberOfNestedChanges;
    NSArray * __toolbarItems;
    PUToolbarViewModel * _toolbarViewModel;
}

@property (setter=_setAccessoryView:, nonatomic, retain) UIView *_accessoryView;
@property (setter=_setAccessoryViewContainer:, nonatomic, retain) UIView *_accessoryViewContainer;
@property (nonatomic, readonly) NSMutableSet *_accessoryViewContainers;
@property (setter=_setAccessoryViewTopOutset:, nonatomic) double _accessoryViewTopOutset;
@property (setter=_setContainedToolbar:, nonatomic, retain) UIToolbar *_containedToolbar;
@property (setter=_setContainedToolbarHeight:, nonatomic) double _containedToolbarHeight;
@property (setter=_setUpdating:, nonatomic) bool _isUpdating;
@property (setter=_setMinimumBackgroundHeight:, nonatomic) double _minimumBackgroundHeight;
@property (setter=_setNeedsUpdateAccessoryView:, nonatomic) bool _needsUpdateAccessoryView;
@property (setter=_setNeedsUpdateAccessoryViewContainer:, nonatomic) bool _needsUpdateAccessoryViewContainer;
@property (setter=_setNeedsUpdateAccessoryViewTopOutset:, nonatomic) bool _needsUpdateAccessoryViewTopOutset;
@property (setter=_setNeedsUpdateContainedToolbar:, nonatomic) bool _needsUpdateContainedToolbar;
@property (setter=_setNeedsUpdateToolbarItems:, nonatomic) bool _needsUpdateToolbarItems;
@property (setter=_setNumberOfNestedChanges:, nonatomic) long long _numberOfNestedChanges;
@property (setter=_setToolbarItems:, nonatomic, copy) NSArray *_toolbarItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUToolbarViewModel *toolbarViewModel;

- (void).cxx_destruct;
- (id)_accessoryView;
- (id)_accessoryViewContainer;
- (id)_accessoryViewContainers;
- (double)_accessoryViewTopOutset;
- (void)_assertInsideChangeBlock;
- (void)_assertInsideUpdate;
- (id)_containedToolbar;
- (double)_containedToolbarHeight;
- (void)_getContainedToolbarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 accessoryViewContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 forBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_invalidateAccessoryView;
- (void)_invalidateAccessoryViewContainer;
- (void)_invalidateAccessoryViewTopOutset;
- (void)_invalidateContainedToolbar;
- (void)_invalidateToolbarItems;
- (bool)_isUpdating;
- (double)_minimumBackgroundHeight;
- (bool)_needsUpdate;
- (bool)_needsUpdateAccessoryView;
- (bool)_needsUpdateAccessoryViewContainer;
- (bool)_needsUpdateAccessoryViewTopOutset;
- (bool)_needsUpdateContainedToolbar;
- (bool)_needsUpdateToolbarItems;
- (long long)_numberOfNestedChanges;
- (void)_performChanges:(id /* block */)arg1;
- (void)_performChanges:(id /* block */)arg1 withAnimatorBlock:(id /* block */)arg2;
- (void)_setAccessoryView:(id)arg1;
- (void)_setAccessoryViewContainer:(id)arg1;
- (void)_setAccessoryViewTopOutset:(double)arg1;
- (void)_setContainedToolbar:(id)arg1;
- (void)_setContainedToolbarHeight:(double)arg1;
- (void)_setMinimumBackgroundHeight:(double)arg1;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateAccessoryView:(bool)arg1;
- (void)_setNeedsUpdateAccessoryViewContainer:(bool)arg1;
- (void)_setNeedsUpdateAccessoryViewTopOutset:(bool)arg1;
- (void)_setNeedsUpdateContainedToolbar:(bool)arg1;
- (void)_setNeedsUpdateToolbarItems:(bool)arg1;
- (void)_setNumberOfNestedChanges:(long long)arg1;
- (void)_setToolbarItems:(id)arg1;
- (void)_setUpdating:(bool)arg1;
- (bool)_shouldStretchDuringCrossfadeTransition;
- (id)_toolbarItems;
- (void)_updateAccessoryTopOutsetViewIfNeeded;
- (void)_updateAccessoryViewIfNeeded;
- (void)_updateIfNeededWithAnimatorBlock:(id /* block */)arg1;
- (void)_updateToolbarItemsIfNeeded;
- (void)_updateViewsIfNeededWithAnimatorBlock:(id /* block */)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBarStyle:(long long)arg1;
- (void)setTintColor:(id)arg1;
- (void)setToolbarViewModel:(id)arg1;
- (void)setToolbarViewModel:(id)arg1 withAnimatorBlock:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)toolbarViewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
