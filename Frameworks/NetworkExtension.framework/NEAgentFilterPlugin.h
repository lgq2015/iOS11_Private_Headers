/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEAgentFilterPlugin : NSObject <NEAgentSessionDelegate> {
    id /* block */  _browserDataCompleteHandler;
    id /* block */  _browserDataHandler;
    struct __CFDictionary { } * _browserFlows;
    id /* block */  _browserNewFlowHandler;
    bool  _builtInPlugin;
    void * _clientInfo;
    NSObject<OS_xpc_object> * _clientListener;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSUUID * _configID;
    int  _outstandingSetDataOps;
    int  _outstandingSetGlobalDataOps;
    struct __CFDictionary { } * _pendingGlobalPersistentData;
    struct __CFDictionary { } * _pendingPerConfigurationPersistentData;
    struct __CFBundle { } * _pluginBundle;
    struct NEAgentFilterPluginCallbacks { 
        int (*PluginInit)(); 
        int (*PluginStart)(); 
        int (*PluginStop)(); 
        int (*PluginEnvironmentEvent)(); 
        int (*PluginDispose)(); 
    }  _pluginCallbacks;
    void * _pluginInfo;
    bool  _pluginInitialized;
    NEPluginPreferences * _pluginPrefs;
    NSString * _pluginType;
    NSObject<OS_dispatch_queue> * _queue;
    NEAgentSession * _session;
    struct NESocketContentFilter_s { } * _socketContentFilter;
}

@property (readonly) bool builtInPlugin;
@property (retain) NSObject<OS_xpc_object> *clientListener;
@property (retain) NSUUID *configID;
@property int outstandingSetDataOps;
@property int outstandingSetGlobalDataOps;
@property bool pluginInitialized;
@property (retain) NEPluginPreferences *pluginPrefs;
@property (readonly) NSString *pluginType;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NEAgentSession *session;

- (void).cxx_destruct;
- (void)acceptNewClientConnection:(id)arg1;
- (bool)builtInPlugin;
- (void)cleanup;
- (id)clientListener;
- (void)closeBrowserFilterFlow:(struct NEContentFilterFlow_s { }*)arg1 forUUID:(struct __CFUUID { }*)arg2;
- (id)configID;
- (struct __CFDictionary { }*)copyPersistentDataOfType:(long long)arg1;
- (struct NESocketContentFilter_s { }*)copySocketContentFilter;
- (void)handleAddClientMessage:(id)arg1;
- (void)handleAddDataMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleCancel;
- (void)handleClientMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleDataCompleteMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleDisposeWithCompletionHandler:(id /* block */)arg1;
- (void)handleEnvironmentEvent:(id)arg1;
- (void)handleInitMessage:(id)arg1;
- (void)handleInitWithCompletionHandler:(id /* block */)arg1;
- (void)handleMessage:(id)arg1 withOuterMessage:(id)arg2;
- (void)handleNewFlowMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleOpenChannel:(id)arg1;
- (void)handleStart:(id)arg1;
- (void)handleStop:(id)arg1;
- (id)initWithSession:(id)arg1 pluginType:(id)arg2 primaryPluginType:(id)arg3 pluginBundle:(struct __CFBundle { }*)arg4 applicationPath:(id)arg5;
- (int)outstandingSetDataOps;
- (int)outstandingSetGlobalDataOps;
- (bool)pluginInitialized;
- (id)pluginPrefs;
- (id)pluginType;
- (id)queue;
- (void)sendBrowserContentFilterServerRequest;
- (void)sendEnvironmentEventComplete:(long long)arg1;
- (bool)sendSetPersistentData:(struct __CFDictionary { }*)arg1 ofType:(long long)arg2;
- (bool)sendSocketContentFilterRequestWithCompletionHandler:(id /* block */)arg1;
- (void)sendStatus:(long long)arg1 withError:(long long)arg2;
- (id)session;
- (void)setBrowserNewFlowHandler:(id /* block */)arg1 dataHandler:(id /* block */)arg2 dataCompleteHandler:(id /* block */)arg3 clientQueue:(id)arg4 andClientInfo:(void*)arg5;
- (void)setClientListener:(id)arg1;
- (void)setConfigID:(id)arg1;
- (void)setOutstandingSetDataOps:(int)arg1;
- (void)setOutstandingSetGlobalDataOps:(int)arg1;
- (void)setPluginInitialized:(bool)arg1;
- (void)setPluginPrefs:(id)arg1;

@end
