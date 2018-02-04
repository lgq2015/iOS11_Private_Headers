/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADInterstitialAdPresentationViewController : UIViewController {
    ADCountdownButton * _closeButton;
    ADInterstitialAd * _interstitialAd;
}

@property (nonatomic, retain) ADCountdownButton *closeButton;
@property (nonatomic, readonly) ADInterstitialAd *interstitialAd;

- (id)closeButton;
- (void)dealloc;
- (id)initForInterstitialAd:(id)arg1;
- (id)interstitialAd;
- (void)loadView;
- (bool)prefersStatusBarHidden;
- (void)setCloseButton:(id)arg1;
- (bool)shouldTestVisibilityAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (bool)wantsFullScreenLayout;

@end
