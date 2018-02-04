/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKAchievementChallengeInternal : GKChallengeInternal {
    GKAchievementInternal * _achievement;
}

@property (nonatomic, copy) GKAchievementInternal *achievement;

+ (id)internalRepresentation;
+ (id)secureCodedPropertyKeys;

- (id)achievement;
- (void)dealloc;
- (id)serverRepresentationForReceivingPlayer:(id)arg1;
- (void)setAchievement:(id)arg1;
- (id)titleText;
- (unsigned long long)type;

@end
