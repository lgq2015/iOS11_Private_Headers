/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRPBCompressedData : PBCodable <NSCopying> {
    bool  _compressed;
    struct { 
        unsigned int compressed : 1; 
    }  _has;
    NSData * _possiblyCompressedData;
}

@property (nonatomic) bool compressed;
@property (nonatomic) bool hasCompressed;
@property (nonatomic, readonly) bool hasPossiblyCompressedData;
@property (nonatomic, retain) NSData *possiblyCompressedData;

- (void).cxx_destruct;
- (bool)compressed;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCompressed;
- (bool)hasPossiblyCompressedData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)possiblyCompressedData;
- (bool)readFrom:(id)arg1;
- (void)setCompressed:(bool)arg1;
- (void)setHasCompressed:(bool)arg1;
- (void)setPossiblyCompressedData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
