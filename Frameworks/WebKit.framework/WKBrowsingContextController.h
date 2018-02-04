/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKBrowsingContextController : NSObject {
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<id<WKBrowsingContextHistoryDelegate> >="m_weakReference"@}' */ struct WeakObjCPtr<id<WKBrowsingContextHistoryDelegate> > { 
        id m_weakReference; 
    }  _historyDelegate;
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<id<WKBrowsingContextLoadDelegate> >="m_weakReference"@}' */ struct WeakObjCPtr<id<WKBrowsingContextLoadDelegate> > { 
        id m_weakReference; 
    }  _loadDelegate;
    struct RefPtr<WebKit::WebPageProxy> { 
        struct WebPageProxy {} *m_ptr; 
    }  _page;
    struct unique_ptr<WebKit::PageLoadStateObserver, std::__1::default_delete<WebKit::PageLoadStateObserver> > { 
        struct __compressed_pair<WebKit::PageLoadStateObserver *, std::__1::default_delete<WebKit::PageLoadStateObserver> > { 
            struct PageLoadStateObserver {} *__first_; 
        } __ptr_; 
    }  _pageLoadStateObserver;
    /* Warning: unhandled struct encoding: '{WeakObjCPtr<id<WKBrowsingContextPolicyDelegate> >="m_weakReference"@}' */ struct WeakObjCPtr<id<WKBrowsingContextPolicyDelegate> > { 
        id m_weakReference; 
    }  _policyDelegate;
}

@property (readonly) struct OpaqueWKPage { }*_pageRef;
@property (nonatomic, readonly) _WKRemoteObjectRegistry *_remoteObjectRegistry;
@property (readonly) NSURL *activeURL;
@property (copy) NSString *applicationNameForUserAgent;
@property (readonly) WKBackForwardList *backForwardList;
@property (readonly) bool canGoBack;
@property (readonly) bool canGoForward;
@property (readonly) NSArray *certificateChain;
@property (readonly) NSURL *committedURL;
@property (copy) NSString *customUserAgent;
@property (readonly) double estimatedProgress;
@property double gapBetweenPages;
@property (nonatomic, readonly) WKBrowsingContextHandle *handle;
@property (readonly) bool hasOnlySecureContent;
@property <WKBrowsingContextHistoryDelegate> *historyDelegate;
@property <WKBrowsingContextLoadDelegate> *loadDelegate;
@property (getter=isLoading, readonly) bool loading;
@property (readonly) unsigned long long pageCount;
@property double pageLength;
@property double pageZoom;
@property bool paginationBehavesLikeColumns;
@property bool paginationLineGridEnabled;
@property unsigned long long paginationMode;
@property <WKBrowsingContextPolicyDelegate> *policyDelegate;
@property (nonatomic, readonly) int processIdentifier;
@property (readonly) NSURL *provisionalURL;
@property double textZoom;
@property (readonly) NSString *title;
@property (readonly) NSURL *unreachableURL;

+ (id)_browsingContextControllerForPageRef:(struct OpaqueWKPage { }*)arg1;
+ (id)customSchemes;
+ (void)registerSchemeForCustomProtocol:(id)arg1;
+ (void)unregisterSchemeForCustomProtocol:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithPageRef:(struct OpaqueWKPage { }*)arg1;
- (struct OpaqueWKPage { }*)_pageRef;
- (id)_remoteObjectRegistry;
- (bool)_webProcessIsResponsive;
- (id)activeURL;
- (id)applicationNameForUserAgent;
- (id)backForwardList;
- (bool)canGoBack;
- (bool)canGoForward;
- (id)certificateChain;
- (id)committedURL;
- (id)customUserAgent;
- (void)dealloc;
- (double)estimatedProgress;
- (double)gapBetweenPages;
- (void)goBack;
- (void)goForward;
- (void)goToBackForwardListItem:(id)arg1;
- (id)handle;
- (bool)hasOnlySecureContent;
- (id)historyDelegate;
- (bool)isLoading;
- (void)loadAlternateHTMLString:(id)arg1 baseURL:(id)arg2 forUnreachableURL:(id)arg3;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 userData:(id)arg5;
- (id)loadDelegate;
- (void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2;
- (void)loadFileURL:(id)arg1 restrictToFilesWithin:(id)arg2 userData:(id)arg3;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2 userData:(id)arg3;
- (void)loadRequest:(id)arg1;
- (void)loadRequest:(id)arg1 userData:(id)arg2;
- (unsigned long long)pageCount;
- (double)pageLength;
- (double)pageZoom;
- (bool)paginationBehavesLikeColumns;
- (bool)paginationLineGridEnabled;
- (unsigned long long)paginationMode;
- (id)policyDelegate;
- (int)processIdentifier;
- (id)provisionalURL;
- (void)reload;
- (void)reloadFromOrigin;
- (void)setApplicationNameForUserAgent:(id)arg1;
- (void)setCustomUserAgent:(id)arg1;
- (void)setGapBetweenPages:(double)arg1;
- (void)setHistoryDelegate:(id)arg1;
- (void)setLoadDelegate:(id)arg1;
- (void)setPageLength:(double)arg1;
- (void)setPageZoom:(double)arg1;
- (void)setPaginationBehavesLikeColumns:(bool)arg1;
- (void)setPaginationLineGridEnabled:(bool)arg1;
- (void)setPaginationMode:(unsigned long long)arg1;
- (void)setPolicyDelegate:(id)arg1;
- (void)setTextZoom:(double)arg1;
- (void)stopLoading;
- (double)textZoom;
- (id)title;
- (id)unreachableURL;

@end
