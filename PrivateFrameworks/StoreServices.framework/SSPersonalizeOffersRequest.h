/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPersonalizeOffersRequest : SSRequest <SSXPCCoding> {
    NSArray * _items;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SSPersonalizeOffersDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *items;
@property (readonly) Class superclass;

- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithItems:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)items;
- (bool)start;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithPersonalizedResponseBlock:(id /* block */)arg1;

@end
