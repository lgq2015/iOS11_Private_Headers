/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@interface CDPClientConnection : NSObject {
    bool  _admissionOverride;
    bool  _admissionResult;
    NSString * _clientName;
    CDDXPCConnection * _connection;
    CDDebug * _debug;
}

@property bool admissionOverride;
@property bool admissionResult;
@property (readonly) NSString *clientName;
@property (readonly) CDDXPCConnection *connection;
@property (readonly) CDDebug *debug;

- (void).cxx_destruct;
- (bool)activitySignal:(id)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (bool)admissionCheckAndStartedForAttributes:(id)arg1 admissionId:(id)arg2 options:(id)arg3 error:(id*)arg4 replyHandler:(id /* block */)arg5;
- (bool)admissionOverride;
- (bool)admissionResult;
- (bool)admissionSignoffForAttributes:(id)arg1 admissionId:(id)arg2 options:(id)arg3 error:(id*)arg4 replyHandler:(id /* block */)arg5;
- (bool)bootstrapWithError:(id*)arg1 replyHandler:(id /* block */)arg2;
- (id)clientName;
- (id)connection;
- (id)debug;
- (id)init;
- (id)initWithPluginName:(id)arg1 error:(id*)arg2;
- (bool)sendMessage:(long long)arg1 withXPCdictionaryKey:(id)arg2 dictionary:(id)arg3 admissionId:(id)arg4 options:(id)arg5 error:(id*)arg6 replyHandler:(id /* block */)arg7;
- (void)setAdmissionOverride:(bool)arg1;
- (void)setAdmissionResult:(bool)arg1;
- (bool)triggerWithConditions:(id)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;

@end
