/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitIngestionLatencyEvent : PBCodable <NSCopying> {
    long long  _endDate;
    struct { 
        unsigned int endDate : 1; 
        unsigned int indexInSession : 1; 
        unsigned int maxDelayUs : 1; 
        unsigned int meanDelayUs : 1; 
        unsigned int minDelayUs : 1; 
        unsigned int sampleCount : 1; 
        unsigned int startDate : 1; 
        unsigned int stdDelayUs : 1; 
        unsigned int timestamp : 1; 
        unsigned int typeIdentifier : 1; 
        unsigned int inSession : 1; 
    }  _has;
    bool  _inSession;
    long long  _indexInSession;
    long long  _maxDelayUs;
    long long  _meanDelayUs;
    long long  _minDelayUs;
    long long  _sampleCount;
    long long  _startDate;
    long long  _stdDelayUs;
    unsigned long long  _timestamp;
    long long  _typeIdentifier;
}

@property (nonatomic) long long endDate;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasInSession;
@property (nonatomic) bool hasIndexInSession;
@property (nonatomic) bool hasMaxDelayUs;
@property (nonatomic) bool hasMeanDelayUs;
@property (nonatomic) bool hasMinDelayUs;
@property (nonatomic) bool hasSampleCount;
@property (nonatomic) bool hasStartDate;
@property (nonatomic) bool hasStdDelayUs;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTypeIdentifier;
@property (nonatomic) bool inSession;
@property (nonatomic) long long indexInSession;
@property (nonatomic) long long maxDelayUs;
@property (nonatomic) long long meanDelayUs;
@property (nonatomic) long long minDelayUs;
@property (nonatomic) long long sampleCount;
@property (nonatomic) long long startDate;
@property (nonatomic) long long stdDelayUs;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) long long typeIdentifier;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)endDate;
- (bool)hasEndDate;
- (bool)hasInSession;
- (bool)hasIndexInSession;
- (bool)hasMaxDelayUs;
- (bool)hasMeanDelayUs;
- (bool)hasMinDelayUs;
- (bool)hasSampleCount;
- (bool)hasStartDate;
- (bool)hasStdDelayUs;
- (bool)hasTimestamp;
- (bool)hasTypeIdentifier;
- (unsigned long long)hash;
- (bool)inSession;
- (long long)indexInSession;
- (bool)isEqual:(id)arg1;
- (long long)maxDelayUs;
- (long long)meanDelayUs;
- (void)mergeFrom:(id)arg1;
- (long long)minDelayUs;
- (bool)readFrom:(id)arg1;
- (long long)sampleCount;
- (void)setEndDate:(long long)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasInSession:(bool)arg1;
- (void)setHasIndexInSession:(bool)arg1;
- (void)setHasMaxDelayUs:(bool)arg1;
- (void)setHasMeanDelayUs:(bool)arg1;
- (void)setHasMinDelayUs:(bool)arg1;
- (void)setHasSampleCount:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setHasStdDelayUs:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTypeIdentifier:(bool)arg1;
- (void)setInSession:(bool)arg1;
- (void)setIndexInSession:(long long)arg1;
- (void)setMaxDelayUs:(long long)arg1;
- (void)setMeanDelayUs:(long long)arg1;
- (void)setMinDelayUs:(long long)arg1;
- (void)setSampleCount:(long long)arg1;
- (void)setStartDate:(long long)arg1;
- (void)setStdDelayUs:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTypeIdentifier:(long long)arg1;
- (long long)startDate;
- (long long)stdDelayUs;
- (unsigned long long)timestamp;
- (long long)typeIdentifier;
- (void)writeTo:(id)arg1;

@end
