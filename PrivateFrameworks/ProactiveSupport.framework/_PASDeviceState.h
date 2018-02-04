/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASDeviceState : NSObject

+ (void)blockUntilFirstUnlock;
+ (id)currentOsBuild;
+ (bool)isClassCLocked;
+ (bool)isConstrainedDevice;
+ (bool)isDeviceFormattedForProtection;
+ (bool)isUnlocked;
+ (int)lockState;
+ (id)registerForLockStateChangeNotifications:(id /* block */)arg1;
+ (void)runBlockWhenDeviceIsClassCUnlocked:(id /* block */)arg1;
+ (void)setDefaultSystemCallbacks;
+ (void)setSystemCallbacks:(const struct _PASDeviceStateSystemCallbacks { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); }*)arg1;
+ (void)unregisterForLockStateChangeNotifications:(id)arg1;

@end
