/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTAlarmSyncObject : MTSyncObject {
    MTAlarm * _alarm;
}

@property (nonatomic, readonly) MTAlarm *alarm;

+ (id)changeWithAlarm:(id)arg1 changeType:(long long)arg2;
+ (id)createMTAlarmFromMTPBAlarm:(id)arg1;
+ (id)createMTPBAlarmFromMTAlarm:(id)arg1;
+ (id)createSYChangeFromProtobuffObject:(id)arg1 changeType:(long long)arg2;

- (void).cxx_destruct;
- (id)alarm;
- (id)createProtobufWithOptions:(id)arg1;
- (id)description;
- (id)initWithAlarm:(id)arg1 changeType:(long long)arg2;
- (id)lastModifiedDate;
- (id)objectIdentifier;

@end
