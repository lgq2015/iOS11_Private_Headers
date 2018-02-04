/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationStateCommute : MNNavigationState <MNCommuteSessionObserver> {
    unsigned long long  _desiredCommuteSessionState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long desiredCommuteSessionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addCommuteDestinationSuggestion:(id)arg1;
- (void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2;
- (unsigned long long)desiredCommuteSessionState;
- (void)enterState;
- (void)leaveState;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (void)setDesiredCommuteSessionState:(unsigned long long)arg1;
- (void)startNavigationForRouteDetails:(id)arg1 handler:(id /* block */)arg2;
- (id)traceManager;
- (void)updateWithLocation:(id)arg1;

@end
