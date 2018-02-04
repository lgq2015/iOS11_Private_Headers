/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKGameRecord : GKGame {
    GKPlayer * _player;
}

@property (nonatomic, readonly) unsigned long long achievementPoints;
@property (nonatomic, readonly) unsigned long long achievements;
@property (nonatomic, readonly) NSString *defaultLeaderboardIdentifier;
@property (nonatomic, readonly) unsigned long long friendRank;
@property (readonly, retain) GKGameRecordInternal *internal;
@property (nonatomic, readonly) NSDate *lastPlayedDate;
@property (nonatomic, readonly) unsigned long long maxAchievementPoints;
@property (nonatomic, readonly) unsigned long long maxAchievements;
@property (nonatomic, readonly) unsigned long long maxFriendRank;
@property (nonatomic, readonly) unsigned long long maxRank;
@property (nonatomic, readonly) unsigned long long numberOfCategories;
@property (nonatomic, readonly) unsigned long long numberOfLeaderboardSets;
@property (nonatomic, readonly) unsigned long long numberOfLeaderboards;
@property (nonatomic, readonly) bool played;
@property (nonatomic, retain) GKPlayer *player;
@property (nonatomic, readonly) NSDate *purchaseDate;
@property (nonatomic, readonly) unsigned long long rank;
@property (nonatomic, readonly) bool supportsAchievements;
@property (nonatomic, readonly) bool supportsLeaderboardSets;
@property (nonatomic, readonly) bool supportsLeaderboards;

+ (id)cacheKeyForPlayer:(id)arg1 game:(id)arg2;
+ (id)cacheKeyForPlayer:(id)arg1 internal:(id)arg2;
+ (id)gameRecordForPlayer:(id)arg1 game:(id)arg2;
+ (id)internalRepresentationCache;
+ (id)internalRepresentationForPlayer:(id)arg1 game:(id)arg2;
+ (void)invalidateCaches;
+ (void)loadGameRecordForPlayer:(id)arg1 game:(id)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)loadGameRecordsForPlayer:(id)arg1 games:(id)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)partitionGameRecords:(id)arg1 returniOS:(id*)arg2 returnMac:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1 player:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)played;
- (id)player;
- (void)setPlayer:(id)arg1;

@end
