/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBTextNoteContent : PBCodable <NSCopying> {
    NSString * _text;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasText;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasText;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
