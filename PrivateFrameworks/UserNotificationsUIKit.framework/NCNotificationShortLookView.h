/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationShortLookView : MTTitledPlatterView <NCNotificationStaticContentAccepting> {
    MTFontProvider * _fontProvider;
    NCNotificationGrabberView * _grabberView;
    NCNotificationContentView * _notificationContentView;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic, copy) NSDate *date;
@property (getter=isDateAllDay, nonatomic, readonly) bool dateAllDay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) NSArray *interfaceActions;
@property (nonatomic) unsigned long long messageNumberOfLines;
@property (nonatomic, copy) NSString *primarySubtitleText;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, copy) NSString *secondaryText;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImage *thumbnail;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_configureHeaderContentView;
- (void)_configureNotificationContentViewIfNecessary;
- (id)_fontProvider;
- (id)_grabberView;
- (void)_layoutGrabber;
- (id)_newNotificationContentView;
- (id)_notificationContentView;
- (void)_setFontProvider:(id)arg1;
- (bool)_shouldShowGrabber;
- (id)accessoryView;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (struct CGSize { double x1; double x2; })contentSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)interfaceActions;
- (void)layoutSubviews;
- (unsigned long long)messageNumberOfLines;
- (id)primarySubtitleText;
- (id)primaryText;
- (id)secondaryText;
- (void)setAccessoryView:(id)arg1;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setInterfaceActions:(id)arg1;
- (void)setMessageNumberOfLines:(unsigned long long)arg1;
- (void)setPrimarySubtitleText:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFitsContentWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)thumbnail;

@end
