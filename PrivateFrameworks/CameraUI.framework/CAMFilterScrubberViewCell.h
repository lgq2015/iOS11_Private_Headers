/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFilterScrubberViewCell : UICollectionViewCell {
    UIView * __clippingView;
    UIView * __selectionDotView;
    long long  _filterType;
    UIView * _filteredView;
    double  _selectionDotCenterTopSpacing;
}

@property (nonatomic, readonly) UIView *_clippingView;
@property (nonatomic, readonly) UIView *_selectionDotView;
@property (nonatomic) long long filterType;
@property (nonatomic, readonly) UIView *filteredView;
@property (nonatomic) double selectionDotCenterTopSpacing;

+ (struct CGSize { double x1; double x2; })_defaultContentSize;
+ (double)borderInsetWidth;
+ (struct CGSize { double x1; double x2; })defaultSize;
+ (struct CGSize { double x1; double x2; })screenScaleContentSize;

- (void).cxx_destruct;
- (id)_clippingView;
- (double)_selectionDotDiameter;
- (id)_selectionDotView;
- (void)_updateSelectionDot;
- (long long)filterType;
- (id)filteredView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)selectionDotCenterTopSpacing;
- (void)setFilterType:(long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionDotCenterTopSpacing:(double)arg1;

@end