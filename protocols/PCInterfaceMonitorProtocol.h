/* made by EzioChiu.
 */

@protocol PCInterfaceMonitorProtocol <NSObject>

@required

- (long long)interfaceIdentifier;
- (bool)isBadLinkQuality;
- (bool)isInterfaceHistoricallyUsable;
- (bool)isInterfaceUsable;
- (bool)isInternetReachable;
- (bool)isNetworkingPowerExpensiveToUse;
- (bool)isPoorLinkQuality;
- (bool)isRadioHot;
- (int)linkQuality;
- (NSString *)linkQualityString;

@optional

- (struct __CFString { }*)currentRAT;
- (bool)isLTEWithCDRX;
- (struct __CFString { }*)wwanInterfaceName;

@end
