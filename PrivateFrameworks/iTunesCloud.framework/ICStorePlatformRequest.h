/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICStorePlatformRequest : NSObject <NSCopying> {
    id /* block */  _batchResultsHandler;
    long long  _batchSize;
    NSString * _clientBundleIdentifier;
    NSString * _clientBundleVersion;
    NSString * _clientIdentifier;
    NSString * _imageProfile;
    NSArray * _itemIdentifiers;
    NSString * _keyProfile;
    long long  _personalizationStyle;
    NSString * _platformIdentifier;
    NSString * _protocolVersion;
    long long  _qualityOfService;
    ICStoreRequestContext * _requestContext;
    bool  _returnsLocalEquivalencies;
    bool  _shouldIgnoreCache;
    double  _timeoutInterval;
}

@property (nonatomic, readonly, copy) NSDictionary *HTTPHeaders;
@property (nonatomic, copy) id /* block */ batchResultsHandler;
@property (nonatomic) long long batchSize;
@property (nonatomic, copy) NSString *clientBundleIdentifier;
@property (nonatomic, copy) NSString *clientBundleVersion;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, copy) NSString *imageProfile;
@property (nonatomic, copy) NSArray *itemIdentifiers;
@property (nonatomic, copy) NSString *keyProfile;
@property (nonatomic) long long personalizationStyle;
@property (nonatomic, copy) NSString *platformIdentifier;
@property (nonatomic, copy) NSString *protocolVersion;
@property (nonatomic) long long qualityOfService;
@property (nonatomic, readonly, copy) NSArray *queryItems;
@property (nonatomic, copy) ICStoreRequestContext *requestContext;
@property (nonatomic) bool returnsLocalEquivalencies;
@property (nonatomic) bool shouldIgnoreCache;
@property (nonatomic) double timeoutInterval;

- (void).cxx_destruct;
- (id)HTTPHeaders;
- (id /* block */)batchResultsHandler;
- (long long)batchSize;
- (id)clientBundleIdentifier;
- (id)clientBundleVersion;
- (id)clientIdentifier;
- (id)copyWithItemIdentifiersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)imageProfile;
- (id)init;
- (id)itemIdentifiers;
- (id)keyProfile;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (long long)personalizationStyle;
- (id)platformIdentifier;
- (id)protocolVersion;
- (long long)qualityOfService;
- (id)queryItems;
- (id)requestContext;
- (bool)returnsLocalEquivalencies;
- (void)setBatchResultsHandler:(id /* block */)arg1;
- (void)setBatchSize:(long long)arg1;
- (void)setClientBundleIdentifier:(id)arg1;
- (void)setClientBundleVersion:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setImageProfile:(id)arg1;
- (void)setItemIdentifiers:(id)arg1;
- (void)setKeyProfile:(id)arg1;
- (void)setPersonalizationStyle:(long long)arg1;
- (void)setPlatformIdentifier:(id)arg1;
- (void)setProtocolVersion:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setReturnsLocalEquivalencies:(bool)arg1;
- (void)setShouldIgnoreCache:(bool)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (bool)shouldIgnoreCache;
- (double)timeoutInterval;

@end
