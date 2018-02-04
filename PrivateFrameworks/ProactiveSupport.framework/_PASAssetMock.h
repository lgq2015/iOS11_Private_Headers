/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASAssetMock : NSObject <_PASAssetProtocol> {
    NSString * _assetType;
    unsigned long long  _assetVersion;
    unsigned long long  _bestAssetVersionObserved;
    unsigned long long  _compatibilityVersion;
    NSDictionary * _matchingKeysAndValues;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSString * _resourceBasePath;
    _PASNotificationTracker * _updateNotificationTracker;
}

@property (nonatomic, retain) NSString *assetType;
@property (nonatomic) unsigned long long assetVersion;
@property (nonatomic) unsigned long long bestAssetVersionObserved;
@property (nonatomic) unsigned long long compatibilityVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *matchingKeysAndValues;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetType;
- (unsigned long long)assetVersion;
- (unsigned long long)bestAssetVersionObserved;
- (unsigned long long)compatibilityVersion;
- (bool)deregisterUpdateHandlerAsyncWithToken:(id)arg1;
- (bool)deregisterUpdateHandlerWithToken:(id)arg1;
- (id)init;
- (id)initWithResourceBasepath:(id)arg1 matchingKeysAndValues:(id)arg2 notificationQueue:(id)arg3;
- (id)matchingKeysAndValues;
- (id)pathForResourceWithName:(id)arg1 extension:(id)arg2;
- (id)registerUpdateHandler:(id /* block */)arg1;
- (void)setAssetType:(id)arg1;
- (void)setAssetVersion:(unsigned long long)arg1;
- (void)setBestAssetVersionObserved:(unsigned long long)arg1;
- (void)setCompatibilityVersion:(unsigned long long)arg1;
- (void)triggerUpdateNotifications;

@end
