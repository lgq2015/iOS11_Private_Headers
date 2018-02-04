/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADWebViewActionViewController : SFSafariViewController {
    UITapGestureRecognizer * _homeButtonGestureRecognizer;
}

@property (nonatomic) <ADWebViewActionViewControllerDelegate> *delegate;
@property (nonatomic, retain) UITapGestureRecognizer *homeButtonGestureRecognizer;

- (void)_homeButtonTapped:(id)arg1;
- (void)dealloc;
- (id)homeButtonGestureRecognizer;
- (void)setHomeButtonGestureRecognizer:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
