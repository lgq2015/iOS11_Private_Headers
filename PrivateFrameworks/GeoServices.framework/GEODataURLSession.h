/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataURLSession : NSObject <GEODataSession, NSURLSessionDataDelegate> {
    NSObject<OS_dispatch_source> * _memoryNotificationEventSource;
    unsigned int  _nextSessionIdentifier;
    NSObject<OS_dispatch_queue> * _sessionIsolation;
    NSOperationQueue * _sessionIsolationOperationQueue;
    NSMutableDictionary * _sessionTasks;
    int  _symptomsAlternateAdviceToken;
    GEODataURLSessionTaskQueue * _tileTaskQueue;
    GEODataURLSessionList * _urlSessions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int nextSessionIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sessionIsolation;
@property (nonatomic, readonly) NSOperationQueue *sessionIsolationOperationQueue;
@property (nonatomic, readonly) NSMutableDictionary *sessionTasks;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEODataURLSessionTaskQueue *tileTaskQueue;
@property (nonatomic, readonly) GEODataURLSessionList *urlSessions;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)_configureTask:(id)arg1 withRequest:(id)arg2;
- (void)_considerRetryingDueToAlternateAdvice;
- (double)_wifiAssistRetryDelay;
- (bool)_wifiAssistRetryEnabled;
- (id)activeSessionIdentifiers;
- (void)configureTask:(id)arg1 withRequest:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)createNewURLSessionWithRequest:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)didReceiveMemmoryPressureWarning;
- (id)init;
- (unsigned int)nextSessionIdentifier;
- (void)pruneInactiveSessions;
- (id)removeTaskForURLSession:(id)arg1 task:(id)arg2;
- (id)sessionIsolation;
- (id)sessionIsolationOperationQueue;
- (id)sessionTasks;
- (void)setNextSessionIdentifier:(unsigned int)arg1;
- (id)taskForURLSession:(id)arg1 task:(id)arg2;
- (id)taskWithRequest:(id)arg1 rules:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (void)tearDown;
- (id)tileTaskQueue;
- (id)urlSessionForRequest:(id)arg1;
- (id)urlSessions;

@end
