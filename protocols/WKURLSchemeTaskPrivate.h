/* made by EzioChiu.
 */

@protocol WKURLSchemeTaskPrivate <WKURLSchemeTask>

@required

- (void)_didPerformRedirection:(NSURLResponse *)arg1 newRequest:(NSURLRequest *)arg2;

@end
