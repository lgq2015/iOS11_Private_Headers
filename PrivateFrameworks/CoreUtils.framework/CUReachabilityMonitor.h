/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUReachabilityMonitor : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate> {
    id /* block */  _completionHandler;
    NSURL * _destinationURL;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    double  _timeout;
    NSObject<OS_dispatch_source> * _timeoutTimer;
    NSURLSession * _urlSession;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSURL *destinationURL;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_activate;
- (void)_complete:(id)arg1;
- (void)activate;
- (id /* block */)completionHandler;
- (id)destinationURL;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDestinationURL:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setTimeout:(double)arg1;
- (double)timeout;

@end
