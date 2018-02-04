/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADPolicyEngine : NSObject <ADBannerViewInternalDelegate, ADInterstitialAdDelegate> {
    bool  _canAutoEnable;
    NSData * _currentSongData;
    NSData * _currentStationData;
    bool  _enabled;
    NSError * _lastSharedMediaPlayerVideoAdError;
    double  _nextInterstitialPresentationTime;
    double  _nextPrerollPlaybackTime;
    NSObject<OS_dispatch_queue> * _policyEngineQueue;
    NSMutableArray * _queuedCommands;
    ADInterstitialAd * _sharedInterstitialAd;
    bool  _sharedInterstitialAdIsInUse;
    NSString * _sharedInterstitialAuthenticationUserName;
    NSString * _sharedInterstitialSection;
    NSURL * _sharedInterstitialServerURL;
    ADBannerView * _sharedMediaPlayerVideoAd;
    bool  _sharedMediaPlayerVideoAdClaimed;
}

@property (nonatomic) bool canAutoEnable;
@property (nonatomic, retain) NSData *currentSongData;
@property (nonatomic, retain) NSData *currentStationData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSError *lastSharedMediaPlayerVideoAdError;
@property (nonatomic) double nextInterstitialPresentationTime;
@property (nonatomic) double nextPrerollPlaybackTime;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *policyEngineQueue;
@property (nonatomic, readonly) NSMutableArray *queuedCommands;
@property (nonatomic, retain) ADInterstitialAd *sharedInterstitialAd;
@property (nonatomic) bool sharedInterstitialAdIsInUse;
@property (nonatomic, copy) NSString *sharedInterstitialAuthenticationUserName;
@property (nonatomic, copy) NSString *sharedInterstitialSection;
@property (nonatomic, copy) NSURL *sharedInterstitialServerURL;
@property (nonatomic, retain) ADBannerView *sharedMediaPlayerVideoAd;
@property (nonatomic) bool sharedMediaPlayerVideoAdClaimed;
@property (readonly) Class superclass;

+ (id)sharedEngine;

- (void)_adSheetConnectionBootstrapped;
- (void)_enablePolicyEngineWithReason:(id)arg1;
- (void)_performWhenAdSheetConnectionEstablished:(id /* block */)arg1;
- (void)adSheetDidIdleDisablePolicyEngine;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewActionDidFinish:(id)arg1;
- (bool)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(bool)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)bannerViewWillLoadAd:(id)arg1;
- (bool)canAutoEnable;
- (bool)canPresentSharedInterstitialAdWithResultMessage:(id*)arg1;
- (bool)claimSharedMediaPlayerVideoAdWithError:(id*)arg1;
- (id)currentSongData;
- (id)currentStationData;
- (void)dealloc;
- (void)disablePolicyEngine;
- (void)enablePolicyEngine;
- (bool)enabled;
- (void)finishedPresentingSharedInterstitialAd;
- (id)init;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdDidLoad:(id)arg1;
- (void)interstitialAdDidUnload:(id)arg1;
- (id)lastSharedMediaPlayerVideoAdError;
- (double)nextInterstitialPresentationTime;
- (double)nextPrerollPlaybackTime;
- (id)policyEngineQueue;
- (id)queuedCommands;
- (void)relinquishSharedMediaPlayerVideoAd;
- (void)setCanAutoEnable:(bool)arg1;
- (void)setCurrentSongData:(id)arg1;
- (void)setCurrentStationData:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setLastSharedMediaPlayerVideoAdError:(id)arg1;
- (void)setNextInterstitialPresentationTime:(double)arg1;
- (void)setNextPrerollPlaybackTime:(double)arg1;
- (void)setPolicyEngineQueue:(id)arg1;
- (void)setSharedInterstitialAd:(id)arg1;
- (void)setSharedInterstitialAdIsInUse:(bool)arg1;
- (void)setSharedInterstitialAuthenticationUserName:(id)arg1;
- (void)setSharedInterstitialSection:(id)arg1;
- (void)setSharedInterstitialServerURL:(id)arg1;
- (void)setSharedMediaPlayerVideoAd:(id)arg1;
- (void)setSharedMediaPlayerVideoAdClaimed:(bool)arg1;
- (id)sharedInterstitialAd;
- (bool)sharedInterstitialAdIsInUse;
- (id)sharedInterstitialAuthenticationUserName;
- (id)sharedInterstitialSection;
- (id)sharedInterstitialServerURL;
- (id)sharedMediaPlayerVideoAd;
- (void)sharedMediaPlayerVideoAdActionDidFinish;
- (bool)sharedMediaPlayerVideoAdClaimed;
- (void)sharedMediaPlayerVideoAdDidFailToReceiveAdWithError:(id)arg1;
- (void)sharedMediaPlayerVideoAdDidLoad;
- (void)sharedMediaPlayerVideoAdWillLoad;

@end
