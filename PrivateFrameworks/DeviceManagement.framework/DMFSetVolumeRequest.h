/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFSetVolumeRequest : CATTaskRequest {
    float  _volume;
}

@property (nonatomic) float volume;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;

@end
