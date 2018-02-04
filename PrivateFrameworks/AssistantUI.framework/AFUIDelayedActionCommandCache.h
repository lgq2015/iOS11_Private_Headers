/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUIDelayedActionCommandCache : NSObject {
    NSMutableDictionary * _delayedActionTimersByIdentifier;
    <AFUIDelayedActionCommandCacheDelegate> * _delegate;
    NSMutableDictionary * _dismissalDelayedActionCommandsByIdentifier;
}

@property (nonatomic) <AFUIDelayedActionCommandCacheDelegate> *delegate;
@property (nonatomic, readonly) bool hasPendingCommands;

- (void).cxx_destruct;
- (void)_invalidateDelayedActionTimer:(id)arg1 withKey:(id)arg2;
- (void)_performDelayedActionCommandTimerAction:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)handleDelayedActionCancelCommand:(id)arg1 completion:(id /* block */)arg2;
- (void)handleDelayedActionCommand:(id)arg1 completion:(id /* block */)arg2;
- (bool)hasPendingCommands;
- (id)initWithDelegate:(id)arg1;
- (void)invalidatePendingCommands;
- (void)performDismissalCommands;
- (void)setDelegate:(id)arg1;

@end
