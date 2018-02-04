/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaAccessory : HMDAccessory <HMFLogging> {
    HMDMediaAccessoryAdvertisement * _advertisement;
    HMDMediaProfile * _mediaProfile;
}

@property (readonly, copy) HMDMediaAccessoryAdvertisement *advertisement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDMediaProfile *mediaProfile;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAdvertisement:(id)arg1;
- (id)advertisement;
- (void)configure:(id)arg1 msgDispatcher:(id)arg2 accessoryConfigureGroup:(id)arg3;
- (id)dumpSimpleState;
- (id)dumpState;
- (void)handleUpdatedAdvertisement:(id)arg1;
- (void)handleUpdatedPassword:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransaction:(id)arg1 home:(id)arg2;
- (id)mediaProfile;
- (void)removeAdvertisement:(id)arg1;
- (void)setAdvertisement:(id)arg1;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;

@end
