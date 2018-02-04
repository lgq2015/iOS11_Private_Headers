/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAppleMediaAccessoryAdvertisement : HMDMediaAccessoryAdvertisement {
    HMDDevice * _device;
}

@property (readonly) HMDDevice *device;

- (void).cxx_destruct;
- (id)description;
- (id)device;
- (id)initWithIdentifier:(id)arg1 sessionIdentifier:(id)arg2 name:(id)arg3 category:(id)arg4 deviceType:(unsigned int)arg5 device:(id)arg6;
- (id)initWithOutputDevice:(id)arg1 sessionIdentifier:(id)arg2 device:(id)arg3;

@end
