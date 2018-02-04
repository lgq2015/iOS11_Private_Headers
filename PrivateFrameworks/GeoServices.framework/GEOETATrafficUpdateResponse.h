/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETATrafficUpdateResponse : PBCodable <NSCopying> {
    NSMutableArray * _cameras;
    GEOPDDatasetABStatus * _datasetAbStatus;
    unsigned long long  _debugServerLatencyMs;
    GEOETAServiceResponseSummary * _etaServiceSummary;
    struct { 
        unsigned int debugServerLatencyMs : 1; 
        unsigned int status : 1; 
    }  _has;
    NSData * _responseId;
    NSMutableArray * _routes;
    NSData * _sessionState;
    int  _status;
}

@property (nonatomic, retain) NSMutableArray *cameras;
@property (nonatomic, retain) GEOPDDatasetABStatus *datasetAbStatus;
@property (nonatomic) unsigned long long debugServerLatencyMs;
@property (nonatomic, retain) GEOETAServiceResponseSummary *etaServiceSummary;
@property (nonatomic, readonly) bool hasDatasetAbStatus;
@property (nonatomic) bool hasDebugServerLatencyMs;
@property (nonatomic, readonly) bool hasEtaServiceSummary;
@property (nonatomic, readonly) bool hasResponseId;
@property (nonatomic, readonly) bool hasSessionState;
@property (nonatomic) bool hasStatus;
@property (nonatomic, retain) NSData *responseId;
@property (nonatomic, retain) NSMutableArray *routes;
@property (nonatomic, retain) NSData *sessionState;
@property (nonatomic) int status;

+ (Class)cameraType;
+ (Class)routeType;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)addCamera:(id)arg1;
- (void)addRoute:(id)arg1;
- (id)cameraAtIndex:(unsigned long long)arg1;
- (id)cameras;
- (unsigned long long)camerasCount;
- (void)clearCameras;
- (void)clearRoutes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)datasetAbStatus;
- (unsigned long long)debugServerLatencyMs;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etaServiceSummary;
- (bool)hasDatasetAbStatus;
- (bool)hasDebugServerLatencyMs;
- (bool)hasEtaServiceSummary;
- (bool)hasResponseId;
- (bool)hasSessionState;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseId;
- (id)routeAtIndex:(unsigned long long)arg1;
- (id)routes;
- (unsigned long long)routesCount;
- (id)sessionState;
- (void)setCameras:(id)arg1;
- (void)setDatasetAbStatus:(id)arg1;
- (void)setDebugServerLatencyMs:(unsigned long long)arg1;
- (void)setEtaServiceSummary:(id)arg1;
- (void)setHasDebugServerLatencyMs:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setResponseId:(id)arg1;
- (void)setRoutes:(id)arg1;
- (void)setSessionState:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
