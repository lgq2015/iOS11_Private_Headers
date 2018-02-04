/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKInviteReplyNotification : EKObject

@property (nonatomic, readonly) bool alerted;
@property (nonatomic, readonly) EKCalendar *calendar;
@property (nonatomic, readonly) NSString *calendarName;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) EKCalendar *inviteReplyCalendar;
@property (nonatomic, readonly) NSString *shareeDisplayName;
@property (nonatomic, readonly) NSString *shareeEmailAddress;
@property (nonatomic, readonly) NSString *shareeFirstName;
@property (nonatomic, readonly) NSString *shareeLastName;
@property (nonatomic, readonly) NSString *shareePhoneNumber;
@property (nonatomic, readonly) NSURL *shareeURL;
@property (nonatomic, readonly) unsigned long long status;

+ (Class)frozenClass;
+ (id)knownRelationshipSingleValueKeys;

- (bool)alerted;
- (id)calendar;
- (id)calendarName;
- (void)clearAlertedStatus;
- (id)creationDate;
- (id)inviteReplyCalendar;
- (id)shareeAddressURL;
- (id)shareeDisplayName;
- (id)shareeEmailAddress;
- (id)shareeFirstName;
- (id)shareeLastName;
- (id)shareePhoneNumber;
- (id)shareeURL;
- (unsigned long long)status;

@end
