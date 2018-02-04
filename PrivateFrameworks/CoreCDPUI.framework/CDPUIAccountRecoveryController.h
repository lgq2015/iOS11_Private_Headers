/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPUIAccountRecoveryController : CDPUIController

- (id)_accountRecoveryDevicePickerEscapeOffer;
- (id)_accountRecoveryEscapeOfferForDevice:(id)arg1;
- (void)_presentRemoteSecretControllerWithNewestDevice:(id)arg1;
- (void)_setupDevicePickerController:(id /* block */)arg1;
- (void)devicePicker:(id)arg1 didSelectDevice:(id)arg2;
- (id)devicePicker:(id)arg1 escapeOffersForDevices:(id)arg2;
- (bool)performingAccountRecovery;

@end
