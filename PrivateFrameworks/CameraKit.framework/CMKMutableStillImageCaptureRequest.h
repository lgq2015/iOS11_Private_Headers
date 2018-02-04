/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKMutableStillImageCaptureRequest : CMKStillImageCaptureRequest

@property (nonatomic) long long captureDevice;
@property (nonatomic) <CMKStillImageCaptureRequestDelegate> *delegate;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) long long flashMode;
@property (nonatomic) int hdrMode;
@property (getter=isTransient, nonatomic) bool transient;
@property (nonatomic) bool usesStillImageStabilization;
@property (nonatomic) bool wantsAudioForCapture;

- (void)setCaptureDevice:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setHdrMode:(int)arg1;
- (void)setParameter:(id)arg1 forKey:(id)arg2;
- (void)setTransient:(bool)arg1;
- (void)setUsesStillImageStabilization:(bool)arg1;
- (void)setWantsAudioForCapture:(bool)arg1;

@end
