/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVTextBadge : UIView {
    double  _cornerRadius;
    NSAttributedString * _text;
    UIColor * _tintColor;
    NSString * _type;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) NSAttributedString *text;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, retain) NSString *type;

+ (id)textBadgeViewWithElement:(id)arg1 existingView:(id)arg2;

- (void).cxx_destruct;
- (double)cornerRadius;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setText:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setType:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (id)tintColor;
- (id)type;

@end
