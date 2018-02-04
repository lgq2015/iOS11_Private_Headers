/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HomeKitEventTriggerUserConfirmationReceiverSessionEvent : HMDLogEvent <HMDAWDLogEvent> {
    AWDHomeKitEventTriggerUserConfirmationReceiverSession * _metric;
    NSDate * _startTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AWDHomeKitEventTriggerUserConfirmationReceiverSession *metric;
@property (nonatomic, readonly) NSDate *startTime;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)initWithSessionID:(id)arg1;
- (id)metric;
- (id)metricForAWD;
- (id)startTime;

@end
