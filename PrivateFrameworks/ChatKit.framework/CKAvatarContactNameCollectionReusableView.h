/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAvatarContactNameCollectionReusableView : UICollectionReusableView {
    long long  _style;
    UILabel * _titleLabel;
}

@property (nonatomic) long long style;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)reuseIdentifier;
+ (id)supplementaryViewKind;

- (void).cxx_destruct;
- (void)configureWithEntity:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setStyle:(long long)arg1;
- (void)setTitleLabel:(id)arg1;
- (long long)style;
- (id)titleLabel;

@end
