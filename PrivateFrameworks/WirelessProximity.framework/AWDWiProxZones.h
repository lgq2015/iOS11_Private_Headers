/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface AWDWiProxZones : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int numberZonesExceeded : 1; 
        unsigned int numberZonesTracked : 1; 
    }  _has;
    unsigned int  _numberZonesExceeded;
    unsigned int  _numberZonesTracked;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasNumberZonesExceeded;
@property (nonatomic) bool hasNumberZonesTracked;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int numberZonesExceeded;
@property (nonatomic) unsigned int numberZonesTracked;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNumberZonesExceeded;
- (bool)hasNumberZonesTracked;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberZonesExceeded;
- (unsigned int)numberZonesTracked;
- (bool)readFrom:(id)arg1;
- (void)setHasNumberZonesExceeded:(bool)arg1;
- (void)setHasNumberZonesTracked:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNumberZonesExceeded:(unsigned int)arg1;
- (void)setNumberZonesTracked:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
