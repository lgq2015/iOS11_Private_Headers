/* made by EzioChiu.
 */

@protocol HMResidentDeviceDelegate <NSObject>

@optional

- (void)residentDevice:(HMResidentDevice *)arg1 didUpdateCapabilities:(unsigned long long)arg2;
- (void)residentDevice:(HMResidentDevice *)arg1 didUpdateEnabled:(bool)arg2;
- (void)residentDevice:(HMResidentDevice *)arg1 didUpdateName:(NSString *)arg2;
- (void)residentDevice:(HMResidentDevice *)arg1 didUpdateStatus:(unsigned long long)arg2;

@end
