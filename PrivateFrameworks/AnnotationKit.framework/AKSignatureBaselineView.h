/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKSignatureBaselineView : UIView {
    double  _baselinePercent;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _lastSafeAreaInsets;
}

@property (nonatomic) double baselinePercent;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } lastSafeAreaInsets;

- (void)_commonInit;
- (void)_drawBaselineInContext:(struct CGContext { }*)arg1;
- (bool)_isRTL;
- (double)baselinePercent;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })lastSafeAreaInsets;
- (void)layoutSubviews;
- (double)scaleFactor;
- (void)setBaselinePercent:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLastSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
