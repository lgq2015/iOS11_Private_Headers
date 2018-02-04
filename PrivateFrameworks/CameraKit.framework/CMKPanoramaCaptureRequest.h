/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKPanoramaCaptureRequest : CMKCaptureRequest <NSCopying, NSMutableCopying> {
    long long  _captureDevice;
    long long  _deviceOrientation;
}

@property (nonatomic, readonly) long long captureDevice;
@property (nonatomic, readonly) long long deviceOrientation;

- (long long)captureDevice;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)deviceOrientation;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
