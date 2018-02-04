/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKFlatInkColorButton : UIButton <PKInkColorButton> {
    UIColor * _color;
    CAShapeLayer * _fillShapeLayer;
    bool  _isCompact;
    bool  _isUsedOnDarkBackground;
    CAShapeLayer * _strokeShapeLayer;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) CAShapeLayer *fillShapeLayer;
@property (nonatomic) bool isCompact;
@property (nonatomic) bool isUsedOnDarkBackground;
@property (nonatomic, retain) CAShapeLayer *strokeShapeLayer;

+ (id)buttonWithColor:(id)arg1 isCompact:(bool)arg2;
+ (bool)isColorBlack:(id)arg1;
+ (bool)isColorWhite:(id)arg1;
+ (id)pathForFillShapeLayerWithSwatchRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selected:(bool)arg2;
+ (id)pathForStrokeShapeLayerWithSwatchRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 selected:(bool)arg2 color:(id)arg3 isUsedOnDarkBackground:(bool)arg4;
+ (id)strokeColorForColor:(id)arg1 isUsedOnDarkBackground:(bool)arg2;

- (void).cxx_destruct;
- (id)color;
- (id)fillShapeLayer;
- (id)initWithColor:(id)arg1 isCompact:(bool)arg2;
- (bool)isCompact;
- (bool)isUsedOnDarkBackground;
- (void)layoutSubviews;
- (void)setColor:(id)arg1;
- (void)setFillShapeLayer:(id)arg1;
- (void)setIsCompact:(bool)arg1;
- (void)setIsUsedOnDarkBackground:(bool)arg1;
- (void)setStrokeShapeLayer:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)strokeShapeLayer;

@end
