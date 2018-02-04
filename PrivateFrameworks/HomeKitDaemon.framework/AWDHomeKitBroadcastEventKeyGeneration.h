/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitBroadcastEventKeyGeneration : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int reason : 1; 
    }  _has;
    int  _reason;
    unsigned long long  _timestamp;
    AWDHomeKitVendorInformation * _vendorDetails;
}

@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasVendorDetails;
@property (nonatomic) int reason;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) AWDHomeKitVendorInformation *vendorDetails;

- (void).cxx_destruct;
- (int)StringAsReason:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasReason;
- (bool)hasTimestamp;
- (bool)hasVendorDetails;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)reasonAsString:(int)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setVendorDetails:(id)arg1;
- (unsigned long long)timestamp;
- (id)vendorDetails;
- (void)writeTo:(id)arg1;

@end
