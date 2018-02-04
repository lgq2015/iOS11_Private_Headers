/* made by EzioChiu.
 */

@protocol NEAgentSessionDelegate

@required

- (void)handleCancel;
- (void)handleDisposeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)handleInitWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)handleMessage:(NSObject<OS_xpc_object> *)arg1 withOuterMessage:(NSObject<OS_xpc_object> *)arg2;
- (id)initWithSession:(NEAgentSession *)arg1 pluginType:(NSString *)arg2 primaryPluginType:(NSString *)arg3 pluginBundle:(struct __CFBundle { }*)arg4 applicationPath:(NSString *)arg5;

@end
