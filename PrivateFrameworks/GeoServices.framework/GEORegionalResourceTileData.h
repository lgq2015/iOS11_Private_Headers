/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORegionalResourceTileData : PBCodable <NSCopying> {
    NSMutableArray * _attributions;
    NSMutableArray * _icons;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *attributions;
@property (nonatomic, retain) NSMutableArray *icons;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)attributionType;
+ (Class)iconType;

- (void).cxx_destruct;
- (void)addAttribution:(id)arg1;
- (void)addIcon:(id)arg1;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (id)attributions;
- (unsigned long long)attributionsCount;
- (void)clearAttributions;
- (void)clearIcons;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)iconAtIndex:(unsigned long long)arg1;
- (id)icons;
- (unsigned long long)iconsCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributions:(id)arg1;
- (void)setIcons:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
