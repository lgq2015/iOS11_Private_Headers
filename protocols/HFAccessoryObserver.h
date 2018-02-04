/* made by EzioChiu.
 */

@protocol HFAccessoryObserver <HMAccessoryDelegate>

@optional

- (void)accessory:(HMAccessory *)arg1 didUpdateApplicationDataForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateBundleID:(NSString *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateFirmwareUpdateAvailable:(bool)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateFirmwareVersion:(NSString *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateHasAuthorizationDataForCharacteristic:(HMCharacteristic *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateStoreID:(NSString *)arg2;
- (void)accessoryDidUpdateAdditionalSetupRequired:(HMAccessory *)arg1;
- (void)accessoryDidUpdateApplicationData:(HMAccessory *)arg1;

@end
