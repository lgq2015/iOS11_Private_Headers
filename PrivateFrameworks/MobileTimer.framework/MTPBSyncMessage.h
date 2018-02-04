/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTPBSyncMessage : PBCodable <NSCopying> {
    MTPBAlarmAction * _alarmActionObject;
    MTPBAlarmDelete * _alarmDeleteObject;
    MTPBAlarm * _alarmObject;
    MTPBAlarmState * _alarmStateObject;
}

@property (nonatomic, retain) MTPBAlarmAction *alarmActionObject;
@property (nonatomic, retain) MTPBAlarmDelete *alarmDeleteObject;
@property (nonatomic, retain) MTPBAlarm *alarmObject;
@property (nonatomic, retain) MTPBAlarmState *alarmStateObject;
@property (nonatomic, readonly) bool hasAlarmActionObject;
@property (nonatomic, readonly) bool hasAlarmDeleteObject;
@property (nonatomic, readonly) bool hasAlarmObject;
@property (nonatomic, readonly) bool hasAlarmStateObject;

- (void).cxx_destruct;
- (id)alarmActionObject;
- (id)alarmDeleteObject;
- (id)alarmObject;
- (id)alarmStateObject;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAlarmActionObject;
- (bool)hasAlarmDeleteObject;
- (bool)hasAlarmObject;
- (bool)hasAlarmStateObject;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlarmActionObject:(id)arg1;
- (void)setAlarmDeleteObject:(id)arg1;
- (void)setAlarmObject:(id)arg1;
- (void)setAlarmStateObject:(id)arg1;
- (void)writeTo:(id)arg1;

@end
