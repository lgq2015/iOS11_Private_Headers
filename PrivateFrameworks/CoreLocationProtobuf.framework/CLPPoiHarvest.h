/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPPoiHarvest : PBCodable <NSCopying> {
    NSMutableArray * _accessPoints;
    NSMutableArray * _locations;
    CLPPoiTriggerEvent * _triggerEvent;
}

@property (nonatomic, retain) NSMutableArray *accessPoints;
@property (nonatomic, retain) NSMutableArray *locations;
@property (nonatomic, retain) CLPPoiTriggerEvent *triggerEvent;

+ (Class)accessPointsType;
+ (Class)locationsType;

- (void).cxx_destruct;
- (id)accessPoints;
- (id)accessPointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)accessPointsCount;
- (void)addAccessPoints:(id)arg1;
- (void)addLocations:(id)arg1;
- (void)clearAccessPoints;
- (void)clearLocations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locations;
- (id)locationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessPoints:(id)arg1;
- (void)setLocations:(id)arg1;
- (void)setTriggerEvent:(id)arg1;
- (id)triggerEvent;
- (void)writeTo:(id)arg1;

@end
