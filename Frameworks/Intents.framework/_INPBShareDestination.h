/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBShareDestination : PBCodable <NSCopying> {
    _INPBContact * _contact;
    int  _deviceType;
    struct { 
        unsigned int deviceType : 1; 
    }  _has;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBContact *contact;
@property (nonatomic) int deviceType;
@property (nonatomic, readonly) bool hasContact;
@property (nonatomic) bool hasDeviceType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsDeviceType:(id)arg1;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)deviceType;
- (id)deviceTypeAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (bool)hasContact;
- (bool)hasDeviceType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDeviceType:(int)arg1;
- (void)setHasDeviceType:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
