/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPayment : NSObject <NSCopying, NSMutableCopying> {
    id  _internal;
}

@property (nonatomic, readonly, copy) NSString *applicationUsername;
@property (nonatomic, readonly) bool isStoreOriginated;
@property (nonatomic, readonly, copy) NSString *partnerIdentifier;
@property (nonatomic, readonly, copy) NSString *partnerTransactionIdentifier;
@property (nonatomic, readonly, copy) NSString *productIdentifier;
@property (nonatomic, readonly) long long quantity;
@property (nonatomic, readonly, copy) NSData *requestData;
@property (nonatomic, readonly, copy) NSDictionary *requestParameters;
@property (nonatomic, readonly) bool simulatesAskToBuyInSandbox;

+ (id)paymentFromPurchaseIntentWithProduct:(id)arg1;
+ (id)paymentWithProduct:(id)arg1;
+ (id)paymentWithProductIdentifier:(id)arg1;

- (id)applicationUsername;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isStoreOriginated;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)partnerIdentifier;
- (id)partnerTransactionIdentifier;
- (id)productIdentifier;
- (long long)quantity;
- (id)requestData;
- (id)requestParameters;
- (bool)simulatesAskToBuyInSandbox;

@end
