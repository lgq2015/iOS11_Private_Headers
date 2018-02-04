/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPopularNearbyResult : PBCodable <NSCopying> {
    struct GEOPDLitePlaceResult { unsigned long long x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _litePlaceResults;
    unsigned long long  _litePlaceResultsCount;
    unsigned long long  _litePlaceResultsSpace;
    NSString * _sectionHeader;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasSectionHeader;
@property (nonatomic, readonly) struct GEOPDLitePlaceResult { unsigned long long x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*litePlaceResults;
@property (nonatomic, readonly) unsigned long long litePlaceResultsCount;
@property (nonatomic, retain) NSString *sectionHeader;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)addLitePlaceResult:(struct GEOPDLitePlaceResult { unsigned long long x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)clearLitePlaceResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSectionHeader;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (struct GEOPDLitePlaceResult { unsigned long long x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })litePlaceResultAtIndex:(unsigned long long)arg1;
- (struct GEOPDLitePlaceResult { unsigned long long x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)litePlaceResults;
- (unsigned long long)litePlaceResultsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionHeader;
- (void)setLitePlaceResults:(struct GEOPDLitePlaceResult { unsigned long long x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (void)setSectionHeader:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
