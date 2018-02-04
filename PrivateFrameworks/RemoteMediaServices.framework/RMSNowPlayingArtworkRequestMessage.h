/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSNowPlayingArtworkRequestMessage : PBCodable <NSCopying> {
    NSString * _artworkIdentifier;
    float  _compressionQuality;
    struct { 
        unsigned int compressionQuality : 1; 
        unsigned int height : 1; 
        unsigned int width : 1; 
    }  _has;
    unsigned int  _height;
    unsigned int  _width;
}

@property (nonatomic, retain) NSString *artworkIdentifier;
@property (nonatomic) float compressionQuality;
@property (nonatomic, readonly) bool hasArtworkIdentifier;
@property (nonatomic) bool hasCompressionQuality;
@property (nonatomic) bool hasHeight;
@property (nonatomic) bool hasWidth;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int width;

- (void).cxx_destruct;
- (id)artworkIdentifier;
- (float)compressionQuality;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArtworkIdentifier;
- (bool)hasCompressionQuality;
- (bool)hasHeight;
- (bool)hasWidth;
- (unsigned long long)hash;
- (unsigned int)height;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArtworkIdentifier:(id)arg1;
- (void)setCompressionQuality:(float)arg1;
- (void)setHasCompressionQuality:(bool)arg1;
- (void)setHasHeight:(bool)arg1;
- (void)setHasWidth:(bool)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)width;
- (void)writeTo:(id)arg1;

@end
