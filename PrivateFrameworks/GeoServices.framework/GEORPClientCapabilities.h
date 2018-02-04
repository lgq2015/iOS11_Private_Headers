/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPClientCapabilities : PBCodable <NSCopying> {
    struct { 
        unsigned int transitMarketSupport : 1; 
        unsigned int hasConstrainedProblemStatusSize : 1; 
        unsigned int hasFeatureHandle : 1; 
        unsigned int hasNoOptInRequest : 1; 
        unsigned int hasSupportForIdsBasedNotifications : 1; 
    }  _has;
    bool  _hasConstrainedProblemStatusSize;
    bool  _hasFeatureHandle;
    bool  _hasNoOptInRequest;
    bool  _hasSupportForIdsBasedNotifications;
    int  _transitMarketSupport;
}

@property (nonatomic) bool hasConstrainedProblemStatusSize;
@property (nonatomic) bool hasFeatureHandle;
@property (nonatomic) bool hasHasConstrainedProblemStatusSize;
@property (nonatomic) bool hasHasFeatureHandle;
@property (nonatomic) bool hasHasNoOptInRequest;
@property (nonatomic) bool hasHasSupportForIdsBasedNotifications;
@property (nonatomic) bool hasNoOptInRequest;
@property (nonatomic) bool hasSupportForIdsBasedNotifications;
@property (nonatomic) bool hasTransitMarketSupport;
@property (nonatomic) int transitMarketSupport;

- (int)StringAsTransitMarketSupport:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConstrainedProblemStatusSize;
- (bool)hasFeatureHandle;
- (bool)hasHasConstrainedProblemStatusSize;
- (bool)hasHasFeatureHandle;
- (bool)hasHasNoOptInRequest;
- (bool)hasHasSupportForIdsBasedNotifications;
- (bool)hasNoOptInRequest;
- (bool)hasSupportForIdsBasedNotifications;
- (bool)hasTransitMarketSupport;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasConstrainedProblemStatusSize:(bool)arg1;
- (void)setHasFeatureHandle:(bool)arg1;
- (void)setHasHasConstrainedProblemStatusSize:(bool)arg1;
- (void)setHasHasFeatureHandle:(bool)arg1;
- (void)setHasHasNoOptInRequest:(bool)arg1;
- (void)setHasHasSupportForIdsBasedNotifications:(bool)arg1;
- (void)setHasNoOptInRequest:(bool)arg1;
- (void)setHasSupportForIdsBasedNotifications:(bool)arg1;
- (void)setHasTransitMarketSupport:(bool)arg1;
- (void)setTransitMarketSupport:(int)arg1;
- (int)transitMarketSupport;
- (id)transitMarketSupportAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
