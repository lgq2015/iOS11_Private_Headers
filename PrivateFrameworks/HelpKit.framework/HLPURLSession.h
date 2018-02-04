/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPURLSession : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate> {
    bool  _cancelled;
    id  _completionHandler;
    NSMutableData * _data;
    NSURLSessionDataTask * _dataTask;
    long long  _dataType;
    NSString * _lastModified;
    NSURLRequest * _request;
}

@property (getter=isCancelled, nonatomic) bool cancelled;
@property (nonatomic, retain) id completionHandler;
@property (nonatomic, retain) NSURLSessionDataTask *dataTask;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *lastModified;
@property (nonatomic, retain) NSURLRequest *request;
@property (nonatomic, readonly) NSURLSessionTask *sessionTask;
@property (readonly) Class superclass;

+ (id)URLSessionWithRequest:(id)arg1 dataType:(long long)arg2 completionHandler:(id /* block */)arg3;
+ (id)defaultOperationQueue;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)cancel;
- (id)completionHandler;
- (id)dataTask;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 dataType:(long long)arg2 completionHandler:(id /* block */)arg3;
- (bool)isCancelled;
- (id)lastModified;
- (void)notifyWithFormattedData:(id)arg1 response:(id)arg2 error:(id)arg3 cacheData:(bool)arg4;
- (id)request;
- (void)resume;
- (id)sessionTask;
- (void)setCancelled:(bool)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setDataTask:(id)arg1;
- (void)setLastModified:(id)arg1;
- (void)setRequest:(id)arg1;

@end
