/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

@interface AECameraTilePresentationViewController : UIViewController {
    AECameraTilePresentationContentView * __contentView;
    UIViewController * _contentViewController;
}

@property (nonatomic, readonly) AECameraTilePresentationContentView *_contentView;
@property (nonatomic, retain) UIViewController *contentViewController;

- (void).cxx_destruct;
- (void)_abandonContentFromViewController:(id)arg1;
- (void)_adoptContentFromViewController:(id)arg1;
- (id)_contentView;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (id)contentViewController;
- (void)loadView;
- (long long)preferredStatusBarUpdateAnimation;
- (void)setContentViewController:(id)arg1;

@end
