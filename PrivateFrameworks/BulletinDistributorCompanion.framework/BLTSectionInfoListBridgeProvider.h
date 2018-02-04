/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTSectionInfoListBridgeProvider : NSObject <BLTSectionInfoListProvider, LSApplicationWorkspaceObserverProtocol> {
    <BLTSectionInfoListProviderDelegate> * _delegate;
    NSDate * _lastKnownBridgeSettingsChangeDate;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BLTSectionInfoListProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_loadOverridesChangedSince:(id)arg1;
- (void)_reloadUpdatedOverrides;
- (void)_reloadUpdatedOverridesWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (void)enableNotifications:(bool)arg1 sectionID:(id)arg2 mirror:(bool)arg3;
- (id)init;
- (void)reloadWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;

@end
