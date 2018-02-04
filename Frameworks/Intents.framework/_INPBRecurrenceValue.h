/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRecurrenceValue : PBCodable <NSCopying> {
    int  _frequency;
    struct { 
        unsigned int interval : 1; 
        unsigned int ordinal : 1; 
        unsigned int frequency : 1; 
    }  _has;
    unsigned long long  _interval;
    long long  _ordinal;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int frequency;
@property (nonatomic) bool hasFrequency;
@property (nonatomic) bool hasInterval;
@property (nonatomic) bool hasOrdinal;
@property (nonatomic) unsigned long long interval;
@property (nonatomic) long long ordinal;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsFrequency:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)frequency;
- (id)frequencyAsString:(int)arg1;
- (bool)hasFrequency;
- (bool)hasInterval;
- (bool)hasOrdinal;
- (unsigned long long)hash;
- (unsigned long long)interval;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)ordinal;
- (bool)readFrom:(id)arg1;
- (void)setFrequency:(int)arg1;
- (void)setHasFrequency:(bool)arg1;
- (void)setHasInterval:(bool)arg1;
- (void)setHasOrdinal:(bool)arg1;
- (void)setInterval:(unsigned long long)arg1;
- (void)setOrdinal:(long long)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
