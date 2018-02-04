/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteDeviceMessageDestination : HMFMessageDestination {
    HMDDevice * _device;
}

@property (nonatomic, readonly) HMDDevice *device;

+ (id)allMessageDestinations;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)device;
- (unsigned long long)hash;
- (id)initWithTarget:(id)arg1;
- (id)initWithTarget:(id)arg1 device:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)shortDescription;

@end