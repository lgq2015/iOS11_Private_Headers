/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAddressObjectFilter : PBCodable <NSCopying> {
    NSMutableArray * _libraryVersions;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *libraryVersions;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)libraryVersionType;

- (void).cxx_destruct;
- (void)addLibraryVersion:(id)arg1;
- (void)clearLibraryVersions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)libraryVersionAtIndex:(unsigned long long)arg1;
- (id)libraryVersions;
- (unsigned long long)libraryVersionsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLibraryVersions:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
