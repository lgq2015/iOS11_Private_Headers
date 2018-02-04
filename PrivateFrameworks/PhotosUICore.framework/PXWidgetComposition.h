/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXWidgetComposition : PXTilingControllerComposition <PXScrollViewControllerObserver, PXWidgetCompositionElementDelegate, PXWidgetCompositionElementObserver> {
    bool  __didLayoutWidgets;
    NSArray * __elements;
    PXTilingController * __focusedTilingController;
    struct CGPoint { 
        double x; 
        double y; 
    }  __lastContentAdjustmentOffset;
    <PXWidgetCompositionDelegate> * _delegate;
    struct { 
        bool respondsToHasContentAbove; 
        bool respondsToShouldUseEdgeToEdgeLayoutForWidget; 
        bool respondsToLoadingPriorityForWidget; 
        bool respondsToWidgetTransitionToViewControllerWithTransitionType; 
        bool respondsToRequestViewControllerDismissalAnimated; 
        bool respondsToDidUpdateCompositionWithDefaultAnimationOptions; 
    }  _delegateFlags;
    bool  _isPerformingWidgetLoadingChange;
    long long  _minimumWidgetLoadingPriority;
    struct { 
        bool elementsToLoad; 
    }  _needsUpdateFlags;
    PXScrollViewController * _scrollViewController;
    bool  _shouldLoadAllWidgets;
    bool  _shouldLoadVisibleWidgets;
    bool  _shouldUnloadAllWidgets;
    PXWidgetCompositionSpec * _spec;
    NSArray * _widgets;
}

@property (setter=_setDidLayoutWidgets:, nonatomic) bool _didLayoutWidgets;
@property (setter=_setElements:, nonatomic, copy) NSArray *_elements;
@property (setter=_setFocusedTilingController:, nonatomic, retain) PXTilingController *_focusedTilingController;
@property (setter=_setLastContentAdjustmentOffset:, nonatomic) struct CGPoint { double x1; double x2; } _lastContentAdjustmentOffset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXWidgetCompositionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long minimumWidgetLoadingPriority;
@property (nonatomic, readonly) PXScrollViewController *scrollViewController;
@property (nonatomic) bool shouldLoadAllWidgets;
@property (nonatomic) bool shouldLoadVisibleWidgets;
@property (nonatomic) bool shouldUnloadAllWidgets;
@property (nonatomic, retain) PXWidgetCompositionSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *widgets;

- (void).cxx_destruct;
- (bool)_didLayoutWidgets;
- (id)_elements;
- (id)_focusedTilingController;
- (void)_invalidateElements;
- (void)_invalidateElementsSpec;
- (void)_invalidateElementsToLoad;
- (void)_invalidateFocusedTilingController;
- (struct CGPoint { double x1; double x2; })_lastContentAdjustmentOffset;
- (long long)_loadingPriorityForElement:(id)arg1;
- (void)_setDidLayoutWidgets:(bool)arg1;
- (void)_setElements:(id)arg1;
- (void)_setFocusedTilingController:(id)arg1;
- (void)_setLastContentAdjustmentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setNeedsUpdateWidgetLoading;
- (bool)_shouldFocusOnTilingController:(id)arg1;
- (bool)_shouldUseEdgeToEdgeLayoutForWidget:(id)arg1;
- (void)_updateElements;
- (void)_updateElementsSpec;
- (void)_updateElementsToLoadIfNeeded;
- (void)_updateFocusedTilingController;
- (void)_updateWidgetLoadingIfNeeded;
- (id)delegate;
- (bool)element:(id)arg1 requestViewControllerDismissalAnimated:(bool)arg2;
- (bool)element:(id)arg1 transitionToViewController:(struct NSObject { Class x1; }*)arg2 withTransitionType:(long long)arg3;
- (void)elementHasLoadedContentDataDidChange:(id)arg1;
- (void)elementNeedsLayout:(id)arg1 preferredAnimationOptions:(id)arg2 originatingTilingController:(id)arg3;
- (struct NSObject { Class x1; }*)elementViewController:(id)arg1;
- (id)footerTilingControllerForWidget:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForWidget:(id)arg1;
- (id)headerTilingControllerForWidget:(id)arg1;
- (id)init;
- (id)initWithScrollViewController:(id)arg1;
- (long long)minimumWidgetLoadingPriority;
- (void)performWidgetLoadingChange:(id /* block */)arg1;
- (id)scrollViewController;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMinimumWidgetLoadingPriority:(long long)arg1;
- (void)setShouldLoadAllWidgets:(bool)arg1;
- (void)setShouldLoadVisibleWidgets:(bool)arg1;
- (void)setShouldUnloadAllWidgets:(bool)arg1;
- (void)setSpec:(id)arg1;
- (void)setWidgets:(id)arg1;
- (bool)shouldLoadAllWidgets;
- (bool)shouldLoadVisibleWidgets;
- (bool)shouldUnloadAllWidgets;
- (id)spec;
- (id)tilingControllers;
- (void)updateComposition;
- (id)widgetAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)widgets;

@end
