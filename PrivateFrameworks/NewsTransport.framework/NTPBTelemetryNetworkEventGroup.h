/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTelemetryNetworkEventGroup : PBCodable <NSCopying> {
    int  _cellularRadioAccessTechnology;
    int  _eventType;
    NSMutableArray * _failures;
    struct { 
        unsigned int cellularRadioAccessTechnology : 1; 
        unsigned int eventType : 1; 
        unsigned int wifiReachabilityStatus : 1; 
    }  _has;
    NSString * _respondingPop;
    NSMutableArray * _successes;
    bool  _wifiReachabilityStatus;
}

@property (nonatomic, readonly) unsigned long long cacheHitCount;
@property (nonatomic, readonly) unsigned long long cacheMissCount;
@property (nonatomic) int cellularRadioAccessTechnology;
@property (nonatomic, readonly) FCNetworkEventStats *connectDurationStats;
@property (nonatomic, readonly) FCNetworkEventStats *dnsDurationStats;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic) int eventType;
@property (nonatomic, retain) NSMutableArray *failures;
@property (nonatomic) bool hasCellularRadioAccessTechnology;
@property (nonatomic) bool hasEventType;
@property (nonatomic, readonly) bool hasRespondingPop;
@property (nonatomic) bool hasWifiReachabilityStatus;
@property (nonatomic, retain) NSString *respondingPop;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, retain) NSMutableArray *successes;
@property (nonatomic, readonly) FCNetworkEventStats *timeToFirstByteStats;
@property (nonatomic, readonly) FCNetworkEventStats *totalDurationStats;
@property (nonatomic) bool wifiReachabilityStatus;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

+ (Class)failuresType;
+ (Class)successesType;

- (void).cxx_destruct;
- (int)StringAsCellularRadioAccessTechnology:(id)arg1;
- (void)addFailures:(id)arg1;
- (void)addSuccesses:(id)arg1;
- (int)cellularRadioAccessTechnology;
- (id)cellularRadioAccessTechnologyAsString:(int)arg1;
- (void)clearFailures;
- (void)clearSuccesses;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)eventType;
- (id)failures;
- (id)failuresAtIndex:(unsigned long long)arg1;
- (unsigned long long)failuresCount;
- (bool)hasCellularRadioAccessTechnology;
- (bool)hasEventType;
- (bool)hasRespondingPop;
- (bool)hasWifiReachabilityStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)respondingPop;
- (void)setCellularRadioAccessTechnology:(int)arg1;
- (void)setEventType:(int)arg1;
- (void)setFailures:(id)arg1;
- (void)setHasCellularRadioAccessTechnology:(bool)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasWifiReachabilityStatus:(bool)arg1;
- (void)setRespondingPop:(id)arg1;
- (void)setSuccesses:(id)arg1;
- (void)setWifiReachabilityStatus:(bool)arg1;
- (id)successes;
- (id)successesAtIndex:(unsigned long long)arg1;
- (unsigned long long)successesCount;
- (bool)wifiReachabilityStatus;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (unsigned long long)cacheHitCount;
- (unsigned long long)cacheMissCount;
- (id)connectDurationStats;
- (id)dnsDurationStats;
- (id)endDate;
- (id)startDate;
- (id)timeToFirstByteStats;
- (id)totalDurationStats;

@end
