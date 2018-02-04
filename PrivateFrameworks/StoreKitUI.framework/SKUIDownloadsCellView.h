/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIDownloadsCellView : UIView {
    NSAttributedString * _attributedTitle;
    UIButton * _button;
    long long  _buttonType;
    UIImageView * _imageView;
    bool  _isPad;
    UISlider * _progressSlider;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSAttributedString *attributedTitle;
@property (nonatomic, readonly) UIButton *button;
@property (nonatomic) long long buttonType;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool isPad;
@property (nonatomic) double progress;
@property (nonatomic, retain) NSString *subtitle;

- (void).cxx_destruct;
- (id)attributedTitle;
- (id)button;
- (long long)buttonType;
- (id)image;
- (id)init;
- (bool)isPad;
- (void)layoutSubviews;
- (double)progress;
- (void)setAttributedTitle:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setButtonType:(long long)arg1;
- (void)setImage:(id)arg1;
- (void)setIsPad:(bool)arg1;
- (void)setProgress:(double)arg1;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;

@end
