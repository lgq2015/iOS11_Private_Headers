/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSession : NSObject {
    NFSession * _internalSession;
    NSObject<OS_dispatch_queue> * _internalSessionSerialQueue;
}

@property (nonatomic, readonly) unsigned long long lifecycleState;

+ (id)startContactlessInterfaceSessionWithCompletion:(id /* block */)arg1;
+ (id)startContactlessInterfaceSessionWithCompletion:(id /* block */)arg1 targetQueue:(id)arg2;
+ (id)startInAppSessionWithCompletion:(id /* block */)arg1;
+ (id)startInAppSessionWithCompletion:(id /* block */)arg1 targetQueue:(id)arg2;
+ (id)startPeerPaymentSessionWithCompletion:(id /* block */)arg1;
+ (id)startPeerPaymentSessionWithCompletion:(id /* block */)arg1 targetQueue:(id)arg2;
+ (id)startReaderSessionWithCompletion:(id /* block */)arg1;
+ (id)startReaderSessionWithCompletion:(id /* block */)arg1 targetQueue:(id)arg2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInternalSession:(id)arg1 targetQueue:(id)arg2;
- (void)invalidateSession;
- (void)invalidateSessionWithCompletion:(id /* block */)arg1;
- (unsigned long long)lifecycleState;
- (void)performBlockAsyncOnInternalSession:(id /* block */)arg1;
- (void)performBlockSyncOnInternalSession:(id /* block */)arg1;

@end
