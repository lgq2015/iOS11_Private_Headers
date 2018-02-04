/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPlaceResponse : PBCodable <NSCopying> {
    GEOClientMetrics * _clientMetrics;
    GEOPDDatasetABStatus * _datasetAbStatus;
    NSString * _debugApiKey;
    unsigned long long  _debugLatencyMs;
    NSMutableArray * _displayLanguages;
    NSString * _displayRegion;
    GEOPDPlaceGlobalResult * _globalResult;
    struct { 
        unsigned int debugLatencyMs : 1; 
        unsigned int requestType : 1; 
        unsigned int status : 1; 
    }  _has;
    NSMutableArray * _placeResults;
    int  _requestType;
    NSMutableArray * _spokenLanguages;
    int  _status;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOClientMetrics *clientMetrics;
@property (nonatomic, retain) GEOPDDatasetABStatus *datasetAbStatus;
@property (nonatomic, retain) NSString *debugApiKey;
@property (nonatomic) unsigned long long debugLatencyMs;
@property (nonatomic, retain) NSMutableArray *displayLanguages;
@property (nonatomic, retain) NSString *displayRegion;
@property (nonatomic, retain) GEOPDPlaceGlobalResult *globalResult;
@property (nonatomic, readonly) bool hasClientMetrics;
@property (nonatomic, readonly) bool hasDatasetAbStatus;
@property (nonatomic, readonly) bool hasDebugApiKey;
@property (nonatomic) bool hasDebugLatencyMs;
@property (nonatomic, readonly) bool hasDisplayRegion;
@property (nonatomic, readonly) bool hasGlobalResult;
@property (nonatomic) bool hasRequestType;
@property (nonatomic) bool hasStatus;
@property (nonatomic, retain) NSMutableArray *placeResults;
@property (nonatomic) int requestType;
@property (nonatomic, retain) NSMutableArray *spokenLanguages;
@property (nonatomic) int status;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)displayLanguageType;
+ (Class)placeResultType;
+ (Class)spokenLanguageType;

- (void).cxx_destruct;
- (int)StringAsRequestType:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (id)_disambiguationLabels;
- (void)addDisplayLanguage:(id)arg1;
- (void)addPlaceResult:(id)arg1;
- (void)addSpokenLanguage:(id)arg1;
- (void)clearDisplayLanguages;
- (void)clearPlaceResults;
- (void)clearSpokenLanguages;
- (id)clientMetrics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)datasetAbStatus;
- (id)debugApiKey;
- (unsigned long long)debugLatencyMs;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayLanguageAtIndex:(unsigned long long)arg1;
- (id)displayLanguages;
- (unsigned long long)displayLanguagesCount;
- (id)displayRegion;
- (id)globalResult;
- (bool)hasClientMetrics;
- (bool)hasDatasetAbStatus;
- (bool)hasDebugApiKey;
- (bool)hasDebugLatencyMs;
- (bool)hasDisplayRegion;
- (bool)hasGlobalResult;
- (bool)hasRequestType;
- (bool)hasStatus;
- (unsigned long long)hash;
- (id)initWithPlace:(id)arg1 forRequestType:(int)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeResultAtIndex:(unsigned long long)arg1;
- (id)placeResults;
- (unsigned long long)placeResultsCount;
- (bool)readFrom:(id)arg1;
- (int)requestType;
- (id)requestTypeAsString:(int)arg1;
- (void)setClientMetrics:(id)arg1;
- (void)setDatasetAbStatus:(id)arg1;
- (void)setDebugApiKey:(id)arg1;
- (void)setDebugLatencyMs:(unsigned long long)arg1;
- (void)setDisplayLanguages:(id)arg1;
- (void)setDisplayRegion:(id)arg1;
- (void)setGlobalResult:(id)arg1;
- (void)setHasDebugLatencyMs:(bool)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setPlaceResults:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)setSpokenLanguages:(id)arg1;
- (void)setStatus:(int)arg1;
- (id)spokenLanguageAtIndex:(unsigned long long)arg1;
- (id)spokenLanguages;
- (unsigned long long)spokenLanguagesCount;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
