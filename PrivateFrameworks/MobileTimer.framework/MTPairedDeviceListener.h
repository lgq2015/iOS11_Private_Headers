/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTPairedDeviceListener : NSObject <MTAgentDiagnosticDelegate, MTAgentNotificationListener, MTSyncStatusProvider> {
    long long  _mode;
    NRDevice * _pairedDevice;
    bool  _pairedDeviceActive;
    unsigned int  _pairedDeviceVersion;
    <MTSyncService> * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long mode;
@property (nonatomic, retain) NRDevice *pairedDevice;
@property (nonatomic) bool pairedDeviceActive;
@property (nonatomic) unsigned int pairedDeviceVersion;
@property (nonatomic, retain) <MTSyncService> *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_registerForLocalNotifications;
- (void)_updateActiveDeviceInfo;
- (bool)activePairedDeviceExists;
- (void)deviceDidChangeVersionDarwinNotification;
- (void)deviceDidPairOrBecomeActiveNotification:(id)arg1;
- (void)deviceDidUnpairOrBecomeInactiveNotification:(id)arg1;
- (void)handleNotification:(id)arg1;
- (bool)handlesNotification:(id)arg1;
- (id)initWithMode:(long long)arg1 service:(id)arg2;
- (long long)mode;
- (id)pairedDevice;
- (bool)pairedDeviceActive;
- (unsigned int)pairedDeviceVersion;
- (void)printDiagnostics;
- (id)service;
- (void)setMode:(long long)arg1;
- (void)setPairedDevice:(id)arg1;
- (void)setPairedDeviceActive:(bool)arg1;
- (void)setPairedDeviceVersion:(unsigned int)arg1;
- (void)setService:(id)arg1;
- (bool)syncReady;

@end
