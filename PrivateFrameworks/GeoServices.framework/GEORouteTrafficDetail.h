/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteTrafficDetail : PBCodable <NSCopying> {
    struct { 
        unsigned int routeTrafficCondition : 1; 
    }  _has;
    int  _routeTrafficCondition;
    NSString * _spokenRouteName;
    NSString * _unabbreviatedRouteName;
    NSString * _writtenRouteName;
}

@property (nonatomic) bool hasRouteTrafficCondition;
@property (nonatomic, readonly) bool hasSpokenRouteName;
@property (nonatomic, readonly) bool hasUnabbreviatedRouteName;
@property (nonatomic, readonly) bool hasWrittenRouteName;
@property (nonatomic) int routeTrafficCondition;
@property (nonatomic, retain) NSString *spokenRouteName;
@property (nonatomic, retain) NSString *unabbreviatedRouteName;
@property (nonatomic, retain) NSString *writtenRouteName;

- (void).cxx_destruct;
- (int)StringAsRouteTrafficCondition:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRouteTrafficCondition;
- (bool)hasSpokenRouteName;
- (bool)hasUnabbreviatedRouteName;
- (bool)hasWrittenRouteName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)routeTrafficCondition;
- (id)routeTrafficConditionAsString:(int)arg1;
- (void)setHasRouteTrafficCondition:(bool)arg1;
- (void)setRouteTrafficCondition:(int)arg1;
- (void)setSpokenRouteName:(id)arg1;
- (void)setUnabbreviatedRouteName:(id)arg1;
- (void)setWrittenRouteName:(id)arg1;
- (id)spokenRouteName;
- (id)unabbreviatedRouteName;
- (void)writeTo:(id)arg1;
- (id)writtenRouteName;

@end
