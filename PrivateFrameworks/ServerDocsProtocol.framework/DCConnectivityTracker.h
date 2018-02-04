/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCConnectivityTracker : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionDownloadDelegate> {
    NSCountedSet * _delegates;
    SDFFreshObjectQueue * _events;
    bool  _isConnected;
    NSString * _server;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isConnected;
@property (readonly) Class superclass;

+ (id)connectivityTrackerForService:(id)arg1;
+ (id)serverFromURL:(id)arg1;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 didStartTask:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_addEvent:(id)arg1 task:(id)arg2;
- (void)_addEventWithError:(id)arg1 task:(id)arg2;
- (id)_eventTypeForError:(id)arg1;
- (void)_recomputeConnectivityState;
- (void)addDelegate:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)initWithServer:(id)arg1;
- (bool)isConnected;
- (void)removeDelegate:(id)arg1;

@end
