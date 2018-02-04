/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitEventTriggerExecutionSession : PBCodable <NSCopying> {
    NSMutableArray * _endEvents;
    int  _executionState;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int executionState : 1; 
        unsigned int resultErrorCode : 1; 
    }  _has;
    int  _resultErrorCode;
    NSString * _sessionID;
    unsigned long long  _timestamp;
    NSMutableArray * _triggerEvents;
}

@property (nonatomic, retain) NSMutableArray *endEvents;
@property (nonatomic) int executionState;
@property (nonatomic) bool hasExecutionState;
@property (nonatomic) bool hasResultErrorCode;
@property (nonatomic, readonly) bool hasSessionID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int resultErrorCode;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSMutableArray *triggerEvents;

+ (Class)endEventsType;
+ (Class)triggerEventsType;

- (void).cxx_destruct;
- (int)StringAsExecutionState:(id)arg1;
- (void)addEndEvents:(id)arg1;
- (void)addTriggerEvents:(id)arg1;
- (void)clearEndEvents;
- (void)clearTriggerEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endEvents;
- (id)endEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)endEventsCount;
- (int)executionState;
- (id)executionStateAsString:(int)arg1;
- (bool)hasExecutionState;
- (bool)hasResultErrorCode;
- (bool)hasSessionID;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)resultErrorCode;
- (id)sessionID;
- (void)setEndEvents:(id)arg1;
- (void)setExecutionState:(int)arg1;
- (void)setHasExecutionState:(bool)arg1;
- (void)setHasResultErrorCode:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setResultErrorCode:(int)arg1;
- (void)setSessionID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvents:(id)arg1;
- (unsigned long long)timestamp;
- (id)triggerEvents;
- (id)triggerEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)triggerEventsCount;
- (void)writeTo:(id)arg1;

@end
