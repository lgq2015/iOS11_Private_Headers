/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUnpairedHAPAccessory : HMDUnassociatedAccessory {
    NSMutableArray * _accessoryServers;
    long long  _certificationStatus;
    NSData * _setupHash;
}

@property (readonly, copy) NSArray *accessoryServers;
@property (nonatomic) long long certificationStatus;
@property (nonatomic, retain) NSData *setupHash;
@property (nonatomic, readonly) unsigned long long transportTypes;

- (void).cxx_destruct;
- (id)accessoryServers;
- (void)addAccessoryServer:(id)arg1;
- (long long)associationOptions;
- (long long)certificationStatus;
- (id)descriptionForTransportTypes;
- (id)descriptionWithPointer:(bool)arg1 additionalDescription:(id)arg2;
- (id)dumpDescription;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBTLELink;
- (bool)hasIPLink;
- (void)identifyWithCompletionHandler:(id /* block */)arg1;
- (id)initWithAccessoryServer:(id)arg1 messageDispatcher:(id)arg2;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 messageDispatcher:(id)arg4;
- (bool)isReachable;
- (id)preferredAccessoryServer;
- (void)removeAccessoryServer:(id)arg1;
- (void)setCertificationStatus:(long long)arg1;
- (void)setSetupHash:(id)arg1;
- (id)setupHash;
- (unsigned long long)transportTypes;

@end
