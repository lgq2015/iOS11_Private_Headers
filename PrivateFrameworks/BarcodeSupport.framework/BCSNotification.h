/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSNotification : NSObject {
    BCSAction * _action;
    BCSNotificationIcon * _attachmentIcon;
    NSString * _identifier;
    NSMutableDictionary * _localActions;
    int  _requestingProcessID;
}

@property (nonatomic, readonly) BBBulletinRequest *bulletinRequest;
@property (nonatomic, readonly) bool canHandleActionLocally;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) int requestingProcessID;

+ (id)notificationForAction:(id)arg1;
+ (id)tempVCardFileURL;

- (void).cxx_destruct;
- (id)_actionDescriptionString;
- (id)_actionTypeString;
- (id)_bbActionFromActionPickerItem:(id)arg1;
- (bool)_contentIsPreviewable;
- (id)_defaultURL;
- (id)_fbOptionsHandlingUnlockIfNecessary;
- (void)_handleCalendarEventWithICSString:(id)arg1;
- (void)_handleContactInfo:(id)arg1;
- (id)_initWithAction:(id)arg1;
- (id)_orderAppLinkActionsByRecency:(id)arg1;
- (void)_performActionAfterUnlock:(id /* block */)arg1;
- (id)_pickerLabelForURLActionPickerItem:(id)arg1;
- (id)_previewableData;
- (bool)_shouldHandleActionPickerItemLocally:(id)arg1;
- (bool)_shouldManuallyRequireAuthenticationForURL:(id)arg1;
- (bool)_shouldRequireUserToPickTargetApp;
- (bool)_shouldScheduleBackgroundActionForLaunchBundleID:(id)arg1;
- (void)_showAppPickerAlertWithFBOptions:(id)arg1;
- (id)_supplementActions;
- (id)_title;
- (id)attachmentDataForConstraints:(id)arg1;
- (id)bulletinRequest;
- (bool)canHandleActionLocally;
- (void)didHandleBulletinActionWithIdentifier:(id)arg1;
- (void)handleActionWithIdentifier:(id)arg1 notificationResponseOriginID:(id)arg2;
- (id)identifier;
- (int)requestingProcessID;
- (void)setRequestingProcessID:(int)arg1;
- (bool)shouldHandleBulletinActionWithIdentifier:(id)arg1;

@end
