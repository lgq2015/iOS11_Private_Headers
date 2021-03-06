/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTAssetConnection : NSObject <ASTDownloadConnection> {
    <ASTConnectionStatusDelegate> * _delegate;
    NSFileHandle * _destinationFileHandle;
    id /* block */  _didDownloadFile;
    id /* block */  _didReceiveResponse;
    long long  _networkDisconnectedRetryCount;
    NSURLRequest * _request;
    bool  _retryOnNetworkDisconnected;
    unsigned long long  _rootOfTrust;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ASTConnectionStatusDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSFileHandle *destinationFileHandle;
@property (nonatomic, copy) id /* block */ didDownloadFile;
@property (nonatomic, copy) id /* block */ didReceiveResponse;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long networkDisconnectedRetryCount;
@property (nonatomic, retain) NSURLRequest *request;
@property (nonatomic) bool retryOnNetworkDisconnected;
@property (nonatomic, readonly) unsigned long long rootOfTrust;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)destinationFileHandle;
- (id /* block */)didDownloadFile;
- (id /* block */)didReceiveResponse;
- (id)initWithAssetName:(id)arg1 destinationFileHandle:(id)arg2 sessionId:(id)arg3 allowsCellularAccess:(bool)arg4;
- (long long)networkDisconnectedRetryCount;
- (id)request;
- (bool)retryOnNetworkDisconnected;
- (unsigned long long)rootOfTrust;
- (void)setDelegate:(id)arg1;
- (void)setDidDownloadFile:(id /* block */)arg1;
- (void)setDidReceiveResponse:(id /* block */)arg1;
- (void)setNetworkDisconnectedRetryCount:(long long)arg1;
- (void)setRequest:(id)arg1;
- (void)setRetryOnNetworkDisconnected:(bool)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
