/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPhotoPickerBadgeCell : UICollectionReusableView {
    UIImageView * _checkmarkImageView;
    bool  _selected;
}

@property (nonatomic, retain) UIImageView *checkmarkImageView;
@property (getter=isSelected, nonatomic) bool selected;

- (void).cxx_destruct;
- (id)checkmarkImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSelected;
- (void)setCheckmarkImageView:(id)arg1;
- (void)setSelected:(bool)arg1;

@end