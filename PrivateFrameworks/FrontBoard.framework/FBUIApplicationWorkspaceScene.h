/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBUIApplicationWorkspaceScene : FBWorkspaceScene {
    NSMutableSet * _allWatchdogs;
    bool  _createResponseReceived;
    BKSProcessAssertion * _deliverMessageProcessAssertion;
    unsigned long long  _deliverMessageProcessAssertionCount;
    BKSProcessAssertion * _resumeProcessAssertion;
    BKSProcessAssertion * _seoProcessAssertion;
    BKSProcessAssertion * _suspendingProcessAssertion;
    NSMutableArray * _watchdogStack;
}

- (void)_dispatchBlockAfterProcessLaunch:(id /* block */)arg1;
- (void)_handleDidUpdateSettings:(id)arg1 withDiff:(id)arg2 transitionContext:(id)arg3 completion:(id /* block */)arg4;
- (void)_handleInvalidationWithTransitionContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_workspaceQueue_activateForSEO:(bool)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 eventBlock:(id /* block */)arg4;
- (void)_workspaceQueue_activateResponseReceived:(id)arg1;
- (void)_workspaceQueue_cancelAllWatchdogTimers;
- (void)_workspaceQueue_cancelWatchdogTimer:(id)arg1;
- (id)_workspaceQueue_createWatchdogForSceneAction:(unsigned long long)arg1 transitionContext:(id)arg2;
- (void)_workspaceQueue_deactivateForSEO:(bool)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 eventBlock:(id /* block */)arg4;
- (void)_workspaceQueue_deactivateResponseReceived:(id)arg1;
- (unsigned long long)_workspaceQueue_determineSceneActionFromSettings:(id)arg1 toSettings:(id)arg2;
- (void)_workspaceQueue_dropAllProcessAssertions;
- (void)_workspaceQueue_dropDeliverMessageProcessAssertion;
- (void)_workspaceQueue_dropDeliverMessageProcessAssertion:(bool)arg1;
- (void)_workspaceQueue_dropResumeProcessAssertion;
- (void)_workspaceQueue_dropSEOProcessAssertion;
- (void)_workspaceQueue_dropSuspendingProcessAssertion;
- (void)_workspaceQueue_invalidate;
- (long long)_workspaceQueue_lifecycleStateForSettings:(id)arg1;
- (id)_workspaceQueue_newProcessAssertionForReason:(unsigned int)arg1 withName:(id)arg2 transitionContext:(id)arg3 acquireSynchronously:(bool)arg4;
- (void)_workspaceQueue_performGracefulExitWithDeliveryConfirmation:(id /* block */)arg1;
- (int)_workspaceQueue_pid;
- (id)_workspaceQueue_process;
- (void)_workspaceQueue_takeAssertionsForDeactivation:(bool)arg1 transitionContext:(id)arg2;
- (void)_workspaceQueue_takeDeliverMessageProcessAssertionWithTransitionContext:(id)arg1;
- (void)_workspaceQueue_takeResumeProcessAssertionWithTransitionContext:(id)arg1;
- (void)_workspaceQueue_takeSEOProcessAssertionWithTransitionContext:(id)arg1;
- (void)_workspaceQueue_takeSuspendingProcessAssertion;
- (void)dealloc;
- (id)initWithParentWorkspace:(id)arg1 identifier:(id)arg2;
- (id)parentWorkspace;

@end
