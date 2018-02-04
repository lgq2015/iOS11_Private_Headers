/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStandardInteractiveSegment : UIControl <SKUIInteractiveSegmenting> {
    NSAttributedString * _attributedTitle;
    UIImage * _backgroundImage;
    UIView * _borderAndBackgroundContainerView;
    UIImage * _borderImage;
    UIImageView * _borderImageView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentEdgeInsets;
    bool  _hasDirtyTitleLabelSize;
    bool  _hasSetRelativeSelectionProgress;
    bool  _hasValidCorneredImages;
    long long  _highlightTransactionCount;
    UIImageView * _highlightedBackgroundImageView;
    CAMediaTimingFunction * _inverseProgressTimingFunction;
    CAMediaTimingFunction * _progressTimingFunction;
    double  _relativeSelectionProgress;
    long long  _segmentPosition;
    UIImageView * _selectedBackgroundImageView;
    UILabel * _titleLabel;
    NSAttributedString * _titleLabelAttributedString;
    struct CGSize { 
        double width; 
        double height; 
    }  _titleLabelSize;
}

@property (nonatomic, copy) NSAttributedString *attributedTitle;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double relativeSelectionProgress;
@property (nonatomic) long long segmentPosition;
@property (readonly) Class superclass;

+ (double)defaultHeight;

- (void).cxx_destruct;
- (void)_applySelectionProgress;
- (id)_backgroundImage;
- (id)_borderImage;
- (unsigned long long)_cornersForSegmentPosition:(long long)arg1;
- (id)_createCorneredImageWithScale:(double)arg1 forBorder:(bool)arg2;
- (id)_inverseProgressTimingFunction;
- (double)_normalizedSelectionProgressForRelativeSelectionProgress:(double)arg1;
- (id)_progressTimingFunction;
- (void)_reloadCorneredImages;
- (void)_setNeedsReloadCorneredImages;
- (struct CGSize { double x1; double x2; })_titleLabelSize;
- (void)_updateBorderAndBackgroundContainerViewTinting;
- (id)attributedTitle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)relativeSelectionProgress;
- (long long)segmentPosition;
- (void)setAttributedTitle:(id)arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setRelativeSelectionProgress:(double)arg1;
- (void)setSegmentPosition:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;

@end
