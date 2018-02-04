/* made by EzioChiu
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCResourceDownloader : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate> {
    MCPeerID * _peerID;
    NSString * _resourceName;
    MCSession * _session;
    id /* block */  _urlResponseHandler;
    NSURLSession * _urlSession;
    NSURLSessionDataTask * _urlTask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MCPeerID *peerID;
@property (nonatomic, copy) NSString *resourceName;
@property (nonatomic) MCSession *session;
@property (readonly) Class superclass;
@property (nonatomic) id /* block */ urlResponseHandler;
@property (nonatomic, retain) NSURLSession *urlSession;
@property (nonatomic, retain) NSURLSessionDataTask *urlTask;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)dealloc;
- (id)initWithSession:(id)arg1 resourceUrl:(id)arg2 name:(id)arg3 peerID:(id)arg4;
- (id)peerID;
- (id)resourceName;
- (void)sendData:(id)arg1 fromByteOffset:(unsigned long long)arg2;
- (id)session;
- (void)setPeerID:(id)arg1;
- (void)setResourceName:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setUrlResponseHandler:(id /* block */)arg1;
- (void)setUrlSession:(id)arg1;
- (void)setUrlTask:(id)arg1;
- (void)syncCloseStreamForSession:(id)arg1 withError:(id)arg2;
- (id /* block */)urlResponseHandler;
- (id)urlSession;
- (id)urlTask;

@end
