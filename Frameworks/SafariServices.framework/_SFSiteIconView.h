/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFSiteIconView : UIImageView {
    WebBookmark * _bookmark;
    UIImageView * _glyphView;
    UIImage * _leadingImage;
    UILabel * _monogramLabel;
    long long  _state;
    id  _touchIconRequestToken;
}

@property (nonatomic, retain) WebBookmark *bookmark;
@property (nonatomic, retain) UIImage *leadingImage;

- (void).cxx_destruct;
- (void)_cancelTouchIconRequest;
- (void)_clearGlyph;
- (long long)_inferredIconSize;
- (void)_setGlyph:(id)arg1 withBackgroundColor:(id)arg2;
- (void)_setImage:(id)arg1;
- (void)_setMonogramWithString:(id)arg1 backgroundColor:(id)arg2;
- (void)_setSiteIcon:(id)arg1;
- (void)_setState:(long long)arg1;
- (id)_tintedFolderImage;
- (void)_updateMonogramLabelSizeAndFont;
- (void)_updateSiteIconViewWithTouchIconResponse:(id)arg1;
- (id)bookmark;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)leadingImage;
- (void)setBookmark:(id)arg1;
- (void)setLeadingImage:(id)arg1;
- (void)updateBookmarkData;

@end
