/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftItemView : UIView {
    NSString * _artistName;
    NSString * _categoryName;
    SKUIClientContext * _clientContext;
    SKUIItem * _item;
    UIImageView * _itemImageView;
    SKUIItemOfferButton * _itemOfferButton;
    SKUIItemState * _itemState;
    long long  _itemStyle;
    long long  _numberOfUserRatings;
    NSString * _price;
    UIImageView * _starRatingImageView;
    UILabel * _subtitleLabel1;
    UILabel * _subtitleLabel2;
    SKUIGiftTheme * _theme;
    UILabel * _titleLabel;
    float  _userRating;
    UILabel * _userRatingCountLabel;
}

@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, readonly) SKUIItemArtworkContext *artworkContext;
@property (nonatomic, copy) NSString *categoryName;
@property (nonatomic, readonly) long long giftItemStyle;
@property (nonatomic, readonly) SKUIItem *item;
@property (nonatomic, retain) UIImage *itemImage;
@property (nonatomic, readonly) SKUIItemOfferButton *itemOfferButton;
@property (nonatomic, retain) SKUIItemState *itemState;
@property (nonatomic) long long numberOfUserRatings;
@property (nonatomic, copy) NSString *price;
@property (nonatomic, copy) SKUIGiftTheme *theme;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) float userRating;

- (void).cxx_destruct;
- (void)_enumerateMetadataViewsUsingBlock:(id /* block */)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_imageEdgeInsets;
- (struct CGSize { double x1; double x2; })_imageSize;
- (void)_itemOfferConfirmAction:(id)arg1;
- (id)_newLabel;
- (double)_paddingLeft;
- (double)_paddingRight;
- (void)_reloadItemState:(bool)arg1;
- (void)_reloadSubtitles;
- (void)_reloadUserRatingViews;
- (id)_subtitleColor;
- (id)_titleColor;
- (id)_userRatingColor;
- (id)artistName;
- (id)artworkContext;
- (id)categoryName;
- (void)dealloc;
- (long long)giftItemStyle;
- (id)initWithStyle:(long long)arg1 item:(id)arg2 clientContext:(id)arg3;
- (id)item;
- (id)itemImage;
- (id)itemOfferButton;
- (id)itemState;
- (void)layoutSubviews;
- (long long)numberOfUserRatings;
- (id)price;
- (void)setArtistName:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCategoryName:(id)arg1;
- (void)setItemImage:(id)arg1;
- (void)setItemState:(id)arg1;
- (void)setItemState:(id)arg1 animated:(bool)arg2;
- (void)setNumberOfUserRatings:(long long)arg1;
- (void)setPrice:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserRating:(float)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)theme;
- (id)title;
- (float)userRating;

@end
