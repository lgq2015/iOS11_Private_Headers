/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPAppProxyFlowBridge : NSObject {
    NSObject<OS_nw_connection> * _connection;
    NSError * _connectionError;
    int  _currentState;
    NEAppProxyFlow * _flow;
    NSObject<OS_dispatch_queue> * _queue;
    NWEndpoint * _remoteEndpoint;
}

@property (retain) NSObject<OS_nw_connection> *connection;
@property (retain) NSError *connectionError;
@property int currentState;
@property (retain) NEAppProxyFlow *flow;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NWEndpoint *remoteEndpoint;

- (void).cxx_destruct;
- (id)connection;
- (id)connectionError;
- (int)currentState;
- (id)flow;
- (id)initWithAppProxyFlow:(id)arg1;
- (id)queue;
- (void)readDataFromClient;
- (void)readDataFromConnection;
- (void)readMultipleFromClient;
- (void)readMultipleFromConnection;
- (id)remoteEndpoint;
- (void)setConnection:(id)arg1;
- (void)setConnectionError:(id)arg1;
- (void)setCurrentState:(int)arg1;
- (void)setFlow:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRemoteEndpoint:(id)arg1;
- (void)startConnection;
- (void)writeDataToConnection:(id)arg1;
- (void)writeMultipleToConnection:(id*)arg1 count:(unsigned int)arg2;

@end
