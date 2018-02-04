/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesStoreInformation : NSObject {
    unsigned long long  _capabilities;
    NSMapTable * _changeHandlers;
    SKCloudServiceController * _cloudServiceController;
    bool  _hasUpdatedCapabilities;
    NSString * _storefrontIdentifier;
}

@property (readonly) unsigned long long capabilities;
@property (readonly, copy) NSString *storefrontIdentifier;

+ (unsigned long long)_convertCapabilities:(unsigned long long)arg1;
+ (id)_convertNewStorefrontIdentifier:(id)arg1;
+ (id)shared;

- (void).cxx_destruct;
- (void)_capabilitiesDidChangeNotification;
- (void)_notifyChangeHandlers;
- (void)_setCapabilities:(unsigned long long)arg1;
- (void)_setStorefrontIdentifier:(id)arg1;
- (void)_storefrontDidChangeNotification;
- (unsigned long long)capabilities;
- (id)init;
- (void)registerForStoreAvailablityChangesWithToken:(id)arg1 handler:(id /* block */)arg2;
- (id)storefrontIdentifier;
- (void)unregisterForStoreAvailablityChangesWithToken:(id)arg1;
- (unsigned long long)userStateForMediaStorefrontIdentifier:(id)arg1;

@end
