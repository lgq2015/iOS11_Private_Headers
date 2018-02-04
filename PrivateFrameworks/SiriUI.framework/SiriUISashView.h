/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUISashView : UIView {
    UIView * _contentView;
    UIImageView * _imageView;
    UIView * _overlayView;
    SiriUISashItem * _sashItem;
    SiriUITextContainerView * _textContainerView;
}

@property (nonatomic, readonly) SiriUISashItem *sashItem;

+ (id)_font;
+ (struct { unsigned long long x1; double x2; double x3; struct UIEdgeInsets { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; } x4; })_textContainerStyleForSashItem:(id)arg1;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)sashItem;
- (void)setSashItem:(id)arg1 locale:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
