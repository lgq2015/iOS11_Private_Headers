/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoResourceGrabber.framework/NanoResourceGrabber
 */

@interface NRGResourceCache : NSObject

+ (id)cacheDirPathForAppBundleID:(id)arg1 withPairedDeviceStorePath:(id)arg2;
+ (id)cacheDirPathForPairedDeviceStorePath:(id)arg1;
+ (id)cachePathForIconVariant:(int)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (void)createCachePathIfNecessaryWithPairedDeviceStorePath:(id)arg1;
+ (id)iconCacheDirPathForAppBundleID:(id)arg1 withPairedDeviceStorePath:(id)arg2;
+ (id)iconForIconVariant:(int)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (void)invalidateBundleID:(id)arg1 withPairedDeviceStorePath:(id)arg2;
+ (void)invalidatePairedDevice:(id)arg1;
+ (void)setIcon:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4;

@end
