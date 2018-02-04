/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficCamera : PBCodable <NSCopying> {
    unsigned int  _cameraPriority;
    struct { 
        unsigned int speedThreshold : 1; 
        unsigned int cameraPriority : 1; 
        unsigned int highlightDistance : 1; 
        unsigned int type : 1; 
    }  _has;
    unsigned int  _highlightDistance;
    NSString * _identifier;
    GEOMiniCard * _infoCard;
    GEOLatLng * _position;
    NSString * _speedLimitText;
    double  _speedThreshold;
    GEOMiniCard * _speedingCard;
    int  _type;
}

@property (nonatomic) unsigned int cameraPriority;
@property (nonatomic) bool hasCameraPriority;
@property (nonatomic) bool hasHighlightDistance;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasInfoCard;
@property (nonatomic, readonly) bool hasPosition;
@property (nonatomic, readonly) bool hasSpeedLimitText;
@property (nonatomic) bool hasSpeedThreshold;
@property (nonatomic, readonly) bool hasSpeedingCard;
@property (nonatomic) bool hasType;
@property (nonatomic) unsigned int highlightDistance;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) GEOMiniCard *infoCard;
@property (nonatomic, retain) GEOLatLng *position;
@property (nonatomic, retain) NSString *speedLimitText;
@property (nonatomic) double speedThreshold;
@property (nonatomic, retain) GEOMiniCard *speedingCard;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (unsigned int)cameraPriority;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCameraPriority;
- (bool)hasHighlightDistance;
- (bool)hasIdentifier;
- (bool)hasInfoCard;
- (bool)hasPosition;
- (bool)hasSpeedLimitText;
- (bool)hasSpeedThreshold;
- (bool)hasSpeedingCard;
- (bool)hasType;
- (unsigned long long)hash;
- (unsigned int)highlightDistance;
- (id)identifier;
- (id)infoCard;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)position;
- (bool)readFrom:(id)arg1;
- (void)setCameraPriority:(unsigned int)arg1;
- (void)setHasCameraPriority:(bool)arg1;
- (void)setHasHighlightDistance:(bool)arg1;
- (void)setHasSpeedThreshold:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHighlightDistance:(unsigned int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInfoCard:(id)arg1;
- (void)setPosition:(id)arg1;
- (void)setSpeedLimitText:(id)arg1;
- (void)setSpeedThreshold:(double)arg1;
- (void)setSpeedingCard:(id)arg1;
- (void)setType:(int)arg1;
- (id)speedLimitText;
- (double)speedThreshold;
- (id)speedingCard;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
