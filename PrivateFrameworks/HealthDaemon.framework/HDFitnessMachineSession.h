/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessMachineSession : NSObject {
    unsigned long long  _connectionState;
    bool  _dataTransferPermitted;
    _HKFitnessMachine * _fitnessMachine;
    NSUUID * _fitnessMachineSessionUUID;
    HKHealthService * _healthService;
    unsigned long long  _healthServiceSessionIdentifier;
    HDEnhancedFTMSData * _initialEnhancedFTMSData;
    HDFitnessMachineDataCharacteristicBase * _initialMachineData;
    HDFitnessMachineStatus * _initialMachineStatus;
    NSDate * _machineStartDate;
    unsigned long long  _machineState;
    NSDate * _machineStateUpdateDate;
    NSData * _nfcSessionIDData;
    NSArray * _oobDataArray;
    HDHealthServiceOOBInfo * _oobInfo;
    long long  _serviceStatus;
    bool  _waitingOnActivityType;
    bool  _waitingOnBluetoothConnection;
    bool  _waitingOnInitialMachineData;
    bool  _waitingOnInitialMachineStatus;
    bool  _waitingOnMFA;
}

@property (nonatomic) unsigned long long connectionState;
@property (nonatomic, readonly) bool dataTransferPermitted;
@property (nonatomic, readonly) bool dataTransferRequirementsComplete;
@property (nonatomic, retain) _HKFitnessMachine *fitnessMachine;
@property (nonatomic, readonly) NSUUID *fitnessMachineSessionUUID;
@property (nonatomic, retain) HKHealthService *healthService;
@property (nonatomic) unsigned long long healthServiceSessionIdentifier;
@property (nonatomic, retain) HDEnhancedFTMSData *initialEnhancedFTMSData;
@property (nonatomic, retain) HDFitnessMachineDataCharacteristicBase *initialMachineData;
@property (nonatomic, retain) HDFitnessMachineStatus *initialMachineStatus;
@property (nonatomic, retain) NSDate *machineStartDate;
@property (nonatomic) unsigned long long machineState;
@property (nonatomic, retain) NSDate *machineStateUpdateDate;
@property (nonatomic, readonly) NSArray *nfcConnectionHandoverData;
@property (nonatomic, readonly) NSString *nfcSessionID;
@property (nonatomic, readonly) NSData *nfcSessionIDData;
@property (nonatomic, retain) NSArray *oobDataArray;
@property (nonatomic, retain) HDHealthServiceOOBInfo *oobInfo;
@property (nonatomic) long long serviceStatus;
@property (nonatomic, readonly) bool waitingOnActivityType;
@property (nonatomic, readonly) bool waitingOnBluetoothConnection;
@property (nonatomic) bool waitingOnInitialMachineData;
@property (nonatomic) bool waitingOnInitialMachineStatus;
@property (nonatomic, readonly) bool waitingOnMFA;

- (void).cxx_destruct;
- (id)_initWithFitnessMachineSessionUUID:(id)arg1;
- (id)_oobDataArrayWithRandomValue:(id)arg1 confirmationValue:(id)arg2 sessionID:(id)arg3 btAddress:(id)arg4;
- (unsigned long long)connectionState;
- (bool)dataTransferPermitted;
- (bool)dataTransferRequirementsComplete;
- (id)fitnessMachine;
- (id)fitnessMachineSessionUUID;
- (id)healthService;
- (unsigned long long)healthServiceSessionIdentifier;
- (id)init;
- (id)initWithNFCSessionIDData:(id)arg1;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)initialEnhancedFTMSData;
- (id)initialMachineData;
- (id)initialMachineStatus;
- (id)machineStartDate;
- (unsigned long long)machineState;
- (id)machineStateUpdateDate;
- (void)markActivityTypeProvided;
- (void)markBluetoothConnectionComplete;
- (void)markDataTransferPermitted;
- (void)markMFAAuthenticated;
- (id)nfcConnectionHandoverData;
- (id)nfcSessionID;
- (id)nfcSessionIDData;
- (id)oobDataArray;
- (id)oobInfo;
- (long long)serviceStatus;
- (void)setConnectionState:(unsigned long long)arg1;
- (void)setFitnessMachine:(id)arg1;
- (void)setFitnessMachineName:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3;
- (void)setHealthService:(id)arg1;
- (void)setHealthServiceSessionIdentifier:(unsigned long long)arg1;
- (void)setInitialEnhancedFTMSData:(id)arg1;
- (void)setInitialMachineData:(id)arg1;
- (void)setInitialMachineStatus:(id)arg1;
- (void)setMachineStartDate:(id)arg1;
- (void)setMachineState:(unsigned long long)arg1;
- (void)setMachineStateUpdateDate:(id)arg1;
- (void)setOobDataArray:(id)arg1;
- (void)setOobInfo:(id)arg1;
- (void)setServiceStatus:(long long)arg1;
- (void)setWaitingOnInitialMachineData:(bool)arg1;
- (void)setWaitingOnInitialMachineStatus:(bool)arg1;
- (bool)waitingOnActivityType;
- (bool)waitingOnBluetoothConnection;
- (bool)waitingOnInitialMachineData;
- (bool)waitingOnInitialMachineStatus;
- (bool)waitingOnMFA;

@end
