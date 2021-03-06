/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBLocalTime : PBCodable <NSCopying> {
    struct { 
        unsigned int hourOfDay : 1; 
        unsigned int millisOfSecond : 1; 
        unsigned int minuteOfHour : 1; 
        unsigned int secondOfMinute : 1; 
    }  _has;
    long long  _hourOfDay;
    long long  _millisOfSecond;
    long long  _minuteOfHour;
    long long  _secondOfMinute;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasHourOfDay;
@property (nonatomic) bool hasMillisOfSecond;
@property (nonatomic) bool hasMinuteOfHour;
@property (nonatomic) bool hasSecondOfMinute;
@property (nonatomic) long long hourOfDay;
@property (nonatomic) long long millisOfSecond;
@property (nonatomic) long long minuteOfHour;
@property (nonatomic) long long secondOfMinute;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHourOfDay;
- (bool)hasMillisOfSecond;
- (bool)hasMinuteOfHour;
- (bool)hasSecondOfMinute;
- (unsigned long long)hash;
- (long long)hourOfDay;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)millisOfSecond;
- (long long)minuteOfHour;
- (bool)readFrom:(id)arg1;
- (long long)secondOfMinute;
- (void)setHasHourOfDay:(bool)arg1;
- (void)setHasMillisOfSecond:(bool)arg1;
- (void)setHasMinuteOfHour:(bool)arg1;
- (void)setHasSecondOfMinute:(bool)arg1;
- (void)setHourOfDay:(long long)arg1;
- (void)setMillisOfSecond:(long long)arg1;
- (void)setMinuteOfHour:(long long)arg1;
- (void)setSecondOfMinute:(long long)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
