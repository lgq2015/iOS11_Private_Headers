/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKTurnBasedEventHandler : NSObject {
    NSObject<GKTurnBasedEventHandlerDelegate> * _delegateWeak;
    bool  _didBecomeActive;
    NSObject<OS_dispatch_queue> * _lookForEventQueue;
}

@property (nonatomic) NSObject<GKTurnBasedEventHandlerDelegate> *delegate;
@property (nonatomic) bool didBecomeActive;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *lookForEventQueue;

+ (id)sharedTurnBasedEventHandler;

- (void)callTurnEventForMatch:(id)arg1 userTapped:(bool)arg2;
- (void)dealloc;
- (id)delegate;
- (bool)didBecomeActive;
- (id)init;
- (void)lookForEvent;
- (id)lookForEventQueue;
- (void)setDelegate:(id)arg1;
- (void)setDidBecomeActive:(bool)arg1;
- (void)setLookForEventQueue:(id)arg1;

@end
