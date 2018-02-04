/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKLowDiskSpaceAlertController : UIAlertController {
    <CMKLowDiskSpaceAlertControllerDelegate> * _delegate;
    bool  _showsSettingsButton;
}

@property (nonatomic) <CMKLowDiskSpaceAlertControllerDelegate> *delegate;
@property (nonatomic, readonly) bool showsSettingsButton;

+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;
+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 showSettingsButton:(bool)arg3;
+ (void)showUsageSettings;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)show;
- (bool)showsSettingsButton;

@end
