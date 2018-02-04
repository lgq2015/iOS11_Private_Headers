/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKWebService : NSObject <NSURLSessionTaskDelegate> {
    ACAccountStore * _accountStore;
    NSOperationQueue * _delegateOperationQueue;
    NSMutableArray * _diagnosticReasons;
    NSMutableDictionary * _diagnosticReasonsByTaskID;
    NSObject<OS_dispatch_queue> * _diagnosticReasonsQueue;
    NSObject<OS_dispatch_queue> * _diagnosticSessionQueue;
    NSObject<OS_dispatch_queue> * _sessionQueue;
    NSObject<OS_dispatch_queue> * _stateQueue;
    unsigned long long  _taskIDCounter;
    NSURLSession * _urlSession;
    NSString * _webServiceSessionMarker;
    NSMutableDictionary * _webServiceTasks;
}

@property (readonly) ACAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) ACAccount *primaryAppleAccount;
@property (readonly) NSURLSessionConfiguration *sessionConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *webServiceSessionMarker;

+ (id)_sharedCookieStorage;
+ (id)account;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)URLSession:(id)arg1 taskIsWaitingForConnectivity:(id)arg2;
- (id)_accountStore;
- (void)_associateDiagnosticReasonsWithTaskID:(unsigned long long)arg1;
- (void)_cleanUpDiagnosticReasonsForTaskID:(unsigned long long)arg1;
- (bool)_trustPassesExtendedValidation:(struct __SecTrust { }*)arg1;
- (id)_urlRequestTaggedWithDiagnosticReasonHeader:(id)arg1 forTaskID:(unsigned long long)arg2;
- (id)_urlRequestTaggedWithWebServiceSessionMarkerHeader:(id)arg1;
- (id)account;
- (bool)canBypassTrustExtendedValidation;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)diagnosticSessionWithReason:(id)arg1 sessionHandler:(id /* block */)arg2;
- (id)forbiddenErrorWithResponse:(id)arg1;
- (void)handleAuthenticationFailureWithCompletionHandler:(id /* block */)arg1;
- (void)handleResponse:(id)arg1 withError:(id)arg2 data:(id)arg3 task:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)handleWillPerformHTTPRedirectionWithResponse:(id)arg1 redirectHandler:(id /* block */)arg2;
- (id)init;
- (void)invalidate;
- (id)logFacility;
- (void)logRequest:(id)arg1;
- (void)logResponse:(id)arg1 withData:(id)arg2;
- (unsigned long long)nextTaskID;
- (void)performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)performRequest:(id)arg1 taskIdentifier:(unsigned long long)arg2 retries:(unsigned long long)arg3 authHandling:(bool)arg4 completionHandler:(id /* block */)arg5;
- (id)primaryAppleAccount;
- (void)processRetryRequest:(id)arg1 responseData:(id)arg2 orginalRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)refreshSessionWithConfiguration:(id)arg1;
- (void)resetWebServiceSessionMarker;
- (id)sessionConfiguration;
- (void)setUrlSession:(id)arg1;
- (id)urlSession;
- (id)webServiceSessionMarker;
- (unsigned long long)webServiceTaskIdentifierForTaskIdentifier:(long long)arg1;

@end
