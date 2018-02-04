/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface _FBSystemGestureManager : NSObject <FBExclusiveTouchGestureRecognizerDelegate, UIGestureRecognizerDelegate> {
    bool  _achievedMaximumMovement;
    UIGestureRecognizer * _catchEdgeSwipeFailureGesture;
    bool  _didProcessPendingSwipeBegan;
    bool  _didSeeExclusiveTouchBegan;
    UIGestureRecognizer * _exclusiveTouchGesture;
    NSMutableSet * _externalEdgeSwipeGestures;
    NSMutableSet * _externalGestures;
    NSMutableSet * _internalGestures;
    UIGestureRecognizer * _pendingSwipeGesture;
    NSMutableSet * _recognizingGestures;
    FBSDisplayIdentity * _rootDisplayIdentity;
    BKSTouchStream * _touchStream;
}

@property (nonatomic) bool achievedMaximumMovement;
@property (nonatomic, retain) UIGestureRecognizer *catchEdgeSwipeFailureGesture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didProcessPendingSwipeBegan;
@property (nonatomic) bool didSeeExclusiveTouchBegan;
@property (nonatomic, retain) UIGestureRecognizer *exclusiveTouchGesture;
@property (nonatomic, readonly, copy) NSSet *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIGestureRecognizer *pendingSwipeGesture;
@property (readonly) Class superclass;
@property (nonatomic, retain) BKSTouchStream *touchStream;

- (void)_addInternalGesturesToView:(id)arg1;
- (void)_catchSwipeFailureGestureChanged:(id)arg1;
- (unsigned char)_dispatchModeForExternalGestureCompletion;
- (void)_exclusiveTouchGestureChanged:(id)arg1;
- (void)_exclusiveTouchGestureDidTerminate:(id)arg1;
- (void)_externalGestureRecognizerChanged:(id)arg1;
- (void)_failedPendingSwipe;
- (void)_handleTooMuchMovementWithLastTouchTimestamp:(double)arg1;
- (void)_pendingSwipeGestureChanged:(id)arg1;
- (void)_pendingSwipeGestureDidBegin:(id)arg1;
- (void)_pendingSwipeGestureDidTerminate:(id)arg1;
- (void)_removeInternalGestures;
- (bool)achievedMaximumMovement;
- (void)addGestureRecognizer:(id)arg1;
- (void)addGestureRecognizer:(id)arg1 recognitionEvent:(long long)arg2;
- (id)catchEdgeSwipeFailureGesture;
- (void)dealloc;
- (id)description;
- (bool)didProcessPendingSwipeBegan;
- (bool)didSeeExclusiveTouchBegan;
- (id)exclusiveTouchGesture;
- (void)exclusiveTouchGestureRecognizer:(id)arg1 achievedMaximumAbsoluteAccumulatedMovement:(bool)arg2 timestamp:(double)arg3;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)gestureRecognizers;
- (id)initWithRootDisplayIdentity:(id)arg1;
- (id)pendingSwipeGesture;
- (void)removeGestureRecognizer:(id)arg1;
- (void)setAchievedMaximumMovement:(bool)arg1;
- (void)setCatchEdgeSwipeFailureGesture:(id)arg1;
- (void)setDidProcessPendingSwipeBegan:(bool)arg1;
- (void)setDidSeeExclusiveTouchBegan:(bool)arg1;
- (void)setExclusiveTouchGesture:(id)arg1;
- (void)setPendingSwipeGesture:(id)arg1;
- (void)setTouchStream:(id)arg1;
- (id)touchStream;
- (id)windowForSystemGestures;

@end
