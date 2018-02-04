/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUInterstitialPage : NSObject <ADInterstitialAdDelegate, NUPage> {
    NSString * _identifier;
    ADInterstitialAd * _interstitial;
    id /* block */  _unloadBlock;
}

@property (nonatomic, readonly) bool allowNeighboringAdvertising;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) ADInterstitialAd *interstitial;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unloadBlock;

- (void).cxx_destruct;
- (void)activityProvider:(id /* block */)arg1;
- (bool)allowNeighboringAdvertising;
- (id)identifier;
- (id)initWithInterstitial:(id)arg1;
- (id)interstitial;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdDidLoad:(id)arg1;
- (void)interstitialAdDidUnload:(id)arg1;
- (void)onUnload:(id /* block */)arg1;
- (unsigned long long)pageNextAction;
- (void)pageStyling:(id /* block */)arg1;
- (void)prepare;
- (void)setUnloadBlock:(id /* block */)arg1;
- (id /* block */)unloadBlock;
- (void)unprepare;
- (id)viewController;

@end
