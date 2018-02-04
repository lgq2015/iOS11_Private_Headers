/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDVolumeManager : NSObject

+ (id)_volumeForDisk:(const struct { int x1; unsigned char x2[16]; }*)arg1 mountToPath:(id)arg2 error:(id*)arg3;
+ (id)createVolumeForDevice:(int)arg1 error:(id*)arg2;
+ (id)deviceIDForVolumeUUID:(id)arg1;
+ (id)existingVolumeForDevice:(int)arg1;
+ (void)invalidateVolume:(id)arg1;
+ (void)shutdownVolumes;
+ (void)startVolumes;
+ (id)volumeUUIDForDeviceID:(id)arg1;

@end
