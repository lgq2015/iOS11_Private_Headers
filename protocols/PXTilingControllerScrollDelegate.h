/* made by EzioChiu.
 */

@protocol PXTilingControllerScrollDelegate <NSObject>

@optional

- (struct CGPoint { double x1; double x2; })tilingController:(PXTilingController *)arg1 initialVisibleOriginForLayout:(PXTilingLayout *)arg2;
- (PXTilingScrollInfo *)tilingController:(PXTilingController *)arg1 scrollInfoForLayout:(PXTilingLayout *)arg2;
- (struct CGPoint { double x1; double x2; })tilingController:(PXTilingController *)arg1 targetVisibleOriginForLayout:(PXTilingLayout *)arg2 proposedVisibleOrigin:(struct CGPoint { double x1; double x2; })arg3;

@end
