/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKCustomProtocolLoader : NSObject <NSURLConnectionDelegate> {
    unsigned long long  _customProtocolID;
    struct LegacyCustomProtocolManagerProxy { int (**x1)(); struct NetworkProcessProxy {} *x2; struct HashMap<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKCustomProtocolLoader> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKCustomProtocolLoader> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_3_1_1; } x3; } * _customProtocolManagerProxy;
    unsigned long long  _storagePolicy;
    NSURLConnection * _urlConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)customProtocolManagerProxyDestroyed;
- (void)dealloc;
- (id)initWithLegacyCustomProtocolManagerProxy:(struct LegacyCustomProtocolManagerProxy { int (**x1)(); struct NetworkProcessProxy {} *x2; struct HashMap<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKCustomProtocolLoader> > > { struct HashTable<unsigned long long, WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> > >, WTF::IntHash<unsigned long long>, WTF::HashMap<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader>, WTF::IntHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<WTF::RetainPtr<WKCustomProtocolLoader> > >::KeyValuePairTraits, WTF::HashTraits<unsigned long long> > { struct KeyValuePair<unsigned long long, WTF::RetainPtr<WKCustomProtocolLoader> > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_3_1_1; } x3; }*)arg1 customProtocolID:(unsigned long long)arg2 request:(id)arg3;

@end
