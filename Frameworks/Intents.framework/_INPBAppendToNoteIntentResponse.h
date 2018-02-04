/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBAppendToNoteIntentResponse : PBCodable <NSCopying> {
    _INPBNote * _note;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasNote;
@property (nonatomic, retain) _INPBNote *note;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNote;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)note;
- (bool)readFrom:(id)arg1;
- (void)setNote:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
