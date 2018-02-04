/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSignificantTimeEvent : HMDTimeEvent <HMFDumpState, HMFLogging, HMFMessageReceiver, NSSecureCoding> {
    NSDateComponents * _offset;
    NSString * _significantEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) NSDateComponents *offset;
@property (nonatomic, retain) NSString *significantEvent;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleUpdateRequest:(id)arg1;
- (id)_nextTimerDate;
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)createPayload;
- (id)description;
- (id)emptyModelObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModel:(id)arg1 home:(id)arg2;
- (id)metricData;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (id)offset;
- (void)setOffset:(id)arg1;
- (void)setSignificantEvent:(id)arg1;
- (id)significantEvent;

@end
