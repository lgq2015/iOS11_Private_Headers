/* made by EzioChiu.
 */

@protocol WCXPCPrivateManagerClientProtocol <NSObject>

@required

- (void)handlePairedSyncComplicationsStartedWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)handlePingForExtensionBundleID:(NSString *)arg1;
- (void)isExtensionPrivileged:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
