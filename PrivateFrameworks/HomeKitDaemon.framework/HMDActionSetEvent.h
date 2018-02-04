/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDActionSetEvent : HMDLogEvent <HMDAWDLogEvent> {
    NSUUID * _actionSetUUID;
    NSString * _bundleId;
    unsigned int  _numAccessories;
    NSUUID * _transactionId;
    unsigned long long  _triggerSource;
}

@property (nonatomic, readonly) NSUUID *actionSetUUID;
@property (nonatomic, readonly) NSString *bundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int numAccessories;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *transactionId;
@property (nonatomic, readonly) unsigned long long triggerSource;

+ (id)actionSetTriggered:(id)arg1 source:(unsigned long long)arg2 numAccessories:(unsigned int)arg3 bundleId:(id)arg4 transactionId:(id)arg5;
+ (void)initialize;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)actionSetUUID;
- (id)bundleId;
- (id)initWithActionSet:(id)arg1 source:(unsigned long long)arg2 numAccessories:(unsigned int)arg3 bundleId:(id)arg4 transactionId:(id)arg5;
- (id)metricForAWD;
- (unsigned int)numAccessories;
- (id)transactionId;
- (unsigned long long)triggerSource;

@end
