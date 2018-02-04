/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPVideoResolver : NSObject <NSURLSessionDataDelegate, _LPResolver> {
    NSString * _MIMEType;
    AVURLAsset * _asset;
    id /* block */  _completionHandler;
    bool  _hasAudio;
    NSMutableData * _receivedData;
    <_LPResolvable> * _resolvable;
    NSURLSession * _session;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_completedWithVideo:(id)arg1;
- (void)_resolveVideo;
- (void)cancel;
- (id /* block */)completionHandler;
- (id)initWithResolvable:(id)arg1 webViewForProcessSharing:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setCompletionHandler:(id /* block */)arg1;
- (id)videoProperties;

@end
