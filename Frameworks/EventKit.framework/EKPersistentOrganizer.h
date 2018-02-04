/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentOrganizer : EKPersistentParticipant

@property (nonatomic, retain) NSURL *address;
@property (getter=isCurrentUser, nonatomic) bool currentUser;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *emailAddress;

+ (id)defaultPropertiesToLoad;
+ (id)organizerWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(bool)arg4;
+ (id)relations;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)entityType;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3 isCurrentUser:(bool)arg4;
- (bool)isCurrentUser;
- (id)owner;
- (void)setCurrentUser:(bool)arg1;
- (void)setOwner:(id)arg1;

@end
