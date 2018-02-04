/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

@interface OSAHttpSubmitter : OSASubmitter {
    NSURLConnection * _connection;
    double  _last_thoughput_check;
    NSMutableData * _payload;
    NSHTTPURLResponse * _response;
    NSObject<OS_dispatch_semaphore> * _submissionSem;
    NSURL * _submissionURL;
    bool  _submitOkFlag;
    unsigned int  _thoughput_warnings;
}

- (void).cxx_destruct;
- (void)abort;
- (void)cleanupConnectionAndDisable:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)initWithEndpoint:(int)arg1;
- (void)postContent:(id)arg1 withHeaders:(id)arg2;
- (void)startConnection:(id)arg1;

@end
