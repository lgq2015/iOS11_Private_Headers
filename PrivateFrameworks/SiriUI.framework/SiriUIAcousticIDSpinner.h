/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIAcousticIDSpinner : UIView {
    <SiriUIAcousticIDSpinnerDelegate> * _delegate;
    UIImageView * _musicNoteView;
    UIImageView * _spinnerView;
    UIVisualEffectView * _vibrancyView;
}

@property (nonatomic) <SiriUIAcousticIDSpinnerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_imageForSpinner;
- (id)_spinningAnimation;
- (void)animateIn;
- (void)animateOut;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isShowing;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
