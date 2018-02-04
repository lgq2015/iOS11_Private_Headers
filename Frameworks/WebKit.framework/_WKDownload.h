/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKDownload : NSObject <WKObject> {
    struct ObjectStorage<WebKit::DownloadProxy> { 
        struct type { 
            unsigned char __lx[296]; 
        } data; 
    }  _download;
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<WKWebView>="m_weakReference"@}' */ struct WeakObjCPtr<WKWebView> { 
        id m_weakReference; 
    }  _originatingWebView;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) WKWebView *originatingWebView;
@property (nonatomic, readonly) NSURLRequest *request;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)cancel;
- (void)dealloc;
- (id)originatingWebView;
- (id)request;
- (void)setOriginatingWebView:(id)arg1;

@end
