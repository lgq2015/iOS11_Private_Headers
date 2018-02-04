/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMessage : PBCodable <NSCopying> {
    unsigned int  _groupRetryCount;
    struct { 
        unsigned int groupRetryCount : 1; 
        unsigned int logMessageType : 1; 
    }  _has;
    int  _logMessageType;
    NSMutableArray * _logMsgEvents;
}

@property (nonatomic) unsigned int groupRetryCount;
@property (nonatomic) bool hasGroupRetryCount;
@property (nonatomic) bool hasLogMessageType;
@property (nonatomic) int logMessageType;
@property (nonatomic, retain) NSMutableArray *logMsgEvents;

+ (id)acceptedLogMsgEvents;
+ (id)acceptedLogMsgEventsForLogMessageType:(int)arg1;
+ (id)allowedSessionTypes;
+ (bool)disallowedStateWithStateType:(int)arg1 logMsgEvent:(id)arg2 logMessage:(id)arg3;
+ (id)disallowedStatesForLogMsgEvent:(id)arg1 logMessage:(id)arg2;
+ (bool)logMessageType:(int)arg1 acceptsLogMsgEventType:(int)arg2;
+ (id)logMessagesForEvent:(id)arg1;
+ (Class)logMsgEventType;
+ (bool)supportsCohortSessionForLogMsgEvent:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsLogMessageType:(id)arg1;
- (bool)acceptsLogMsgEvent:(id)arg1;
- (void)addLogMsgEvent:(id)arg1;
- (unsigned long long)allowedSessionType;
- (void)clearLogMsgEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupIdentifier;
- (unsigned int)groupItemCount;
- (unsigned int)groupItemIdHash;
- (long long)groupItemQueuedTime;
- (unsigned int)groupRetryCount;
- (unsigned int)groupSequenceNumber;
- (bool)hasGroupRetryCount;
- (bool)hasLogMessageType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isFullCarPlayStateAllowed;
- (bool)isFullExperimentsStateAllowed;
- (bool)isNavigationSessionAllowed;
- (bool)isStateAllowed:(id)arg1;
- (int)logMessageType;
- (id)logMessageTypeAsString:(int)arg1;
- (id)logMsgEventAtIndex:(unsigned long long)arg1;
- (id)logMsgEvents;
- (unsigned long long)logMsgEventsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGroupRetryCount:(unsigned int)arg1;
- (void)setHasGroupRetryCount:(bool)arg1;
- (void)setHasLogMessageType:(bool)arg1;
- (void)setLogMessageType:(int)arg1;
- (void)setLogMsgEvents:(id)arg1;
- (void)writeTo:(id)arg1;

@end
