/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBSectionIconVariant : PBCodable <NSCopying> {
    unsigned int  _format;
    struct { 
        unsigned int precomposed : 1; 
    }  _has;
    NSData * _imageData;
    bool  _precomposed;
}

@property (nonatomic) unsigned int format;
@property (nonatomic, readonly) bool hasImageData;
@property (nonatomic) bool hasPrecomposed;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic) bool precomposed;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)format;
- (bool)hasImageData;
- (bool)hasPrecomposed;
- (unsigned long long)hash;
- (id)imageData;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)precomposed;
- (bool)readFrom:(id)arg1;
- (void)setFormat:(unsigned int)arg1;
- (void)setHasPrecomposed:(bool)arg1;
- (void)setImageData:(id)arg1;
- (void)setPrecomposed:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
