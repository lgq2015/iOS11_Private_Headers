/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitSiriCommand : PBCodable <NSCopying> {
    int  _actionType;
    unsigned int  _currentConfigurationVersion;
    unsigned int  _duration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int actionType : 1; 
        unsigned int currentConfigurationVersion : 1; 
        unsigned int duration : 1; 
        unsigned int lastSyncedConfigurationVersion : 1; 
        unsigned int numEntities : 1; 
        unsigned int numFailures : 1; 
        unsigned int numIncompleteOperations : 1; 
        unsigned int outcome : 1; 
        unsigned int serverConfigurationVersion : 1; 
    }  _has;
    unsigned int  _lastSyncedConfigurationVersion;
    unsigned int  _numEntities;
    unsigned int  _numFailures;
    unsigned int  _numIncompleteOperations;
    int  _outcome;
    unsigned int  _serverConfigurationVersion;
    unsigned long long  _timestamp;
}

@property (nonatomic) int actionType;
@property (nonatomic) unsigned int currentConfigurationVersion;
@property (nonatomic) unsigned int duration;
@property (nonatomic) bool hasActionType;
@property (nonatomic) bool hasCurrentConfigurationVersion;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasLastSyncedConfigurationVersion;
@property (nonatomic) bool hasNumEntities;
@property (nonatomic) bool hasNumFailures;
@property (nonatomic) bool hasNumIncompleteOperations;
@property (nonatomic) bool hasOutcome;
@property (nonatomic) bool hasServerConfigurationVersion;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int lastSyncedConfigurationVersion;
@property (nonatomic) unsigned int numEntities;
@property (nonatomic) unsigned int numFailures;
@property (nonatomic) unsigned int numIncompleteOperations;
@property (nonatomic) int outcome;
@property (nonatomic) unsigned int serverConfigurationVersion;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsActionType:(id)arg1;
- (int)StringAsOutcome:(id)arg1;
- (int)actionType;
- (id)actionTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)currentConfigurationVersion;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (bool)hasActionType;
- (bool)hasCurrentConfigurationVersion;
- (bool)hasDuration;
- (bool)hasLastSyncedConfigurationVersion;
- (bool)hasNumEntities;
- (bool)hasNumFailures;
- (bool)hasNumIncompleteOperations;
- (bool)hasOutcome;
- (bool)hasServerConfigurationVersion;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)lastSyncedConfigurationVersion;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numEntities;
- (unsigned int)numFailures;
- (unsigned int)numIncompleteOperations;
- (int)outcome;
- (id)outcomeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)serverConfigurationVersion;
- (void)setActionType:(int)arg1;
- (void)setCurrentConfigurationVersion:(unsigned int)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setHasActionType:(bool)arg1;
- (void)setHasCurrentConfigurationVersion:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasLastSyncedConfigurationVersion:(bool)arg1;
- (void)setHasNumEntities:(bool)arg1;
- (void)setHasNumFailures:(bool)arg1;
- (void)setHasNumIncompleteOperations:(bool)arg1;
- (void)setHasOutcome:(bool)arg1;
- (void)setHasServerConfigurationVersion:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLastSyncedConfigurationVersion:(unsigned int)arg1;
- (void)setNumEntities:(unsigned int)arg1;
- (void)setNumFailures:(unsigned int)arg1;
- (void)setNumIncompleteOperations:(unsigned int)arg1;
- (void)setOutcome:(int)arg1;
- (void)setServerConfigurationVersion:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
