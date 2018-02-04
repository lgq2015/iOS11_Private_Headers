/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarEventInvitationNotification : EKCalendarNotification {
    bool  _allDay;
    bool  _attendeeReplyChanged;
    NSArray * _attendees;
    bool  _dateChanged;
    NSDate * _endDate;
    NSString * _invitedBy;
    NSString * _location;
    bool  _locationChanged;
    EKCalendarEventInvitationNotificationAttendee * _owner;
    long long  _participationStatus;
    NSDate * _participationStatusModifiedDate;
    EKRecurrenceRule * _recurrenceRule;
    NSDate * _startDate;
    NSDate * _startDateForNextOccurrence;
    long long  _status;
    bool  _timeChanged;
    NSTimeZone * _timeZone;
}

@property (getter=isAllDay, nonatomic) bool allDay;
@property (nonatomic) bool attendeeReplyChanged;
@property (nonatomic, retain) NSArray *attendees;
@property (nonatomic) bool couldBeJunk;
@property (nonatomic) bool dateChanged;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, readonly) NSString *invitedBy;
@property (nonatomic, retain) NSString *location;
@property (nonatomic) bool locationChanged;
@property (nonatomic, retain) EKCalendarEventInvitationNotificationAttendee *owner;
@property (nonatomic) long long participationStatus;
@property (nonatomic, retain) NSDate *participationStatusModifiedDate;
@property (nonatomic, retain) EKRecurrenceRule *recurrenceRule;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSDate *startDateForNextOccurrence;
@property (nonatomic) long long status;
@property (nonatomic) bool timeChanged;
@property (nonatomic, retain) NSTimeZone *timeZone;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

- (void).cxx_destruct;
- (bool)attendeeReplyChanged;
- (id)attendees;
- (bool)dateChanged;
- (id)endDate;
- (id)eventFromEventStore:(id)arg1;
- (bool)hasRecurrenceRules;
- (id)initWithEvent:(id)arg1;
- (id)invitedBy;
- (bool)isAllDay;
- (id)location;
- (bool)locationChanged;
- (id)owner;
- (long long)participationStatus;
- (id)participationStatusModifiedDate;
- (id)recurrenceRule;
- (void)setAllDay:(bool)arg1;
- (void)setAttendeeReplyChanged:(bool)arg1;
- (void)setAttendees:(id)arg1;
- (void)setDateChanged:(bool)arg1;
- (void)setEndDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationChanged:(bool)arg1;
- (void)setOwner:(id)arg1;
- (void)setParticipationStatus:(long long)arg1;
- (void)setParticipationStatusModifiedDate:(id)arg1;
- (void)setRecurrenceRule:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStartDateForNextOccurrence:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTimeChanged:(bool)arg1;
- (void)setTimeZone:(id)arg1;
- (id)startDate;
- (id)startDateForNextOccurrence;
- (long long)status;
- (bool)timeChanged;
- (id)timeZone;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

- (id)_allDescriptionStringsRankedByImportance:(bool)arg1 options:(unsigned long long)arg2;
- (id)_attachmentString;
- (id)_attendeeReplyStringWithOptions:(unsigned long long)arg1;
- (id)_attendeeString:(unsigned long long)arg1;
- (id)_dateString:(unsigned long long)arg1;
- (id)_errorString:(unsigned long long)arg1;
- (id)_locationString:(unsigned long long)arg1;
- (id)_organizerString:(unsigned long long)arg1;
- (id)allDescriptionStringsWithOptions:(unsigned long long)arg1;
- (id)importantDescriptionStringWithOptions:(unsigned long long)arg1;
- (id)senderStringWithOptions:(unsigned long long)arg1;
- (bool)supportsDisplay;

@end
