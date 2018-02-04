/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemRoutineAttributes : PBCodable <NSCopying> {
    double  _eventDate;
    NSString * _eventName;
    struct { 
        unsigned int eventDate : 1; 
        unsigned int loiType : 1; 
        unsigned int isEventAllDay : 1; 
    }  _has;
    bool  _isEventAllDay;
    NSString * _loiIdentifierString;
    int  _loiType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) double eventDate;
@property (nonatomic, retain) NSString *eventName;
@property (nonatomic) bool hasEventDate;
@property (nonatomic, readonly) bool hasEventName;
@property (nonatomic) bool hasIsEventAllDay;
@property (nonatomic, readonly) bool hasLoiIdentifierString;
@property (nonatomic) bool hasLoiType;
@property (nonatomic) bool isEventAllDay;
@property (nonatomic, retain) NSUUID *loiIdentifier;
@property (nonatomic, retain) NSString *loiIdentifierString;
@property (nonatomic) int loiType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsLoiType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)eventDate;
- (id)eventName;
- (bool)hasEventDate;
- (bool)hasEventName;
- (bool)hasIsEventAllDay;
- (bool)hasLoiIdentifierString;
- (bool)hasLoiType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEventAllDay;
- (id)loiIdentifier;
- (id)loiIdentifierString;
- (int)loiType;
- (id)loiTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventDate:(double)arg1;
- (void)setEventName:(id)arg1;
- (void)setHasEventDate:(bool)arg1;
- (void)setHasIsEventAllDay:(bool)arg1;
- (void)setHasLoiType:(bool)arg1;
- (void)setIsEventAllDay:(bool)arg1;
- (void)setLoiIdentifier:(id)arg1;
- (void)setLoiIdentifierString:(id)arg1;
- (void)setLoiType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
