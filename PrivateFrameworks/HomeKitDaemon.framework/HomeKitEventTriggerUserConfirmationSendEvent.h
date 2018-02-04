/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HomeKitEventTriggerUserConfirmationSendEvent : HMDLogEvent <HMDAWDLogEvent> {
    AWDHomeKitEventTriggerUserConfirmationSend * _metric;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AWDHomeKitEventTriggerUserConfirmationSend *metric;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)initWithSessionID:(id)arg1;
- (id)metric;
- (id)metricForAWD;

@end
