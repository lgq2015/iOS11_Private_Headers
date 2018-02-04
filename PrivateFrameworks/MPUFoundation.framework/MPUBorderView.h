/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUBorderView : UIView {
    MPUBorderConfiguration * _borderConfiguration;
    bool  _hidesWhenFullyTransparent;
}

@property (nonatomic, copy) MPUBorderConfiguration *borderConfiguration;
@property (nonatomic) bool hidesWhenFullyTransparent;
@property (nonatomic, readonly) double requiredOutsetForDropShadow;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } resizableImageCapInsets;

+ (double)requiredOutsetForDropShadow;

- (void).cxx_destruct;
- (id)borderConfiguration;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)hidesWhenFullyTransparent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)requiredOutsetForDropShadow;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })resizableImageCapInsets;
- (void)setBorderConfiguration:(id)arg1;
- (void)setHidesWhenFullyTransparent:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
