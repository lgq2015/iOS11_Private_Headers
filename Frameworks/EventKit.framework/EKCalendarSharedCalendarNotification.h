/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarSharedCalendarNotification : EKCalendarNotification {
    unsigned long long  _allowedEntityTypes;
    unsigned long long  _sharingInvitationResponse;
}

@property (nonatomic) unsigned long long allowedEntityTypes;
@property (nonatomic) unsigned long long sharingInvitationResponse;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

- (unsigned long long)allowedEntityTypes;
- (id)calendarFromEventStore:(id)arg1;
- (id)initWithType:(long long)arg1;
- (void)setAllowedEntityTypes:(unsigned long long)arg1;
- (void)setSharingInvitationResponse:(unsigned long long)arg1;
- (unsigned long long)sharingInvitationResponse;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

- (id)allDescriptionStringsWithOptions:(unsigned long long)arg1;
- (id)senderStringWithOptions:(unsigned long long)arg1;
- (bool)supportsDisplay;
- (id)titleStringWithOptions:(unsigned long long)arg1;

@end
