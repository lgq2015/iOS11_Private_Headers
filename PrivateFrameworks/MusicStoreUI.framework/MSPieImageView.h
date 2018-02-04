/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

@interface MSPieImageView : UIView {
    UIImage * _backgroundImage;
    UIBezierPath * _clipPath;
    UIImage * _foregroundImage;
    double  _pieFraction;
    double  _pieRadius;
}

@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic, retain) UIImage *foregroundImage;
@property (nonatomic) double pieFraction;
@property (nonatomic) double pieRadius;

- (void)_reloadClipPath;
- (id)backgroundImage;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)foregroundImage;
- (double)pieFraction;
- (double)pieRadius;
- (void)setBackgroundImage:(id)arg1;
- (void)setForegroundImage:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPieFraction:(double)arg1;
- (void)setPieRadius:(double)arg1;
- (void)sizeToFit;

@end
