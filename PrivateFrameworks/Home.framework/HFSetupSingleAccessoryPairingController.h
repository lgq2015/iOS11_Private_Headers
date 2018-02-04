/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFSetupSingleAccessoryPairingController : NSObject <HFHomeObserver, HFSetupPairingController> {
    HFDiscoveredAccessory * _discoveredAccessoryToPair;
    HMHome * _home;
    NSSet * _pairedAccessories;
    NAFuture * _pairingFuture;
    NSHashTable * _pairingObservers;
    unsigned long long  _phase;
    NSDate * _phaseStartDate;
    HMSetupAccessoryDescription * _setupAccessoryDescription;
    <HMSetupRemoteService> * _setupRemoteService;
    HFSetupAccessoryResult * _setupResult;
    NSString * _statusDescription;
    NSString * _statusTitle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HFDiscoveredAccessory *discoveredAccessoryToPair;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) NSSet *pairedAccessories;
@property (nonatomic, retain) NAFuture *pairingFuture;
@property (nonatomic, retain) NSHashTable *pairingObservers;
@property (nonatomic) unsigned long long phase;
@property (nonatomic, retain) NSDate *phaseStartDate;
@property (nonatomic, readonly) HMSetupAccessoryDescription *setupAccessoryDescription;
@property (nonatomic) <HMSetupRemoteService> *setupRemoteService;
@property (nonatomic, retain) HFSetupAccessoryResult *setupResult;
@property (nonatomic, retain) NSString *statusDescription;
@property (nonatomic, retain) NSString *statusTitle;
@property (readonly) Class superclass;

+ (bool)supportsSetupPayloadRetry;

- (void).cxx_destruct;
- (void)_assertValidTransitionFromPhase:(unsigned long long)arg1 toPhase:(unsigned long long)arg2;
- (void)_failPairingWithDiscoveredAccessory:(id)arg1 error:(id)arg2;
- (void)_finishPairingWithDiscoveredAccessory:(id)arg1;
- (void)_tryPairing;
- (void)_updateStatusTextAndNotifyDelegate:(bool)arg1;
- (void)addPairingObserver:(id)arg1;
- (id)cancel;
- (id)discoveredAccessoryToPair;
- (id)home;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (id)initWithDiscoveredAccessory:(id)arg1 setupRemoteService:(id)arg2 setupAccessoryDescription:(id)arg3;
- (id)pairedAccessories;
- (id)pairingFuture;
- (id)pairingObservers;
- (unsigned long long)phase;
- (id)phaseStartDate;
- (void)removePairingObserver:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setPairedAccessories:(id)arg1;
- (void)setPairingFuture:(id)arg1;
- (void)setPairingObservers:(id)arg1;
- (void)setPhase:(unsigned long long)arg1;
- (void)setPhaseStartDate:(id)arg1;
- (void)setSetupRemoteService:(id)arg1;
- (void)setSetupResult:(id)arg1;
- (void)setStatusDescription:(id)arg1;
- (void)setStatusTitle:(id)arg1;
- (id)setupAccessoryDescription;
- (id)setupRemoteService;
- (id)setupResult;
- (void)startWithHome:(id)arg1;
- (id)statusDescription;
- (id)statusTitle;

@end
