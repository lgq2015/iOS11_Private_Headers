/* made by EzioChiu.
 */

@protocol CNUILSApplicationWorkspaceFacade <NSObject>

@required

- (void)openSensitiveURLInBackground:(NSURL *)arg1 withOptions:(NSDictionary *)arg2;
- (void)openUserActivity:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSUserActivity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
