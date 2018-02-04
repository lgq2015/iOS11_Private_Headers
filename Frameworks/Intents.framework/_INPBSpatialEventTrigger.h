/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSpatialEventTrigger : PBCodable <NSCopying> {
    int  _event;
    struct { 
        unsigned int event : 1; 
    }  _has;
    _INPBLocationValue * _location;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int event;
@property (nonatomic) bool hasEvent;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic, retain) _INPBLocationValue *location;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsEvent:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)event;
- (id)eventAsString:(int)arg1;
- (bool)hasEvent;
- (bool)hasLocation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEvent:(int)arg1;
- (void)setHasEvent:(bool)arg1;
- (void)setLocation:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
