/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBLocalizedProject : PBCodable <NSCopying> {
    _INPBAppNames * _appNames;
    _INPBIntentVocabulary * _intentVocabulary;
    _INPBLanguageTag * _language;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBAppNames *appNames;
@property (nonatomic, readonly) bool hasAppNames;
@property (nonatomic, readonly) bool hasIntentVocabulary;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic, retain) _INPBIntentVocabulary *intentVocabulary;
@property (nonatomic, retain) _INPBLanguageTag *language;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)appNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppNames;
- (bool)hasIntentVocabulary;
- (bool)hasLanguage;
- (unsigned long long)hash;
- (id)intentVocabulary;
- (bool)isEqual:(id)arg1;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppNames:(id)arg1;
- (void)setIntentVocabulary:(id)arg1;
- (void)setLanguage:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
