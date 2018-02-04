/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryRelaySetupEvent : HMDLogEvent <HMDAWDLogEvent> {
    unsigned long long  _actionType;
    HMDAccessory * _hmdAccessory;
}

@property (nonatomic, readonly) unsigned long long actionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDAccessory *hmdAccessory;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)relaySetupEventWithActionType:(unsigned long long)arg1 hmdAccessory:(id)arg2;
+ (id)stringForActionType:(unsigned long long)arg1;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (unsigned long long)actionType;
- (id)hmdAccessory;
- (id)initWithActionType:(unsigned long long)arg1 hmdAccessory:(id)arg2;
- (id)metricForAWD;

@end
