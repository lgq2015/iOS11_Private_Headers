/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMUserPreferencesMigrator : NSObject

+ (long long)_HDRModeForLegacyHDRMode:(long long)arg1;
+ (long long)_captureModeForLegacyCameraMode:(long long)arg1;
+ (long long)_flashModeForLegacyFlashMode:(long long)arg1;
+ (long long)_previewViewAspectModeForLegacyAspectMode:(long long)arg1;
+ (void)migrateLegacyPreferences;

@end
