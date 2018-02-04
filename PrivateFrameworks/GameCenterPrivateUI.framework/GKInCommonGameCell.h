/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKInCommonGameCell : GKPlayerGameCell {
    GKGameRecord * _localPlayerGameRecord;
}

@property (nonatomic, retain) GKGameRecord *localPlayerGameRecord;

- (void)dealloc;
- (void)didUpdateModel;
- (id)leaderboardStringWithGameRecord:(id)arg1;
- (id)localPlayerGameRecord;
- (void)prepareForReuse;
- (void)setLocalPlayerGameRecord:(id)arg1;

@end
