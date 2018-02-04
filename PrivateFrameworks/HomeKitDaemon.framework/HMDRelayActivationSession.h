/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRelayActivationSession : HMFObject <HMDFairPlaySAPSessionDelegate, HMFLogging, HMFTimerDelegate> {
    HMDFairPlaySAPSession * _fairPlaySAPSession;
    HMFTimer * _fairPlaySessionTimer;
    NSOperationQueue * _requestOperationQueue;
    unsigned long long  _state;
    NSURLSession * _urlSession;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMDFairPlaySAPSession *fairPlaySAPSession;
@property (nonatomic, retain) HMFTimer *fairPlaySessionTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSOperationQueue *requestOperationQueue;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURLSession *urlSession;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (id)sharedSession;

- (void).cxx_destruct;
- (void)_addRequestOperation:(id)arg1;
- (void)_cancelAllPendingRequestOperations;
- (void)_handleCertificateResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 fairPlaySession:(id)arg4 completionQueue:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_handleChallengeResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 fairPlaySession:(id)arg4 completionQueue:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_handleFairPlayCertificateResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_handleFairPlaySetupExchangeResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_requestFairPlayCertificateWithCompletionHandler:(id /* block */)arg1;
- (void)_requestFairPlaySetupExchangeWithExchangeData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_resumeRequestOperations;
- (void)_setupFairPlaySession;
- (void)_suspendRequestOperations;
- (void)_teardownFairPlaySession;
- (void)_verifyURLResponse:(id)arg1 responseData:(id)arg2 fairPlaySession:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)fairPlaySAPSession;
- (id)fairPlaySessionTimer;
- (id)init;
- (void)requestCertificateWithCertificateRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestChallengeWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)requestOperationQueue;
- (void)session:(id)arg1 didCloseWithError:(id)arg2;
- (void)session:(id)arg1 didReceiveClientExchangeData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)session:(id)arg1 didReceiveServerCertificateRequestWithCompletionHandler:(id /* block */)arg2;
- (void)setFairPlaySAPSession:(id)arg1;
- (void)setFairPlaySessionTimer:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)timerDidFire:(id)arg1;
- (id)urlSession;
- (id)workQueue;

@end
