/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXMaterialVideoPlayButton : SXVideoPlayButton {
    AVBackgroundView * _backgroundView;
}

@property (nonatomic, readonly) AVBackgroundView *backgroundView;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)updateBackgroundColor;

@end
