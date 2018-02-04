/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKAchievementSharingInfo : NSObject <NSCoding, NSSecureCoding> {
    GKAchievement * _achievement;
    UIImage * _badgeImage;
    bool  _complete;
    GKGame * _game;
    UIImage * _iconImage;
    GKPlayer * _player;
}

@property (nonatomic, retain) GKAchievement *achievement;
@property (nonatomic, retain) UIImage *badgeImage;
@property (nonatomic) bool complete;
@property (nonatomic, retain) GKGame *game;
@property (nonatomic, retain) UIImage *iconImage;
@property (nonatomic, retain) GKPlayer *player;

+ (bool)supportsSecureCoding;

- (id)achievement;
- (id)badgeImage;
- (bool)complete;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)game;
- (id)iconImage;
- (id)initWithAchievement:(id)arg1 forGame:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)itemsForActivityType:(id)arg1;
- (id)operationThatBlocksUntilLoaded;
- (id)player;
- (void)setAchievement:(id)arg1;
- (void)setBadgeImage:(id)arg1;
- (void)setComplete:(bool)arg1;
- (void)setGame:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setPlayer:(id)arg1;
- (id)subjectForEmailActivity;
- (id)thumbnailForActivityType:(id)arg1;

@end
