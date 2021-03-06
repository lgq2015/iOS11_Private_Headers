/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKCenteredContentViewController : GKViewController <UIScrollViewDelegate> {
    UIView * _containerView;
    GKCenteringScrollView * _scrollView;
}

@property (nonatomic, retain) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GKCenteringScrollView *scrollView;
@property (readonly) Class superclass;

- (id)containerView;
- (void)dealloc;
- (void)loadView;
- (id)scrollView;
- (void)setContainerView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
