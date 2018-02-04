/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKScoreSharingInfo : NSObject <NSCoding, NSSecureCoding> {
    UIImage * _badgeImage;
    bool  _complete;
    GKGame * _game;
    UIImage * _iconImage;
    GKLeaderboard * _leaderboardCategory;
    GKPlayer * _player;
    GKScore * _score;
}

@property (nonatomic, retain) UIImage *badgeImage;
@property (nonatomic) bool complete;
@property (nonatomic, retain) GKGame *game;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, retain) GKLeaderboard *leaderboardCategory;
@property (nonatomic, retain) GKPlayer *player;
@property (nonatomic, retain) GKScore *score;

+ (bool)supportsSecureCoding;

- (id)badgeImage;
- (bool)complete;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)game;
- (id)iconImage;
- (id)initWithCategoryID:(id)arg1 forGame:(id)arg2 player:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)itemsForActivityType:(id)arg1;
- (id)leaderboardCategory;
- (id)operationThatBlocksUntilLoaded;
- (id)player;
- (id)score;
- (void)setBadgeImage:(id)arg1;
- (void)setComplete:(bool)arg1;
- (void)setGame:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setLeaderboardCategory:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setScore:(id)arg1;
- (id)subjectForEmailActivity;
- (id)thumbnailForActivityType:(id)arg1;

@end
