/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUIApplicationSceneDeactivationAssertion : NSObject <BSDescriptionProviding> {
    bool  _acquired;
    FBSDisplayIdentity * _displayIdentity;
    id /* block */  _predicate;
    long long  _reason;
    double  _sceneLevel;
}

@property (getter=isAcquired, nonatomic, readonly) bool acquired;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) id /* block */ predicate;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) double sceneLevel;
@property (readonly) Class superclass;

- (id)_initWithReason:(long long)arg1 sceneLevel:(double)arg2 forDisplayWithIdentity:(id)arg3;
- (void)acquire;
- (void)acquireWithPredicate:(id /* block */)arg1;
- (void)acquireWithPredicate:(id /* block */)arg1 transitionContext:(id)arg2;
- (void)acquireWithTransitionContext:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayIdentity;
- (id)initWithReason:(long long)arg1;
- (id)initWithReason:(long long)arg1 sceneLevel:(double)arg2;
- (bool)isAcquired;
- (id /* block */)predicate;
- (long long)reason;
- (void)relinquish;
- (double)sceneLevel;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
