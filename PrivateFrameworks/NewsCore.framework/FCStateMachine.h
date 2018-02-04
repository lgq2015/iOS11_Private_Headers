/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCStateMachine : NSObject {
    NSMutableDictionary * _events;
    FCMutexLock * _lock;
    id  _owner;
    FCStateMachineState * _state;
    NSMutableDictionary * _states;
    unsigned long long  _status;
    long long  _statusToken;
}

@property (nonatomic, retain) NSMutableDictionary *events;
@property (nonatomic, retain) FCMutexLock *lock;
@property (nonatomic) id owner;
@property (nonatomic, retain) FCStateMachineState *state;
@property (nonatomic, retain) NSMutableDictionary *states;
@property (nonatomic) unsigned long long status;
@property (nonatomic) long long statusToken;

- (void).cxx_destruct;
- (void)activate;
- (void)activateIfNeeded;
- (void)addEvent:(id)arg1;
- (void)addState:(id)arg1;
- (void)deactivate;
- (void)deactivateIfNeeded;
- (id)debugDescription;
- (id)description;
- (id)events;
- (id)fireEventWithName:(id)arg1 withContext:(id)arg2;
- (id)initWithState:(id)arg1 withOwner:(id)arg2;
- (id)lock;
- (id)owner;
- (void)setEvents:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setState:(id)arg1;
- (void)setStates:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setStatusToken:(long long)arg1;
- (id)state;
- (id)states;
- (unsigned long long)status;
- (long long)statusToken;

@end
