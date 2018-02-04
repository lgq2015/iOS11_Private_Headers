/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStepFeedback : PBCodable <NSCopying> {
    bool  _completedStep;
    double  _completionTimeStamp;
    struct { 
        unsigned int completionTimeStamp : 1; 
        unsigned int routeIndex : 1; 
        unsigned int stepID : 1; 
        unsigned int completedStep : 1; 
        unsigned int lightGuidance : 1; 
    }  _has;
    bool  _lightGuidance;
    NSData * _routeID;
    unsigned int  _routeIndex;
    unsigned int  _stepID;
    NSData * _tripID;
}

@property (nonatomic) bool completedStep;
@property (nonatomic) double completionTimeStamp;
@property (nonatomic) bool hasCompletedStep;
@property (nonatomic) bool hasCompletionTimeStamp;
@property (nonatomic) bool hasLightGuidance;
@property (nonatomic, readonly) bool hasRouteID;
@property (nonatomic) bool hasRouteIndex;
@property (nonatomic) bool hasStepID;
@property (nonatomic, readonly) bool hasTripID;
@property (nonatomic) bool lightGuidance;
@property (nonatomic, retain) NSData *routeID;
@property (nonatomic) unsigned int routeIndex;
@property (nonatomic) unsigned int stepID;
@property (nonatomic, retain) NSData *tripID;

- (void).cxx_destruct;
- (bool)completedStep;
- (double)completionTimeStamp;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCompletedStep;
- (bool)hasCompletionTimeStamp;
- (bool)hasLightGuidance;
- (bool)hasRouteID;
- (bool)hasRouteIndex;
- (bool)hasStepID;
- (bool)hasTripID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)lightGuidance;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeID;
- (unsigned int)routeIndex;
- (void)setCompletedStep:(bool)arg1;
- (void)setCompletionTimeStamp:(double)arg1;
- (void)setHasCompletedStep:(bool)arg1;
- (void)setHasCompletionTimeStamp:(bool)arg1;
- (void)setHasLightGuidance:(bool)arg1;
- (void)setHasRouteIndex:(bool)arg1;
- (void)setHasStepID:(bool)arg1;
- (void)setLightGuidance:(bool)arg1;
- (void)setRouteID:(id)arg1;
- (void)setRouteIndex:(unsigned int)arg1;
- (void)setStepID:(unsigned int)arg1;
- (void)setTripID:(id)arg1;
- (unsigned int)stepID;
- (id)tripID;
- (void)writeTo:(id)arg1;

@end
