/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSItemLookupRequest : SSRequest <SSXPCCoding> {
    NSMutableDictionary * _parameters;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SSItemLookupRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSDictionary *parameters;
@property (readonly) Class superclass;

- (id)_convertedValueForValue:(id)arg1;
- (id)_copyItemsFromResponse:(id)arg1 expirationDate:(id)arg2;
- (id)_errorForStatusCode:(long long)arg1;
- (id)copyQueryStringParameters;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (id)parameters;
- (void)setValue:(id)arg1 forParameter:(id)arg2;
- (bool)start;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithItemLookupBlock:(id /* block */)arg1;
- (id)valueForParameter:(id)arg1;

@end