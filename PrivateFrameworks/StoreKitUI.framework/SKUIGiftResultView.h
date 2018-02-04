/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftResultView : UIView {
    UIButton * _giftAgainButton;
    UIImageView * _imageView;
    SKUIGiftItemView * _itemView;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UIButton *giftAgainButton;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) SKUIGiftItemView *itemView;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)giftAgainButton;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)itemView;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)setItemView:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
