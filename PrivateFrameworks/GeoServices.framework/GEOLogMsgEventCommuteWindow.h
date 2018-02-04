/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventCommuteWindow : PBCodable <NSCopying> {
    unsigned int  _duration;
    int  _endReason;
    struct { 
        unsigned int startTime : 1; 
        unsigned int duration : 1; 
        unsigned int endReason : 1; 
        unsigned int numberOfAlertingResponses : 1; 
        unsigned int numberOfDoomRoutingRequests : 1; 
        unsigned int predictedExitTime : 1; 
    }  _has;
    unsigned int  _numberOfAlertingResponses;
    unsigned int  _numberOfDoomRoutingRequests;
    NSMutableArray * _predictedDestinations;
    unsigned int  _predictedExitTime;
    double  _startTime;
}

@property (nonatomic) unsigned int duration;
@property (nonatomic) int endReason;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasEndReason;
@property (nonatomic) bool hasNumberOfAlertingResponses;
@property (nonatomic) bool hasNumberOfDoomRoutingRequests;
@property (nonatomic) bool hasPredictedExitTime;
@property (nonatomic) bool hasStartTime;
@property (nonatomic) unsigned int numberOfAlertingResponses;
@property (nonatomic) unsigned int numberOfDoomRoutingRequests;
@property (nonatomic, retain) NSMutableArray *predictedDestinations;
@property (nonatomic) unsigned int predictedExitTime;
@property (nonatomic) double startTime;

+ (Class)predictedDestinationType;

- (void).cxx_destruct;
- (int)StringAsEndReason:(id)arg1;
- (void)addPredictedDestination:(id)arg1;
- (void)clearPredictedDestinations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (int)endReason;
- (id)endReasonAsString:(int)arg1;
- (bool)hasDuration;
- (bool)hasEndReason;
- (bool)hasNumberOfAlertingResponses;
- (bool)hasNumberOfDoomRoutingRequests;
- (bool)hasPredictedExitTime;
- (bool)hasStartTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfAlertingResponses;
- (unsigned int)numberOfDoomRoutingRequests;
- (id)predictedDestinationAtIndex:(unsigned long long)arg1;
- (id)predictedDestinations;
- (unsigned long long)predictedDestinationsCount;
- (unsigned int)predictedExitTime;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setEndReason:(int)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasEndReason:(bool)arg1;
- (void)setHasNumberOfAlertingResponses:(bool)arg1;
- (void)setHasNumberOfDoomRoutingRequests:(bool)arg1;
- (void)setHasPredictedExitTime:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setNumberOfAlertingResponses:(unsigned int)arg1;
- (void)setNumberOfDoomRoutingRequests:(unsigned int)arg1;
- (void)setPredictedDestinations:(id)arg1;
- (void)setPredictedExitTime:(unsigned int)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (void)writeTo:(id)arg1;

@end
