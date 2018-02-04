/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVConferenceXPCServer : NSObject {
    NSMutableArray * clientConnections;
    NSObject<OS_dispatch_queue> * clientConnectionsQueue;
    NSObject<OS_dispatch_queue> * incomingMessageQueue;
    NSObject<OS_xpc_object> * listener;
    NSObject<OS_dispatch_queue> * outgoingMessageQueue;
    NSMutableDictionary * registeredBlocks;
}

@property (readonly) NSObject<OS_xpc_object> *listener;
@property (readonly) NSMutableDictionary *registeredBlocks;

+ (id)AVConferenceXPCServerSingleton;

- (void)_xpc_add_connection_to_list:(id)arg1;
- (id)_xpc_get_connection_from_list_for_connection:(id)arg1;
- (id)_xpc_get_connection_from_list_for_context:(id)arg1;
- (id)_xpc_get_connections_from_list_for_context:(id)arg1;
- (void)_xpc_handle_incoming_request:(id)arg1;
- (void)_xpc_remove_connection_from_list:(id)arg1;
- (void)_xpc_remove_connections_from_list;
- (void)_xpc_start_listening_for_connections;
- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (void)appendContextToDictionary:(id)arg1 forConnection:(id)arg2;
- (void)appendPIDToDictionary:(id)arg1 pid:(int)arg2;
- (id)authorizedTokenData;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)deregisterFromService:(char *)arg1;
- (id)init;
- (id)listener;
- (id)newClientDiedDictionary;
- (id)newNSDictionaryFromNSError:(id)arg1;
- (id)newNSDictionaryFromXPCDictionary:(id)arg1;
- (id)newNSErrorFromNSDictionary:(id)arg1;
- (id)newXPCDictionaryFromNSDictionary:(id)arg1 forEvent:(id)arg2;
- (void)registerBlockForService:(char *)arg1 block:(id /* block */)arg2;
- (void)registerBlockForService:(char *)arg1 block:(id /* block */)arg2 queue:(id)arg3;
- (void)registerBlockForService:(char *)arg1 block:(id /* block */)arg2 queue:(id)arg3 eventLogLevel:(int)arg4;
- (id)registeredBlocks;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 context:(id)arg3;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 toAllClientsWithContext:(id)arg3;

@end
