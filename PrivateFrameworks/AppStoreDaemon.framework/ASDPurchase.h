/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDPurchase : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _accountIdentifier;
    NSDictionary * _additionalHeaders;
    NSString * _affiliateIdentifier;
    NSString * _bagKey;
    NSString * _bundleID;
    NSArray * _buyParameters;
    bool  _createsJobs;
    bool  _displaysOnLockScreen;
    long long  _extensionsToEnable;
    NSArray * _gratisIdentifiers;
    bool  _isBackgroundUpdate;
    bool  _isRedownload;
    NSNumber * _itemID;
    NSString * _itemName;
    long long  _purchaseID;
    NSString * _referrerName;
    NSString * _referrerURL;
    NSArray * _requiredCapabilities;
    bool  _sendGUID;
    bool  _shouldCancelForInstalledBundleItems;
    NSString * _vendorName;
}

@property (nonatomic, copy) NSNumber *accountIdentifier;
@property (nonatomic, copy) NSDictionary *additionalHeaders;
@property (nonatomic, copy) NSString *affiliateIdentifier;
@property (nonatomic, copy) NSString *bagKey;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *buyParameters;
@property (nonatomic) bool createsJobs;
@property (nonatomic) bool displaysOnLockScreen;
@property long long extensionsToEnable;
@property (nonatomic, copy) NSArray *gratisIdentifiers;
@property (nonatomic) bool isBackgroundUpdate;
@property (nonatomic) bool isRedownload;
@property (nonatomic, copy) NSNumber *itemID;
@property (nonatomic, copy) NSString *itemName;
@property long long purchaseID;
@property (nonatomic, copy) NSString *referrerName;
@property (nonatomic, copy) NSString *referrerURL;
@property (nonatomic, copy) NSArray *requiredCapabilities;
@property (nonatomic) bool sendGUID;
@property (nonatomic) bool shouldCancelForInstalledBundleItems;
@property (nonatomic, copy) NSString *vendorName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)additionalHeaders;
- (id)affiliateIdentifier;
- (void)appendValue:(id)arg1 forBuyParameter:(id)arg2;
- (id)bagKey;
- (id)bundleID;
- (id)buyParameters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createsJobs;
- (id)description;
- (bool)displaysOnLockScreen;
- (void)encodeWithCoder:(id)arg1;
- (long long)extensionsToEnable;
- (id)firstValueForBuyParameter:(id)arg1;
- (id)gratisIdentifiers;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isBackgroundUpdate;
- (bool)isRedownload;
- (id)itemID;
- (id)itemName;
- (long long)purchaseID;
- (id)referrerName;
- (id)referrerURL;
- (id)requiredCapabilities;
- (bool)sendGUID;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAdditionalHeaders:(id)arg1;
- (void)setAffiliateIdentifier:(id)arg1;
- (void)setBagKey:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setBuyParameters:(id)arg1;
- (void)setCreatesJobs:(bool)arg1;
- (void)setDisplaysOnLockScreen:(bool)arg1;
- (void)setExtensionsToEnable:(long long)arg1;
- (void)setGratisIdentifiers:(id)arg1;
- (void)setIsBackgroundUpdate:(bool)arg1;
- (void)setIsRedownload:(bool)arg1;
- (void)setItemID:(id)arg1;
- (void)setItemName:(id)arg1;
- (void)setPurchaseID:(long long)arg1;
- (void)setReferrerName:(id)arg1;
- (void)setReferrerURL:(id)arg1;
- (void)setRequiredCapabilities:(id)arg1;
- (void)setSendGUID:(bool)arg1;
- (void)setShouldCancelForInstalledBundleItems:(bool)arg1;
- (void)setVendorName:(id)arg1;
- (bool)shouldCancelForInstalledBundleItems;
- (id)vendorName;

@end
