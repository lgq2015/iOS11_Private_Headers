/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVDeviceCharacteristics : NSObject

+ (void)Initialize;
+ (long long)actualMemory;
+ (int)architectureType;
+ (bool)colorSyncCapable;
+ (bool)hasExtendedColorDisplay;
+ (bool)isLowMemDevice;

@end
