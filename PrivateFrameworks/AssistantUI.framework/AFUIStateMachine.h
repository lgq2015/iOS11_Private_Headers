/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUIStateMachine : NSObject {
    <AFUIStateMachineDelegate> * _delegate;
    NSMutableDictionary * _endStatesByEventByStartState;
    long long  _state;
}

@property (nonatomic) <AFUIStateMachineDelegate> *delegate;
@property (getter=_endStatesByEventByStartState, nonatomic, retain) NSMutableDictionary *endStatesByEventByStartState;
@property (setter=_setState:, nonatomic) long long state;

- (void).cxx_destruct;
- (id)_descriptionForEvent:(long long)arg1;
- (id)_endStateNumberFromDictionary:(id)arg1 forEvent:(long long)arg2;
- (id)_endStatesByEventByStartState;
- (void)_setState:(long long)arg1;
- (void)_setState:(long long)arg1 forEvent:(long long)arg2;
- (void)addTransitionFromState:(long long)arg1 toState:(long long)arg2 forEvent:(long long)arg3;
- (id)delegate;
- (id)initWithInitialState:(long long)arg1;
- (void)performTransitionForEvent:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndStatesByEventByStartState:(id)arg1;
- (long long)state;

@end
