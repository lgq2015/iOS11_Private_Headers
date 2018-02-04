/* made by EzioChiu.
 */

@protocol PXRelatedTilingLayoutDelegate <NSObject>

@optional

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })relatedTilingLayout:(PXRelatedTilingLayout *)arg1 contentsRectForItemAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2 forAspectRatio:(double)arg3;
- (bool)relatedTilingLayout:(PXRelatedTilingLayout *)arg1 isPlaceholderEntryAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;
- (NSString *)relatedTilingLayout:(PXRelatedTilingLayout *)arg1 titleFontNameForEntryAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg2;

@end
