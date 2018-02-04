/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLanguage : PBCodable <NSCopying> {
    unsigned int  _identifier;
    NSMutableArray * _languages;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int identifier;
@property (nonatomic, retain) NSMutableArray *languages;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)languageType;

- (void).cxx_destruct;
- (void)addLanguage:(id)arg1;
- (void)clearLanguages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (unsigned int)identifier;
- (bool)isEqual:(id)arg1;
- (id)languageAtIndex:(unsigned long long)arg1;
- (id)languages;
- (unsigned long long)languagesCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setLanguages:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
