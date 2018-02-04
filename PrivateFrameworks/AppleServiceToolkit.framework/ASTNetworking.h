/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTNetworking : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    NSMutableDictionary * _networkStorage;
    NSURLSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableDictionary *networkStorage;
@property (nonatomic, retain) NSURLSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)_downloadTaskWithDownloadConnection:(id)arg1 error:(id*)arg2;
- (id)_taskWithConnection:(id)arg1 error:(id*)arg2;
- (bool)_verifyMD5ForFileHandle:(id)arg1 task:(id)arg2;
- (bool)_verifyResultOfTask:(id)arg1 connection:(id)arg2;
- (void)addConnection:(id)arg1;
- (void)cancelConnectionsOfClass:(Class)arg1;
- (id)init;
- (void)invalidate;
- (id)networkStorage;
- (id)session;
- (void)setNetworkStorage:(id)arg1;
- (void)setSession:(id)arg1;
- (void)updateConnectionState:(id)arg1 newState:(long long)arg2;

@end
