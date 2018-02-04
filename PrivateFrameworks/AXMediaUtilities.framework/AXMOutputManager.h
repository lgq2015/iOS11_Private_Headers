/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMOutputManager : NSObject <AXMTaskDispatcherDelegate> {
    AXMAudioSession * _audioSession;
    AXMTaskDispatcher * _outputRequests;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _queue_activeComponents;
    AXMHapticComponent * _queue_hapticComponent;
    AXMSoundComponent * _queue_soundComponent;
    AXMSpeechComponent * _queue_speechComponent;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (void)dispatchRequest:(id)arg1 options:(id)arg2;
- (void)dispatcher:(id)arg1 handleTask:(id)arg2;
- (void)enableWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)interrupt:(id)arg1;
- (void)interruptImmediately;
- (void)interruptPolitely;
- (void)playSound:(long long)arg1;
- (void)speak:(id)arg1;

@end
