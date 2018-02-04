/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPInstructionCorrection : PBCodable <NSCopying> {
    NSString * _comments;
    struct { 
        unsigned int routeStepIndex : 1; 
        unsigned int routeStepSubstepIndex : 1; 
    }  _has;
    GEORPPhotoWithMetadata * _photo;
    unsigned int  _routeStepIndex;
    NSData * _routeStepScreenshotImageData;
    unsigned int  _routeStepSubstepIndex;
}

@property (nonatomic, retain) NSString *comments;
@property (nonatomic, readonly) bool hasComments;
@property (nonatomic, readonly) bool hasPhoto;
@property (nonatomic) bool hasRouteStepIndex;
@property (nonatomic, readonly) bool hasRouteStepScreenshotImageData;
@property (nonatomic) bool hasRouteStepSubstepIndex;
@property (nonatomic, retain) GEORPPhotoWithMetadata *photo;
@property (nonatomic) unsigned int routeStepIndex;
@property (nonatomic, retain) NSData *routeStepScreenshotImageData;
@property (nonatomic) unsigned int routeStepSubstepIndex;

- (void).cxx_destruct;
- (id)comments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasComments;
- (bool)hasPhoto;
- (bool)hasRouteStepIndex;
- (bool)hasRouteStepScreenshotImageData;
- (bool)hasRouteStepSubstepIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)photo;
- (bool)readFrom:(id)arg1;
- (unsigned int)routeStepIndex;
- (id)routeStepScreenshotImageData;
- (unsigned int)routeStepSubstepIndex;
- (void)setComments:(id)arg1;
- (void)setHasRouteStepIndex:(bool)arg1;
- (void)setHasRouteStepSubstepIndex:(bool)arg1;
- (void)setPhoto:(id)arg1;
- (void)setRouteStepIndex:(unsigned int)arg1;
- (void)setRouteStepScreenshotImageData:(id)arg1;
- (void)setRouteStepSubstepIndex:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
