/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKProductPageRemoteViewController : _UIRemoteViewController <SKProductPageExtensionClientInterface, ServiceProductPage> {
    <SKProductPageRemoteViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKProductPageRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)delegate;
- (id)extensionProxy;
- (void)finishImmediately;
- (void)finishStarRatingPromptWithRating:(id)arg1;
- (void)finishWithResult:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)loadDidFinish;
- (void)loadProductWithPageDictionary:(id)arg1;
- (void)loadProductWithRequest:(id)arg1;
- (void)loadProductWithURL:(id)arg1;
- (void)setAdditionalBuyParameters:(id)arg1;
- (void)setAffiliateIdentifier:(id)arg1;
- (void)setAskToBuy:(bool)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreview:(id)arg1;
- (void)setProductPageStyle:(id)arg1;
- (void)setPromptString:(id)arg1;
- (void)setRightBarButtonTitle:(id)arg1;
- (void)setScriptContextDictionary:(id)arg1;
- (void)setShowsRightBarButton:(bool)arg1;
- (void)setShowsStoreButton:(bool)arg1;
- (void)setupWithClientBundleID:(id)arg1 bagType:(long long)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
