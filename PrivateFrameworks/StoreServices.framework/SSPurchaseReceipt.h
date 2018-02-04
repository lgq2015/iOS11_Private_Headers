/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchaseReceipt : NSObject {
    ISPurchaseReceipt * _purchaseReceipt;
}

@property (readonly) NSDate *expirationDate;
@property (readonly) bool isRevoked;
@property (readonly) bool isVPPLicensed;

+ (void)getReceiptPathWithCompletionBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)expirationDate;
- (id)initWithContainerPath:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (bool)isRevoked;
- (bool)isVPPLicensed;

@end
