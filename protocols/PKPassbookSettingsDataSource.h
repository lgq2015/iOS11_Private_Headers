/* made by EzioChiu.
 */

@protocol PKPassbookSettingsDataSource <NSObject>

@required

- (bool)canRegisterForPeerPayment;
- (bool)deviceInRestrictedMode;
- (bool)deviceSupportsInAppPayments;
- (<PKPaymentOptionsProtocol> *)optionsDelegate;
- (<PKPassLibraryDataProvider> *)passLibraryDataProvider;
- (<PKPaymentDataProvider> *)paymentDataProvider;
- (<PKPassbookPeerPaymentSettingsDataSource> *)peerPaymentDataSource;
- (<PKPassbookPeerPaymentSettingsDelegate> *)peerPaymentDelegate;
- (NSString *)secureElementID;
- (bool)secureElementIsProductionSigned;
- (<PKPaymentSetupDelegate> *)setupDelegate;

@optional

- (NSString *)deviceName;
- (bool)hasFelicaSecureElement;
- (void)setDefaultExpressFelicaTransitPassIdentifier:(void *)arg1 visibleViewController:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, void*
- (NSArray *)setupFeaturedNetworksForDevice;

@end
