/* made by EzioChiu.
 */

@protocol MDSnapshotMap <NSObject>

@required

- (bool)isShowingNoDataPlaceholders;
- (struct LabelSettings { }*)labelSettings;
- (void)setShowsBuildings:(bool)arg1;
- (void)setShowsVenues:(bool)arg1;
- (bool)showsBuildings;
- (bool)showsVenues;

@end
