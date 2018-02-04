/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIDonationViewController : UINavigationController {
    NSString * _charityID;
    SKUIClientContext * _clientContext;
    SKUIDonationConfiguration * _donationConfiguration;
    NSOperationQueue * _operationQueue;
    UIViewController * _placeholderViewController;
}

@property (nonatomic, readonly) NSString *charityIdentifier;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, retain) NSOperationQueue *operationQueue;

- (void).cxx_destruct;
- (void)_cancelButtonAction:(id)arg1;
- (void)_configurationDidLoadWithResult:(bool)arg1 error:(id)arg2;
- (void)_finishAuthenticateWithResponse:(id)arg1 error:(id)arg2;
- (id)_initSKUIDonationViewController;
- (void)_loadDonationConfiguration;
- (id)charityIdentifier;
- (id)clientContext;
- (id)initWithCharityIdentifier:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)operationQueue;
- (void)setClientContext:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
