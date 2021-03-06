/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBImageNoteContent : PBCodable <NSCopying> {
    _INPBImageValue * _image;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, retain) _INPBImageValue *image;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasImage;
- (unsigned long long)hash;
- (id)image;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setImage:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
