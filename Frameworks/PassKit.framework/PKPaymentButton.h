/* made by EzioChiu
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentButton : UIButton {
    struct CGSize { 
        double width; 
        double height; 
    }  _boundsSize;
    UILabel * _buyLabel;
    UIView * _container;
    double  _fontRatio;
    CAFilter * _highlightFilter;
    bool  _highlighted;
    CAShapeLayer * _layer;
    PKShapeView * _maskView;
    long long  _style;
    long long  _type;
}

+ (id)buttonWithType:(long long)arg1 style:(long long)arg2;
+ (Class)layerClass;
+ (id)titleForType:(long long)arg1;

- (void).cxx_destruct;
- (void)_createHighlightFilterIfNecessary;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)applyAccessibilityValues;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithPaymentButtonType:(long long)arg1 paymentButtonStyle:(long long)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setHighlighted:(bool)arg1;

@end
