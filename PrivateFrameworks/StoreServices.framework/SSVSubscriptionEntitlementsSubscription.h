/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVSubscriptionEntitlementsSubscription : NSObject {
    NSNumber * _appAdamId;
    NSNumber * _appVersion;
    NSString * _chargeCountryCode;
    NSString * _chargeCurrencyCode;
    NSNumber * _chargeStoreFrontIdentifier;
    NSDate * _expireDate;
    NSNumber * _familyId;
    NSNumber * _inAppAdamId;
    NSString * _inAppVersion;
    bool  _newsAppPurchase;
    NSString * _offerIdentifier;
    NSNumber * _originalPurchaseDownloadId;
    NSNumber * _purchasabilityType;
    NSNumber * _purchaseDownloadId;
    NSNumber * _quantity;
    NSString * _vendorIdentifier;
}

@property (nonatomic, copy) NSNumber *appAdamId;
@property (nonatomic, copy) NSNumber *appVersion;
@property (nonatomic, copy) NSString *chargeCountryCode;
@property (nonatomic, copy) NSString *chargeCurrencyCode;
@property (nonatomic, copy) NSNumber *chargeStoreFrontIdentifier;
@property (nonatomic, copy) NSDate *expireDate;
@property (nonatomic, copy) NSNumber *familyId;
@property (nonatomic, copy) NSNumber *inAppAdamId;
@property (nonatomic, copy) NSString *inAppVersion;
@property (getter=isNewsAppPurchase, nonatomic) bool newsAppPurchase;
@property (nonatomic, copy) NSString *offerIdentifier;
@property (nonatomic, copy) NSNumber *originalPurchaseDownloadId;
@property (nonatomic, copy) NSNumber *purchasabilityType;
@property (nonatomic, copy) NSNumber *purchaseDownloadId;
@property (nonatomic, copy) NSNumber *quantity;
@property (nonatomic, copy) NSString *vendorIdentifier;

- (void).cxx_destruct;
- (id)appAdamId;
- (id)appVersion;
- (id)chargeCountryCode;
- (id)chargeCurrencyCode;
- (id)chargeStoreFrontIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)expireDate;
- (id)familyId;
- (id)inAppAdamId;
- (id)inAppVersion;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isNewsAppPurchase;
- (id)offerIdentifier;
- (id)originalPurchaseDownloadId;
- (id)purchasabilityType;
- (id)purchaseDownloadId;
- (id)quantity;
- (void)setAppAdamId:(id)arg1;
- (void)setAppVersion:(id)arg1;
- (void)setChargeCountryCode:(id)arg1;
- (void)setChargeCurrencyCode:(id)arg1;
- (void)setChargeStoreFrontIdentifier:(id)arg1;
- (void)setExpireDate:(id)arg1;
- (void)setFamilyId:(id)arg1;
- (void)setInAppAdamId:(id)arg1;
- (void)setInAppVersion:(id)arg1;
- (void)setNewsAppPurchase:(bool)arg1;
- (void)setOfferIdentifier:(id)arg1;
- (void)setOriginalPurchaseDownloadId:(id)arg1;
- (void)setPurchasabilityType:(id)arg1;
- (void)setPurchaseDownloadId:(id)arg1;
- (void)setQuantity:(id)arg1;
- (void)setVendorIdentifier:(id)arg1;
- (id)vendorIdentifier;

@end
