/* made by EzioChiu.
 */

@protocol PXSwipeSelectionManagerDelegate <NSObject>

@required

- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(PXSwipeSelectionManager *)arg1 itemIndexPathAtLocation:(struct CGPoint { double x1; double x2; })arg2;

@optional

- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(PXSwipeSelectionManager *)arg1 itemIndexPathClosestAboveLocation:(struct CGPoint { double x1; double x2; })arg2;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })swipeSelectionManager:(PXSwipeSelectionManager *)arg1 itemIndexPathClosestLeadingLocation:(struct CGPoint { double x1; double x2; })arg2;

@end
