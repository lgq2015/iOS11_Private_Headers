/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAdditionalEnabledMarkets : PBCodable <NSCopying> {
    NSMutableArray * _transitMarkets;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) NSArray *queryItems;
@property (nonatomic, readonly) NSDictionary *queryParameters;
@property (nonatomic, retain) NSMutableArray *transitMarkets;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)_additionalEnabledTransitMarkets;
+ (id)additionalEnabledMarkets;
+ (Class)transitMarketType;

- (void).cxx_destruct;
- (void)addTransitMarket:(id)arg1;
- (void)clearTransitMarkets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)queryItems;
- (id)queryParameters;
- (bool)readFrom:(id)arg1;
- (void)reload;
- (void)setTransitMarkets:(id)arg1;
- (id)transitMarketAtIndex:(unsigned long long)arg1;
- (id)transitMarkets;
- (unsigned long long)transitMarketsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
