/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreResourceHandleAsOperationQueueDelegate : NSObject <NSURLConnectionDelegate, WebCoreResourceLoaderDelegate> {
    bool  m_boolResult;
    struct RetainPtr<NSCachedURLResponse> { 
        void *m_ptr; 
    }  m_cachedResponseResult;
    struct ResourceHandle { int (**x1)(); unsigned int x2; struct unique_ptr<WebCore::ResourceHandleInternal, std::__1::default_delete<WebCore::ResourceHandleInternal> > { struct __compressed_pair<WebCore::ResourceHandleInternal *, std::__1::default_delete<WebCore::ResourceHandleInternal> > { struct ResourceHandleInternal {} *x_1_2_1; } x_3_1_1; } x3; } * m_handle;
    struct RetainPtr<NSURLRequest> { 
        void *m_ptr; 
    }  m_requestResult;
    NSObject<OS_dispatch_semaphore> * m_semaphore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)continueCanAuthenticateAgainstProtectionSpace:(bool)arg1;
- (void)continueDidReceiveResponse;
- (void)continueWillCacheResponse:(id)arg1;
- (void)continueWillSendRequest:(id)arg1;
- (void)dealloc;
- (void)detachHandle;
- (id)initWithHandle:(struct ResourceHandle { int (**x1)(); unsigned int x2; struct unique_ptr<WebCore::ResourceHandleInternal, std::__1::default_delete<WebCore::ResourceHandleInternal> > { struct __compressed_pair<WebCore::ResourceHandleInternal *, std::__1::default_delete<WebCore::ResourceHandleInternal> > { struct ResourceHandleInternal {} *x_1_2_1; } x_3_1_1; } x3; }*)arg1;

@end
