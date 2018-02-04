/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARSearchClient : NSObject <PARClientXPC> {
    PARSessionConfiguration * _configuration;
    bool  _configured;
    NSXPCConnection * _connection;
    QueryIdMapper * _idMapper;
    NSObject<OS_dispatch_queue> * _idQueue;
    PARImageLoader * _imageLoader;
    NSObject<OS_dispatch_queue> * _queue;
    <PARDaemonXPC> * _remoteObject;
    NSMutableArray * _sessions;
}

@property (retain) PARSessionConfiguration *configuration;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (retain) NSXPCListenerEndpoint *endpoint;
@property (readonly) PARImageLoader *imageLoader;

+ (id)_deafListenerEndpoint;
+ (id)daemonConnection;

- (void).cxx_destruct;
- (void)_invalidateConnection;
- (unsigned long long)_queryId:(unsigned long long)arg1 forObject:(id)arg2;
- (void)addCompletion:(id)arg1 forInput:(id)arg2;
- (void)addSession:(id)arg1;
- (void)bag:(id /* block */)arg1;
- (void)bagDidLoad:(id)arg1 error:(id)arg2;
- (void)clearCompletionsFromDate:(id)arg1 toDate:(id)arg2;
- (id)configuration;
- (void)configure;
- (id)connection;
- (void)dealloc;
- (void)didDeleteResource:(id)arg1;
- (void)didDownloadResource:(id)arg1;
- (id)endpoint;
- (void)feedback:(id /* block */)arg1;
- (void)fileHandleAndAttributesForResource:(id)arg1 completion:(id /* block */)arg2;
- (void)getImageMap:(id /* block */)arg1;
- (id)imageLoader;
- (id)init;
- (id)initWithConnection:(id)arg1 configuration:(id)arg2;
- (void)listSessions:(id /* block */)arg1;
- (void)listenToFlusher:(id /* block */)arg1;
- (void)reportFeedback:(id)arg1 queryId:(unsigned long long)arg2;
- (unsigned long long)request:(id)arg1 reply:(id /* block */)arg2;
- (void)setConfiguration:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)updateParameters:(double)arg1 safariLast1day:(double)arg2 safariLast1week:(double)arg3 safariLast1month:(double)arg4 safariAll:(double)arg5 safariMostRecent:(double)arg6 minThresholdToSend:(double)arg7;

@end
