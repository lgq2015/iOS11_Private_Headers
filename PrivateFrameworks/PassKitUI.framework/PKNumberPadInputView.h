/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKNumberPadInputView : UIInputView {
    bool  _showsDecimalPointButton;
    UIStackView * _verticalStackView;
}

@property (nonatomic) bool showsDecimalPointButton;

- (void).cxx_destruct;
- (void)_numericKeyPressed:(id)arg1;
- (void)_performDelete;
- (void)_performInsertion:(id)arg1;
- (void)_reloadSubviews;
- (id)initWithDefaultFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setShowsDecimalPointButton:(bool)arg1;
- (bool)showsDecimalPointButton;

@end
