/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLBatteryMonitor : NSObject

+ (void)_updateBatteryWithBatteryEntry:(unsigned int)arg1;
+ (id)powerStatus;
+ (void)startMonitoringPowerEvents;

@end
