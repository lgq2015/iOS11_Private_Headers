/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface _GKCustomDrawnSpeechBalloonBackgroundView : UIView {
    unsigned char  _drawStyle;
    unsigned char  _tipDirection;
}

@property (nonatomic) unsigned char drawStyle;
@property (nonatomic) unsigned char tipDirection;

- (struct CGGradient { }*)_gradientForColor:(id)arg1;
- (unsigned char)_tipDirectionForCurrentUILayoutDirection;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned char)drawStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDrawStyle:(unsigned char)arg1;
- (void)setTipDirection:(unsigned char)arg1;
- (id)speechBalloonMaskForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)tintColorDidChange;
- (unsigned char)tipDirection;

@end
