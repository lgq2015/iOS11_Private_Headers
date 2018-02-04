/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchAttribution : PBCodable <NSCopying> {
    NSMutableArray * _attributionURLs;
    NSString * _sourceIdentifier;
    unsigned int  _sourceVersion;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *attributionURLs;
@property (nonatomic, retain) NSString *sourceIdentifier;
@property (nonatomic) unsigned int sourceVersion;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)attributionURLsType;

- (void).cxx_destruct;
- (void)addAttributionURLs:(id)arg1;
- (id)attributionURLs;
- (id)attributionURLsAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionURLsCount;
- (void)clearAttributionURLs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributionURLs:(id)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setSourceVersion:(unsigned int)arg1;
- (id)sourceIdentifier;
- (unsigned int)sourceVersion;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
