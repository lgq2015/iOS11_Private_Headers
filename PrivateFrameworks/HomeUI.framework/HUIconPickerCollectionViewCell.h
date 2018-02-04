/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUIconPickerCollectionViewCell : UICollectionViewCell {
    HUIconButton * _iconButton;
}

@property (nonatomic, retain) HUIconButton *iconButton;
@property (nonatomic, retain) <HFIconDescriptor> *iconDescriptor;

- (void).cxx_destruct;
- (id)iconButton;
- (id)iconDescriptor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setIconButton:(id)arg1;
- (void)setIconDescriptor:(id)arg1;
- (void)setSelected:(bool)arg1;

@end
