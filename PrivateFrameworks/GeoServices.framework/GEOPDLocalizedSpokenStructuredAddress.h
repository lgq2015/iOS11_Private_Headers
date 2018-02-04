/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLocalizedSpokenStructuredAddress : PBCodable <NSCopying> {
    NSString * _language;
    GEOStructuredAddress * _spokenStructuredAddress;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic, readonly) bool hasSpokenStructuredAddress;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) GEOStructuredAddress *spokenStructuredAddress;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLanguage;
- (bool)hasSpokenStructuredAddress;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setSpokenStructuredAddress:(id)arg1;
- (id)spokenStructuredAddress;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
