/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStarRatingQueue : NSObject {
    SKUIClientContext * _clientContext;
    SKUIReviewConfiguration * _reviewConfiguration;
    UIWindow * _window;
}

@property (nonatomic) UIWindow *window;

- (void).cxx_destruct;
- (void)_setRating:(long long)arg1 forItemID:(id)arg2 account:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)init;
- (id)initWithClientContext:(id)arg1 reviewConfiguration:(id)arg2;
- (void)setRating:(long long)arg1 forItemID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setWindow:(id)arg1;
- (id)window;

@end
