/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLImageView : UIImageView {
    double  _accessoryViewsAlpha;
    float  _aspectRatio;
    UIView * _borderView;
    unsigned int  _borderViewIsVisible;
    UIView * _bottomRightAccessoryView;
    unsigned int  _drawsBorder;
    bool  _edgeAntialiasingEnabled;
    long long  _fullSizeImageOrientation;
    PLTiledLayer * _fullSizeImageTiledLayer;
    double  _lastBorderAlphaTime;
    double  _lastShadowAlphaTime;
    UIView * _leftAccessoryView;
    struct CGSize { 
        double width; 
        double height; 
    }  _leftAccessoryViewOffset;
    NSString * _name;
    double  _placeholderScale;
    PLPhotoTilePlaceholderView * _placeholderView;
    unsigned int  _shadowEnabled;
    bool  _showsPlaceholder;
    unsigned int  _suppressShadowDrawing;
    UILabel * _textBadge;
    double  _transitionProgress;
    PLVideoView * _videoView;
}

@property (nonatomic) double accessoryViewsAlpha;
@property (nonatomic) float borderAndAccessoriesAlpha;
@property (getter=isBorderAndAccessoriesVisible, nonatomic) bool borderAndAccessoriesVisible;
@property (nonatomic, retain) UIView *bottomRightAccessoryView;
@property (getter=isDimmed, nonatomic) bool dimmed;
@property (nonatomic) bool drawsBorder;
@property (nonatomic, retain) UIView *leftAccessoryView;
@property (nonatomic) struct CGSize { double x1; double x2; } leftAccessoryViewOffset;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) double placeholderScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } placeholderSize;
@property (getter=isShadowEnabled, nonatomic) bool shadowEnabled;
@property (nonatomic, readonly) bool showsPlaceholder;
@property (nonatomic) double transitionProgress;
@property (nonatomic, retain) PLVideoView *videoView;

+ (struct CGSize { double x1; double x2; })badgeOffset;
+ (void)initialize;
+ (bool)shouldDrawShadows;
+ (id)textBadgeForString:(id)arg1 photoSize:(struct CGSize { double x1; double x2; })arg2;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_bottomRightAccessoryViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_leftAccessoryViewFrame;
- (void)_setShadowEnabled:(bool)arg1 force:(bool)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformForFullSizeImageTiledLayer;
- (void)_updatePlaceholderAlpha;
- (void)_updatePlaceholderLayout;
- (void)_updateShadowPath;
- (double)accessoryViewsAlpha;
- (float)borderAndAccessoriesAlpha;
- (id)bottomRightAccessoryView;
- (void)dealloc;
- (bool)drawsBorder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBorderAndAccessoriesVisible;
- (bool)isDimmed;
- (bool)isShadowEnabled;
- (void)layoutSubviews;
- (id)leftAccessoryView;
- (struct CGSize { double x1; double x2; })leftAccessoryViewOffset;
- (id)name;
- (void)parentDidLayout;
- (double)placeholderScale;
- (struct CGSize { double x1; double x2; })placeholderSize;
- (void)renderSnapshotInContext:(struct CGContext { }*)arg1;
- (void)setAccessoryViewsAlpha:(double)arg1;
- (void)setBorderAndAccessoriesAlpha:(float)arg1;
- (void)setBorderAndAccessoriesAlpha:(float)arg1 forced:(bool)arg2;
- (void)setBorderAndAccessoriesVisible:(bool)arg1;
- (void)setBottomRightAccessoryView:(id)arg1;
- (void)setBottomRightAccessoryView:(id)arg1 animated:(bool)arg2;
- (void)setDimmed:(bool)arg1;
- (void)setDrawsBorder:(bool)arg1;
- (void)setEdgeAntialiasingEnabled:(bool)arg1;
- (void)setFullSizeImageJPEGData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 orientation:(long long)arg3;
- (void)setImage:(id)arg1;
- (void)setLeftAccessoryView:(id)arg1;
- (void)setLeftAccessoryView:(id)arg1 animated:(bool)arg2;
- (void)setLeftAccessoryViewOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setName:(id)arg1;
- (void)setPlaceholderScale:(double)arg1;
- (void)setShadowEnabled:(bool)arg1;
- (void)setShowsPlaceholder:(bool)arg1;
- (void)setTextBadgeString:(id)arg1;
- (void)setTransitionProgress:(double)arg1;
- (void)setVideoView:(id)arg1;
- (bool)showsPlaceholder;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 allowRounding:(bool)arg2;
- (id)textBadgeString;
- (double)transitionProgress;
- (void)updateFullSizeImageVisibleArea;
- (id)videoView;

@end
