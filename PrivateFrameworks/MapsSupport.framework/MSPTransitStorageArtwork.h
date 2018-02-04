/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPTransitStorageArtwork : PBCodable <GEOTransitArtworkDataSource, NSCopying> {
    NSString * _accessibilityText;
    long long  _artworkSourceType;
    long long  _artworkUseType;
    struct { 
        unsigned int artworkSourceType : 1; 
        unsigned int artworkUseType : 1; 
        unsigned int hasRoutingIncidentBadge : 1; 
    }  _has;
    bool  _hasRoutingIncidentBadge;
    MSPTransitStorageIcon * _icon;
    MSPTransitStorageShield * _iconFallbackShield;
    MSPTransitStorageShield * _shield;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) NSString *accessibilityText;
@property (nonatomic, retain) NSString *accessibilityText;
@property (nonatomic) long long artworkSourceType;
@property (nonatomic, readonly) long long artworkSourceType;
@property (nonatomic, readonly) long long artworkUseType;
@property (nonatomic) long long artworkUseType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAccessibilityText;
@property (nonatomic) bool hasArtworkSourceType;
@property (nonatomic) bool hasArtworkUseType;
@property (nonatomic) bool hasHasRoutingIncidentBadge;
@property (nonatomic, readonly) bool hasIcon;
@property (nonatomic, readonly) bool hasIconFallbackShield;
@property (nonatomic, readonly) bool hasRoutingIncidentBadge;
@property (nonatomic) bool hasRoutingIncidentBadge;
@property (nonatomic, readonly) bool hasShield;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MSPTransitStorageIcon *icon;
@property (nonatomic, readonly) <GEOTransitIconDataSource> *iconDataSource;
@property (nonatomic, retain) MSPTransitStorageShield *iconFallbackShield;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *iconFallbackShieldDataSource;
@property (nonatomic, retain) MSPTransitStorageShield *shield;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *shieldDataSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (long long)StringAsArtworkSourceType:(id)arg1;
- (long long)StringAsArtworkUseType:(id)arg1;
- (id)accessibilityText;
- (long long)artworkSourceType;
- (id)artworkSourceTypeAsString:(long long)arg1;
- (long long)artworkUseType;
- (id)artworkUseTypeAsString:(long long)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccessibilityText;
- (bool)hasArtworkSourceType;
- (bool)hasArtworkUseType;
- (bool)hasHasRoutingIncidentBadge;
- (bool)hasIcon;
- (bool)hasIconFallbackShield;
- (bool)hasRoutingIncidentBadge;
- (bool)hasShield;
- (unsigned long long)hash;
- (id)icon;
- (id)iconDataSource;
- (id)iconFallbackShield;
- (id)iconFallbackShieldDataSource;
- (id)initWithArtwork:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessibilityText:(id)arg1;
- (void)setArtworkSourceType:(long long)arg1;
- (void)setArtworkUseType:(long long)arg1;
- (void)setHasArtworkSourceType:(bool)arg1;
- (void)setHasArtworkUseType:(bool)arg1;
- (void)setHasHasRoutingIncidentBadge:(bool)arg1;
- (void)setHasRoutingIncidentBadge:(bool)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconFallbackShield:(id)arg1;
- (void)setShield:(id)arg1;
- (id)shield;
- (id)shieldDataSource;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
