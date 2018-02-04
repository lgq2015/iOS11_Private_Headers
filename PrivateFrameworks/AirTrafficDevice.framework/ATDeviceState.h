/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATDeviceState : NSObject

+ (void)blockUntilFirstUnlock;
+ (bool)isClassCLocked;
+ (bool)isUnlocked;
+ (void)registerBlockForFirstUnlock:(id /* block */)arg1;

@end
