/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPCellWifiCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray * _cdmaCellTowerLocations;
    NSMutableArray * _cellTowerLocations;
    NSMutableArray * _lteCellTowerLocations;
    CLPMeta * _meta;
    NSMutableArray * _scdmaCellTowerLocations;
    NSMutableArray * _wifiAPLocations;
}

@property (nonatomic, retain) NSMutableArray *cdmaCellTowerLocations;
@property (nonatomic, retain) NSMutableArray *cellTowerLocations;
@property (nonatomic, retain) NSMutableArray *lteCellTowerLocations;
@property (nonatomic, retain) CLPMeta *meta;
@property (nonatomic, retain) NSMutableArray *scdmaCellTowerLocations;
@property (nonatomic, retain) NSMutableArray *wifiAPLocations;

+ (Class)cdmaCellTowerLocationType;
+ (Class)cellTowerLocationType;
+ (Class)lteCellTowerLocationType;
+ (Class)scdmaCellTowerLocationType;
+ (Class)wifiAPLocationType;

- (void).cxx_destruct;
- (void)addCdmaCellTowerLocation:(id)arg1;
- (void)addCellTowerLocation:(id)arg1;
- (void)addLteCellTowerLocation:(id)arg1;
- (void)addScdmaCellTowerLocation:(id)arg1;
- (void)addWifiAPLocation:(id)arg1;
- (id)cdmaCellTowerLocationAtIndex:(unsigned long long)arg1;
- (id)cdmaCellTowerLocations;
- (unsigned long long)cdmaCellTowerLocationsCount;
- (id)cellTowerLocationAtIndex:(unsigned long long)arg1;
- (id)cellTowerLocations;
- (unsigned long long)cellTowerLocationsCount;
- (void)clearCdmaCellTowerLocations;
- (void)clearCellTowerLocations;
- (void)clearLteCellTowerLocations;
- (void)clearScdmaCellTowerLocations;
- (void)clearWifiAPLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lteCellTowerLocationAtIndex:(unsigned long long)arg1;
- (id)lteCellTowerLocations;
- (unsigned long long)lteCellTowerLocationsCount;
- (void)mergeFrom:(id)arg1;
- (id)meta;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)scdmaCellTowerLocationAtIndex:(unsigned long long)arg1;
- (id)scdmaCellTowerLocations;
- (unsigned long long)scdmaCellTowerLocationsCount;
- (void)setCdmaCellTowerLocations:(id)arg1;
- (void)setCellTowerLocations:(id)arg1;
- (void)setLteCellTowerLocations:(id)arg1;
- (void)setMeta:(id)arg1;
- (void)setScdmaCellTowerLocations:(id)arg1;
- (void)setWifiAPLocations:(id)arg1;
- (id)wifiAPLocationAtIndex:(unsigned long long)arg1;
- (id)wifiAPLocations;
- (unsigned long long)wifiAPLocationsCount;
- (void)writeTo:(id)arg1;

@end
