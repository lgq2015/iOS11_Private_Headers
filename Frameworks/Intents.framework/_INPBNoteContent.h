/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBNoteContent : PBCodable <NSCopying> {
    struct { 
        unsigned int type : 1; 
    }  _has;
    _INPBImageNoteContent * _image;
    _INPBTextNoteContent * _text;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, readonly) bool hasText;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) _INPBImageNoteContent *image;
@property (nonatomic, retain) _INPBTextNoteContent *text;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasImage;
- (bool)hasText;
- (bool)hasType;
- (unsigned long long)hash;
- (id)image;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setText:(id)arg1;
- (void)setType:(int)arg1;
- (id)text;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
