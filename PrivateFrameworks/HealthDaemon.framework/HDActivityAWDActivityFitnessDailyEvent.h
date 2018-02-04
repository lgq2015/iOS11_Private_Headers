/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivityAWDActivityFitnessDailyEvent : PBCodable <NSCopying> {
    NSMutableArray * _exerciseMinuteHours;
    struct { 
        unsigned int monthsSinceFirstWatchUsage : 1; 
        unsigned int moveRingCompletionPercentage : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    long long  _monthsSinceFirstWatchUsage;
    long long  _moveRingCompletionPercentage;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _standEventMinutesSinceMidnightRoundedTo10s;
    unsigned long long  _timestamp;
    NSString * _userToken;
}

@property (nonatomic, retain) NSMutableArray *exerciseMinuteHours;
@property (nonatomic) bool hasMonthsSinceFirstWatchUsage;
@property (nonatomic) bool hasMoveRingCompletionPercentage;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasUserToken;
@property (nonatomic) long long monthsSinceFirstWatchUsage;
@property (nonatomic) long long moveRingCompletionPercentage;
@property (nonatomic, readonly) long long*standEventMinutesSinceMidnightRoundedTo10s;
@property (nonatomic, readonly) unsigned long long standEventMinutesSinceMidnightRoundedTo10sCount;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *userToken;

+ (Class)exerciseMinuteHoursType;

- (void).cxx_destruct;
- (void)addExerciseMinuteHours:(id)arg1;
- (void)addStandEventMinutesSinceMidnightRoundedTo10:(long long)arg1;
- (void)clearExerciseMinuteHours;
- (void)clearStandEventMinutesSinceMidnightRoundedTo10s;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exerciseMinuteHours;
- (id)exerciseMinuteHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)exerciseMinuteHoursCount;
- (bool)hasMonthsSinceFirstWatchUsage;
- (bool)hasMoveRingCompletionPercentage;
- (bool)hasTimestamp;
- (bool)hasUserToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)monthsSinceFirstWatchUsage;
- (long long)moveRingCompletionPercentage;
- (bool)readFrom:(id)arg1;
- (void)setExerciseMinuteHours:(id)arg1;
- (void)setHasMonthsSinceFirstWatchUsage:(bool)arg1;
- (void)setHasMoveRingCompletionPercentage:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMonthsSinceFirstWatchUsage:(long long)arg1;
- (void)setMoveRingCompletionPercentage:(long long)arg1;
- (void)setStandEventMinutesSinceMidnightRoundedTo10s:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUserToken:(id)arg1;
- (long long)standEventMinutesSinceMidnightRoundedTo10AtIndex:(unsigned long long)arg1;
- (long long*)standEventMinutesSinceMidnightRoundedTo10s;
- (unsigned long long)standEventMinutesSinceMidnightRoundedTo10sCount;
- (unsigned long long)timestamp;
- (id)userToken;
- (void)writeTo:(id)arg1;

@end
