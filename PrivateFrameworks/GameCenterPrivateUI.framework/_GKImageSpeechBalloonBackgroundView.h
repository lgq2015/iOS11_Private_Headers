/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface _GKImageSpeechBalloonBackgroundView : UIImageView {
    UIImage * _templateImage;
    unsigned char  _tipDirection;
}

@property (nonatomic, retain) UIImage *templateImage;
@property (nonatomic) unsigned char tipDirection;

- (unsigned char)_tipDirectionForCurrentUILayoutDirection;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTemplateImage:(id)arg1;
- (void)setTipDirection:(unsigned char)arg1;
- (id)templateImage;
- (void)tintColorDidChange;
- (unsigned char)tipDirection;
- (void)updateImage;
- (void)updateTransform;

@end