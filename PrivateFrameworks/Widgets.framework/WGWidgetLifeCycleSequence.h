/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetLifeCycleSequence : NSObject {
    long long  _currentState;
    WGWidgetLifeCycleSequence * _previousSequence;
    NSString * _sequenceIdentifier;
}

@property (setter=_setCurrentState:, nonatomic) long long currentState;
@property (getter=_previousSequence, setter=_setPreviousSequence:, nonatomic, retain) WGWidgetLifeCycleSequence *previousSequence;
@property (nonatomic, readonly, copy) NSString *sequenceIdentifier;

- (void).cxx_destruct;
- (bool)_isValidTransitionToState:(long long)arg1;
- (id)_previousSequence;
- (void)_setCurrentState:(long long)arg1;
- (void)_setPreviousSequence:(id)arg1;
- (id /* block */)beginTransitionToState:(long long)arg1 error:(id*)arg2;
- (long long)currentState;
- (id)description;
- (id)initWithSequenceIdentifier:(id)arg1;
- (bool)isCurrentState:(long long)arg1;
- (bool)isCurrentStateAtLeast:(long long)arg1;
- (bool)isCurrentStateAtMost:(long long)arg1;
- (bool)isCurrentStateNotYet:(long long)arg1;
- (id)sequenceIdentifier;
- (id)sequenceWithIdentifier:(id)arg1;
- (id)transitionToState:(long long)arg1;

@end
