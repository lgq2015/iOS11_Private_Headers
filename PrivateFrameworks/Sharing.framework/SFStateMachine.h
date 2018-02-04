/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFStateMachine : NSObject {
    NSString * _currentState;
    <SFStateMachineDelegate> * _delegate;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    bool  _shouldLogStateTransitions;
    NSDictionary * _validTransitions;
}

@property (copy) NSString *currentState;
@property <SFStateMachineDelegate> *delegate;
@property (nonatomic) bool shouldLogStateTransitions;
@property (retain) NSDictionary *validTransitions;

- (void).cxx_destruct;
- (id)_missingTransitionFromState:(id)arg1 toState:(id)arg2;
- (void)_performTransitionFromState:(id)arg1 toState:(id)arg2;
- (bool)_setCurrentState:(id)arg1;
- (id)_validateTransitionFromState:(id)arg1 toState:(id)arg2;
- (bool)applyState:(id)arg1;
- (id)currentState;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;
- (void)setCurrentState:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldLogStateTransitions:(bool)arg1;
- (void)setValidTransitions:(id)arg1;
- (bool)shouldLogStateTransitions;
- (id)target;
- (id)validTransitions;

@end
