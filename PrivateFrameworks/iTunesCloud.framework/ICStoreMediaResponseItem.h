/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICStoreMediaResponseItem : NSObject <NSCopying> {
    NSDate * _assetExpirationDate;
    NSDictionary * _itemResponseDictionary;
    ICURLBag * _urlBag;
}

@property (nonatomic, readonly, copy) NSURL *artworkURL;
@property (nonatomic, copy) NSDate *assetExpirationDate;
@property (nonatomic, readonly, copy) NSURL *cancelDownloadURL;
@property (nonatomic, readonly, copy) NSString *downloadIdentifier;
@property (nonatomic, readonly, copy) NSArray *fileAssets;
@property (nonatomic, readonly, copy) ICStoreHLSAssetInfo *hlsAsset;
@property (nonatomic, readonly) bool isPurchasedRedownload;
@property (nonatomic, readonly, copy) ICStoreFinanceItemMetadata *metadata;
@property (nonatomic, readonly, copy) NSDate *purchaseDate;
@property (nonatomic, readonly, copy) NSString *redownloadParameters;
@property (nonatomic, readonly) long long storeAdamID;
@property (nonatomic, readonly) id suzeLeaseID;

- (void).cxx_destruct;
- (id)artworkURL;
- (id)assetExpirationDate;
- (id)cancelDownloadURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)downloadIdentifier;
- (id)downloadableAsset;
- (id)downloadableAssetMatchingFlavorType:(long long)arg1;
- (id)fileAssets;
- (id)hlsAsset;
- (id)initWithItemResponseDictionary:(id)arg1 urlBag:(id)arg2;
- (bool)isPurchasedRedownload;
- (id)metadata;
- (id)purchaseDate;
- (id)redownloadParameters;
- (void)setAssetExpirationDate:(id)arg1;
- (long long)storeAdamID;
- (id)suzeLeaseID;

@end
