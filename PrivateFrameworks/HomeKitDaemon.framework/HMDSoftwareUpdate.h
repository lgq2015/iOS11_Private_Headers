/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSoftwareUpdate : HMFObject <HMDBackingStoreObjectProtocol, HMFMessageReceiver, HMFObject, NSSecureCoding> {
    HMDAccessory * _accessory;
    NSObject<OS_dispatch_queue> * _clientQueue;
    unsigned long long  _downloadSize;
    NSUUID * _identifier;
    HMFMessageDispatcher * _messageDispatcher;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    long long  _state;
    HMFSoftwareVersion * _version;
}

@property HMDAccessory *accessory;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long downloadSize;
@property (readonly) unsigned long long hash;
@property (copy) NSUUID *identifier;
@property (nonatomic, retain) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly, copy) HMDSoftwareUpdateModel *model;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) long long state;
@property (readonly) Class superclass;
@property (readonly, copy) HMFSoftwareVersion *version;

+ (id)modelNamespace;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)__init;
- (void)_handleUpdateState:(id)arg1;
- (id)accessory;
- (id)clientQueue;
- (void)configureWithAccessory:(id)arg1 messageDispatcher:(id)arg2;
- (unsigned long long)downloadSize;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)messageDestination;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)model;
- (id)propertyDescription;
- (id)propertyQueue;
- (void)registerForMessages;
- (void)setAccessory:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessageDispatcher:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (id)stateUpdateNotificationWithMessage:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
- (id)version;

@end
