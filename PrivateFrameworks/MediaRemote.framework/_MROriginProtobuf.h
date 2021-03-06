/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MROriginProtobuf : PBCodable <NSCopying> {
    _MRDeviceInfoMessageProtobuf * _deviceInfo;
    NSString * _displayName;
    struct { 
        unsigned int identifier : 1; 
        unsigned int type : 1; 
    }  _has;
    int  _identifier;
    int  _type;
}

@property (nonatomic, retain) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) bool hasDeviceInfo;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic) bool hasIdentifier;
@property (nonatomic) bool hasType;
@property (nonatomic) int identifier;
@property (nonatomic) int type;

- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceInfo;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)hasDeviceInfo;
- (bool)hasDisplayName;
- (bool)hasIdentifier;
- (bool)hasType;
- (unsigned long long)hash;
- (int)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasIdentifier:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(int)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
