/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMRampToVideoZoomFactorCommand : CAMCaptureCommand {
    double  __duration;
    float  __rate;
    double  __videoZoomFactor;
}

@property (nonatomic, readonly) double _duration;
@property (nonatomic, readonly) float _rate;
@property (nonatomic, readonly) double _videoZoomFactor;

- (double)_duration;
- (float)_rate;
- (double)_videoZoomFactor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoZoomFactor:(double)arg1 duration:(double)arg2;
- (id)initWithVideoZoomFactor:(double)arg1 rate:(float)arg2;

@end
