/* made by EzioChiu.
 */

@protocol MusicProfileDetailViewDelegate <NSObject>

@optional

- (void)profileDetailView:(MusicProfileDetailView *)arg1 didUpdateFollowingState:(bool)arg2;
- (void)profileDetailViewDidSelectEditButton:(MusicProfileDetailView *)arg1;
- (void)profileDetailViewDidSelectShareActionsButton:(MusicProfileDetailView *)arg1;
- (void)profileDetailViewDidSelectTitle:(MusicProfileDetailView *)arg1;

@end
