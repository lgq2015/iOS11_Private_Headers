/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitEventTrigger : PBCodable <NSCopying> {
    int  _activationState;
    int  _activationType;
    bool  _containsRecurrences;
    NSMutableArray * _events;
    bool  _executeOnce;
    struct { 
        unsigned int activationState : 1; 
        unsigned int activationType : 1; 
        unsigned int containsRecurrences : 1; 
        unsigned int executeOnce : 1; 
    }  _has;
    AWDHomeKitPredicate * _predicate;
}

@property (nonatomic) int activationState;
@property (nonatomic) int activationType;
@property (nonatomic) bool containsRecurrences;
@property (nonatomic, retain) NSMutableArray *events;
@property (nonatomic) bool executeOnce;
@property (nonatomic) bool hasActivationState;
@property (nonatomic) bool hasActivationType;
@property (nonatomic) bool hasContainsRecurrences;
@property (nonatomic) bool hasExecuteOnce;
@property (nonatomic, readonly) bool hasPredicate;
@property (nonatomic, retain) AWDHomeKitPredicate *predicate;

+ (Class)eventsType;

- (void).cxx_destruct;
- (int)StringAsActivationState:(id)arg1;
- (int)StringAsActivationType:(id)arg1;
- (int)activationState;
- (id)activationStateAsString:(int)arg1;
- (int)activationType;
- (id)activationTypeAsString:(int)arg1;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
- (bool)containsRecurrences;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)events;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (bool)executeOnce;
- (bool)hasActivationState;
- (bool)hasActivationType;
- (bool)hasContainsRecurrences;
- (bool)hasExecuteOnce;
- (bool)hasPredicate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)predicate;
- (bool)readFrom:(id)arg1;
- (void)setActivationState:(int)arg1;
- (void)setActivationType:(int)arg1;
- (void)setContainsRecurrences:(bool)arg1;
- (void)setEvents:(id)arg1;
- (void)setExecuteOnce:(bool)arg1;
- (void)setHasActivationState:(bool)arg1;
- (void)setHasActivationType:(bool)arg1;
- (void)setHasContainsRecurrences:(bool)arg1;
- (void)setHasExecuteOnce:(bool)arg1;
- (void)setPredicate:(id)arg1;
- (void)writeTo:(id)arg1;

@end
