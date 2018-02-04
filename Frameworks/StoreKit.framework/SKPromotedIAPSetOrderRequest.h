/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPromotedIAPSetOrderRequest : SKRequest {
    NSString * _bundleId;
    id /* block */  _completionHandler;
    NSArray * _order;
}

@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSArray *order;

- (void).cxx_destruct;
- (void)_handleReply:(id)arg1;
- (void)_sendXPCMessage;
- (id)bundleId;
- (id /* block */)completionHandler;
- (id)initWithOrder:(id)arg1 bundleId:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithOrder:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)order;
- (void)setBundleId:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setOrder:(id)arg1;

@end
