/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKHorizontalFlowLayout : UICollectionViewFlowLayout {
    bool  _snapsToItemBoundaries;
    bool  _snapsToItemCenters;
}

@property (nonatomic) double leadingInset;
@property (nonatomic) bool snapsToItemBoundaries;
@property (nonatomic) bool snapsToItemCenters;
@property (nonatomic) double trailingInset;

+ (double)snapToBoundariesDecelerationRate;

- (id)init;
- (double)leadingInset;
- (void)setLeadingInset:(double)arg1;
- (void)setSnapsToItemBoundaries:(bool)arg1;
- (void)setSnapsToItemCenters:(bool)arg1;
- (void)setTrailingInset:(double)arg1;
- (bool)snapsToItemBoundaries;
- (bool)snapsToItemCenters;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1 withScrollingVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (double)trailingInset;

@end
