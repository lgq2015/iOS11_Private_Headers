/* made by EzioChiu.
 */

@protocol HMDResidentDeviceManagerDelegate <NSObject>

@required

- (void)residentDeviceManager:(HMDResidentDeviceManager *)arg1 didUpdatePrimaryResident:(HMDResidentDevice *)arg2;
- (void)residentDeviceManager:(HMDResidentDeviceManager *)arg1 didUpdateResidentAvailable:(bool)arg2;

@end
