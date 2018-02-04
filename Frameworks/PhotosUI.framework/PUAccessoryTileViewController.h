/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAccessoryTileViewController : PUTileViewController <PUAccessoryContentViewControllerDelegate> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __contentBounds;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  __contentInsets;
    long long  __contentInsetsChangeReason;
    UIView * __contentView;
    UIViewController<PUAccessoryContentViewController> * __contentViewController;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __keyboardFrame;
    UIViewController<PUAccessoryContentViewController> * __loadedContentViewController;
    double  __minimumVisibleHeight;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __untransformedMasterContentFrame;
    bool  __wasActiveOnLastMasterContentOffsetChange;
    PUAssetReference * _assetReference;
    PUAssetViewModel * _assetViewModel;
    <PUAccessoryTileViewControllerDelegate> * _delegate;
    struct { 
        bool respondsToViewHostingGestureRecognizers; 
        bool respondsToWillHideToolbarWhenShowingAccessoryView; 
    }  _delegateFlags;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    bool  _isUpdateScheduled;
    struct { 
        bool contentViewController; 
        bool loadedContentViewController; 
        bool contentViewMetrics; 
        bool contentBounds; 
        bool masterContentOffset; 
    }  _needsUpdateFlags;
}

@property (setter=_setContentBounds:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _contentBounds;
@property (setter=_setContentInsets:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } _contentInsets;
@property (setter=_setContentInsetsChangeReason:, nonatomic) long long _contentInsetsChangeReason;
@property (setter=_setContentView:, nonatomic, retain) UIView *_contentView;
@property (setter=_setContentViewController:, nonatomic, retain) UIViewController<PUAccessoryContentViewController> *_contentViewController;
@property (setter=_setKeyboardFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _keyboardFrame;
@property (setter=_setLoadedContentViewController:, nonatomic, retain) UIViewController<PUAccessoryContentViewController> *_loadedContentViewController;
@property (setter=_setMinimumVisibleHeight:, nonatomic) double _minimumVisibleHeight;
@property (setter=_setUntransformedMasterContentFrame:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _untransformedMasterContentFrame;
@property (setter=_setWasActiveOnLastMasterContentOffsetChange:, nonatomic) bool _wasActiveOnLastMasterContentOffsetChange;
@property (nonatomic, retain) PUAssetReference *assetReference;
@property (nonatomic, retain) PUAssetViewModel *assetViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUAccessoryTileViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentBounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsets;
- (long long)_contentInsetsChangeReason;
- (id)_contentView;
- (id)_contentViewController;
- (void)_handleScheduledUpdate;
- (void)_invalidateContentBounds;
- (void)_invalidateContentViewController;
- (void)_invalidateContentViewMetrics;
- (void)_invalidateLoadedContentViewController;
- (void)_invalidateMasterContentOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_keyboardFrame;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_loadedContentViewController;
- (double)_minimumVisibleHeight;
- (bool)_needsUpdate;
- (void)_performChanges:(id /* block */)arg1;
- (void)_setContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setContentInsetsChangeReason:(long long)arg1;
- (void)_setContentView:(id)arg1;
- (void)_setContentViewController:(id)arg1;
- (void)_setKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setLoadedContentViewController:(id)arg1;
- (void)_setMinimumVisibleHeight:(double)arg1;
- (void)_setNeedsUpdate;
- (void)_setUntransformedMasterContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setWasActiveOnLastMasterContentOffsetChange:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_untransformedMasterContentFrame;
- (void)_updateContentBoundsIfNeeded;
- (void)_updateContentViewControllerIfNeeded;
- (void)_updateContentViewMetricsIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateLoadedContentViewControllerIfNeeded;
- (void)_updateMasterContentOffsetIfNeeded;
- (bool)_wasActiveOnLastMasterContentOffsetChange;
- (void)accessoryContentViewControllerContentBoundsDidChange:(id)arg1;
- (id)accessoryContentViewControllerViewHostingGestureRecognizers:(id)arg1;
- (void)applyLayoutInfo:(id)arg1;
- (id)assetReference;
- (id)assetViewModel;
- (void)becomeReusable;
- (void)dealloc;
- (id)delegate;
- (void)didChangeActive;
- (id)initWithReuseIdentifier:(id)arg1;
- (bool)isLocationFromProviderInContentArea:(id)arg1;
- (void)setAssetReference:(id)arg1;
- (void)setAssetViewModel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
