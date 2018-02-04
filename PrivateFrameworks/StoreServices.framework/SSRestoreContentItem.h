/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRestoreContentItem : NSObject {
    NSNumber * _accountID;
    NSString * _appleID;
    NSString * _bundleID;
    NSNumber * _cloudMatchStatus;
    bool  _isRestore;
    NSNumber * _originalPurchaserAccountID;
    NSMutableDictionary * _properties;
}

@property (getter=isDRMFree, nonatomic) bool DRMFree;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, retain) NSNumber *cloudItemID;
@property (nonatomic, retain) NSNumber *cloudMatchStatus;
@property (nonatomic, copy) NSString *downloadKind;
@property (nonatomic, copy) NSString *podcastEpisodeGUID;
@property (nonatomic, copy) NSString *storeAccountAppleID;
@property (nonatomic, retain) NSNumber *storeAccountID;
@property (nonatomic, copy) NSString *storeFlavor;
@property (nonatomic, copy) NSString *storeFrontID;
@property (nonatomic, retain) NSNumber *storeItemID;
@property (nonatomic, retain) NSNumber *storeOriginalPurchaserAccountID;
@property (nonatomic, copy) NSString *storeSoftwareVersionID;
@property (nonatomic, copy) NSString *videoDimensions;

- (id)_initSSRestoreContentItem;
- (id)_restoreKeyForAssetProperty:(id)arg1;
- (id)_restoreKeyForDownloadProperty:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)bundleID;
- (id)cloudItemID;
- (id)cloudMatchStatus;
- (id)copyRestoreDictionary;
- (void)dealloc;
- (id)downloadKind;
- (id)init;
- (id)initWithRestoreDownload:(id)arg1;
- (bool)isDRMFree;
- (bool)isEligibleForRestore:(id*)arg1;
- (id)podcastEpisodeGUID;
- (void)setBundleID:(id)arg1;
- (void)setCloudItemID:(id)arg1;
- (void)setCloudMatchStatus:(id)arg1;
- (void)setDRMFree:(bool)arg1;
- (void)setDownloadKind:(id)arg1;
- (void)setPodcastEpisodeGUID:(id)arg1;
- (void)setStoreAccountAppleID:(id)arg1;
- (void)setStoreAccountID:(id)arg1;
- (void)setStoreFlavor:(id)arg1;
- (void)setStoreFrontID:(id)arg1;
- (void)setStoreItemID:(id)arg1;
- (void)setStoreOriginalPurchaserAccountID:(id)arg1;
- (void)setStoreSoftwareVersionID:(id)arg1;
- (void)setValue:(id)arg1 forAssetProperty:(id)arg2;
- (void)setValue:(id)arg1 forDownloadProperty:(id)arg2;
- (void)setVideoDimensions:(id)arg1;
- (id)storeAccountAppleID;
- (id)storeAccountID;
- (id)storeFlavor;
- (id)storeFrontID;
- (id)storeItemID;
- (id)storeOriginalPurchaserAccountID;
- (id)storeSoftwareVersionID;
- (id)videoDimensions;

@end
