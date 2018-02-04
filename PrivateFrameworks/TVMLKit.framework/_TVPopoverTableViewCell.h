/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVPopoverTableViewCell : UITableViewCell {
    IKViewElement * _cardElement;
    UIView * _cardView;
    UIView * _dimmingView;
    IKImageElement * _imageElement;
    bool  _imageLoaded;
    double  _preferredHeight;
    IKTextElement * _textElement;
    _TVImageView * _tvImageView;
    _TVLabel * _tvLabel;
}

@property (nonatomic, retain) IKViewElement *cardElement;
@property (nonatomic, retain) UIView *cardView;
@property (nonatomic, retain) UIView *dimmingView;
@property (nonatomic, retain) IKImageElement *imageElement;
@property (getter=isImageLoaded, nonatomic) bool imageLoaded;
@property (nonatomic) double preferredHeight;
@property (nonatomic, retain) IKTextElement *textElement;
@property (nonatomic, retain) _TVImageView *tvImageView;
@property (nonatomic, retain) _TVLabel *tvLabel;

- (void).cxx_destruct;
- (id)cardElement;
- (id)cardView;
- (id)dimmingView;
- (id)imageElement;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isImageLoaded;
- (void)layoutSubviews;
- (double)preferredHeight;
- (void)prepareForReuse;
- (void)setCardElement:(id)arg1;
- (void)setCardView:(id)arg1;
- (void)setDimmingView:(id)arg1;
- (void)setImageElement:(id)arg1;
- (void)setImageLoaded:(bool)arg1;
- (void)setPreferredHeight:(double)arg1;
- (void)setTextElement:(id)arg1;
- (void)setTvImageView:(id)arg1;
- (void)setTvLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textElement;
- (id)tvImageView;
- (id)tvLabel;

@end
