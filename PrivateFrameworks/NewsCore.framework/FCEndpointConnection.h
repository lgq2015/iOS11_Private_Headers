/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCEndpointConnection : NSObject <FCAppConfigurationObserving, NSURLSessionDelegate> {
    FCAppConfigurationManager * _appConfigurationManager;
    NSURL * _baseURL;
    FCAsyncSerialQueue * _requestSerialQueue;
    NSURLSession * _session;
}

@property (nonatomic, retain) FCAppConfigurationManager *appConfigurationManager;
@property (copy) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCAsyncSerialQueue *requestSerialQueue;
@property (nonatomic, retain) NSURLSession *session;
@property (readonly) Class superclass;

+ (id)_errorByUpdatingRetryStatusForError:(id)arg1;
+ (id)_errorForStatus:(long long)arg1 url:(id)arg2;

- (void).cxx_destruct;
- (id)appConfigurationManager;
- (id)baseURL;
- (id)initWithAppConfigurationManager:(id)arg1;
- (id)initWithAppConfigurationManager:(id)arg1 sourceApplicationBundleIdentifier:(id)arg2;
- (void)performHTTPRequestWithURL:(id)arg1 method:(id)arg2 data:(id)arg3 contentType:(id)arg4 priority:(float)arg5 callbackQueue:(id)arg6 completion:(id /* block */)arg7;
- (void)performHTTPRequestWithURL:(id)arg1 valuesByHTTPHeaderField:(id)arg2 method:(id)arg3 data:(id)arg4 contentType:(id)arg5 priority:(float)arg6 callbackQueue:(id)arg7 completion:(id /* block */)arg8;
- (id)requestSerialQueue;
- (id)session;
- (void)setAppConfigurationManager:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setRequestSerialQueue:(id)arg1;
- (void)setSession:(id)arg1;

@end
