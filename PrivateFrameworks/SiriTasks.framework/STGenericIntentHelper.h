/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STGenericIntentHelper : NSObject {
    NSMutableDictionary * _handlers;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _siriResponseQueue;
    NSObject<OS_dispatch_semaphore> * _waitForIntentCompleteSemaphore;
}

@property (nonatomic, retain) NSMutableDictionary *handlers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *siriResponseQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *waitForIntentCompleteSemaphore;

+ (id)sharedHelper;

- (void).cxx_destruct;
- (bool)doIntent:(id)arg1;
- (void)finishedLaunching:(bool)arg1;
- (void)forIntent:(id)arg1 registerHandler:(id /* block */)arg2;
- (void)forIntentParam:(id)arg1 predict:(id)arg2;
- (void)handleIntent:(id)arg1 withTask:(id)arg2 andApplication:(id)arg3;
- (void)handleSiriTask:(id)arg1 withApplication:(id)arg2;
- (id)handlers;
- (id)init;
- (void)setHandlers:(id)arg1;
- (void)setSiriResponseQueue:(id)arg1;
- (void)setWaitForIntentCompleteSemaphore:(id)arg1;
- (id)siriResponseQueue;
- (id)waitForIntentCompleteSemaphore;

@end
