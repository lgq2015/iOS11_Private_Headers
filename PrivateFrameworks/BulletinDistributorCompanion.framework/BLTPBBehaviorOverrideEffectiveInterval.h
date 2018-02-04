/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBBehaviorOverrideEffectiveInterval : PBCodable <NSCopying> {
    NSString * _calendarIdentifier;
    BLTPBDateComponents * _endComponents;
    struct { 
        unsigned int repeatInterval : 1; 
    }  _has;
    int  _repeatInterval;
    BLTPBDateComponents * _startComponents;
}

@property (nonatomic, retain) NSString *calendarIdentifier;
@property (nonatomic, retain) BLTPBDateComponents *endComponents;
@property (nonatomic, readonly) bool hasCalendarIdentifier;
@property (nonatomic, readonly) bool hasEndComponents;
@property (nonatomic) bool hasRepeatInterval;
@property (nonatomic, readonly) bool hasStartComponents;
@property (nonatomic) int repeatInterval;
@property (nonatomic, retain) BLTPBDateComponents *startComponents;

- (void).cxx_destruct;
- (id)calendarIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endComponents;
- (bool)hasCalendarIdentifier;
- (bool)hasEndComponents;
- (bool)hasRepeatInterval;
- (bool)hasStartComponents;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)repeatInterval;
- (void)setCalendarIdentifier:(id)arg1;
- (void)setEndComponents:(id)arg1;
- (void)setHasRepeatInterval:(bool)arg1;
- (void)setRepeatInterval:(int)arg1;
- (void)setStartComponents:(id)arg1;
- (id)startComponents;
- (void)writeTo:(id)arg1;

@end
