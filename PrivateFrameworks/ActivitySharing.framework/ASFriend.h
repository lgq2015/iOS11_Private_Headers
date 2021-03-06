/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASFriend : NSObject <NSCopying, NSSecureCoding> {
    ASContact * _contact;
    NSNumber * _currentCacheIndex;
    NSDictionary * _friendAchievements;
    NSDictionary * _friendWorkouts;
    NSDictionary * _snapshots;
}

@property (readonly) NSUUID *UUID;
@property (nonatomic, readonly) bool canSeeMyActivityData;
@property (nonatomic, retain) ASContact *contact;
@property (nonatomic, readonly) NSNumber *currentCacheIndex;
@property (nonatomic, readonly) _HKFitnessFriendActivitySnapshot *currentSnapshot;
@property (nonatomic, readonly) _HKFitnessFriendActivitySnapshot *currentSnapshotWithGoalsCarriedForward;
@property (nonatomic, readonly) NSDate *dateActivityDataInitiallyBecameVisibleToMe;
@property (nonatomic, readonly) NSDate *dateForLatestDataHidden;
@property (nonatomic, readonly) NSDate *dateForLatestDataHiddenFromMe;
@property (nonatomic, readonly) NSDate *dateForLatestOutgoingInviteRequest;
@property (nonatomic, readonly) NSDate *dateForLatestRelationshipStart;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, retain) NSDictionary *friendAchievements;
@property (nonatomic, retain) NSDictionary *friendWorkouts;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) bool hasInviteRequestFromMe;
@property (nonatomic, readonly) bool inviteRequestToMeWasAccepted;
@property (nonatomic, readonly) bool isActivityDataCurrentlyVisibleToMe;
@property (nonatomic, readonly) bool isAwaitingInviteResponseFromMe;
@property (nonatomic, readonly) bool isCurrentlyHidingActivityDataFromMe;
@property (nonatomic, readonly) bool isFriendshipCurrentlyActive;
@property (nonatomic, readonly) bool isMuted;
@property (nonatomic, readonly) bool isMyActivityDataCurrentlyHidden;
@property (getter=isMe, nonatomic, readonly) bool me;
@property (nonatomic, readonly) _HKFitnessFriendActivitySnapshot *mostRecentSnapshot;
@property (nonatomic, readonly) bool sentInviteRequestToMe;
@property (nonatomic, retain) NSDictionary *snapshots;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (struct _HKFitnessFriendActivitySnapshot { Class x1; }*)_emptySnapshotWithGoalsCarriedForwardForSnapshotIndex:(long long)arg1;
- (id)as_detailedSharingDurationString;
- (id)as_invitedDurationString;
- (id)as_simpleHiddenFromString;
- (id)as_simpleSharingDurationString;
- (bool)canSeeMyActivityData;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentCacheIndex;
- (id)currentDateComponents;
- (struct _HKFitnessFriendActivitySnapshot { Class x1; }*)currentSnapshot;
- (struct _HKFitnessFriendActivitySnapshot { Class x1; }*)currentSnapshotWithGoalsCarriedForward;
- (id)dateActivityDataInitiallyBecameVisibleToMe;
- (id)dateForLatestDataHidden;
- (id)dateForLatestDataHiddenFromMe;
- (id)dateForLatestOutgoingInviteRequest;
- (id)dateForLatestRelationshipStart;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)friendAchievements;
- (id)friendWorkouts;
- (id)fullName;
- (bool)hasInviteRequestFromMe;
- (id)initWithActivitySnapshots:(id)arg1 friendAchievements:(id)arg2 friendWorkouts:(id)arg3 contact:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)inviteRequestToMeWasAccepted;
- (bool)isActivityDataCurrentlyVisibleToMe;
- (bool)isActivityDataVisibleToMeForDate:(id)arg1;
- (bool)isAwaitingInviteResponseFromMe;
- (bool)isCurrentlyHidingActivityDataFromMe;
- (bool)isFriendshipCurrentlyActive;
- (bool)isHidingActivityDataFromMeForDate:(id)arg1;
- (bool)isMe;
- (bool)isMuted;
- (bool)isMyActivityDataCurrentlyHidden;
- (struct _HKFitnessFriendActivitySnapshot { Class x1; }*)mostRecentSnapshot;
- (bool)sentInviteRequestToMe;
- (void)setContact:(id)arg1;
- (void)setFriendAchievements:(id)arg1;
- (void)setFriendWorkouts:(id)arg1;
- (void)setSnapshots:(id)arg1;
- (struct _HKFitnessFriendActivitySnapshot { Class x1; }*)snapshotWithGoalsCarriedForwardForSnapshotIndex:(id)arg1;
- (id)snapshots;
- (id)timeZone;

@end
