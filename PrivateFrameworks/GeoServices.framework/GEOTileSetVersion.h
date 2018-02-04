/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileSetVersion : PBCodable <NSCopying> {
    struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } * _availableTiles;
    unsigned long long  _availableTilesCount;
    unsigned long long  _availableTilesSpace;
    struct GEOGenericTile { unsigned int x1; unsigned int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } * _genericTiles;
    unsigned long long  _genericTilesCount;
    unsigned long long  _genericTilesSpace;
    struct { 
        unsigned int supportedLanguagesVersion : 1; 
        unsigned int timeToLiveSeconds : 1; 
    }  _has;
    unsigned int  _identifier;
    unsigned int  _supportedLanguagesVersion;
    unsigned int  _timeToLiveSeconds;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*availableTiles;
@property (nonatomic, readonly) unsigned long long availableTilesCount;
@property (nonatomic, readonly) struct GEOGenericTile { unsigned int x1; unsigned int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*genericTiles;
@property (nonatomic, readonly) unsigned long long genericTilesCount;
@property (nonatomic) bool hasSupportedLanguagesVersion;
@property (nonatomic) bool hasTimeToLiveSeconds;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) unsigned int supportedLanguagesVersion;
@property (nonatomic) unsigned int timeToLiveSeconds;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)addAvailableTiles:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })arg1;
- (void)addGenericTile:(struct GEOGenericTile { unsigned int x1; unsigned int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)availableTiles;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })availableTilesAtIndex:(unsigned long long)arg1;
- (unsigned long long)availableTilesCount;
- (void)clearAvailableTiles;
- (void)clearGenericTiles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (struct GEOGenericTile { unsigned int x1; unsigned int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })genericTileAtIndex:(unsigned long long)arg1;
- (struct GEOGenericTile { unsigned int x1; unsigned int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)genericTiles;
- (unsigned long long)genericTilesCount;
- (bool)hasSupportedLanguagesVersion;
- (bool)hasTimeToLiveSeconds;
- (unsigned long long)hash;
- (unsigned int)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAvailableTiles:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 count:(unsigned long long)arg2;
- (void)setGenericTiles:(struct GEOGenericTile { unsigned int x1; unsigned int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1 count:(unsigned long long)arg2;
- (void)setHasSupportedLanguagesVersion:(bool)arg1;
- (void)setHasTimeToLiveSeconds:(bool)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setSupportedLanguagesVersion:(unsigned int)arg1;
- (void)setTimeToLiveSeconds:(unsigned int)arg1;
- (unsigned int)supportedLanguagesVersion;
- (unsigned int)timeToLiveSeconds;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
