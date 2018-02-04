/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVListTemplateView : UIView {
    bool  _backdropEnabled;
    UIVisualEffectView * _backdropView;
    UIView * _bannerView;
    UIView * _bgImageView;
    double  _bgVisualEffectOffset;
    UIVisualEffectView * _bgVisualEffectView;
    bool  _floatingBanner;
    UIView * _listView;
    UIFocusContainerGuide * _previewFocusGuide;
    UIView * _previewView;
}

@property (getter=isBackdropEnabled, nonatomic) bool backdropEnabled;
@property (nonatomic, retain) UIView *bannerView;
@property (nonatomic, retain) UIView *bgImageView;
@property (nonatomic) bool floatingBanner;
@property (nonatomic, retain) UIView *listView;
@property (nonatomic, retain) UIView *previewView;

- (void).cxx_destruct;
- (void)adjustScrollForListView:(id)arg1;
- (id)bannerView;
- (id)bgImageView;
- (bool)floatingBanner;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBackdropEnabled;
- (void)layoutSubviews;
- (id)listView;
- (id)preferredFocusEnvironments;
- (id)previewView;
- (void)setBackdropEnabled:(bool)arg1;
- (void)setBannerView:(id)arg1;
- (void)setBgImageView:(id)arg1;
- (void)setFloatingBanner:(bool)arg1;
- (void)setListView:(id)arg1;
- (void)setOverlayBlurOffset:(double)arg1;
- (void)setPreviewView:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;

@end
