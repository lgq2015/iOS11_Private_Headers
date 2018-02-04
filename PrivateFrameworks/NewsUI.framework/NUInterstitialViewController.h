/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUInterstitialViewController : UIViewController <NUPagable> {
    bool  _hasPresentedInterstitial;
    ADInterstitialAd * _interstitial;
    UIView * _interstitialView;
    <NULoadingDelegate> * _loadingDelegate;
    NSString * _pageIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasPresentedInterstitial;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ADInterstitialAd *interstitial;
@property (nonatomic, retain) UIView *interstitialView;
@property (nonatomic) <NULoadingDelegate> *loadingDelegate;
@property (nonatomic, readonly, copy) NSString *pageIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)hasPresentedInterstitial;
- (id)initWithInterstitial:(id)arg1 pageIdentifier:(id)arg2;
- (id)interstitial;
- (id)interstitialView;
- (id)loadingDelegate;
- (id)pageIdentifier;
- (void)setHasPresentedInterstitial:(bool)arg1;
- (void)setInterstitialView:(id)arg1;
- (void)setLoadingDelegate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
