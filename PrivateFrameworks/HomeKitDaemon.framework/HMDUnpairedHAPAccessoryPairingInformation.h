/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUnpairedHAPAccessoryPairingInformation : HMFObject {
    NSString * _accessoryName;
    NSUUID * _accessoryUUID;
    id /* block */  _addAccessoryCompletionHandler;
    id /* block */  _addAccessoryProgressHandler;
    bool  _allowAddUnauthenticatedAccessory;
    NSString * _homeName;
    long long  _linkType;
    HMFTimer * _pairingInterruptionTimer;
    HMFTimer * _pairingRetryTimer;
    bool  _provideNetworkCredentialsToAccessory;
    HMFTimer * _reconfirmTimer;
    NSString * _setupCode;
    bool  _setupCodeProvided;
    id /* block */  _setupCodeProviderCompletionHandler;
    NSString * _setupID;
}

@property (nonatomic, retain) NSString *accessoryName;
@property (nonatomic, retain) NSUUID *accessoryUUID;
@property (nonatomic, copy) id /* block */ addAccessoryCompletionHandler;
@property (nonatomic, copy) id /* block */ addAccessoryProgressHandler;
@property (nonatomic) bool allowAddUnauthenticatedAccessory;
@property (nonatomic, retain) NSString *homeName;
@property (nonatomic) long long linkType;
@property (nonatomic, retain) HMFTimer *pairingInterruptionTimer;
@property (nonatomic, retain) HMFTimer *pairingRetryTimer;
@property (nonatomic) bool provideNetworkCredentialsToAccessory;
@property (nonatomic, retain) HMFTimer *reconfirmTimer;
@property (nonatomic, retain) NSString *setupCode;
@property (nonatomic) bool setupCodeProvided;
@property (nonatomic, copy) id /* block */ setupCodeProviderCompletionHandler;
@property (nonatomic, retain) NSString *setupID;

- (void).cxx_destruct;
- (id)accessoryName;
- (id)accessoryUUID;
- (id /* block */)addAccessoryCompletionHandler;
- (id /* block */)addAccessoryProgressHandler;
- (bool)allowAddUnauthenticatedAccessory;
- (id)description;
- (id)homeName;
- (id)initWithAccessoryDescription:(id)arg1 linkType:(long long)arg2 completionHandler:(id /* block */)arg3 progressHandler:(id /* block */)arg4;
- (id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 linkType:(long long)arg3 homeName:(id)arg4 setupCode:(id)arg5 completionHandler:(id /* block */)arg6 setupCodeProvider:(id /* block */)arg7;
- (long long)linkType;
- (id)pairingInterruptionTimer;
- (id)pairingRetryTimer;
- (bool)provideNetworkCredentialsToAccessory;
- (id)reconfirmTimer;
- (void)setAccessoryName:(id)arg1;
- (void)setAccessoryUUID:(id)arg1;
- (void)setAddAccessoryCompletionHandler:(id /* block */)arg1;
- (void)setAddAccessoryProgressHandler:(id /* block */)arg1;
- (void)setAllowAddUnauthenticatedAccessory:(bool)arg1;
- (void)setHomeName:(id)arg1;
- (void)setLinkType:(long long)arg1;
- (void)setPairingInterruptionTimer:(id)arg1;
- (void)setPairingRetryTimer:(id)arg1;
- (void)setProvideNetworkCredentialsToAccessory:(bool)arg1;
- (void)setReconfirmTimer:(id)arg1;
- (void)setSetupCode:(id)arg1;
- (void)setSetupCodeProvided:(bool)arg1;
- (void)setSetupCodeProviderCompletionHandler:(id /* block */)arg1;
- (void)setSetupID:(id)arg1;
- (id)setupCode;
- (bool)setupCodeProvided;
- (id /* block */)setupCodeProviderCompletionHandler;
- (id)setupID;

@end
