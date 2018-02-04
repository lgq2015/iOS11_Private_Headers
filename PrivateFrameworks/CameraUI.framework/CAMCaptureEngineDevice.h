/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCaptureEngineDevice : NSObject {
    CAMCaptureEngine * __captureEngine;
    AVCaptureDeviceFormat * __panoramaDeviceFormat;
    CAMMemoizationCache * __videoDeviceFormatForVideoConfiguration;
    CAMMemoizationCache * __videoSessionPresetForVideoConfiguration;
    AVCaptureDevice * _captureDevice;
    AVCaptureDeviceInput * _captureDeviceInput;
    AVCaptureDeviceFormat * _stillImageDeviceFormat;
}

@property (nonatomic, readonly) CAMCaptureEngine *_captureEngine;
@property (nonatomic, readonly) AVCaptureDeviceFormat *_panoramaDeviceFormat;
@property (nonatomic, readonly) CAMMemoizationCache *_videoDeviceFormatForVideoConfiguration;
@property (nonatomic, readonly) CAMMemoizationCache *_videoSessionPresetForVideoConfiguration;
@property (nonatomic, readonly) AVCaptureDevice *captureDevice;
@property (nonatomic, readonly) AVCaptureDeviceInput *captureDeviceInput;
@property (nonatomic, readonly) AVCaptureDeviceFormat *portraitModeDeviceFormat;
@property (nonatomic, readonly) NSString *portraitModeSessionPreset;
@property (nonatomic, readonly) AVCaptureDeviceFormat *stillImageDeviceFormat;
@property (nonatomic, readonly) NSString *stillImageSessionPreset;
@property (nonatomic, readonly) AVCaptureDeviceFormat *timelapseDeviceFormat;
@property (nonatomic, readonly) NSString *timelapseSessionPreset;

- (void).cxx_destruct;
- (id)_captureEngine;
- (id)_panoramaDeviceFormat;
- (id)_videoDeviceFormatForVideoConfiguration;
- (id)_videoSessionPresetForVideoConfiguration;
- (id)captureDevice;
- (id)captureDeviceInput;
- (id)highestQualityDeviceFormatForVideoConfiguration:(long long)arg1;
- (id)highestQualitySessionPresetForVideoConfiguration:(long long)arg1;
- (id)init;
- (id)initWithEngine:(id)arg1 captureDevice:(id)arg2;
- (id)panoramaDeviceFormatForConfiguration:(id)arg1;
- (id)panoramaSessionPresetForConfiguration:(id)arg1;
- (id)portraitModeDeviceFormat;
- (id)portraitModeSessionPreset;
- (id)stillImageDeviceFormat;
- (id)stillImageSessionPreset;
- (id)timelapseDeviceFormat;
- (id)timelapseSessionPreset;
- (id)videoDeviceFormatForGraphConfiguration:(id)arg1;
- (id)videoDevicePresetForGraphConfiguration:(id)arg1;

@end
