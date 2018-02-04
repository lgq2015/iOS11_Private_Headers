/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentAttendee : EKPersistentParticipant

@property (nonatomic) bool commentChanged;
@property (nonatomic, copy) NSDate *lastModified;
@property (nonatomic) long long participantRole;
@property (nonatomic) long long participantType;
@property (nonatomic) int pendingStatus;
@property (nonatomic) bool proposedStartDateChanged;
@property (nonatomic) int status;
@property (nonatomic) bool statusChanged;

+ (id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)entityType;
- (unsigned int)flags;
- (id)initWithAddress:(id)arg1 name:(id)arg2;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
- (id)lastModified;
- (id)owner;
- (long long)participantRole;
- (long long)participantType;
- (int)pendingStatus;
- (void)setFlags:(unsigned int)arg1;
- (void)setLastModified:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setParticipantRole:(long long)arg1;
- (void)setParticipantType:(long long)arg1;
- (void)setPendingStatus:(int)arg1;
- (void)setStatus:(int)arg1;
- (int)status;

@end