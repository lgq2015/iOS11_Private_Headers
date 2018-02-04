/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SULoadingView : UIView {
    UIColor * _activityIndicatorColor;
    long long  _activityIndicatorStyle;
    UILabel * _label;
    UIActivityIndicatorView * _progressIndicator;
    unsigned long long  _style;
    UIColor * _textColor;
    UIColor * _textShadowColor;
}

@property (nonatomic, retain) UIColor *activityIndicatorColor;
@property (nonatomic) long long activityIndicatorStyle;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) UIColor *textShadowColor;

- (void)_setupSubviews;
- (id)activityIndicatorColor;
- (long long)activityIndicatorStyle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)newProgressIndicator;
- (id)newTextLabel;
- (void)setActivityIndicatorColor:(id)arg1;
- (void)setActivityIndicatorStyle:(long long)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextShadowColor:(id)arg1;
- (void)sizeToFit;
- (id)textColor;
- (id)textShadowColor;

@end
