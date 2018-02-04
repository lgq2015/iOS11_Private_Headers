/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebViewContentProviderRegistry : NSObject {
    struct HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider> > > { 
        struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, Class<WKWebViewContentProvider> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, Class<WKWebViewContentProvider> > >, WTF::ASCIICaseInsensitiveHash, WTF::HashMap<WTF::String, Class<WKWebViewContentProvider>, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<Class<WKWebViewContentProvider> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { 
            struct KeyValuePair<WTF::String, Class<WKWebViewContentProvider> > {} *m_table; 
            unsigned int m_tableSize; 
            unsigned int m_tableSizeMask; 
            unsigned int m_keyCount; 
            unsigned int m_deletedCount; 
        } m_impl; 
    }  _contentProviderForMIMEType;
    struct HashCountedSet<WebKit::WebPageProxy *, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *> > { 
        struct HashMap<WebKit::WebPageProxy *, unsigned int, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>, WTF::HashTraits<unsigned int> > { 
            struct HashTable<WebKit::WebPageProxy *, WTF::KeyValuePair<WebKit::WebPageProxy *, unsigned int>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebKit::WebPageProxy *, unsigned int> >, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashMap<WebKit::WebPageProxy *, unsigned int, WTF::PtrHash<WebKit::WebPageProxy *>, WTF::HashTraits<WebKit::WebPageProxy *>, WTF::HashTraits<unsigned int> >::KeyValuePairTraits, WTF::HashTraits<WebKit::WebPageProxy *> > { 
                struct KeyValuePair<WebKit::WebPageProxy *, unsigned int> {} *m_table; 
                unsigned int m_tableSize; 
                unsigned int m_tableSizeMask; 
                unsigned int m_keyCount; 
                unsigned int m_deletedCount; 
            } m_impl; 
        } m_impl; 
    }  _pages;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> { struct String {} *x1; unsigned int x2; unsigned int x3; })_mimeTypesWithCustomContentProviders;
- (void)addPage:(struct WebPageProxy { int (**x1)(); id x2; int (*x3)(); int (**x4)(); int (**x5)(); struct RetainPtr<NSArray> { void *x_6_1_1; } x6; struct PageClient {} *x7; struct Ref<API::PageConfiguration> { struct PageConfiguration {} *x_8_1_1; } x8; struct unique_ptr<API::LoaderClient, std::__1::default_delete<API::LoaderClient> > { struct __compressed_pair<API::LoaderClient *, std::__1::default_delete<API::LoaderClient> > { struct LoaderClient {} *x_1_2_1; } x_9_1_1; } x9; struct unique_ptr<API::PolicyClient, std::__1::default_delete<API::PolicyClient> > { struct __compressed_pair<API::PolicyClient *, std::__1::default_delete<API::PolicyClient> > { struct PolicyClient {} *x_1_2_1; } x_10_1_1; } x10; struct unique_ptr<API::NavigationClient, std::__1::default_delete<API::NavigationClient> > { struct __compressed_pair<API::NavigationClient *, std::__1::default_delete<API::NavigationClient> > { struct NavigationClient {} *x_1_2_1; } x_11_1_1; } x11; struct unique_ptr<API::HistoryClient, std::__1::default_delete<API::HistoryClient> > { struct __compressed_pair<API::HistoryClient *, std::__1::default_delete<API::HistoryClient> > { struct HistoryClient {} *x_1_2_1; } x_12_1_1; } x12; }*)arg1;
- (id)init;
- (Class)providerForMIMEType:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1;
- (void)registerProvider:(Class)arg1 forMIMEType:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg2;
- (void)removePage:(struct WebPageProxy { int (**x1)(); id x2; int (*x3)(); int (**x4)(); int (**x5)(); struct RetainPtr<NSArray> { void *x_6_1_1; } x6; struct PageClient {} *x7; struct Ref<API::PageConfiguration> { struct PageConfiguration {} *x_8_1_1; } x8; struct unique_ptr<API::LoaderClient, std::__1::default_delete<API::LoaderClient> > { struct __compressed_pair<API::LoaderClient *, std::__1::default_delete<API::LoaderClient> > { struct LoaderClient {} *x_1_2_1; } x_9_1_1; } x9; struct unique_ptr<API::PolicyClient, std::__1::default_delete<API::PolicyClient> > { struct __compressed_pair<API::PolicyClient *, std::__1::default_delete<API::PolicyClient> > { struct PolicyClient {} *x_1_2_1; } x_10_1_1; } x10; struct unique_ptr<API::NavigationClient, std::__1::default_delete<API::NavigationClient> > { struct __compressed_pair<API::NavigationClient *, std::__1::default_delete<API::NavigationClient> > { struct NavigationClient {} *x_1_2_1; } x_11_1_1; } x11; struct unique_ptr<API::HistoryClient, std::__1::default_delete<API::HistoryClient> > { struct __compressed_pair<API::HistoryClient *, std::__1::default_delete<API::HistoryClient> > { struct HistoryClient {} *x_1_2_1; } x_12_1_1; } x12; }*)arg1;

@end
