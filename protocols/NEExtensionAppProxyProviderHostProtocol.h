/* made by EzioChiu.
 */

@protocol NEExtensionAppProxyProviderHostProtocol <NEExtensionTunnelProviderHostProtocol>

@required

- (void)openFlowDivertControlSocketWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSFileHandle *, void*
- (void)verifyAppWithPID:(void *)arg1 uuid:(void *)arg2 matchesAppRule:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: long long, NSUUID *, NEAppRule *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
