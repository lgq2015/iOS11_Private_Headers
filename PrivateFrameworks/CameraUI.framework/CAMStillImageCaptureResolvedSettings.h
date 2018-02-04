/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMStillImageCaptureResolvedSettings : NSObject {
    bool  _HDREnabled;
    bool  _portraitEffectEnabled;
}

@property (getter=isHDREnabled, nonatomic, readonly) bool HDREnabled;
@property (getter=isPortraitEffectEnabled, nonatomic, readonly) bool portraitEffectEnabled;

- (id)initWithHDREnabled:(bool)arg1 portraitEffectEnabled:(bool)arg2;
- (bool)isHDREnabled;
- (bool)isPortraitEffectEnabled;

@end
