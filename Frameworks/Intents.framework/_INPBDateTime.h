/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDateTime : PBCodable <NSCopying> {
    int  _calendarSystem;
    _INPBLocalDate * _date;
    struct { 
        unsigned int calendarSystem : 1; 
    }  _has;
    _INPBLocalTime * _time;
    NSString * _timeZoneID;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int calendarSystem;
@property (nonatomic, retain) _INPBLocalDate *date;
@property (nonatomic) bool hasCalendarSystem;
@property (nonatomic, readonly) bool hasDate;
@property (nonatomic, readonly) bool hasTime;
@property (nonatomic, readonly) bool hasTimeZoneID;
@property (nonatomic, retain) _INPBLocalTime *time;
@property (nonatomic, retain) NSString *timeZoneID;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsCalendarSystem:(id)arg1;
- (int)calendarSystem;
- (id)calendarSystemAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCalendarSystem;
- (bool)hasDate;
- (bool)hasTime;
- (bool)hasTimeZoneID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCalendarSystem:(int)arg1;
- (void)setDate:(id)arg1;
- (void)setHasCalendarSystem:(bool)arg1;
- (void)setTime:(id)arg1;
- (void)setTimeZoneID:(id)arg1;
- (id)time;
- (id)timeZoneID;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
