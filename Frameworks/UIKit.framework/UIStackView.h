/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStackView : UIView {
    _UIAlignedLayoutArrangement * _alignmentArrangement;
    bool  _didRequestTallestBaselineViewForFirst;
    bool  _didRequestTallestBaselineViewForLast;
    _UIOrderedLayoutArrangement * _distributionArrangement;
    bool  _layoutMarginsRelativeArrangement;
    NSMutableArray * _mutableLayoutArrangements;
    bool  _viewForFirstBaselineLayoutDidChange;
    bool  _viewForLastBaselineLayoutDidChange;
}

@property (nonatomic) long long _mk_axis;
@property (nonatomic) long long alignment;
@property (nonatomic, readonly, copy) NSArray *arrangedSubviews;
@property (nonatomic) long long axis;
@property (getter=isBaselineRelativeArrangement, nonatomic) bool baselineRelativeArrangement;
@property (nonatomic) long long distribution;
@property (getter=isLayoutMarginsRelativeArrangement, nonatomic) bool layoutMarginsRelativeArrangement;
@property (nonatomic) double spacing;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_baselineViewForFirst:(bool)arg1;
- (double)_calculatedIntrinsicHeight;
- (void)_commonStackViewInitializationWithArrangedSubviews:(id)arg1;
- (bool)_hasLayoutArrangements;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (id)_mutableLayoutArrangements;
- (double)_proportionalFillLengthForOrderedArrangement:(id)arg1 relevantParentAxis:(long long)arg2;
- (bool)_recordBaselineLoweringInfo;
- (bool)_shouldRequestTallestBaselineViewForFirst:(bool)arg1;
- (struct CGSize { double x1; double x2; })_systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 hasIntentionallyCollapsedHeight:(bool*)arg4;
- (void)_vendedBaselineViewDidMoveForFirst:(bool)arg1;
- (void)_vendedBaselineViewParametersDidChange;
- (void)addArrangedSubview:(id)arg1;
- (long long)alignment;
- (id)arrangedSubviews;
- (long long)axis;
- (double)customSpacingAfterView:(id)arg1;
- (long long)distribution;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isBaselineRelativeArrangement;
- (bool)isLayoutMarginsRelativeArrangement;
- (void)removeArrangedSubview:(id)arg1;
- (void)setAlignment:(long long)arg1;
- (void)setArrangedSubviews:(id)arg1;
- (void)setAxis:(long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBaselineRelativeArrangement:(bool)arg1;
- (void)setCustomSpacing:(double)arg1 afterView:(id)arg2;
- (void)setDistribution:(long long)arg1;
- (void)setLayoutMarginsRelativeArrangement:(bool)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setSpacing:(double)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(bool)arg1;
- (double)spacing;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (long long)_mk_axis;
- (void)set_mk_axis:(long long)arg1;

@end
