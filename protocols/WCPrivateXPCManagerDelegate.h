/* made by EzioChiu.
 */

@protocol WCPrivateXPCManagerDelegate <NSObject>

@required

- (void)xpcManager:(void *)arg1 handlePairedSyncComplicationsStartedWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: WCPrivateXPCManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)xpcManager:(WCPrivateXPCManager *)arg1 handlePingForExtensionBundleID:(NSString *)arg2;
- (void)xpcManager:(void *)arg1 isExtensionPrivileged:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: WCPrivateXPCManager *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
