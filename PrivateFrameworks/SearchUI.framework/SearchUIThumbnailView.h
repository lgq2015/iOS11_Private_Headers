/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIThumbnailView : UIView {
    SFDetailedRowCardSection * _detailedCardSection;
    SearchUIImageView * _imageView;
    UIView * _overlayPlayButton;
    SFSearchResult * _result;
}

@property (retain) SFDetailedRowCardSection *detailedCardSection;
@property (retain) SearchUIImageView *imageView;
@property (retain) UIView *overlayPlayButton;
@property (retain) SFSearchResult *result;

+ (id)thumbnailForResult:(id)arg1;

- (void).cxx_destruct;
- (void)appIconImageDidChange:(id)arg1;
- (void)dealloc;
- (id)detailedCardSection;
- (id)imageView;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)invalidateIntrinsicContentSizeIfNecessary;
- (void)layoutSubviews;
- (id)overlayPlayButton;
- (bool)preventThumbnailScaling;
- (id)result;
- (void)setDetailedCardSection:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setOverlayPlayButton:(id)arg1;
- (void)setResult:(id)arg1;
- (bool)shouldVerticallyCenter;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateOverlayPlayButtonForThumbnail:(id)arg1 overlayButton:(bool)arg2;
- (void)updateWithCardSection:(id)arg1;
- (void)updateWithResult:(id)arg1;

@end
