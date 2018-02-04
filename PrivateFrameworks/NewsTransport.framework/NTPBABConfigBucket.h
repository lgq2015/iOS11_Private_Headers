/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBABConfigBucket : PBCodable <NSCopying> {
    long long  _bucketCeiling;
    long long  _bucketFloor;
    NTPBConfig * _config;
    struct { 
        unsigned int bucketCeiling : 1; 
        unsigned int bucketFloor : 1; 
    }  _has;
}

@property (nonatomic) long long bucketCeiling;
@property (nonatomic) long long bucketFloor;
@property (nonatomic, retain) NTPBConfig *config;
@property (nonatomic) bool hasBucketCeiling;
@property (nonatomic) bool hasBucketFloor;
@property (nonatomic, readonly) bool hasConfig;

- (void).cxx_destruct;
- (long long)bucketCeiling;
- (long long)bucketFloor;
- (id)config;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBucketCeiling;
- (bool)hasBucketFloor;
- (bool)hasConfig;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBucketCeiling:(long long)arg1;
- (void)setBucketFloor:(long long)arg1;
- (void)setConfig:(id)arg1;
- (void)setHasBucketCeiling:(bool)arg1;
- (void)setHasBucketFloor:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
