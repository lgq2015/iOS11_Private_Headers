/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVStackingPosterView : UIView <TVAuxiliaryViewSelecting> {
    _TVAnimatedLabel * _animatedLabel;
    double  _bottomAnchorConstant;
    NSLayoutConstraint * _bottomAnchorConstraint;
    double  _bottomImageConstant;
    NSLayoutConstraint * _bottomImageConstraint;
    struct TVCellMetrics { 
        struct CGSize { 
            double width; 
            double height; 
        } cellSize; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } cellPadding; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } cellInset; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } cellInsetAlt; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } cellMargin; 
    }  _cellMetrics;
    NSArray * _components;
    bool  _configuresForCollectionViewCell;
    NSArray * _filteredComponents;
    bool  _highlighted;
    NSArray * _labelWidthConstraints;
    double  _labelWidthExpansionAmount;
    UIView * _mainImageComponent;
    NSArray * _marqueeLabels;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxBoundsSize;
    UIView * _overlayView;
    bool  _requiresReconfiguration;
    double  _topAnchorConstant;
    NSLayoutConstraint * _topAnchorConstraint;
    double  _topImageConstant;
    NSLayoutConstraint * _topImageConstraint;
    NSArray * _visibleLabelWidths;
}

@property (nonatomic, retain) _TVAnimatedLabel *animatedLabel;
@property (nonatomic) struct TVCellMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; struct UIEdgeInsets { double x_5_1_1; double x_5_1_2; double x_5_1_3; double x_5_1_4; } x5; } cellMetrics;
@property (nonatomic, copy) NSArray *components;
@property (nonatomic) bool configuresForCollectionViewCell;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *filteredComponents;
@property (nonatomic) struct CGPoint { double x1; double x2; } focusDirection;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) UIView *mainImageComponent;
@property (nonatomic, copy) NSArray *marqueeLabels;
@property (nonatomic) struct CGSize { double x1; double x2; } maxBoundsSize;
@property (nonatomic, retain) UIView *overlayView;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *visibleLabelWidths;

- (void).cxx_destruct;
- (struct TVCellMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; struct UIEdgeInsets { double x_5_1_1; double x_5_1_2; double x_5_1_3; double x_5_1_4; } x5; })_cellMetricsForMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_commonInit;
- (void)_configureSubviews;
- (double)_labelWidthForWidth:(double)arg1 component:(id)arg2 expansionAmount:(double)arg3;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)_resetSubviews;
- (void)_updateComponentConstraints;
- (void)_updateFocusSizeIncrease;
- (void)_updateShadowForLabel:(id)arg1 inFocus:(bool)arg2;
- (id)animatedLabel;
- (struct TVCellMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; struct UIEdgeInsets { double x_5_1_1; double x_5_1_2; double x_5_1_3; double x_5_1_4; } x5; })cellMetrics;
- (id)components;
- (bool)configuresForCollectionViewCell;
- (id)filteredComponents;
- (struct CGPoint { double x1; double x2; })focusDirection;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (id)mainImageComponent;
- (id)marqueeLabels;
- (struct CGSize { double x1; double x2; })maxBoundsSize;
- (id)overlayView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })selectionMarginsForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setAnimatedLabel:(id)arg1;
- (void)setCellMetrics:(struct TVCellMetrics { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; struct UIEdgeInsets { double x_5_1_1; double x_5_1_2; double x_5_1_3; double x_5_1_4; } x5; })arg1;
- (void)setComponents:(id)arg1;
- (void)setConfiguresForCollectionViewCell:(bool)arg1;
- (void)setFilteredComponents:(id)arg1;
- (void)setFocusDirection:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFocusDirection:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setMainImageComponent:(id)arg1;
- (void)setMarqueeLabels:(id)arg1;
- (void)setMaxBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNeedsUpdateComponentLayout;
- (void)setOverlayView:(id)arg1;
- (void)setPressed:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2 focusUpdateContext:(id)arg3 withAnimationCoordinator:(id)arg4;
- (void)setSelected:(bool)arg1 animated:(bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)setVisibleLabelWidths:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tv_alignmentInsetsForExpectedWidth:(double)arg1;
- (id)visibleLabelWidths;

@end
