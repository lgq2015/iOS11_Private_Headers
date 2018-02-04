/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

@interface HTSHTTPServer : NSObject {
    NSMutableArray * _activeConnections;
    NSMutableDictionary * _authTokens;
    double  _bandwidthStddev;
    unsigned long long  _bytesWritten;
    int  _cacheMaxAge;
    struct __CFHTTPMessage { } * _currentRequest;
    <HTSHTTPServerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _digestAuthenticationEnabled;
    NSString * _documentRoot;
    double  _kbps;
    double  _lastReplenishTime;
    double  _latency;
    double  _latencyStddev;
    int  _listenSocket4;
    NSObject<OS_dispatch_source> * _listenSource4;
    NSString * _nodename;
    bool  _pipeliningEnabled;
    unsigned short  _port;
    NSObject<OS_dispatch_queue> * _serverQueue;
    unsigned long long  _totalBytesWritten;
}

@property (nonatomic) double bandwidthStddev;
@property (nonatomic) int cacheMaxAge;
@property (nonatomic) struct __CFHTTPMessage { }*currentRequest;
@property (nonatomic) <HTSHTTPServerDelegate> *delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) bool digestAuthenticationEnabled;
@property (nonatomic, copy) NSString *documentRoot;
@property (nonatomic) double kbps;
@property (nonatomic) double latency;
@property (nonatomic) double latencyStddev;
@property (nonatomic) bool pipeliningEnabled;
@property (nonatomic, readonly) unsigned short port;
@property (nonatomic, readonly) unsigned long long totalBytesWritten;
@property (nonatomic, readonly) NSString *urlString;

- (id)_authenticationResponseForRequest:(id)arg1;
- (void)_cleanupListenSocket;
- (void)_connection:(id)arg1 didReceiveRequest:(id)arg2;
- (void)_connection:(id)arg1 hadError:(id)arg2;
- (void)_connectionComplete:(id)arg1;
- (double)_currentLatency;
- (void)_handleGeneralRequest:(id)arg1 fromConnection:(id)arg2;
- (bool)_listenOnPort:(unsigned short)arg1;
- (id)_mimeTypeForExtension:(id)arg1;
- (void)_respondWithData:(id)arg1 mimeType:(id)arg2 toRequest:(id)arg3 connection:(id)arg4;
- (id)_restrictedFilePathForRelativePath:(id)arg1;
- (void)_returnResponse:(id)arg1 toConnection:(id)arg2 closeAfterSending:(bool)arg3;
- (unsigned long long)availableBandwidth;
- (double)bandwidthStddev;
- (int)cacheMaxAge;
- (void)consumedBandwidth:(unsigned long long)arg1;
- (struct __CFHTTPMessage { }*)currentRequest;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (bool)digestAuthenticationEnabled;
- (id)documentRoot;
- (id)init;
- (id)initWithPort:(unsigned short)arg1 documentRoot:(id)arg2;
- (double)kbps;
- (double)latency;
- (double)latencyStddev;
- (bool)pipeliningEnabled;
- (unsigned short)port;
- (void)resetNetworkSetup;
- (void)setBandwidthStddev:(double)arg1;
- (void)setCacheMaxAge:(int)arg1;
- (void)setCurrentRequest:(struct __CFHTTPMessage { }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setDigestAuthenticationEnabled:(bool)arg1;
- (void)setDocumentRoot:(id)arg1;
- (void)setKbps:(double)arg1;
- (void)setLatency:(double)arg1;
- (void)setLatencyStddev:(double)arg1;
- (void)setPipeliningEnabled:(bool)arg1;
- (unsigned long long)totalBytesWritten;
- (id)urlString;

@end
