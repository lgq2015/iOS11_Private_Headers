/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKVideoCaptureRequest : CMKCaptureRequest <NSCopying, NSMutableCopying> {
    long long  _captureDevice;
    long long  _deviceOrientation;
    long long  _torchMode;
}

@property (nonatomic, readonly) long long captureDevice;
@property (nonatomic, readonly) long long deviceOrientation;
@property (nonatomic, readonly) long long torchMode;

- (long long)captureDevice;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)deviceOrientation;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)torchMode;

@end
