/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIMovieCardSectionBuyButtonView : SearchUIWidthLimitedStackView {
    SKUIItemOfferButton * _button;
    SearchUIMovieCardSectionView * _cardSectionView;
    SFPunchout * _punchout;
    SearchUIVibrantLabel * _subtitleLabel;
}

@property (retain) SKUIItemOfferButton *button;
@property SearchUIMovieCardSectionView *cardSectionView;
@property (retain) SFPunchout *punchout;
@property (retain) SearchUIVibrantLabel *subtitleLabel;

- (void).cxx_destruct;
- (id)button;
- (void)buttonPressed;
- (id)cardSectionView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 punchout:(id)arg3 cardSectionView:(id)arg4;
- (id)punchout;
- (void)setButton:(id)arg1;
- (void)setCardSectionView:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (id)subtitleLabel;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;

@end
