/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBLEBroadcastEventReceived : HMDLogEvent <HMDAWDLogEvent> {
    HMDAccessory * _accessory;
    bool  _hasExpectedGSN;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasExpectedGSN;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)broadcastEventFromAccessory:(id)arg1 withExpectedGSN:(bool)arg2;
+ (void)initialize;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)accessory;
- (bool)hasExpectedGSN;
- (id)initBroadcastEventFromAccessory:(id)arg1 withExpectedGSN:(bool)arg2;
- (id)metricForAWD;

@end
