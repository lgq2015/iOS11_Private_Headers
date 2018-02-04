/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMediaAVAssetDownloadOptions : NSObject {
    NSNumber * _DSID;
    bool  _canUseCellularData;
    NSString * _clientIdentifier;
    NSString * _contentType;
    NSMutableDictionary * _httpHeaderFields;
    NSString * _mediaKind;
    long long  _priority;
    NSData * _purchaseBundleMD5;
    NSArray * _purchaseBundleSinfs;
    NSString * _redownloadParameters;
    ICStoreRequestContext * _requestContext;
    NSString * _secondaryClientIdentifier;
    NSNumber * _songID;
    NSString * _userAgent;
}

@property (nonatomic, copy) NSNumber *DSID;
@property (nonatomic) bool canUseCellularData;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, readonly, copy) NSDictionary *httpHeaderFields;
@property (nonatomic, copy) NSString *mediaKind;
@property (nonatomic, readonly, copy) NSDictionary *optionsDictionary;
@property (nonatomic) long long priority;
@property (nonatomic, copy) NSData *purchaseBundleMD5;
@property (nonatomic, copy) NSArray *purchaseBundleSinfs;
@property (nonatomic, copy) NSString *redownloadParameters;
@property (nonatomic, copy) NSString *secondaryClientIdentifier;
@property (nonatomic, copy) NSNumber *songID;
@property (nonatomic, copy) NSString *userAgent;

+ (id)_mediaKindFromResponseItemMetadata:(id)arg1;
+ (void)getMediaAVAssetDownloadOptionsWithRequestContext:(id)arg1 redownloadResponse:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)DSID;
- (bool)canUseCellularData;
- (id)clientIdentifier;
- (id)contentType;
- (id)httpHeaderFields;
- (id)init;
- (id)mediaKind;
- (id)optionsDictionary;
- (long long)priority;
- (id)purchaseBundleMD5;
- (id)purchaseBundleSinfs;
- (id)redownloadParameters;
- (id)secondaryClientIdentifier;
- (void)setCanUseCellularData:(bool)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setDSID:(id)arg1;
- (void)setMediaKind:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setPurchaseBundleMD5:(id)arg1;
- (void)setPurchaseBundleSinfs:(id)arg1;
- (void)setRedownloadParameters:(id)arg1;
- (void)setSecondaryClientIdentifier:(id)arg1;
- (void)setSongID:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)songID;
- (id)userAgent;
- (id)valueForHTTPHeaderField:(id)arg1;

@end
