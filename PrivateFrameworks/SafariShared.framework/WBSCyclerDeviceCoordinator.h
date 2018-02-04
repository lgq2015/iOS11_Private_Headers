/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCyclerDeviceCoordinator : NSObject <WBSCyclerPrimaryDeviceCoordinatorDelegate, WBSCyclerSecondaryDeviceCoordinatorDelegate> {
    bool  _coordinating;
    <WBSCyclerDeviceCoordinatorDelegate> * _delegate;
    NSNumber * _numberOfSecondaryDevices;
    WBSCyclerPrimaryDeviceCoordinator * _primaryDeviceCoordinator;
    NSString * _primaryDeviceHost;
    unsigned long long  _primaryDevicePort;
    NSObject<OS_dispatch_queue> * _queue;
    WBSCyclerSecondaryDeviceCoordinator * _secondaryDeviceCoordinator;
}

@property (getter=isCoordinating) bool coordinating;
@property (readonly, copy) NSString *debugDescription;
@property <WBSCyclerDeviceCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *numberOfSecondaryDevices;
@property (getter=isPrimaryDevice, nonatomic, readonly) bool primaryDevice;
@property (nonatomic, readonly, copy) NSString *primaryDeviceAddress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)arg1;
- (void)_didEncounterError:(id)arg1;
- (void)_didFinishConnectingToDevices;
- (void)_didReceiveData:(id)arg1 reply:(id /* block */)arg2;
- (void)_didStartListeningAsPrimaryDeviceOnPort:(unsigned long long)arg1;
- (id)_errorWithCode:(long long)arg1;
- (id)_ipAddress;
- (bool)_parseAddress:(id)arg1 intoHost:(id*)arg2 port:(unsigned long long*)arg3;
- (id)_primaryDeviceAddressOnInternalQueue;
- (bool)_setPrimaryCyclerAddressOnInternalQueue:(id)arg1 error:(id*)arg2;
- (bool)_setSecondaryCyclerCountOnInternalQueue:(id)arg1 error:(id*)arg2;
- (id)delegate;
- (id)init;
- (bool)isCoordinating;
- (bool)isPrimaryDevice;
- (id)numberOfSecondaryDevices;
- (id)primaryDeviceAddress;
- (void)primaryDeviceCoordinator:(id)arg1 didEncounterError:(id)arg2;
- (void)primaryDeviceCoordinator:(id)arg1 didReceiveData:(id)arg2 fromSecondaryDevice:(unsigned long long)arg3;
- (void)primaryDeviceCoordinator:(id)arg1 didStartListeningForSecondaryDevicesOnPort:(unsigned long long)arg2;
- (void)primaryDeviceCoordinatorDidConnectToAllSecondaryDevices:(id)arg1;
- (void)secondaryDeviceCoordinator:(id)arg1 didEncounterError:(id)arg2;
- (void)secondaryDeviceCoordinator:(id)arg1 didReceiveDataFromPrimaryDevice:(id)arg2;
- (void)secondaryDeviceCoordinatorDidConnectToPrimaryDevice:(id)arg1;
- (void)sendData:(id)arg1;
- (void)setCoordinating:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setValue:(id)arg1 forConfigurationKey:(id)arg2 error:(id*)arg3;
- (void)startCoordinatingWithTimeout:(double)arg1;

@end
