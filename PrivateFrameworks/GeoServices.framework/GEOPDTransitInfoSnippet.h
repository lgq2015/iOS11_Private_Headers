/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDTransitInfoSnippet : PBCodable <NSCopying> {
    NSMutableArray * _artworks;
    NSMutableArray * _labels;
    NSString * _searchDisplayName;
    NSMutableArray * _systemNames;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *artworks;
@property (nonatomic, readonly) bool hasSearchDisplayName;
@property (nonatomic, retain) NSMutableArray *labels;
@property (nonatomic, retain) NSString *searchDisplayName;
@property (nonatomic, retain) NSMutableArray *systemNames;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)artworkType;
+ (Class)labelType;
+ (Class)systemNameType;
+ (id)transitInfoSnippetForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (void)addArtwork:(id)arg1;
- (void)addLabel:(id)arg1;
- (void)addSystemName:(id)arg1;
- (id)artworkAtIndex:(unsigned long long)arg1;
- (id)artworks;
- (unsigned long long)artworksCount;
- (void)clearArtworks;
- (void)clearLabels;
- (void)clearSystemNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSearchDisplayName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)labelAtIndex:(unsigned long long)arg1;
- (id)labels;
- (unsigned long long)labelsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)searchDisplayName;
- (void)setArtworks:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setSearchDisplayName:(id)arg1;
- (void)setSystemNames:(id)arg1;
- (id)systemNameAtIndex:(unsigned long long)arg1;
- (id)systemNames;
- (unsigned long long)systemNamesCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
