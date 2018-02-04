/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@interface ATConnection : NSObject <ATConnectionDelegate> {
    bool  _atcRunning;
    int  _atcRunningToken;
    NSObject<ATConnectionDelegate> * _delegate;
    bool  _registerForStatus;
    NSMutableArray * _registeredDataclasses;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<ATConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleDisconnect;
- (void)_sendStatusRegistration;
- (void)cancelSync;
- (void)clearSyncData;
- (void)connection:(id)arg1 updatedAssets:(id)arg2;
- (void)connection:(id)arg1 updatedProgress:(id)arg2;
- (void)connectionWasInterrupted:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)getAssetMetrics;
- (bool)getDataRestoreIsComplete;
- (id)init;
- (void)initiateAssetDownloadSessionsWithCompletion:(id /* block */)arg1;
- (bool)isSyncing:(bool*)arg1 automatically:(bool*)arg2 wirelessly:(bool*)arg3;
- (void)keepATCAlive:(bool)arg1;
- (void)lowBatteryNotification;
- (void)openDeviceMessageLink;
- (void)prioritizeAsset:(id)arg1 forDataclass:(id)arg2;
- (void)purgePartialAsset:(id)arg1 forDataclass:(id)arg2;
- (void)registerForAssetProgressForDataclass:(id)arg1;
- (void)registerForStatus;
- (void)requestKeybagSyncToPairedDevice;
- (void)requestSyncForLibrary:(id)arg1;
- (void)requestSyncForPairedDeviceWithPriority:(int)arg1;
- (id)restoreDeviceWithIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)unregisterForStatus;

@end
