/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKRequest : NSObject {
    id  _requestInternal;
}

@property (nonatomic) <SKRequestDelegate> *delegate;
@property (nonatomic, copy) SKPaymentQueueClient *paymentQueueClient;

- (void)_beginBackgroundTask;
- (void)_endBackgroundTask;
- (void)_sendXPCMessage;
- (void)_shutdownRequest;
- (void)_startWithMessage:(id)arg1 replyBlock:(id /* block */)arg2;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)paymentQueueClient;
- (void)setDelegate:(id)arg1;
- (void)setPaymentQueueClient:(id)arg1;
- (void)start;

@end
