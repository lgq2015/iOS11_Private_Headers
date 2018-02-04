/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVSystemDialogOptions : NSObject {
    NSString * _alertHeader;
    NSString * _alertMessage;
    NSArray * _allowedApplicationBundleIDs;
    NSString * _alternateButtonTitle;
    NSString * _defaultButtonTitle;
    bool  _dismissOverlaysOnLockscreen;
    bool  _forceModalAlertAppearance;
    bool  _showAsTopmost;
    bool  _showOnLockscreen;
}

@property (nonatomic, copy) NSString *alertHeader;
@property (nonatomic, copy) NSString *alertMessage;
@property (nonatomic, copy) NSArray *allowedApplicationBundleIDs;
@property (nonatomic, copy) NSString *alternateButtonTitle;
@property (nonatomic, copy) NSString *defaultButtonTitle;
@property (nonatomic) bool dismissOverlaysOnLockscreen;
@property (nonatomic) bool forceModalAlertAppearance;
@property (nonatomic) bool showAsTopmost;
@property (nonatomic) bool showOnLockscreen;

- (void).cxx_destruct;
- (id)alertHeader;
- (id)alertMessage;
- (id)allowedApplicationBundleIDs;
- (id)alternateButtonTitle;
- (id)defaultButtonTitle;
- (bool)dismissOverlaysOnLockscreen;
- (bool)forceModalAlertAppearance;
- (void)setAlertHeader:(id)arg1;
- (void)setAlertMessage:(id)arg1;
- (void)setAllowedApplicationBundleIDs:(id)arg1;
- (void)setAlternateButtonTitle:(id)arg1;
- (void)setDefaultButtonTitle:(id)arg1;
- (void)setDismissOverlaysOnLockscreen:(bool)arg1;
- (void)setForceModalAlertAppearance:(bool)arg1;
- (void)setShowAsTopmost:(bool)arg1;
- (void)setShowOnLockscreen:(bool)arg1;
- (bool)showAsTopmost;
- (bool)showOnLockscreen;

@end
