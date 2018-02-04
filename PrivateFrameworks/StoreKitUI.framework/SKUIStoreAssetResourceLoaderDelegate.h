/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStoreAssetResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {
    SKUIClientContext * _clientContext;
    bool  _isITunesStream;
    NSURL * _keyCertificateURL;
    NSURL * _keyServerURL;
    NSOperationQueue * _operationQueue;
    bool  _shouldUseITunesStoreSecureKeyDelivery;
}

@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)storeAssetResourceLoaderDelegateForPlayableAsset:(id)arg1 clientContext:(id)arg2;

- (void).cxx_destruct;
- (id)clientContext;
- (bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;

@end
