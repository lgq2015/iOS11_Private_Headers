/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKCloudServiceController : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    unsigned long long  _cloudServiceCapability;
    bool  _hasValidCloudServiceCapability;
}

+ (long long)authorizationStatus;
+ (void)requestAuthorization:(id /* block */)arg1;

- (void)_accountStoreDidChangeNotification;
- (void)_handleInvalidation;
- (void)_playbackCapabilitiesDidChangeNotification;
- (void)_storefrontDidChangeNotification;
- (void)_updateCapabilitiesWithResponse:(id)arg1 postNotification:(bool)arg2;
- (void)dealloc;
- (id)init;
- (void)requestCapabilitiesWithCompletionHandler:(id /* block */)arg1;
- (void)requestPersonalizationTokenForClientToken:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestStorefrontCountryCodeWithCompletionHandler:(id /* block */)arg1;
- (void)requestStorefrontIdentifierWithCompletionHandler:(id /* block */)arg1;
- (void)requestUserTokenForDeveloperToken:(id)arg1 completionHandler:(id /* block */)arg2;

@end
