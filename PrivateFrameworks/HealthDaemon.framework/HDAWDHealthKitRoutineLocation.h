/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitRoutineLocation : PBCodable <NSCopying> {
    long long  _confidenceMillis;
    struct { 
        unsigned int confidenceMillis : 1; 
        unsigned int recentVisitCount : 1; 
        unsigned int uncertaintyMillis : 1; 
        unsigned int locationType : 1; 
    }  _has;
    int  _locationType;
    NSString * _locationUUID;
    long long  _recentVisitCount;
    long long  _uncertaintyMillis;
}

@property (nonatomic) long long confidenceMillis;
@property (nonatomic) bool hasConfidenceMillis;
@property (nonatomic) bool hasLocationType;
@property (nonatomic, readonly) bool hasLocationUUID;
@property (nonatomic) bool hasRecentVisitCount;
@property (nonatomic) bool hasUncertaintyMillis;
@property (nonatomic) int locationType;
@property (nonatomic, retain) NSString *locationUUID;
@property (nonatomic) long long recentVisitCount;
@property (nonatomic) long long uncertaintyMillis;

- (void).cxx_destruct;
- (int)StringAsLocationType:(id)arg1;
- (long long)confidenceMillis;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConfidenceMillis;
- (bool)hasLocationType;
- (bool)hasLocationUUID;
- (bool)hasRecentVisitCount;
- (bool)hasUncertaintyMillis;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)locationType;
- (id)locationTypeAsString:(int)arg1;
- (id)locationUUID;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)recentVisitCount;
- (void)setConfidenceMillis:(long long)arg1;
- (void)setHasConfidenceMillis:(bool)arg1;
- (void)setHasLocationType:(bool)arg1;
- (void)setHasRecentVisitCount:(bool)arg1;
- (void)setHasUncertaintyMillis:(bool)arg1;
- (void)setLocationType:(int)arg1;
- (void)setLocationUUID:(id)arg1;
- (void)setRecentVisitCount:(long long)arg1;
- (void)setUncertaintyMillis:(long long)arg1;
- (long long)uncertaintyMillis;
- (void)writeTo:(id)arg1;

@end
