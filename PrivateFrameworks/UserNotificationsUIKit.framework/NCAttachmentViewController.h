/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCAttachmentViewController : UIViewController <NCNotificationCustomContent> {
    UNNotificationAttachment * _attachment;
    <NCNotificationCustomContentDelegate> * _delegate;
    NCNotificationRequest * _notificationRequest;
}

@property (nonatomic, retain) UNNotificationAttachment *attachment;
@property (nonatomic, readonly) NSString *contentExtensionIdentifier;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationCustomContentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NCNotificationRequest *notificationRequest;
@property (nonatomic) NCNotificationAction *presentationSourceAction;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)attachmentViewControllerForAttachment:(id)arg1 notificationRequest:(id)arg2;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_preferredContentSizeForContainerSize:(struct CGSize { double x1; double x2; })arg1 contentSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)allowManualDismiss;
- (id)attachment;
- (struct CGSize { double x1; double x2; })contentSize;
- (unsigned long long)customContentLocation;
- (bool)defaultContentHidden;
- (id)delegate;
- (bool)didReceiveNotificationRequest:(id)arg1;
- (id)initWithAttachment:(id)arg1 forNotificationRequest:(id)arg2;
- (id)notificationRequest;
- (bool)performAction:(id)arg1 forNotification:(id)arg2;
- (bool)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setAttachment:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNotificationRequest:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)updatePreferredContentSize;
- (void)viewWillAppear:(bool)arg1;

@end
