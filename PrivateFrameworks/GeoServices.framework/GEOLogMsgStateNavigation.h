/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateNavigation : PBCodable <NSCopying> {
    double  _distanceToDestination;
    struct { 
        unsigned int distanceToDestination : 1; 
        unsigned int lineType : 1; 
        unsigned int navState : 1; 
    }  _has;
    int  _lineType;
    GEONavCameraState * _navCameraState;
    int  _navState;
}

@property (nonatomic) double distanceToDestination;
@property (nonatomic) bool hasDistanceToDestination;
@property (nonatomic) bool hasLineType;
@property (nonatomic, readonly) bool hasNavCameraState;
@property (nonatomic) bool hasNavState;
@property (nonatomic) int lineType;
@property (nonatomic, retain) GEONavCameraState *navCameraState;
@property (nonatomic) int navState;

- (void).cxx_destruct;
- (int)StringAsLineType:(id)arg1;
- (int)StringAsNavState:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)distanceToDestination;
- (bool)hasDistanceToDestination;
- (bool)hasLineType;
- (bool)hasNavCameraState;
- (bool)hasNavState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)lineType;
- (id)lineTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)navCameraState;
- (int)navState;
- (id)navStateAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDistanceToDestination:(double)arg1;
- (void)setHasDistanceToDestination:(bool)arg1;
- (void)setHasLineType:(bool)arg1;
- (void)setHasNavState:(bool)arg1;
- (void)setLineType:(int)arg1;
- (void)setNavCameraState:(id)arg1;
- (void)setNavState:(int)arg1;
- (void)writeTo:(id)arg1;

@end
