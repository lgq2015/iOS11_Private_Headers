/* made by EzioChiu.
 */

@protocol AVPlaybackControlsViewItem <NSObject>

@required

- (struct CGSize { double x1; double x2; })extrinsicContentSize;
- (bool)hasAlternateAppearance;
- (bool)hasFullScreenAppearance;
- (bool)isCollapsed;
- (bool)isCollapsedOrExcluded;
- (bool)isIncluded;
- (void)setCollapsed:(bool)arg1;
- (void)setExtrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHasAlternateAppearance:(bool)arg1;
- (void)setHasFullScreenAppearance:(bool)arg1;
- (void)setIncluded:(bool)arg1;

@end