/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKCaptureSessionConfigurationOptions : NSObject {
    bool  _HDRDetectionEnabled;
    bool  _use60FPSVideo;
    bool  _useAlternateSlomoFront;
    bool  _useAlternateSlomoRear;
}

@property (nonatomic, readonly) bool HDRDetectionEnabled;
@property (nonatomic, readonly) bool use60FPSVideo;
@property (nonatomic, readonly) bool useAlternateSlomoFront;
@property (nonatomic, readonly) bool useAlternateSlomoRear;

- (bool)HDRDetectionEnabled;
- (id)init;
- (id)initWithHDRDetectionEnabled:(bool)arg1 use60FPSVideo:(bool)arg2 useAlternateSlomoFront:(bool)arg3 useAlternateSlomoRear:(bool)arg4;
- (bool)use60FPSVideo;
- (bool)useAlternateSlomoFront;
- (bool)useAlternateSlomoRear;

@end
