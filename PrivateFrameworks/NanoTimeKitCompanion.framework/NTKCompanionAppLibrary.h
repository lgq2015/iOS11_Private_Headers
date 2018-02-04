/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCompanionAppLibrary : NSObject <LSApplicationWorkspaceObserverProtocol, NTKCompanionAppDelegate> {
    NSMutableArray * _allApps;
    NSHashTable * _changeObservers;
    NRDevice * _device;
    NSArray * _firstPartyApps;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSObject<OS_dispatch_queue> * _observerCallbackQueue;
    NSMutableArray * _thirdPartyApps;
    NSObject<OS_dispatch_queue> * _updateProcessingQueue;
}

@property (nonatomic, retain) NSMutableArray *allApps;
@property (nonatomic, retain) NSHashTable *changeObservers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NRDevice *device;
@property (nonatomic, retain) NSArray *firstPartyApps;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *observerCallbackQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *thirdPartyApps;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *updateProcessingQueue;

+ (id)sharedAppLibrary;

- (void).cxx_destruct;
- (void)_activeDeviceChanged;
- (void)_load;
- (void)_loadApps;
- (void)_loadThirdPartyApps;
- (void)_notifyAppAdded:(id)arg1;
- (void)_notifyAppIconUpdated:(id)arg1;
- (void)_notifyAppRemoved:(id)arg1;
- (void)_notifyAppUpdated:(id)arg1;
- (void)_queue_loadApps;
- (void)addObserver:(id)arg1;
- (id)allApps;
- (void)applicationStateDidChange:(id)arg1;
- (id)changeObservers;
- (void)companionAppUpdatedIcon:(id)arg1;
- (void)companionAppWasUpdated:(id)arg1;
- (void)dealloc;
- (id)device;
- (id)firstPartyApps;
- (id)init;
- (id)internalQueue;
- (id)observerCallbackQueue;
- (void)removeObserver:(id)arg1;
- (void)setAllApps:(id)arg1;
- (void)setChangeObservers:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setFirstPartyApps:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setObserverCallbackQueue:(id)arg1;
- (void)setThirdPartyApps:(id)arg1;
- (void)setUpdateProcessingQueue:(id)arg1;
- (id)thirdPartyApps;
- (id)updateProcessingQueue;

@end
