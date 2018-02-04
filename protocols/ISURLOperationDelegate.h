/* made by EzioChiu.
 */

@protocol ISURLOperationDelegate <ISOperationDelegate>

@optional

- (NSURLCache *)URLCache;
- (NSString *)URLCacheID;
- (NSNumber *)metricsLoadURLSamplingPercentage;
- (NSNumber *)metricsLoadURLSamplingPercentageCachedResponses;
- (NSNumber *)metricsLoadURLSessionDuration;
- (NSURLCredential *)operation:(ISURLOperation *)arg1 credentialForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)operation:(ISURLOperation *)arg1 didDiscoverContentLength:(NSNumber *)arg2;
- (void)operation:(ISURLOperation *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (long long)operation:(ISURLOperation *)arg1 dispositionForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (void)operation:(ISURLOperation *)arg1 finishedWithOutput:(id)arg2;
- (NSInputStream *)operation:(ISURLOperation *)arg1 needNewBodyStream:(NSURLRequest *)arg2;
- (bool)operation:(ISURLOperation *)arg1 processData:(NSMutableData *)arg2 error:(id*)arg3;
- (NSString *)operation:(ISURLOperation *)arg1 sanitizedStringForString:(NSString *)arg2;
- (void)operation:(ISURLOperation *)arg1 willSendRequest:(NSMutableURLRequest *)arg2;

@end
