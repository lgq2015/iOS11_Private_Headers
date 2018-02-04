/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryProfile : HMFObject <HMDBulletinIdentifiers, HMFDumpState, HMFLogging, HMFMessageReceiver, NSSecureCoding> {
    HMDAccessory * _accessory;
    NSString * _logID;
    HMFMessageDispatcher * _msgDispatcher;
    NSArray * _services;
    NSUUID * _uniqueIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDAccessory *accessory;
@property (nonatomic, readonly, copy) NSString *contextID;
@property (nonatomic, readonly, copy) NSUUID *contextSPIUniqueIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly) NSArray *services;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_encodeWithCoder:(id)arg1;
- (id)accessory;
- (void)configureWithMessageDispatcher:(id)arg1;
- (id)contextID;
- (id)contextSPIUniqueIdentifier;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)logID;
- (id)logIdentifier;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (void)registerForMessages;
- (id)services;
- (id)uniqueIdentifier;
- (id)workQueue;

@end
