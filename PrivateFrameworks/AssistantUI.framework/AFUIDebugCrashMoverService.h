/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUIDebugCrashMoverService : NSObject {
    NSObject<OS_xpc_object> * _connection;
}

@property (getter=_connection, nonatomic, readonly) NSObject<OS_xpc_object> *connection;

- (void).cxx_destruct;
- (id)_connection;
- (const char *)_errorDescriptionForXPCObject:(id)arg1;
- (void)moveLogsWithExtensions:(id)arg1 completion:(id /* block */)arg2;

@end
