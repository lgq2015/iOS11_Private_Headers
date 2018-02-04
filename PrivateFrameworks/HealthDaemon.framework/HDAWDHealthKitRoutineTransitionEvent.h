/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitRoutineTransitionEvent : PBCodable <NSCopying> {
    long long  _endDate;
    HDAWDHealthKitRoutineLocation * _from;
    struct { 
        unsigned int endDate : 1; 
        unsigned int startDate : 1; 
        unsigned int timestamp : 1; 
        unsigned int mode : 1; 
    }  _has;
    int  _mode;
    long long  _startDate;
    unsigned long long  _timestamp;
    HDAWDHealthKitRoutineLocation * _to;
}

@property (nonatomic) long long endDate;
@property (nonatomic, retain) HDAWDHealthKitRoutineLocation *from;
@property (nonatomic) bool hasEndDate;
@property (nonatomic, readonly) bool hasFrom;
@property (nonatomic) bool hasMode;
@property (nonatomic) bool hasStartDate;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTo;
@property (nonatomic) int mode;
@property (nonatomic) long long startDate;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) HDAWDHealthKitRoutineLocation *to;

- (void).cxx_destruct;
- (int)StringAsMode:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)endDate;
- (id)from;
- (bool)hasEndDate;
- (bool)hasFrom;
- (bool)hasMode;
- (bool)hasStartDate;
- (bool)hasTimestamp;
- (bool)hasTo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)mode;
- (id)modeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndDate:(long long)arg1;
- (void)setFrom:(id)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasMode:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMode:(int)arg1;
- (void)setStartDate:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTo:(id)arg1;
- (long long)startDate;
- (unsigned long long)timestamp;
- (id)to;
- (void)writeTo:(id)arg1;

@end
