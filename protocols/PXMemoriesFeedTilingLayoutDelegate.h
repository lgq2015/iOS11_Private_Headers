/* made by EzioChiu.
 */

@protocol PXMemoriesFeedTilingLayoutDelegate <NSObject>

@optional

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })memoriesFeedTilingLayout:(PXMemoriesFeedTilingLayout *)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2 forAspectRatio:(double)arg3;
- (NSString *)memoriesFeedTilingLayout:(PXMemoriesFeedTilingLayout *)arg1 titleFontNameForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;

@end
