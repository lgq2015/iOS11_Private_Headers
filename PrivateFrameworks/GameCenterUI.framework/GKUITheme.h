/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKUITheme : NSObject {
    NSCache * _resourceCache;
}

@property (nonatomic, readonly) double formSheetCornerRadius;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } formSheetSize;
@property (nonatomic, readonly, retain) GKNetworkImageSource *iconLeaderboardListSource;
@property (nonatomic, readonly, retain) GKNetworkImageSource *iconLeaderboardSetListSource;
@property (nonatomic, readonly, retain) UIImage *interactiveRatingStarsBackground;
@property (nonatomic, readonly, retain) UIImage *interactiveRatingStarsForeground;
@property (nonatomic, readonly, retain) GKNetworkImageSource *macGameIconSource;
@property (nonatomic, readonly, retain) GKNetworkImageSource *photoDetailSource;
@property (nonatomic, readonly, retain) GKNetworkImageSource *photoListSource;
@property (nonatomic, readonly, retain) UIImage *ratingStarsBackgroundImage;
@property (nonatomic, readonly, retain) UIImage *ratingStarsForegroundImage;
@property (nonatomic, retain) NSCache *resourceCache;
@property (nonatomic, readonly) GKNetworkImageSource *untreatedAchievementImageDetailSource;
@property (nonatomic, readonly) GKNetworkImageSource *untreatedAchievementImageSource;

+ (id)sharedTheme;

- (id)achievementsDefaultIcon;
- (id)achievementsNotStartedIcon;
- (id)addPlayerButtonImage;
- (id)bubbleAccept;
- (id)bubbleChallenges;
- (id)bubbleDecline;
- (id)bubbleFriends;
- (id)bubbleGames;
- (id)bubbleHighlight;
- (id)bubbleInvite;
- (id)bubblePlay;
- (id)bubblePoints;
- (id)bubbleRequests;
- (id)bubbleShare;
- (id)bubbleSignin;
- (id)bubbleTurns;
- (void)clearResourceCache;
- (void)dealloc;
- (id)defaultLeaderboardIcon;
- (id)defaultPlayerPhoto;
- (id)eventIconImage;
- (double)formSheetCornerRadius;
- (struct CGSize { double x1; double x2; })formSheetSize;
- (id)iconLeaderboardListSource;
- (id)iconLeaderboardSetListSource;
- (id)imageNamed:(id)arg1;
- (id)init;
- (id)interactiveRatingStarsBackground;
- (id)interactiveRatingStarsForeground;
- (id)macGameIconSource;
- (id)navbarActionButtonIcon;
- (id)photoDetailSource;
- (id)photoListSource;
- (id)playerPickerSelectedImage;
- (id)playerPickerUnselectedImage;
- (id)ratingStarsBackgroundImage;
- (id)ratingStarsForegroundImage;
- (id)removePlayerButtonImage;
- (id)resourceCache;
- (id)resourceForSelector:(SEL)arg1 missingHandler:(id /* block */)arg2;
- (id)resourceWithName:(id)arg1 missingHandler:(id /* block */)arg2;
- (void)setResourceCache:(id)arg1;
- (id)statusDotImage;
- (id)untreatedAchievementImageDetailSource;
- (id)untreatedAchievementImageSource;

@end
