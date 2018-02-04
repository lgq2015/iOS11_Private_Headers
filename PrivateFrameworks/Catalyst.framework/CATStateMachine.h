/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATStateMachine : NSObject {
    CATState * _currentState;
    CATState * _initialState;
    unsigned long long  _logLevel;
    NSString * _name;
    id  _target;
    NSString * mCalloutReason;
    NSMutableDictionary * mStateByName;
}

@property (nonatomic, retain) CATState *currentState;
@property (nonatomic, retain) CATState *initialState;
@property (nonatomic) unsigned long long logLevel;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) id target;

+ (id)new;

- (void).cxx_destruct;
- (void)addState:(id)arg1;
- (id)addStateWithName:(id)arg1;
- (bool)canTransitionWithTriggeringEvent:(id)arg1;
- (id)currentState;
- (void)dealloc;
- (void)delegateDidEnterState:(id)arg1 event:(id)arg2;
- (void)delegateWillExitState:(id)arg1 event:(id)arg2;
- (id)description;
- (id)eventForTriggeringEvent:(id)arg1;
- (id)init;
- (id)initWithTarget:(id)arg1;
- (id)initialState;
- (void)invokeAction:(SEL)arg1 event:(id)arg2;
- (unsigned long long)logLevel;
- (id)name;
- (void)setCurrentState:(id)arg1;
- (void)setInitialState:(id)arg1;
- (void)setLogLevel:(unsigned long long)arg1;
- (void)start;
- (id)stateWithName:(id)arg1;
- (id)target;
- (void)transitionWithTriggeringEvent:(id)arg1;

@end
