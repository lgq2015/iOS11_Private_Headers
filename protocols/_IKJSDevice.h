/* made by EzioChiu.
 */

@protocol _IKJSDevice <IKJSDevice, JSExport>

@required

- (NSNumber *)capacity:(NSString *)arg1;
- (bool)isInAirplaneMode;
- (bool)isInRetailDemoMode;
- (double)lastNetworkChangedTime;
- (NSString *)networkType;
- (NSNumber *)pixelRatio;
- (NSString *)vendorID;

@end
