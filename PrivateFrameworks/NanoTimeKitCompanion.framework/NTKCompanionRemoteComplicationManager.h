/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCompanionRemoteComplicationManager : NSObject <NTKComplicationCollectionObserver, NTKRemoteComplicationProvider> {
    NRDevice * _device;
    NSDictionary * _installedComplications;
    NTKComplicationCollection * _remoteComplications;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableDictionary * _syncedComplications;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NRDevice *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *installedComplications;
@property (nonatomic, retain) NTKComplicationCollection *remoteComplications;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *syncedComplications;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_activeDeviceChanged;
- (void)_appStartedInstall;
- (void)_fetchInstalledApps;
- (void)_load;
- (void)_reloadApps;
- (id)_safeComplications;
- (id)_safeInstalledComplications;
- (void)complicationCollection:(id)arg1 didRemoveSampleTemplatesForClient:(id)arg2;
- (void)complicationCollection:(id)arg1 didUpdateSampleTemplateForClient:(id)arg2;
- (void)complicationCollectionDidLoad:(id)arg1;
- (void)dealloc;
- (id)device;
- (void)enumerateEnabledVendorsForComplicationFamily:(long long)arg1 withBlock:(id /* block */)arg2;
- (id)init;
- (id)installedComplications;
- (id)localizedAppNameForClientIdentifier:(id)arg1;
- (id)remoteComplications;
- (id)serialQueue;
- (void)setDevice:(id)arg1;
- (void)setInstalledComplications:(id)arg1;
- (void)setRemoteComplications:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setSyncedComplications:(id)arg1;
- (id)syncedComplications;
- (bool)vendorExistsWithClientIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;

@end
