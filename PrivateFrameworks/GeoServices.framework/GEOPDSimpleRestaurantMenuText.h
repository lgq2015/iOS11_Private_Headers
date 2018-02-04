/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSimpleRestaurantMenuText : PBCodable <NSCopying> {
    NSMutableArray * _menuGroups;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *menuGroups;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)menuGroupType;

- (void).cxx_destruct;
- (void)addMenuGroup:(id)arg1;
- (void)clearMenuGroups;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)menuGroupAtIndex:(unsigned long long)arg1;
- (id)menuGroups;
- (unsigned long long)menuGroupsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMenuGroups:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
