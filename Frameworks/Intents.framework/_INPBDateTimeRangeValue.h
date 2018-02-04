/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDateTimeRangeValue : PBCodable <NSCopying> {
    long long  _endCalendar;
    _INPBDateTime * _endDateTime;
    struct { 
        unsigned int endCalendar : 1; 
        unsigned int startCalendar : 1; 
    }  _has;
    _INPBRecurrenceValue * _recurrence;
    long long  _startCalendar;
    _INPBDateTime * _startDateTime;
    PBUnknownFields * _unknownFields;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic) long long endCalendar;
@property (nonatomic, retain) _INPBDateTime *endDateTime;
@property (nonatomic) bool hasEndCalendar;
@property (nonatomic, readonly) bool hasEndDateTime;
@property (nonatomic, readonly) bool hasRecurrence;
@property (nonatomic) bool hasStartCalendar;
@property (nonatomic, readonly) bool hasStartDateTime;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (nonatomic, retain) _INPBRecurrenceValue *recurrence;
@property (nonatomic) long long startCalendar;
@property (nonatomic, retain) _INPBDateTime *startDateTime;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)endCalendar;
- (id)endDateTime;
- (bool)hasEndCalendar;
- (bool)hasEndDateTime;
- (bool)hasRecurrence;
- (bool)hasStartCalendar;
- (bool)hasStartDateTime;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recurrence;
- (void)setEndCalendar:(long long)arg1;
- (void)setEndDateTime:(id)arg1;
- (void)setHasEndCalendar:(bool)arg1;
- (void)setHasStartCalendar:(bool)arg1;
- (void)setRecurrence:(id)arg1;
- (void)setStartCalendar:(long long)arg1;
- (void)setStartDateTime:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (long long)startCalendar;
- (id)startDateTime;
- (id)unknownFields;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
