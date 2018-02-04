/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGDeviceState : NSObject

+ (void)blockUntilFirstUnlock;
+ (id)currentOsBuild;
+ (bool)isClassCLocked;
+ (bool)isDeviceFormattedForProtection;
+ (bool)isUnlocked;
+ (int)lockState;
+ (id)registerForLockStateChangeNotifications:(id /* block */)arg1;
+ (void)runBlockWhenDeviceIsReadyForSuggestions:(id /* block */)arg1;
+ (void)unregisterForLockStateChangeNotifications:(id)arg1;

@end
