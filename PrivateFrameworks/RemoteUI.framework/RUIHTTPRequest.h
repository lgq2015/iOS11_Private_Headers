/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIHTTPRequest : NSObject <NSURLSessionTaskDelegate> {
    NSURLSessionDataTask * _dataTask;
    id  _delegate;
    NSURLRequest * _request;
    NSURLSession * _urlSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)anyRequestLoading;
+ (id)errorWithCode:(unsigned long long)arg1;
+ (id)invalidResponseErrorWithResponse:(id)arg1;
+ (id)nonSecureConnectionNotAllowedError;
+ (id)safeBaseURL;
+ (id)serviceUnavailableError;

- (void).cxx_destruct;
- (void)_finishedLoading;
- (void)_loadRequestMain:(id)arg1;
- (void)_preLoadCancel;
- (void)_startedLoading;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (id)handleWillLoadRequest:(id)arg1;
- (id)init;
- (bool)isLoading;
- (void)loadRequest:(id)arg1;
- (void)loadStatusChanged;
- (void)parseData:(id)arg1;
- (bool)receivedValidResponse:(id)arg1;
- (id)request;
- (id)sessionConfiguration;
- (void)setDelegate:(id)arg1;
- (void)willParseData;

@end
