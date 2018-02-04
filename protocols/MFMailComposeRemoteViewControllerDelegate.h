/* made by EzioChiu.
 */

@protocol MFMailComposeRemoteViewControllerDelegate

@required

- (void)compositionFinishedWithResult:(long long)arg1 error:(NSError *)arg2;
- (void)compositionRequestsSendWithBody:(void *)arg1 recipients:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)compositionViewServiceTerminatedWithError:(NSError *)arg1;

@end
