/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISyncWishlistOperation : NSOperation {
    SKUIClientContext * _clientContext;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _resultBlock;
}

@property (copy) id /* block */ resultBlock;

- (void).cxx_destruct;
- (bool)_loadRemoteItemsForWishlist:(id)arg1 didChange:(bool*)arg2 error:(id*)arg3;
- (bool)_mergeItems:(id)arg1 wishlist:(id)arg2 didChange:(bool*)arg3 error:(id*)arg4;
- (void)_sendLocalChangesForWishlist:(id)arg1;
- (id)init;
- (id)initWithClientContext:(id)arg1;
- (void)main;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;

@end
