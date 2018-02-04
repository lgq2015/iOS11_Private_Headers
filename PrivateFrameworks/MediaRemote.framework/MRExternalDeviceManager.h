/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRExternalDeviceManager : NSObject {
    NSPointerArray * _devicesPointerArray;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) NSArray *allDevices;

+ (id)sharedManager;

- (id)allDevices;
- (void)clearDevices;
- (void)dealloc;
- (id)deviceWithIdentifier:(id)arg1;
- (id)init;
- (void)registerDevice:(id)arg1;

@end
