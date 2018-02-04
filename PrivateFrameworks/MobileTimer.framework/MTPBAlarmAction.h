/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTPBAlarmAction : PBCodable <NSCopying> {
    unsigned int  _action;
    double  _actionDate;
    NSString * _alarmID;
    double  _triggerDate;
    unsigned int  _triggerType;
}

@property (nonatomic) unsigned int action;
@property (nonatomic) double actionDate;
@property (nonatomic, retain) NSString *alarmID;
@property (nonatomic) double triggerDate;
@property (nonatomic) unsigned int triggerType;

- (void).cxx_destruct;
- (unsigned int)action;
- (double)actionDate;
- (id)alarmID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAction:(unsigned int)arg1;
- (void)setActionDate:(double)arg1;
- (void)setAlarmID:(id)arg1;
- (void)setTriggerDate:(double)arg1;
- (void)setTriggerType:(unsigned int)arg1;
- (double)triggerDate;
- (unsigned int)triggerType;
- (void)writeTo:(id)arg1;

@end
