/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDTransitInfo : PBCodable <NSCopying> {
    NSMutableArray * _labels;
    NSMutableArray * _lines;
    NSString * _searchDisplayName;
    NSMutableArray * _systems;
    NSMutableArray * _transitConnections;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasSearchDisplayName;
@property (nonatomic, retain) NSMutableArray *labels;
@property (nonatomic, retain) NSMutableArray *lines;
@property (nonatomic, retain) NSString *searchDisplayName;
@property (nonatomic, retain) NSMutableArray *systems;
@property (nonatomic, retain) NSMutableArray *transitConnections;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)labelType;
+ (Class)lineType;
+ (Class)systemType;
+ (Class)transitConnectionType;
+ (id)transitInfoForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (void)addLabel:(id)arg1;
- (void)addLine:(id)arg1;
- (void)addSystem:(id)arg1;
- (void)addTransitConnection:(id)arg1;
- (void)clearLabels;
- (void)clearLines;
- (void)clearSystems;
- (void)clearTransitConnections;
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
- (id)lineAtIndex:(unsigned long long)arg1;
- (id)lines;
- (unsigned long long)linesCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)searchDisplayName;
- (void)setLabels:(id)arg1;
- (void)setLines:(id)arg1;
- (void)setSearchDisplayName:(id)arg1;
- (void)setSystems:(id)arg1;
- (void)setTransitConnections:(id)arg1;
- (id)systemAtIndex:(unsigned long long)arg1;
- (id)systems;
- (unsigned long long)systemsCount;
- (id)transitConnectionAtIndex:(unsigned long long)arg1;
- (id)transitConnections;
- (unsigned long long)transitConnectionsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
