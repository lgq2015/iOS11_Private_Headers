/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAttentionAwarenessObserver : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _accessQueueLabel;
    AWAttentionAwarenessClient * _attentionAwarenessClient;
    NSObject<OS_dispatch_queue> * _attentionAwarenessClientQueue;
    bool  _isFullyInitialized;
    bool  _isPollingForAttention;
    NSMutableDictionary * _pollingForAttentionEventHandlers;
}

+ (id)sharedAttentionAwarenessObserver;
+ (bool)supportsAttenuatingTonesForAttentionDetected;

- (void).cxx_destruct;
- (void)_assertNotRunningOnAccessQueue;
- (void)_assertRunningOnAccessQueue;
- (void)_beginPollingForAttention;
- (void)_didCompleteInitialization;
- (void)_didReceiveAttentionPollingEventOfType:(unsigned long long)arg1 attentionEvent:(id)arg2;
- (void)_endPollingForAttention;
- (void)_invokePollingForAttentionEventHandlers:(id)arg1 eventType:(long long)arg2;
- (void)cancelPollForAttentionWithToken:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)pollForAttentionWithEventHandler:(id /* block */)arg1;

@end
