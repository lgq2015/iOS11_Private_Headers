/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AALoginPluginManager : NSObject {
    NSArray * _allowedPluginBundleIDs;
    <AASetupAssistantDelegateService> * _idsPlugin;
    NSObject<OS_dispatch_queue> * _pluginNotificationQueue;
    NSArray * _plugins;
    bool  _shouldSkipiTunesPlugin;
    bool  _shouldStashLoginResponse;
}

@property (nonatomic) bool shouldSkipiTunesPlugin;
@property (nonatomic) bool shouldStashLoginResponse;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_createLoginContextForAppleID:(id)arg1 rawPassword:(id)arg2 loginResponse:(id)arg3;
- (id)_idsPlugin;
- (id)_loadPluginsLimitedToBundleIDs:(id)arg1;
- (bool)_notifyServicesOfLoginResponse:(id)arg1 forAppleID:(id)arg2 password:(id)arg3 rawPassword:(id)arg4;
- (id)_plugins;
- (id)collectParametersForIdentityEstablishmentRequest;
- (id)collectParametersForLoginRequest;
- (id)init;
- (void)notifyServicesOfLoginResponse:(id)arg1 forAppleID:(id)arg2 password:(id)arg3 completion:(id /* block */)arg4;
- (void)notifyServicesOfLoginResponse:(id)arg1 forAppleID:(id)arg2 password:(id)arg3 rawPassword:(id)arg4 completion:(id /* block */)arg5;
- (void)restrictToPluginBundleIDs:(id)arg1;
- (void)setShouldSkipiTunesPlugin:(bool)arg1;
- (void)setShouldStashLoginResponse:(bool)arg1;
- (bool)shouldSkipiTunesPlugin;
- (bool)shouldStashLoginResponse;
- (void)unstashLoginResponse;

@end
