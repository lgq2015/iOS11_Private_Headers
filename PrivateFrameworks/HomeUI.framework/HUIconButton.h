/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUIconButton : UIControl {
    HUIconView * _iconView;
}

@property (nonatomic, readonly) <HFIconDescriptor> *iconDescriptor;
@property (nonatomic, retain) HUIconView *iconView;

- (void).cxx_destruct;
- (id)iconDescriptor;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setIconView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)tintColorDidChange;
- (void)updateWithIconDescriptor:(id)arg1 animated:(bool)arg2;

@end
