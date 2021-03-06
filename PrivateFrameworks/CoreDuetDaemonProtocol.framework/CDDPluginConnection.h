/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@interface CDDPluginConnection : NSObject {
    unsigned long long  _clientId;
    CDDXPCConnection * _connection;
    CDDebug * _debug;
}

@property (readonly) unsigned long long clientId;
@property (readonly) CDDXPCConnection *connection;
@property (readonly) CDDebug *debug;

- (void).cxx_destruct;
- (bool)admissionSignoffConditionsChanged:(id)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (unsigned long long)clientId;
- (id)connection;
- (bool)currentMitigationSettingsWithError:(id*)arg1 replyHandler:(id /* block */)arg2;
- (id)debug;
- (id)init;
- (id)initWithClientId:(unsigned long long)arg1 error:(id*)arg2;
- (bool)registerForSignoffWithError:(id*)arg1 replyHandler:(id /* block */)arg2;
- (bool)requestSystemDataWithError:(id*)arg1 replyHandler:(id /* block */)arg2;
- (bool)sendMessageWithType:(long long)arg1 error:(id*)arg2 dictionaryKey:(id)arg3 dictionary:(id)arg4 replyHandler:(id /* block */)arg5;
- (bool)sendMessageWithType:(long long)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (bool)setMitigation:(id)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (bool)setTriggerConditions:(id)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;
- (bool)triggerSystemDataExchange:(id)arg1 error:(id*)arg2 replyHandler:(id /* block */)arg3;

@end
