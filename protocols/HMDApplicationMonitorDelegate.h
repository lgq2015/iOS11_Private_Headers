/* made by EzioChiu.
 */

@protocol HMDApplicationMonitorDelegate <NSObject>

@optional

- (void)applicationMonitorDidChangeActiveHomeKitAppStatus:(bool)arg1;
- (void)applicationMonitorDidChangeAppState:(HMDProcessInfo *)arg1;

@end
