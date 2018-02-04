/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOABAssignmentResponse : PBCodable <NSCopying> {
    NSMutableArray * _assignments;
    unsigned long long  _branchExpirationTtlHours;
    GEOABClientConfig * _clientConfig;
    struct { 
        unsigned int branchExpirationTtlHours : 1; 
        unsigned int refreshIntervalSeconds : 1; 
        unsigned int timestamp : 1; 
        unsigned int invalidatePoiCache : 1; 
        unsigned int invalidateTileCache : 1; 
    }  _has;
    bool  _invalidatePoiCache;
    bool  _invalidateTileCache;
    GEOABSecondPartyPlaceRequestClientMetaData * _mapsAbClientMetadata;
    GEOABSecondPartyPlaceRequestClientMetaData * _parsecClientMetadata;
    GEOABSecondPartyPlaceRequestClientMetaData * _rapClientMetadata;
    unsigned long long  _refreshIntervalSeconds;
    NSString * _requestGuid;
    GEOABSecondPartyPlaceRequestClientMetaData * _siriClientMetadata;
    NSString * _sourceURL;
    double  _timestamp;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *assignments;
@property (nonatomic) unsigned long long branchExpirationTtlHours;
@property (nonatomic, retain) GEOABClientConfig *clientConfig;
@property (nonatomic) bool hasBranchExpirationTtlHours;
@property (nonatomic, readonly) bool hasClientConfig;
@property (nonatomic) bool hasInvalidatePoiCache;
@property (nonatomic) bool hasInvalidateTileCache;
@property (nonatomic, readonly) bool hasMapsAbClientMetadata;
@property (nonatomic, readonly) bool hasParsecClientMetadata;
@property (nonatomic, readonly) bool hasRapClientMetadata;
@property (nonatomic) bool hasRefreshIntervalSeconds;
@property (nonatomic, readonly) bool hasRequestGuid;
@property (nonatomic, readonly) bool hasSiriClientMetadata;
@property (nonatomic, readonly) bool hasSourceURL;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool invalidatePoiCache;
@property (nonatomic) bool invalidateTileCache;
@property (nonatomic, retain) GEOABSecondPartyPlaceRequestClientMetaData *mapsAbClientMetadata;
@property (nonatomic, retain) GEOABSecondPartyPlaceRequestClientMetaData *parsecClientMetadata;
@property (nonatomic, retain) GEOABSecondPartyPlaceRequestClientMetaData *rapClientMetadata;
@property (nonatomic) unsigned long long refreshIntervalSeconds;
@property (nonatomic, retain) NSString *requestGuid;
@property (nonatomic, retain) GEOABSecondPartyPlaceRequestClientMetaData *siriClientMetadata;
@property (nonatomic, retain) NSString *sourceURL;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)assignmentType;

- (void).cxx_destruct;
- (id)_clientConfigValueForKey:(id)arg1;
- (id)_experimentAssignmentForServiceType:(int)arg1 placeRequestType:(int)arg2;
- (id)_querySubstringForServiceType:(int)arg1 placeRequestType:(int)arg2;
- (void)addAssignment:(id)arg1;
- (id)assignmentAtIndex:(unsigned long long)arg1;
- (id)assignments;
- (unsigned long long)assignmentsCount;
- (unsigned long long)branchExpirationTtlHours;
- (void)clearAssignments;
- (id)clientConfig;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBranchExpirationTtlHours;
- (bool)hasClientConfig;
- (bool)hasInvalidatePoiCache;
- (bool)hasInvalidateTileCache;
- (bool)hasMapsAbClientMetadata;
- (bool)hasParsecClientMetadata;
- (bool)hasRapClientMetadata;
- (bool)hasRefreshIntervalSeconds;
- (bool)hasRequestGuid;
- (bool)hasSiriClientMetadata;
- (bool)hasSourceURL;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)invalidatePoiCache;
- (bool)invalidateTileCache;
- (bool)isEqual:(id)arg1;
- (id)mapsAbClientMetadata;
- (void)mergeFrom:(id)arg1;
- (id)parsecClientMetadata;
- (id)rapClientMetadata;
- (bool)readFrom:(id)arg1;
- (unsigned long long)refreshIntervalSeconds;
- (id)requestGuid;
- (void)setAssignments:(id)arg1;
- (void)setBranchExpirationTtlHours:(unsigned long long)arg1;
- (void)setClientConfig:(id)arg1;
- (void)setHasBranchExpirationTtlHours:(bool)arg1;
- (void)setHasInvalidatePoiCache:(bool)arg1;
- (void)setHasInvalidateTileCache:(bool)arg1;
- (void)setHasRefreshIntervalSeconds:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInvalidatePoiCache:(bool)arg1;
- (void)setInvalidateTileCache:(bool)arg1;
- (void)setMapsAbClientMetadata:(id)arg1;
- (void)setParsecClientMetadata:(id)arg1;
- (void)setRapClientMetadata:(id)arg1;
- (void)setRefreshIntervalSeconds:(unsigned long long)arg1;
- (void)setRequestGuid:(id)arg1;
- (void)setSiriClientMetadata:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)siriClientMetadata;
- (id)sourceURL;
- (double)timestamp;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
