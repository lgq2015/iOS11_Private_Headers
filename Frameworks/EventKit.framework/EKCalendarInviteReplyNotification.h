/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarInviteReplyNotification : EKCalendarNotification {
    unsigned long long  _allowedEntityTypes;
    unsigned long long  _status;
}

@property (nonatomic) unsigned long long allowedEntityTypes;
@property (nonatomic) unsigned long long status;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

- (unsigned long long)allowedEntityTypes;
- (id)initWithType:(long long)arg1;
- (id)inviteReplyNotificationFromEventStore:(id)arg1;
- (void)setAllowedEntityTypes:(unsigned long long)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

- (id)allDescriptionStringsWithOptions:(unsigned long long)arg1;
- (bool)supportsDisplay;
- (id)titleStringWithOptions:(unsigned long long)arg1;

@end
