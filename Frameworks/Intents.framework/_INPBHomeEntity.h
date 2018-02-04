/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBHomeEntity : PBCodable <NSCopying> {
    int  _deviceType;
    int  _entityType;
    struct { 
        unsigned int deviceType : 1; 
        unsigned int entityType : 1; 
    }  _has;
    _INPBString * _name;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int deviceType;
@property (nonatomic) int entityType;
@property (nonatomic) bool hasDeviceType;
@property (nonatomic) bool hasEntityType;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, retain) _INPBString *name;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsDeviceType:(id)arg1;
- (int)StringAsEntityType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)deviceType;
- (id)deviceTypeAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (int)entityType;
- (id)entityTypeAsString:(int)arg1;
- (bool)hasDeviceType;
- (bool)hasEntityType;
- (bool)hasName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setDeviceType:(int)arg1;
- (void)setEntityType:(int)arg1;
- (void)setHasDeviceType:(bool)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setName:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
