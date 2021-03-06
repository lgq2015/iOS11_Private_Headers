/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKFitnessMachineConnection : NSObject <HKFitnessMachineConnectionClientInterface> {
    unsigned long long  _connectionState;
    NSUUID * _currentSessionUUID;
    <_HKFitnessMachineConnectionDelegate> * _delegate;
    _HKFitnessMachine * _fitnessMachine;
    HKHealthStore * _healthStore;
    unsigned long long  _machineState;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) unsigned long long connectionState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_HKFitnessMachineConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _HKFitnessMachine *fitnessMachine;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long machineState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_clientQueue_deliverFailedWithError:(id)arg1;
- (void)_connectionInterruptedWithError:(id)arg1;
- (id)_initWithHealthStore:(id)arg1;
- (void)_registerClient;
- (void)_setConnectionState:(unsigned long long)arg1;
- (void)_setFitnessMachine:(id)arg1;
- (void)_setMachineState:(unsigned long long)arg1;
- (void)_simulateAccept;
- (void)_simulateDisconnect;
- (void)_simulateTapWithFitnessMachineType:(unsigned long long)arg1;
- (void)clientRemote_deliverConnectionChangedToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 fitnessMachineSessionUUID:(id)arg3 error:(id)arg4;
- (void)clientRemote_deliverDetectedNFC:(id)arg1;
- (void)clientRemote_deliverFailedWithError:(id)arg1;
- (void)clientRemote_deliverMachineChangedToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 fitnessMachineSessionUUID:(id)arg3 date:(id)arg4;
- (void)clientRemote_deliverMachineInformationUpdated:(id)arg1;
- (unsigned long long)connectionState;
- (id)currentSessionConfiguration;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)end;
- (void)endWithFitnessMachineSessionUUID:(id)arg1;
- (id)fitnessMachine;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)machineState;
- (void)markClientReady;
- (void)permitDataTransferWithFitnessMachineSessionUUID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)uuid;

@end
