/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAResponse : PBCodable <NSCopying> {
    GEOClientMetrics * _clientMetrics;
    GEOPDDatasetABStatus * _datasetAbStatus;
    unsigned long long  _debugServerLatencyMs;
    NSMutableArray * _etaResultReferencePointDestinations;
    GEOETAResult * _etaResultReferencePointOrigin;
    NSMutableArray * _etaResults;
    GEOETAServiceResponseSummary * _etaServiceSummary;
    struct { 
        unsigned int debugServerLatencyMs : 1; 
        unsigned int status : 1; 
    }  _has;
    GEOPlaceSearchResponse * _originPlaceSearchResponse;
    struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _problemDetails;
    unsigned long long  _problemDetailsCount;
    unsigned long long  _problemDetailsSpace;
    int  _status;
}

@property (nonatomic, retain) GEOClientMetrics *clientMetrics;
@property (nonatomic, retain) GEOPDDatasetABStatus *datasetAbStatus;
@property (nonatomic) unsigned long long debugServerLatencyMs;
@property (nonatomic, retain) NSMutableArray *etaResultReferencePointDestinations;
@property (nonatomic, retain) GEOETAResult *etaResultReferencePointOrigin;
@property (nonatomic, retain) NSMutableArray *etaResults;
@property (nonatomic, retain) GEOETAServiceResponseSummary *etaServiceSummary;
@property (nonatomic, readonly) bool hasClientMetrics;
@property (nonatomic, readonly) bool hasDatasetAbStatus;
@property (nonatomic) bool hasDebugServerLatencyMs;
@property (nonatomic, readonly) bool hasEtaResultReferencePointOrigin;
@property (nonatomic, readonly) bool hasEtaServiceSummary;
@property (nonatomic, readonly) bool hasOriginPlaceSearchResponse;
@property (nonatomic) bool hasStatus;
@property (nonatomic, retain) GEOPlaceSearchResponse *originPlaceSearchResponse;
@property (nonatomic, readonly) struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*problemDetails;
@property (nonatomic, readonly) unsigned long long problemDetailsCount;
@property (nonatomic) int status;

+ (Class)etaResultReferencePointDestinationType;
+ (Class)etaResultType;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)addEtaResult:(id)arg1;
- (void)addEtaResultReferencePointDestination:(id)arg1;
- (void)addProblemDetail:(struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)clearEtaResultReferencePointDestinations;
- (void)clearEtaResults;
- (void)clearProblemDetails;
- (id)clientMetrics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)datasetAbStatus;
- (void)dealloc;
- (unsigned long long)debugServerLatencyMs;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etaResultAtIndex:(unsigned long long)arg1;
- (id)etaResultReferencePointDestinationAtIndex:(unsigned long long)arg1;
- (id)etaResultReferencePointDestinations;
- (unsigned long long)etaResultReferencePointDestinationsCount;
- (id)etaResultReferencePointOrigin;
- (id)etaResults;
- (unsigned long long)etaResultsCount;
- (id)etaServiceSummary;
- (bool)hasClientMetrics;
- (bool)hasDatasetAbStatus;
- (bool)hasDebugServerLatencyMs;
- (bool)hasEtaResultReferencePointOrigin;
- (bool)hasEtaServiceSummary;
- (bool)hasOriginPlaceSearchResponse;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originPlaceSearchResponse;
- (struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })problemDetailAtIndex:(unsigned long long)arg1;
- (struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)problemDetails;
- (unsigned long long)problemDetailsCount;
- (bool)readFrom:(id)arg1;
- (void)setClientMetrics:(id)arg1;
- (void)setDatasetAbStatus:(id)arg1;
- (void)setDebugServerLatencyMs:(unsigned long long)arg1;
- (void)setEtaResultReferencePointDestinations:(id)arg1;
- (void)setEtaResultReferencePointOrigin:(id)arg1;
- (void)setEtaResults:(id)arg1;
- (void)setEtaServiceSummary:(id)arg1;
- (void)setHasDebugServerLatencyMs:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setOriginPlaceSearchResponse:(id)arg1;
- (void)setProblemDetails:(struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
