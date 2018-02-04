/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPurchase : NSObject <SKProductsRequestDelegate> {
    NSNumber * _appAdamID;
    NSString * _bundleID;
    FCCloudContext * _cloudContext;
    FCIntroductoryOffer * _introductoryOffer;
    NSString * _offerName;
    NSNumber * _price;
    SKProduct * _product;
    NSObject<OS_dispatch_group> * _productRequestGroup;
    NSString * _purchaseID;
    bool  _purchaseRestore;
    NSNumber * _storeExternalVersion;
    NSString * _subscriptionPeriodInISO_8601;
    NSString * _subscriptionPriceFormatted;
    NSString * _trialPeriodInISO_8601;
}

@property (nonatomic, copy) NSNumber *appAdamID;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, retain) FCCloudContext *cloudContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FCIntroductoryOffer *introductoryOffer;
@property (nonatomic, copy) NSString *offerName;
@property (nonatomic, copy) NSNumber *price;
@property (nonatomic, retain) SKProduct *product;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *productRequestGroup;
@property (nonatomic, copy) NSString *purchaseID;
@property (nonatomic) bool purchaseRestore;
@property (nonatomic, copy) NSNumber *storeExternalVersion;
@property (nonatomic, copy) NSString *subscriptionPeriodInISO_8601;
@property (nonatomic, copy) NSString *subscriptionPriceFormatted;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *trialPeriodInISO_8601;

- (void).cxx_destruct;
- (id)appAdamID;
- (void)appLookupForBundleIDWithAppAdamID:(id)arg1 completion:(id /* block */)arg2;
- (void)appLookupWithAppAdamID:(id)arg1 completion:(id /* block */)arg2;
- (id)bundleID;
- (id)cloudContext;
- (id)initWithPurchaseID:(id)arg1 cloudContext:(id)arg2 purchaseRestore:(bool)arg3;
- (id)introductoryOffer;
- (id)offerName;
- (id)price;
- (id)product;
- (void)productLookupWithcompletion:(id /* block */)arg1;
- (id)productRequestGroup;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (id)purchaseID;
- (void)purchaseLookUp:(id /* block */)arg1;
- (bool)purchaseRestore;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)setAppAdamID:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCloudContext:(id)arg1;
- (void)setIntroductoryOffer:(id)arg1;
- (void)setOfferName:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)setProduct:(id)arg1;
- (void)setProductRequestGroup:(id)arg1;
- (void)setPurchaseID:(id)arg1;
- (void)setPurchaseRestore:(bool)arg1;
- (void)setStoreExternalVersion:(id)arg1;
- (void)setSubscriptionPeriodInISO_8601:(id)arg1;
- (void)setSubscriptionPriceFormatted:(id)arg1;
- (void)setTrialPeriodInISO_8601:(id)arg1;
- (void)simulatePurchaseWithTagID:(id)arg1 webAccessOptIn:(bool)arg2;
- (void)startPurchaseWithTagID:(id)arg1 webAccessOptIn:(bool)arg2 completion:(id /* block */)arg3;
- (id)storeExternalVersion;
- (id)subscriptionPeriodInISO_8601;
- (id)subscriptionPriceFormatted;
- (id)trialPeriodInISO_8601;

@end
