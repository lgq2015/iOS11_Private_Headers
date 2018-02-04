/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXIAdComponentView : SXComponentView <ADBannerViewDelegate, SXAdDisplayInstructions, SXAdDocumentStateObserver, SXViewportChangeListener> {
    ADBannerView * _bannerView;
    id /* block */  _cancelHandler;
    SXIAdDebugView * _debugView;
    bool  _didUnloadBannerView;
    NSError * _error;
    NSString * _generatedOpportunityIdentifier;
    bool  _hasInvalidatedLayout;
    bool  _isDisplayingBannerView;
    bool  _isReceivingViewportChanges;
    int  _opportunityError;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewportSizeOnAdRequest;
}

@property (nonatomic, retain) ADBannerView *bannerView;
@property (nonatomic, copy) id /* block */ cancelHandler;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) SXIAdDebugView *debugView;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didUnloadBannerView;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSString *generatedOpportunityIdentifier;
@property (nonatomic) bool hasInvalidatedLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDisplayingBannerView;
@property (nonatomic) bool isReceivingViewportChanges;
@property (nonatomic) int opportunityError;
@property (readonly) Class superclass;
@property (nonatomic) struct CGSize { double x1; double x2; } viewportSizeOnAdRequest;

- (void).cxx_destruct;
- (void)adDocumentAppearing;
- (void)adDocumentDisappeared;
- (void)adSheetDisconnectedNotification:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)bannerView;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidLoadAd:(id)arg1;
- (void)cancelAdRequest;
- (id /* block */)cancelHandler;
- (void)dealloc;
- (id)debugView;
- (bool)didUnloadBannerView;
- (void)displayBannerView;
- (id)error;
- (id)generatedOpportunityIdentifier;
- (bool)hasInvalidatedLayout;
- (bool)hasRequestedBannerViewCurrentViewport;
- (id)initWithComponent:(id)arg1 configuration:(id)arg2 context:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5;
- (void)invalidateLayoutIfNeeded;
- (bool)isDisplayingBannerView;
- (bool)isReceivingViewportChanges;
- (void)layoutBannerView;
- (int)opportunityError;
- (void)presentComponent;
- (void)registerForViewportChanges;
- (void)removeBannerViewWithError:(id)arg1;
- (void)requestBannerView;
- (void)sendOpportunityEvent;
- (void)setBannerView:(id)arg1;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setDebugView:(id)arg1;
- (void)setDidUnloadBannerView:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setGeneratedOpportunityIdentifier:(id)arg1;
- (void)setHasInvalidatedLayout:(bool)arg1;
- (void)setIsDisplayingBannerView:(bool)arg1;
- (void)setIsReceivingViewportChanges:(bool)arg1;
- (void)setOpportunityError:(int)arg1;
- (void)setViewportSizeOnAdRequest:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldRegisterForViewportChanges;
- (bool)shouldRequestBannerView;
- (bool)shouldSendOpportunityEvent;
- (void)stopDisplayingAdWithError:(unsigned long long)arg1;
- (void)unloadBannerWithError:(id)arg1;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGSize { double x1; double x2; })viewportSizeOnAdRequest;
- (void)visibilityStateDidChangeFromState:(long long)arg1;

@end
