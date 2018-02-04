/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUStateMachine : NSObject {
    CUState * _currentState;
    bool  _dispatching;
    NSMutableArray * _eventQueue;
    CUState * _initialState;
    NSPointerArray * _lcaPath;
    bool  _started;
    NSArray * _states;
    CUState * _targetState;
}

@property (nonatomic, retain) CUState *initialState;
@property (nonatomic, retain) NSArray *states;

- (void).cxx_destruct;
- (void)_firstTimeInit;
- (void)dealloc;
- (void)dispatchEvent:(id)arg1;
- (id)initialState;
- (void)invalidate;
- (void)setInitialState:(id)arg1;
- (void)setStates:(id)arg1;
- (void)start;
- (id)states;
- (void)transitionToState:(id)arg1;

@end