/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTAlarmStateSyncObject : MTSyncObject {
    NSArray * _alarms;
    MTAlarm * _sleepAlarm;
    NSDate * _stateModifiedDate;
}

@property (nonatomic, readonly) NSArray *alarms;
@property (nonatomic, readonly) MTAlarm *sleepAlarm;
@property (nonatomic, retain) NSDate *stateModifiedDate;

+ (id)alarmStateWithAlarms:(id)arg1 sleepAlarm:(id)arg2 lastModifiedDate:(id)arg3 changeType:(long long)arg4;
+ (id)createSYChangeFromProtobuffObject:(id)arg1 changeType:(long long)arg2;

- (void).cxx_destruct;
- (id)alarms;
- (id)allAlarms;
- (id)createProtobufWithOptions:(id)arg1;
- (id)description;
- (id)initWithAlarms:(id)arg1 sleepAlarm:(id)arg2 lastModifiedDate:(id)arg3 changeType:(long long)arg4;
- (id)lastModifiedDate;
- (id)objectIdentifier;
- (void)setStateModifiedDate:(id)arg1;
- (id)sleepAlarm;
- (id)stateModifiedDate;

@end
