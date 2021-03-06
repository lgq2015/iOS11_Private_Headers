/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OSASyncProxyClient.framework/OSASyncProxyClient
 */

@interface OSASyncProxyClient : NSObject {
    NSXPCConnection * _connection;
    <OSASyncProxyServices> * _synchRemoteObjectProxy;
}

- (void).cxx_destruct;
- (void)deliver:(id)arg1 tasking:(id)arg2 taskId:(id)arg3 fromBlob:(id)arg4;
- (id)init;
- (void)listDevices:(id /* block */)arg1;
- (void)request:(id)arg1 logList:(id /* block */)arg2;
- (void)request:(id)arg1 logListWithOptions:(id)arg2 onComplete:(id /* block */)arg3;
- (void)request:(id)arg1 transferGroupWithOptions:(id)arg2 onComplete:(id /* block */)arg3;
- (void)request:(id)arg1 transferLog:(id)arg2 onComplete:(id /* block */)arg3;
- (void)requestProxyMetadata:(id)arg1 onComplete:(id /* block */)arg2;

@end
