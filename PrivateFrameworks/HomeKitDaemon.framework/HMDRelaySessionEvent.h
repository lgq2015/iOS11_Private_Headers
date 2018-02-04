/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRelaySessionEvent : HMDLogEvent <HMDAWDLogEvent> {
    unsigned long long  _actionType;
    long long  _statusCode;
}

@property (nonatomic, readonly) unsigned long long actionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long statusCode;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)relaySessionEventWithActionType:(unsigned long long)arg1;
+ (id)stringForActionType:(unsigned long long)arg1;
+ (id)uuid;

- (unsigned int)AWDMessageType;
- (unsigned long long)actionType;
- (id)initWithActionType:(unsigned long long)arg1;
- (id)metricForAWD;
- (void)setStatusCode:(long long)arg1;
- (long long)statusCode;

@end
