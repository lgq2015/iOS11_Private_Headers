/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListSectionHeaderViewLegibilityLabelCache : NSObject {
    NSMutableDictionary * _sectionHeaderViewLegibilityLabelDictionary;
}

@property (nonatomic, retain) NSMutableDictionary *sectionHeaderViewLegibilityLabelDictionary;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_createLegibilityLabelWithTitle:(id)arg1 font:(id)arg2;
- (id)_stringDescriptorForFont:(id)arg1;
- (id)init;
- (id)legibilityLabelForTitle:(id)arg1 font:(id)arg2;
- (id)sectionHeaderViewLegibilityLabelDictionary;
- (void)setSectionHeaderViewLegibilityLabelDictionary:(id)arg1;

@end
