/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUITextContainerView : UIView {
    UIView * _containerView;
    SiriUIContentLabel * _label;
    struct { 
        unsigned long long numberOfLines; 
        double distanceFromTopToBaseline; 
        double distanceFromBaselineToBottom; 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } edgeInsets; 
    }  _textContainerStyle;
}

@property (nonatomic, retain) UIFont *font;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) struct { unsigned long long x1; double x2; double x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; } textContainerStyle;

+ (double)_distanceFromBaselineToBottomWithFont:(id)arg1 textContainerStyle:(struct { unsigned long long x1; double x2; double x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; })arg2;
+ (double)_distanceFromTopToBaselineWithFont:(id)arg1 textContainerStyle:(struct { unsigned long long x1; double x2; double x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; })arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_textBoundingRectWithSize:(struct CGSize { double x1; double x2; })arg1 text:(id)arg2 font:(id)arg3 textContainerStyle:(struct { unsigned long long x1; double x2; double x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; })arg4;
+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 text:(id)arg2 font:(id)arg3 textContainerStyle:(struct { unsigned long long x1; double x2; double x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; })arg4;

- (void).cxx_destruct;
- (id)font;
- (id)initWithText:(id)arg1;
- (id)initWithText:(id)arg1 visualEffect:(id)arg2;
- (void)layoutSubviews;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextContainerStyle:(struct { unsigned long long x1; double x2; double x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (struct { unsigned long long x1; double x2; double x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; })textContainerStyle;

@end
