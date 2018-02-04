/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServer : HMFObject {
    NSArray * _accessories;
    NSNumber * _category;
    NSObject<OS_dispatch_queue> * _clientQueue;
    unsigned long long  _configNumber;
    <HAPAccessoryServerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _hasPairings;
    NSString * _identifier;
    bool  _incompatibleUpdate;
    NSObject<OS_dispatch_queue> * _internalDelegateQueue;
    NSHashTable * _internalDelegates;
    <HAPKeyStore> * _keyStore;
    long long  _linkType;
    NSString * _name;
    HAPAccessory * _primaryAccessory;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    bool  _reachable;
    bool  _securitySessionOpen;
    NSData * _setupHash;
    bool  _supportsTimedWrite;
    HMFVersion * _version;
}

@property (nonatomic, copy) NSArray *accessories;
@property (nonatomic, copy) NSNumber *category;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) unsigned long long configNumber;
@property (readonly) <HAPAccessoryServerDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) HAPDeviceID *deviceID;
@property (nonatomic) bool hasPairings;
@property (nonatomic, copy) NSString *identifier;
@property (getter=isIncompatibleUpdate, nonatomic) bool incompatibleUpdate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalDelegateQueue;
@property (nonatomic, readonly) NSHashTable *internalDelegates;
@property (nonatomic, readonly) <HAPKeyStore> *keyStore;
@property (nonatomic, readonly) long long linkType;
@property (nonatomic, copy) NSString *name;
@property (getter=isPaired, nonatomic, readonly) bool paired;
@property (nonatomic, retain) HAPAccessory *primaryAccessory;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (getter=isReachable, nonatomic) bool reachable;
@property (getter=isSecuritySessionOpen) bool securitySessionOpen;
@property (nonatomic, copy) NSData *setupHash;
@property (nonatomic) bool supportsTimedWrite;
@property (copy) HMFVersion *version;

+ (bool)isAccessoryServerWithIdentifierPaired:(id)arg1 keyStore:(id)arg2;

- (void).cxx_destruct;
- (id)accessories;
- (void)addInternalDelegate:(id)arg1;
- (void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)category;
- (id)clientQueue;
- (unsigned long long)configNumber;
- (void)continuePairingAfterAuthPrompt;
- (id)delegate;
- (id)delegateQueue;
- (id)deviceID;
- (void)discoverAccessories;
- (void)enableEvents:(bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(id /* block */)arg3 queue:(id)arg4;
- (void)enumerateInternalDelegatesUsingBlock:(id /* block */)arg1;
- (void)handleUpdatesForCharacteristics:(id)arg1 stateNumber:(id)arg2;
- (bool)hasPairings;
- (id)identifier;
- (void)identifyWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithKeystore:(id)arg1;
- (id)internalDelegateQueue;
- (id)internalDelegates;
- (bool)isIncompatibleUpdate;
- (bool)isPaired;
- (bool)isReachable;
- (bool)isSecuritySessionOpen;
- (id)keyStore;
- (long long)linkType;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)matchesSetupID:(id)arg1;
- (id)name;
- (void)notifyDelegateUpdatedCategory:(id)arg1;
- (void)notifyDelegateUpdatedHasPairings:(bool)arg1;
- (void)notifyDelegateUpdatedName:(id)arg1;
- (id)primaryAccessory;
- (id)propertyQueue;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)reconfirm;
- (void)removeInternalDelegate:(id)arg1;
- (void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (bool)requiresTimedWrite:(id)arg1;
- (void)setAccessories:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setConfigNumber:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setHasPairings:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIncompatibleUpdate:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPrimaryAccessory:(id)arg1;
- (void)setReachable:(bool)arg1;
- (void)setSecuritySessionOpen:(bool)arg1;
- (void)setSetupHash:(id)arg1;
- (void)setSupportsTimedWrite:(bool)arg1;
- (void)setVersion:(id)arg1;
- (id)setupHash;
- (void)startPairing;
- (bool)stopPairingWithError:(id*)arg1;
- (bool)supportsTimedWrite;
- (bool)tryPairingPassword:(id)arg1 error:(id*)arg2;
- (id)version;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;

@end
