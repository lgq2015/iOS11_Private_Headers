/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSImportDownloadToIPodLibraryRequest : SSRequest {
    SSDownloadMetadata * _downloadMetadata;
    SSPurchaseResponse * _purchaseResponse;
}

@property (nonatomic, readonly) SSDownloadMetadata *downloadMetadata;
@property (nonatomic, readonly) SSPurchaseResponse *purchaseResponse;

- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)downloadMetadata;
- (id)initWithDownloadMetadata:(id)arg1;
- (id)initWithPurchase:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)purchaseResponse;
- (void)startWithResponseBlock:(id /* block */)arg1;

@end
