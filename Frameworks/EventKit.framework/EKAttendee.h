/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAttendee : EKParticipant

@property (nonatomic) bool commentChanged;
@property (nonatomic, readonly) NSDate *lastModifiedParticipationStatus;
@property (nonatomic) long long participantRole;
@property (nonatomic) long long participantStatus;
@property (nonatomic) long long participantType;
@property (nonatomic) long long pendingStatus;
@property (nonatomic) bool proposedStartDateChanged;
@property (nonatomic) bool statusChanged;

+ (int)_calAttendeeStatusFromEKParticipantStatus:(long long)arg1;
+ (long long)_ekParticipantStatusFromCalAttendeeStatus:(int)arg1;
+ (id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4;
+ (id)attendeeWithName:(id)arg1 phoneNumber:(id)arg2;
+ (id)attendeeWithName:(id)arg1 url:(id)arg2;
+ (Class)frozenClass;

- (bool)_isParticipantStatusDirty;
- (void)_setFlag:(unsigned int)arg1 value:(bool)arg2;
- (bool)_valueForFlag:(unsigned int)arg1;
- (bool)commentChanged;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)flags;
- (bool)isCurrentUser;
- (id)lastModifiedParticipationStatus;
- (void)markAsForward;
- (id)owner;
- (long long)participantRole;
- (long long)participantStatus;
- (long long)participantType;
- (long long)pendingStatus;
- (int)pendingStatusRaw;
- (bool)proposedStartDateChanged;
- (void)setCommentChanged:(bool)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setParticipantRole:(long long)arg1;
- (void)setParticipantStatus:(long long)arg1;
- (void)setParticipantType:(long long)arg1;
- (void)setPendingStatus:(long long)arg1;
- (void)setPendingStatusRaw:(int)arg1;
- (void)setProposedStartDateChanged:(bool)arg1;
- (void)setStatusChanged:(bool)arg1;
- (void)setStatusRaw:(int)arg1;
- (bool)statusChanged;
- (int)statusRaw;

@end
