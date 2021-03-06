/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCyclerPrimaryDeviceCoordinator : NSObject {
    NSMutableArray * _connections;
    <WBSCyclerPrimaryDeviceCoordinatorDelegate> * _delegate;
    unsigned long long  _expectedNumberOfSecondaryDevices;
    NSObject<OS_dispatch_queue> * _queue;
    WBSSocketServer * _server;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property <WBSCyclerPrimaryDeviceCoordinatorDelegate> *delegate;

- (void).cxx_destruct;
- (id)_descriptionForErrorCode:(long long)arg1;
- (void)_didConnectToAllSecondaryDevices;
- (void)_didEncounterError:(id)arg1;
- (void)_didReceiveData:(id)arg1 fromSecondaryDevice:(unsigned long long)arg2;
- (void)_didReceivePortAssignment;
- (id)_errorWithCode:(long long)arg1;
- (void)_handleConnection:(id)arg1;
- (void)_timeoutTimerDidFire;
- (id)delegate;
- (id)init;
- (void)sendData:(id)arg1 toSecondaryDevice:(unsigned long long)arg2;
- (void)sendDataToAllSecondaryDevices:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startCoordinatingWithExpectedNumberOfSecondaryDevices:(unsigned long long)arg1 timeout:(double)arg2;

@end
