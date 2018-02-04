/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKStillImageCaptureRequest : CMKCaptureRequest <NSCopying, NSMutableCopying> {
    long long  _captureDevice;
    <CMKStillImageCaptureRequestDelegate> * _delegate;
    long long  _deviceOrientation;
    long long  _flashMode;
    int  _hdrMode;
    bool  _transient;
    bool  _usesStillImageStabilization;
    bool  _wantsAudioForCapture;
}

@property (nonatomic, readonly) long long captureDevice;
@property (nonatomic, readonly) <CMKStillImageCaptureRequestDelegate> *delegate;
@property (nonatomic, readonly) long long deviceOrientation;
@property (nonatomic, readonly) long long flashMode;
@property (nonatomic, readonly) int hdrMode;
@property (getter=isTransient, nonatomic, readonly) bool transient;
@property (nonatomic, readonly) bool usesStillImageStabilization;
@property (nonatomic, readonly) bool wantsAudioForCapture;

- (void).cxx_destruct;
- (long long)captureDevice;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (long long)deviceOrientation;
- (long long)flashMode;
- (int)hdrMode;
- (id)init;
- (bool)isTransient;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)usesStillImageStabilization;
- (bool)wantsAudioForCapture;

@end
