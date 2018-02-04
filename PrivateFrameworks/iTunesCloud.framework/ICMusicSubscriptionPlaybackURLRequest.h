/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionPlaybackURLRequest : ICStoreURLRequest {
    NSString * _assetSourceStorefrontID;
    NSData * _certificateData;
    NSString * _cloudUniversalLibraryID;
    bool  _delegatedPlayback;
    NSString * _householdID;
    long long  _requestType;
    unsigned long long  _storeCloudID;
    long long  _storePurchasedAdamID;
    long long  _storeSubscriptionAdamID;
}

@property (nonatomic, copy) NSString *assetSourceStorefrontID;
@property (nonatomic, copy) NSData *certificateData;
@property (nonatomic, copy) NSString *cloudUniversalLibraryID;
@property (getter=isDelegatedPlayback, nonatomic) bool delegatedPlayback;
@property (nonatomic, copy) NSString *householdID;
@property (nonatomic) long long requestType;
@property (nonatomic) unsigned long long storeCloudID;
@property (nonatomic) long long storePurchasedAdamID;
@property (nonatomic) long long storeSubscriptionAdamID;

+ (bool)requiresCertificateDataForRequestType:(long long)arg1;

- (void).cxx_destruct;
- (id)assetSourceStorefrontID;
- (void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)certificateData;
- (id)cloudUniversalLibraryID;
- (id)householdID;
- (bool)isDelegatedPlayback;
- (long long)requestType;
- (void)setAssetSourceStorefrontID:(id)arg1;
- (void)setCertificateData:(id)arg1;
- (void)setCloudUniversalLibraryID:(id)arg1;
- (void)setDelegatedPlayback:(bool)arg1;
- (void)setHouseholdID:(id)arg1;
- (void)setRequestType:(long long)arg1;
- (void)setStoreCloudID:(unsigned long long)arg1;
- (void)setStorePurchasedAdamID:(long long)arg1;
- (void)setStoreSubscriptionAdamID:(long long)arg1;
- (unsigned long long)storeCloudID;
- (long long)storePurchasedAdamID;
- (long long)storeSubscriptionAdamID;

@end
