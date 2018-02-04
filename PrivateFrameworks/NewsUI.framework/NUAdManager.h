/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUAdManager : NSObject <NUAdAnalyticsProvider, NUAdContextProvider, NUAdProvider> {
    NUAdStore * _adStore;
    <NUAdManagerConfigurationProvider> * _configurationProvider;
    <NUDevice> * _device;
}

@property (nonatomic, readonly) NUAdStore *adStore;
@property (nonatomic, readonly) <NUAdManagerConfigurationProvider> *configurationProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <NUDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)adForIdentifier:(id)arg1 contextProviders:(id)arg2 constructor:(id)arg3;
- (id)adStore;
- (id)adWithIdentifier:(id)arg1;
- (void)bannerViewDidLoad:(id)arg1;
- (void)bannerViewDidUnload:(id)arg1;
- (void)bannerViewForIdentifier:(id)arg1 contextProviders:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)configurationProvider;
- (id)contextForContextProviders:(id)arg1 keyedContextProviders:(id)arg2 constructor:(id)arg3;
- (id)defaultArticleDefinition;
- (id)defaultBodyDefinition;
- (id)defaultFeedMetadataDefinition;
- (id)defaultHeaderDefinition;
- (id)defaultRootDefinition;
- (id)device;
- (id)inArticleContextConstructor;
- (id)initWithConfigurationProvider:(id)arg1 device:(id)arg2;
- (id)interstitialContextConstructor;
- (void)interstitialViewForContextProviders:(id)arg1 contextProvidersWithKeys:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)interstitialViewForContextProviders:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)prerollBodyDefinition;
- (id)prerollContextConstructor;
- (void)prerollForContextProviders:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)prerollHeaderDefinition;
- (id)prerollRootDefinition;
- (void)videoAdForContextProviders:(id)arg1 constructor:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)videoInTodayHeaderDefinition;
- (id)videoInTodayMidrollBodyDefinition;
- (id)videoInTodayMidrollContextConstructor;
- (void)videoInTodayMidrollForContextProviders:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)videoInTodayMidrollRootDefinition;

@end
