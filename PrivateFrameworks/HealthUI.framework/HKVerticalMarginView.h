/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKVerticalMarginView : UIView {
    double  _currentKeyboardHeight;
    <HKVerticalMarginDelegate> * _marginDelegate;
    unsigned long long  _offsetOptions;
}

@property (nonatomic) double currentKeyboardHeight;
@property (nonatomic, retain) <HKVerticalMarginDelegate> *marginDelegate;
@property (nonatomic) unsigned long long offsetOptions;

- (void).cxx_destruct;
- (double)_bottomOffsetWithController:(id)arg1;
- (double)_findTabBarHeightWithController:(id)arg1;
- (id)_findViewController;
- (double)_topOffsetWithController:(id)arg1;
- (double)currentKeyboardHeight;
- (void)dealloc;
- (id)initWithSubview:(id)arg1 offsetOptions:(unsigned long long)arg2;
- (void)keyboardWasShown:(id)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)layoutSubviews;
- (id)marginDelegate;
- (unsigned long long)offsetOptions;
- (void)setCurrentKeyboardHeight:(double)arg1;
- (void)setMarginDelegate:(id)arg1;
- (void)setOffsetOptions:(unsigned long long)arg1;

@end
