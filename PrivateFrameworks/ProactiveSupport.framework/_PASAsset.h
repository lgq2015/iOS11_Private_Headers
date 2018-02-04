/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASAsset : NSObject <_PASAssetProtocol> {
    unsigned long long  _bestAssetVersionObserved;
    ASAsset * _bestAvailableAsset;
    unsigned long long  _bestAvailableVersion;
    NSString * _bundleIdentifier;
    unsigned long long  _compatibilityVersion;
    NSString * _defaultBundlePath;
    unsigned long long  _defaultBundleVersion;
    int  _installNotificationToken;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    int  _metadataNotificationToken;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSMutableDictionary * _overrides;
    NSDictionary * _requiredMobileAssetProperties;
    _PASNotificationTracker * _updateNotificationTracker;
}

@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, readonly) unsigned long long assetVersion;
@property (nonatomic, readonly) unsigned long long bestAssetVersionObserved;
@property (nonatomic, readonly) unsigned long long compatibilityVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assetDescription;
- (id)_initWithBundleIdentifier:(id)arg1 defaultBundlePath:(id)arg2 compatibilityVersion:(unsigned long long)arg3 matchingKeysAndValues:(id)arg4 notificationQueue:(id)arg5 enableAssetUpdates:(bool)arg6;
- (void)_issueUpdateNotificationsWithCallback:(id /* block */)arg1;
- (void)_loadDefaultBundleVersion;
- (void)_updateAssetMetadata;
- (void)addOverridePath:(id)arg1 forResource:(id)arg2 ofType:(id)arg3;
- (id)assetType;
- (unsigned long long)assetVersion;
- (unsigned long long)bestAssetVersionObserved;
- (id)bundlePath;
- (void)callAssetUpdateHandlers;
- (void)clearOverrides;
- (unsigned long long)compatibilityVersion;
- (void)dealloc;
- (bool)deregisterUpdateHandlerAsyncWithToken:(id)arg1;
- (bool)deregisterUpdateHandlerWithToken:(id)arg1;
- (id)init;
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4;
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 enableAssetUpdates:(bool)arg5;
- (void)invokeWithBundleOverride:(id)arg1 block:(id /* block */)arg2;
- (id)pathForResourceWithName:(id)arg1 extension:(id)arg2;
- (id)pathForResourceWithName:(id)arg1 extension:(id)arg2 assetVersion:(unsigned long long*)arg3;
- (id)pathForResourceWithNameAndExtension:(struct _PASTuple2 { Class x1; }*)arg1;
- (id)pathForResourceWithNameAndExtension:(struct _PASTuple2 { Class x1; }*)arg1 assetVersion:(unsigned long long*)arg2;
- (id)pathsForResourcesWithNames:(id)arg1;
- (id)pathsForResourcesWithNames:(id)arg1 assetVersion:(unsigned long long*)arg2;
- (id)registerUpdateHandler:(id /* block */)arg1;
- (void)setBundlePath:(id)arg1;

@end
