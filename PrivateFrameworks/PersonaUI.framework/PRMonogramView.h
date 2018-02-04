/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
 */

@interface PRMonogramView : UIView <UITextFieldDelegate> {
    bool  _allowsEditing;
    bool  _bordered;
    CAGradientLayer * _circleGradientLayer;
    bool  _circular;
    bool  _highlighted;
    PRMonogram * _monogram;
    bool  _selected;
    UITextField * _textField;
}

@property (nonatomic) bool allowsEditing;
@property (nonatomic) bool bordered;
@property (getter=isCircular, nonatomic) bool circular;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlighted;
@property (nonatomic, retain) PRMonogram *monogram;
@property (getter=isSelected, nonatomic) bool selected;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateCornerRadii;
- (void)_updateTextLabel;
- (bool)allowsEditing;
- (bool)bordered;
- (void)dealloc;
- (void)didMoveToWindow;
- (bool)highlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isCircular;
- (bool)isSelected;
- (void)layoutSubviews;
- (id)monogram;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setAllowsEditing:(bool)arg1;
- (void)setBordered:(bool)arg1;
- (void)setCircular:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMonogram:(id)arg1;
- (void)setSelected:(bool)arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldResignFirstResponder;
- (bool)textFieldShouldReturn:(id)arg1;

@end
