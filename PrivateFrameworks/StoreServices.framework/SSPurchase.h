/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchase : NSObject <NSCoding, NSCopying, SSXPCCoding> {
    NSNumber * _accountIdentifier;
    NSString * _affiliateIdentifier;
    bool  _backgroundPurchase;
    long long  _batchIdentifier;
    NSString * _buyParameters;
    NSNumber * _buyParamsCreatesDownloads;
    NSNumber * _buyParamsCreatesInstallJobs;
    NSNumber * _buyParamsCreatesJobs;
    bool  _createsDownloads;
    bool  _createsInstallJobs;
    bool  _createsJobs;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _displaysOnLockScreen;
    SSDownloadPolicy * _downloadPolicy;
    NSMutableDictionary * _downloadProperties;
    NSNumber * _enabledServiceType;
    long long  _expectedDownloadFileSize;
    NSArray * _filteredAssetTypes;
    NSArray * _gratisIdentifiers;
    bool  _ignoresForcedPasswordRestriction;
    SSItem * _item;
    SSItemOffer * _itemOffer;
    SSNetworkConstraints * _networkConstraints;
    long long  _placeholderDownloadIdentifier;
    bool  _playbackRequest;
    bool  _preauthenticated;
    SSURLRequestProperties * _requestProperties;
    id  _requiredDeviceCapabilities;
    long long  _uniqueIdentifier;
    bool  _usesLocalRedownloadParametersIfPossible;
}

@property (retain) NSNumber *accountIdentifier;
@property (copy) NSString *affiliateIdentifier;
@property (getter=isBackgroundPurchase) bool backgroundPurchase;
@property long long batchIdentifier;
@property (copy) NSString *buyParameters;
@property (nonatomic) bool createsDownloads;
@property (nonatomic) bool createsInstallJobs;
@property (nonatomic) bool createsJobs;
@property (readonly) NSData *databaseEncoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool displaysOnLockScreen;
@property (copy) SSDownloadPolicy *downloadPolicy;
@property (copy) NSDictionary *downloadProperties;
@property (copy) NSNumber *enabledServiceType;
@property long long expectedDownloadFileSize;
@property (copy) NSArray *filteredAssetTypes;
@property (copy) NSArray *gratisIdentifiers;
@property (getter=isGratisSoftwareClaim, readonly) bool gratisSoftwareClaim;
@property (readonly) unsigned long long hash;
@property bool ignoresForcedPasswordRestriction;
@property (copy) SSNetworkConstraints *networkConstraints;
@property long long placeholderDownloadIdentifier;
@property (getter=isPlaybackRequest) bool playbackRequest;
@property (getter=isPreauthenticated) bool preauthenticated;
@property (copy) SSURLRequestProperties *requestProperties;
@property (copy) id requiredDeviceCapabilities;
@property (readonly) Class superclass;
@property long long uniqueIdentifier;
@property bool usesLocalRedownloadParametersIfPossible;

+ (id)newPurchaseWithDatabaseEncoding:(id)arg1;
+ (id)newPurchaseWithXPCEncoding:(id)arg1;
+ (id)purchaseWithBuyParameters:(id)arg1;

- (void).cxx_destruct;
- (void)_addEntriesToDatabaseEncoding:(id)arg1;
- (id)_buyParametersValueForKey:(id)arg1 fromBuyParams:(id)arg2;
- (bool)_createsDownloadsWithOverride;
- (bool)_createsInstallJobsWithOverride;
- (bool)_createsJobsWithOverride;
- (id)_initSSPurchase;
- (void)_setValuesUsingDatabaseEncoding:(id)arg1;
- (id)accountIdentifier;
- (id)affiliateIdentifier;
- (long long)batchIdentifier;
- (id)buyParameters;
- (id)buyParametersValueForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (bool)createsDownloads;
- (bool)createsInstallJobs;
- (bool)createsJobs;
- (id)databaseEncoding;
- (bool)displaysOnLockScreen;
- (id)downloadMetadata;
- (id)downloadPolicy;
- (id)downloadProperties;
- (id)enabledServiceType;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedDownloadFileSize;
- (id)filteredAssetTypes;
- (id)gratisIdentifiers;
- (unsigned long long)hash;
- (bool)ignoresForcedPasswordRestriction;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatabaseEncoding:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)initWithItem:(id)arg1 offer:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isBackgroundPurchase;
- (bool)isEqual:(id)arg1;
- (bool)isGratisSoftwareClaim;
- (bool)isPlaybackRequest;
- (bool)isPreauthenticated;
- (id)item;
- (id)itemOffer;
- (id)networkConstraints;
- (long long)placeholderDownloadIdentifier;
- (id)requestProperties;
- (id)requiredDeviceCapabilities;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAffiliateIdentifier:(id)arg1;
- (void)setBackgroundPurchase:(bool)arg1;
- (void)setBatchIdentifier:(long long)arg1;
- (void)setBuyParameters:(id)arg1;
- (void)setCreatesDownloads:(bool)arg1;
- (void)setCreatesInstallJobs:(bool)arg1;
- (void)setCreatesJobs:(bool)arg1;
- (void)setDefaultUserAgent:(id)arg1;
- (void)setDisplaysOnLockScreen:(bool)arg1;
- (void)setDownloadMetadata:(id)arg1;
- (void)setDownloadPolicy:(id)arg1;
- (void)setDownloadProperties:(id)arg1;
- (void)setEnabledServiceType:(id)arg1;
- (void)setExpectedDownloadFileSize:(long long)arg1;
- (void)setFilteredAssetTypes:(id)arg1;
- (void)setGratisIdentifiers:(id)arg1;
- (void)setIgnoresForcedPasswordRestriction:(bool)arg1;
- (void)setNetworkConstraints:(id)arg1;
- (void)setPlaceholderDownloadIdentifier:(long long)arg1;
- (void)setPlaybackRequest:(bool)arg1;
- (void)setPreauthenticated:(bool)arg1;
- (void)setRequestProperties:(id)arg1;
- (void)setRequiredDeviceCapabilities:(id)arg1;
- (void)setUniqueIdentifier:(long long)arg1;
- (void)setUsesLocalRedownloadParametersIfPossible:(bool)arg1;
- (void)setValue:(id)arg1 forDownloadProperty:(id)arg2;
- (long long)uniqueIdentifier;
- (bool)usesLocalRedownloadParametersIfPossible;
- (id)valueForDownloadProperty:(id)arg1;

@end
