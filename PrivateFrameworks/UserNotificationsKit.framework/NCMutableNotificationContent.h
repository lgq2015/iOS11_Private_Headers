/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCMutableNotificationContent : NCNotificationContent

@property (nonatomic, retain) UIImage *attachmentImage;
@property (nonatomic, retain) NSDate *date;
@property (getter=isDateAllDay, nonatomic) bool dateAllDay;
@property (nonatomic, copy) NSString *header;
@property (nonatomic, copy) NSString *hiddenPreviewsBodyPlaceholder;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, copy) NSString *title;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAttachmentImage:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDateAllDay:(bool)arg1;
- (void)setHeader:(id)arg1;
- (void)setHiddenPreviewsBodyPlaceholder:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;

@end
