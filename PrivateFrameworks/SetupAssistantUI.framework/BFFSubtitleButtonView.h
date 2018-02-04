/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFSubtitleButtonView : BFFTitleView {
    UIButton * _doneButton;
    UILabel * _subtitleLabel;
}

@property (nonatomic, retain) UIButton *doneButton;

- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)doneButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setButtonText:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setSubtitle:(id)arg1;

@end
