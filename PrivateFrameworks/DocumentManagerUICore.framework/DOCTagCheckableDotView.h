/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCTagCheckableDotView : UIView {
    CAShapeLayer * _borderLayer;
    bool  _checked;
    DOCTagIconView * _tagDotView;
}

@property (nonatomic, readonly) CAShapeLayer *borderLayer;
@property (nonatomic) bool checked;
@property (nonatomic) long long tagColor;
@property (nonatomic, readonly) DOCTagIconView *tagDotView;

- (void).cxx_destruct;
- (id)borderLayer;
- (bool)checked;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)setChecked:(bool)arg1;
- (void)setTagColor:(long long)arg1;
- (long long)tagColor;
- (id)tagDotView;
- (void)updateLayoutOfLayers;

@end
