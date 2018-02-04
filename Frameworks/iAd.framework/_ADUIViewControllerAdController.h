/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface _ADUIViewControllerAdController : NSObject <ADBannerViewDelegate, ADInterstitialAdDelegate, _UIViewControllerContentViewEmbedding> {
    NSString * _bannerAdSection;
    NSString * _bannerAuthUserName;
    NSURL * _bannerServerURL;
    ADBannerView * _bannerView;
    bool  _canDisplayBannerAds;
    bool  _canOwnSharedBanner;
    UIViewController * _contentViewController;
    ADInterstitialAd * _interstitialAd;
    NSString * _interstitialAdSection;
    NSString * _interstitialAuthUserName;
    long long  _interstitialPresentationPolicy;
    NSURL * _interstitialServerURL;
    bool  _presentingFullScreenAd;
}

@property (nonatomic, copy) NSString *bannerAdSection;
@property (nonatomic, copy) NSString *bannerAuthUserName;
@property (nonatomic, copy) NSURL *bannerServerURL;
@property (nonatomic, retain) ADBannerView *bannerView;
@property (nonatomic) bool canDisplayBannerAds;
@property (nonatomic) bool canOwnSharedBanner;
@property (nonatomic, readonly) UIViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayingBannerAd, nonatomic, readonly) bool displayingBannerAd;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ADInterstitialAd *interstitialAd;
@property (nonatomic, copy) NSString *interstitialAdSection;
@property (nonatomic, copy) NSString *interstitialAuthUserName;
@property (nonatomic) long long interstitialPresentationPolicy;
@property (nonatomic, copy) NSURL *interstitialServerURL;
@property (getter=isPresentingFullScreenAd, nonatomic) bool presentingFullScreenAd;
@property (readonly) Class superclass;

+ (id)_sharedBannerView;
+ (void)prepareInterstitialAds;

- (void)_considerTakingBannerViewAnimated:(bool)arg1;
- (void)_hideBannerView;
- (void)_layoutContentAndBannerViewAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (bool)_presentInterstitialIfReady;
- (void)_setEmbeddedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)bannerAdSection;
- (id)bannerAuthUserName;
- (id)bannerServerURL;
- (id)bannerView;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewActionDidFinish:(id)arg1;
- (bool)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(bool)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (bool)canDisplayBannerAds;
- (bool)canOwnSharedBanner;
- (id)contentViewController;
- (void)dealloc;
- (id)initWithContentViewController:(id)arg1;
- (id)interstitialAd;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdActionDidFinish:(id)arg1;
- (bool)interstitialAdActionShouldBegin:(id)arg1 willLeaveApplication:(bool)arg2;
- (void)interstitialAdDidUnload:(id)arg1;
- (id)interstitialAdSection;
- (id)interstitialAuthUserName;
- (long long)interstitialPresentationPolicy;
- (id)interstitialServerURL;
- (bool)isDisplayingBannerAd;
- (bool)isPresentingFullScreenAd;
- (bool)requestInterstitialAdPresentation;
- (void)setBannerAdSection:(id)arg1;
- (void)setBannerAuthUserName:(id)arg1;
- (void)setBannerServerURL:(id)arg1;
- (void)setBannerView:(id)arg1;
- (void)setCanDisplayBannerAds:(bool)arg1;
- (void)setCanOwnSharedBanner:(bool)arg1;
- (void)setInterstitialAd:(id)arg1;
- (void)setInterstitialAdSection:(id)arg1;
- (void)setInterstitialAuthUserName:(id)arg1;
- (void)setInterstitialPresentationPolicy:(long long)arg1;
- (void)setInterstitialServerURL:(id)arg1;
- (void)setPresentingFullScreenAd:(bool)arg1;
- (void)viewController:(id)arg1 viewDidAppear:(bool)arg2;
- (void)viewController:(id)arg1 viewDidDisappear:(bool)arg2;
- (void)viewController:(id)arg1 viewWillAppear:(bool)arg2;
- (void)viewController:(id)arg1 viewWillDisappear:(bool)arg2;
- (void)viewControllerViewDidLayoutSubviews:(id)arg1;
- (void)viewControllerViewWillLayoutSubviews:(id)arg1;

@end
