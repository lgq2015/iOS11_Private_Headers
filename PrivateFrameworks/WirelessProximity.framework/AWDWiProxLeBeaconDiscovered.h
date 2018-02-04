/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
 */

@interface AWDWiProxLeBeaconDiscovered : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int major : 1; 
        unsigned int minor : 1; 
        unsigned int rssi : 1; 
    }  _has;
    unsigned int  _major;
    unsigned int  _minor;
    int  _rssi;
    NSString * _sessionId;
    unsigned long long  _timestamp;
    NSString * _uuid;
}

@property (nonatomic) bool hasMajor;
@property (nonatomic) bool hasMinor;
@property (nonatomic) bool hasRssi;
@property (nonatomic, readonly) bool hasSessionId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) unsigned int major;
@property (nonatomic) unsigned int minor;
@property (nonatomic) int rssi;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *uuid;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMajor;
- (bool)hasMinor;
- (bool)hasRssi;
- (bool)hasSessionId;
- (bool)hasTimestamp;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)major;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minor;
- (bool)readFrom:(id)arg1;
- (int)rssi;
- (id)sessionId;
- (void)setHasMajor:(bool)arg1;
- (void)setHasMinor:(bool)arg1;
- (void)setHasRssi:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMajor:(unsigned int)arg1;
- (void)setMinor:(unsigned int)arg1;
- (void)setRssi:(int)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuid:(id)arg1;
- (unsigned long long)timestamp;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
