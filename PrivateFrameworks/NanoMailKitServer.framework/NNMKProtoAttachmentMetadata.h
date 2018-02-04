/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoAttachmentMetadata : PBCodable <NSCopying> {
    NSString * _contentId;
    NSString * _fileName;
    unsigned int  _fileSize;
    struct { 
        unsigned int fileSize : 1; 
        unsigned int imageHeight : 1; 
        unsigned int imageWidth : 1; 
        unsigned int type : 1; 
        unsigned int renderOnClient : 1; 
    }  _has;
    float  _imageHeight;
    float  _imageWidth;
    NSString * _mimePartNumber;
    bool  _renderOnClient;
    unsigned int  _type;
}

@property (nonatomic, retain) NSString *contentId;
@property (nonatomic, retain) NSString *fileName;
@property (nonatomic) unsigned int fileSize;
@property (nonatomic, readonly) bool hasContentId;
@property (nonatomic, readonly) bool hasFileName;
@property (nonatomic) bool hasFileSize;
@property (nonatomic) bool hasImageHeight;
@property (nonatomic) bool hasImageWidth;
@property (nonatomic, readonly) bool hasMimePartNumber;
@property (nonatomic) bool hasRenderOnClient;
@property (nonatomic) bool hasType;
@property (nonatomic) float imageHeight;
@property (nonatomic) float imageWidth;
@property (nonatomic, retain) NSString *mimePartNumber;
@property (nonatomic) bool renderOnClient;
@property (nonatomic) unsigned int type;

- (void).cxx_destruct;
- (id)contentId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fileName;
- (unsigned int)fileSize;
- (bool)hasContentId;
- (bool)hasFileName;
- (bool)hasFileSize;
- (bool)hasImageHeight;
- (bool)hasImageWidth;
- (bool)hasMimePartNumber;
- (bool)hasRenderOnClient;
- (bool)hasType;
- (unsigned long long)hash;
- (float)imageHeight;
- (float)imageWidth;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)mimePartNumber;
- (bool)readFrom:(id)arg1;
- (bool)renderOnClient;
- (void)setContentId:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setFileSize:(unsigned int)arg1;
- (void)setHasFileSize:(bool)arg1;
- (void)setHasImageHeight:(bool)arg1;
- (void)setHasImageWidth:(bool)arg1;
- (void)setHasRenderOnClient:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setImageHeight:(float)arg1;
- (void)setImageWidth:(float)arg1;
- (void)setMimePartNumber:(id)arg1;
- (void)setRenderOnClient:(bool)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;
- (void)writeTo:(id)arg1;

@end
