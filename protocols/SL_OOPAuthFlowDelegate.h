/* made by EzioChiu.
 */

@protocol SL_OOPAuthFlowDelegate

@required

- (NSURL *)authURLForUsername:(NSString *)arg1;
- (NSString *)initialRedirectURL;
- (NSMutableURLRequest *)requestForAuthURL:(NSURL *)arg1;
- (void)setAuthFlowCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSDictionary *, NSError *, void*
- (bool)shouldHideWebViewForLoadWithRequest:(NSURLRequest *)arg1;
- (void)webViewDidFinishLoadWithPageTitleSupplier:(void *)arg1; // needs 1 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, NSString *, void*, void*

@end
