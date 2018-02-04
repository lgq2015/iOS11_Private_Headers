/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKHTTPCookieStore : NSObject <WKObject> {
    struct ObjectStorage<API::HTTPCookieStore> { 
        struct type { 
            unsigned char __lx[80]; 
        } data; 
    }  _cookieStore;
    struct HashMap<id<WKHTTPCookieStoreObserver>, std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver> >, WTF::PtrHash<id<WKHTTPCookieStoreObserver> >, WTF::HashTraits<id<WKHTTPCookieStoreObserver> >, WTF::HashTraits<std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver> > > > { 
        struct HashTable<id<WKHTTPCookieStoreObserver>, WTF::KeyValuePair<id<WKHTTPCookieStoreObserver>, std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<id<WKHTTPCookieStoreObserver>, std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver> > > >, WTF::PtrHash<id<WKHTTPCookieStoreObserver> >, WTF::HashMap<id<WKHTTPCookieStoreObserver>, std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver> >, WTF::PtrHash<id<WKHTTPCookieStoreObserver> >, WTF::HashTraits<id<WKHTTPCookieStoreObserver> >, WTF::HashTraits<std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver> > > >::KeyValuePairTraits, WTF::HashTraits<id<WKHTTPCookieStoreObserver> > > { 
            struct KeyValuePair<id<WKHTTPCookieStoreObserver>, std::__1::unique_ptr<WKHTTPCookieStoreObserver, std::__1::default_delete<WKHTTPCookieStoreObserver> > > {} *m_table; 
            unsigned int m_tableSize; 
            unsigned int m_tableSizeMask; 
            unsigned int m_keyCount; 
            unsigned int m_deletedCount; 
        } m_impl; 
    }  _observers;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (void)deleteCookie:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getAllCookies:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)setCookie:(id)arg1 completionHandler:(id /* block */)arg2;

@end
