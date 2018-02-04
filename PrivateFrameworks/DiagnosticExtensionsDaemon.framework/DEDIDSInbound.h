/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDIDSInbound : NSObject <IDSServiceDelegate> {
    DEDIDSConnection * _connection;
    DEDController * _delegate;
    NSObject<OS_os_log> * _log;
}

@property DEDIDSConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property DEDController *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *log;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)adopt_files:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)cancel_session:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)commit_session:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)connection;
- (id)delegate;
- (void)device_supports_diagnostic_extensions:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)did_adopt_files:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)did_cancel_session:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)did_commit_session:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)did_get_session_status:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)did_start_session:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)finished_diagnostic_with_identifier:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)get_session_status:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)init;
- (id)initWithConnection:(id)arg1 controller:(id)arg2;
- (void)local_device_query_callback:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)log;
- (void)logMalformedMessage;
- (void)pingDeviceAtAddress:(id)arg1 withSessionID:(id)arg2;
- (void)remote_device_query_request:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)remote_list_DE:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)session_ping:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)session_pong:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLog:(id)arg1;
- (void)start_diagnostic_with_identifier:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)start_session:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)terminate_diagnostic_with_identifier:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)upload_progress:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;

@end
