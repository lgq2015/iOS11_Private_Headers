/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBLocalDate : PBCodable <NSCopying> {
    long long  _dayOfMonth;
    int  _dayOfWeek;
    struct { 
        unsigned int dayOfMonth : 1; 
        unsigned int month : 1; 
        unsigned int year : 1; 
        unsigned int dayOfWeek : 1; 
    }  _has;
    long long  _month;
    PBUnknownFields * _unknownFields;
    long long  _year;
}

@property (nonatomic) long long dayOfMonth;
@property (nonatomic) int dayOfWeek;
@property (nonatomic) bool hasDayOfMonth;
@property (nonatomic) bool hasDayOfWeek;
@property (nonatomic) bool hasMonth;
@property (nonatomic) bool hasYear;
@property (nonatomic) long long month;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) long long year;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsDayOfWeek:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dayOfMonth;
- (int)dayOfWeek;
- (id)dayOfWeekAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDayOfMonth;
- (bool)hasDayOfWeek;
- (bool)hasMonth;
- (bool)hasYear;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)month;
- (bool)readFrom:(id)arg1;
- (void)setDayOfMonth:(long long)arg1;
- (void)setDayOfWeek:(int)arg1;
- (void)setHasDayOfMonth:(bool)arg1;
- (void)setHasDayOfWeek:(bool)arg1;
- (void)setHasMonth:(bool)arg1;
- (void)setHasYear:(bool)arg1;
- (void)setMonth:(long long)arg1;
- (void)setYear:(long long)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;
- (long long)year;

@end
