/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKReloadFrameErrorRecoveryAttempter : NSObject <_WKErrorRecoveryAttempting> {
    struct RetainPtr<_WKFrameHandle> { 
        void *m_ptr; 
    }  _frameHandle;
    struct String { 
        struct RefPtr<WTF::StringImpl> { 
            struct StringImpl {} *m_ptr; 
        } m_impl; 
    }  _urlString;
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<WKWebView>="m_weakReference"@}' */ struct WeakObjCPtr<WKWebView> { 
        id m_weakReference; 
    }  _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)attemptRecovery;
- (id)initWithWebView:(id)arg1 frameHandle:(id)arg2 urlString:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg3;

@end
