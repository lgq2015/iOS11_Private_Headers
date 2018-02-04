/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIBorderedLabelView : UIView {
    UIImageView * _borderImageView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    UIFont * _font;
    UILabel * _ratingLabel;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_defaultEdgeInsets;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_borderSize;
- (double)baselineOffsetFromTopOfFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)initWithText:(id)arg1 font:(id)arg2 borderColor:(id)arg3;
- (void)layoutSubviews;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
