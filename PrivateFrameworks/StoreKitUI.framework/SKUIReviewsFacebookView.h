/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReviewsFacebookView : UIView {
    SKUIClientContext * _clientContext;
    SKUIColorScheme * _colorScheme;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    NSArray * _friendNames;
    UILabel * _friendsLabel;
    UIButton * _likeButton;
    UIImageView * _logoImageView;
    UIView * _separatorView;
    UILabel * _titleLabel;
    bool  _userLiked;
}

@property (nonatomic, retain) SKUIColorScheme *colorScheme;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, copy) NSArray *friendNames;
@property (nonatomic, readonly) UIControl *likeToggleButton;
@property (getter=isUserLiked, nonatomic) bool userLiked;

- (void).cxx_destruct;
- (id)_composedStringForNames:(id)arg1 userLiked:(bool)arg2;
- (void)_reloadFriendNamesLabel;
- (void)_reloadLikeButtonState;
- (id)colorScheme;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)friendNames;
- (id)initWithClientContext:(id)arg1;
- (bool)isUserLiked;
- (void)layoutSubviews;
- (id)likeToggleButton;
- (void)setBackgroundColor:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFriendNames:(id)arg1;
- (void)setUserLiked:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
