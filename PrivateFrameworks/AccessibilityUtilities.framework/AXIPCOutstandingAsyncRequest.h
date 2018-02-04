/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXIPCOutstandingAsyncRequest : NSObject {
    id /* block */  _replyHandler;
    struct __CFRunLoopSource { } * _replyMachPortSource;
    unsigned int  _replyPort;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

@property (nonatomic, readonly) id /* block */ replyHandler;
@property (nonatomic, readonly) struct __CFRunLoopSource { }*replyMachPortSource;
@property (nonatomic, readonly) unsigned int replyPort;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *replyQueue;

+ (void)initialize;
+ (id)lookupByPort:(unsigned int)arg1;
+ (void)registerOutstandingRequest:(id)arg1;
+ (void)unregisterByPort:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_responseReceived:(id)arg1;
- (void)dealloc;
- (id)initWithReplyPort:(unsigned int)arg1 handlerQueue:(id)arg2 handler:(id /* block */)arg3;
- (void)initialSendAborted;
- (void)rawResponseReceived:(id)arg1;
- (void)registerAndListenForResponse;
- (id /* block */)replyHandler;
- (struct __CFRunLoopSource { }*)replyMachPortSource;
- (unsigned int)replyPort;
- (id)replyQueue;
- (void)sendOnceRightDestroyed;

@end
