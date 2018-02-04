/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRMediaRemoteSetIconMessage : PBCodable <NSCopying> {
    NSString * _bundleID;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSData * _iconData;
    NSData * _originalDigest;
    double  _timestamp;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic, readonly) bool hasIconData;
@property (nonatomic, readonly) bool hasOriginalDigest;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSData *iconData;
@property (nonatomic, retain) NSData *originalDigest;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (id)bundleID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleID;
- (bool)hasIconData;
- (bool)hasOriginalDigest;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)iconData;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originalDigest;
- (bool)readFrom:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIconData:(id)arg1;
- (void)setOriginalDigest:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
