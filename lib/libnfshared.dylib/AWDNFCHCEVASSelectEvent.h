/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCHCEVASSelectEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int mobileCapabilities : 1; 
        unsigned int swStatus : 1; 
        unsigned int version : 1; 
    }  _has;
    unsigned int  _mobileCapabilities;
    unsigned int  _swStatus;
    unsigned long long  _timeDeltaFromReference;
    unsigned long long  _timestamp;
    NSData * _uuidReference;
    unsigned int  _version;
}

@property (nonatomic) bool hasMobileCapabilities;
@property (nonatomic) bool hasSwStatus;
@property (nonatomic) bool hasTimeDeltaFromReference;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasUuidReference;
@property (nonatomic) bool hasVersion;
@property (nonatomic) unsigned int mobileCapabilities;
@property (nonatomic) unsigned int swStatus;
@property (nonatomic) unsigned long long timeDeltaFromReference;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSData *uuidReference;
@property (nonatomic) unsigned int version;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMobileCapabilities;
- (bool)hasSwStatus;
- (bool)hasTimeDeltaFromReference;
- (bool)hasTimestamp;
- (bool)hasUuidReference;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)mobileCapabilities;
- (bool)readFrom:(id)arg1;
- (void)setHasMobileCapabilities:(bool)arg1;
- (void)setHasSwStatus:(bool)arg1;
- (void)setHasTimeDeltaFromReference:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setMobileCapabilities:(unsigned int)arg1;
- (void)setSwStatus:(unsigned int)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuidReference:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)swStatus;
- (unsigned long long)timeDeltaFromReference;
- (unsigned long long)timestamp;
- (id)uuidReference;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end
