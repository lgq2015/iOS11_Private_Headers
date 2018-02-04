/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDEntityFilter : PBCodable <NSCopying> {
    struct { 
        unsigned int includeName : 1; 
        unsigned int includeSpokenNames : 1; 
    }  _has;
    bool  _includeName;
    bool  _includeSpokenNames;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIncludeName;
@property (nonatomic) bool hasIncludeSpokenNames;
@property (nonatomic) bool includeName;
@property (nonatomic) bool includeSpokenNames;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIncludeName;
- (bool)hasIncludeSpokenNames;
- (unsigned long long)hash;
- (bool)includeName;
- (bool)includeSpokenNames;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIncludeName:(bool)arg1;
- (void)setHasIncludeSpokenNames:(bool)arg1;
- (void)setIncludeName:(bool)arg1;
- (void)setIncludeSpokenNames:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
