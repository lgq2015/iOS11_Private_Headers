/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
 */

@interface WLTelemetry : NSObject

+ (id)sharedInstance;

- (void)communicationDidFailForDataType:(id)arg1;
- (void)connectionToAndroidDeviceDidFailWithAuthenticationError;
- (void)connectionToAndroidDeviceDidFailWithTimeout;
- (void)connectionToAndroidDeviceDidSucceed;
- (void)importDidFailForDataType:(id)arg1;
- (void)importDidFailSilentlyForDataType:(id)arg1;
- (void)migrationDidFail;
- (void)migrationDidStart;
- (void)migrationDidSucceed;
- (void)wifiDidStartWithSuccess:(bool)arg1;

@end
