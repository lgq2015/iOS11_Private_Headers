/* made by EzioChiu.
 */

@protocol AKAppleIDAuthenticationUIProvider <AKAppleIDAuthenticationLimitedUIProvider>

@required

- (void)dismissServerProvidedUIWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)presentServerProvidedUIWithURLRequest:(void *)arg1 delegate:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: NSURLRequest *, AKAppleIDServerResourceLoadDelegate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSHTTPURLResponse *, NSDictionary *, NSError *, void*

@optional

- (void)dismissKeepUsingUIWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)presentKeepUsingUIForAppleID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
