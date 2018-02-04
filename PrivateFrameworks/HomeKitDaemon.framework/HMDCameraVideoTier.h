/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraVideoTier : HMFObject <NSSecureCoding> {
    NSNumber * _framerate;
    NSNumber * _maxBitRate;
    NSNumber * _minBitRate;
    NSNumber * _rtcpInterval;
    HMDVideoResolution * _videoResolution;
}

@property (nonatomic, retain) NSNumber *framerate;
@property (nonatomic, readonly) NSNumber *maxBitRate;
@property (nonatomic, readonly) NSNumber *minBitRate;
@property (nonatomic, readonly) NSNumber *rtcpInterval;
@property (nonatomic, readonly) HMDVideoResolution *videoResolution;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)framerate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoResolution:(id)arg1 framerate:(id)arg2 minBitRate:(id)arg3 maxBitRate:(id)arg4 rtcpInterval:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)maxBitRate;
- (id)minBitRate;
- (id)rtcpInterval;
- (void)setFramerate:(id)arg1;
- (id)videoResolution;

@end
