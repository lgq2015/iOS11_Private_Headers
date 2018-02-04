/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBAppendToNoteIntent : PBCodable <NSCopying> {
    _INPBNoteContent * _content;
    _INPBIntentMetadata * _intentMetadata;
    _INPBNote * _targetNote;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBNoteContent *content;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasTargetNote;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBNote *targetNote;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContent;
- (bool)hasIntentMetadata;
- (bool)hasTargetNote;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setTargetNote:(id)arg1;
- (id)targetNote;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
