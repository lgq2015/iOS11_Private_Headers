/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMSetVideoZoomFactorCommand : CAMCaptureCommand {
    double  __videoZoomFactor;
}

@property (nonatomic, readonly) double _videoZoomFactor;

- (double)_videoZoomFactor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoZoomFactor:(double)arg1;

@end
