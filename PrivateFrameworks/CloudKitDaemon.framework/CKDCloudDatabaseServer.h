/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDCloudDatabaseServer : NSObject {
    NSOperationQueue * _clientTeardownQueue;
    NSMutableArray * _connectedClients;
    NSMutableDictionary * _recentClientsByProcessName;
    NSObject<OS_dispatch_source> * _sighandlerSource;
    unsigned long long  _stateHandle;
    NSObject<OS_dispatch_queue> * _statusReportCallbackQueue;
    NSMutableArray * _statusReportCallbacks;
    NSObject<OS_dispatch_queue> * _statusReportQueue;
    NSObject<OS_dispatch_source> * _statusReportRequestSource;
    int  _tccToken;
    NSXPCListener * _xpcListener;
}

@property (nonatomic, retain) NSOperationQueue *clientTeardownQueue;
@property (nonatomic, retain) NSMutableArray *connectedClients;
@property (nonatomic, retain) NSMutableDictionary *recentClientsByProcessName;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *sighandlerSource;
@property (nonatomic) unsigned long long stateHandle;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *statusReportCallbackQueue;
@property (nonatomic, retain) NSMutableArray *statusReportCallbacks;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *statusReportQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *statusReportRequestSource;
@property (nonatomic) int tccToken;
@property (nonatomic, retain) NSXPCListener *xpcListener;

+ (id)sharedServer;

- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (void)_cleanRecentClients;
- (void)_dumpStatusReportArrayToOsTrace:(id)arg1;
- (void)_dumpStatusReportToFileHandle:(id)arg1;
- (id)clientTeardownQueue;
- (id)connectedClients;
- (void)dealloc;
- (void)dumpStatusReportToFileHandle:(id)arg1;
- (id)init;
- (bool)isInSyncBubble;
- (void)kickOffPendingLongLivedOperations;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)recentClientsByProcessName;
- (void)resume;
- (void)setClientTeardownQueue:(id)arg1;
- (void)setConnectedClients:(id)arg1;
- (void)setRecentClientsByProcessName:(id)arg1;
- (void)setSighandlerSource:(id)arg1;
- (void)setStateHandle:(unsigned long long)arg1;
- (void)setStatusReportCallbackQueue:(id)arg1;
- (void)setStatusReportCallbacks:(id)arg1;
- (void)setStatusReportQueue:(id)arg1;
- (void)setStatusReportRequestSource:(id)arg1;
- (void)setTccToken:(int)arg1;
- (void)setXpcListener:(id)arg1;
- (id)sighandlerSource;
- (unsigned long long)stateHandle;
- (id)statusReportCallbackQueue;
- (id)statusReportCallbacks;
- (id)statusReportQueue;
- (id)statusReportRequestSource;
- (void)statusReportWithCompletionHandler:(id /* block */)arg1;
- (int)tccToken;
- (void)uploadContent;
- (void)willSwitchUser;
- (id)xpcListener;

@end
