/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKMutableVideoCaptureRequest : CMKVideoCaptureRequest

@property (nonatomic) long long captureDevice;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) long long torchMode;

- (void)setCaptureDevice:(long long)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setParameter:(id)arg1 forKey:(id)arg2;
- (void)setTorchMode:(long long)arg1;

@end
