/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFPasscodeView : BFFTitleView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentKeyboardFrame;
    BFFPasscodeInputView * _passcodeInputView;
    UIViewController * _passcodeViewController;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } currentKeyboardFrame;
@property (nonatomic) UIViewController *passcodeViewController;

- (void).cxx_destruct;
- (void)animateTransitionToPasscodeInput:(id)arg1 animation:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentKeyboardFrame;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)layoutSubviews;
- (id)passcodeInputView;
- (id)passcodeViewController;
- (void)setCurrentKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPasscodeViewController:(id)arg1;
- (void)transitionToPasscodeInput:(id)arg1 delegate:(id)arg2;

@end
