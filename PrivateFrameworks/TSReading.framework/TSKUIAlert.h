/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKUIAlert : TSKAbstractAlert <UIAlertViewDelegate> {
    UIAlertView * _alertView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)alertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4;
+ (void)setUseMockUIAlert:(bool)arg1;

- (long long)addButtonWithTitle:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (id)buttonTitleAtIndex:(long long)arg1;
- (long long)cancelButtonIndex;
- (void)dealloc;
- (void)didPresentAlertView:(id)arg1;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(bool)arg2;
- (long long)firstOtherButtonIndex;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 otherOtherButtonTitle:(id)arg5;
- (long long)numberOfButtons;
- (void)setCancelButtonIndex:(long long)arg1;
- (void)showAlert;
- (void)willPresentAlertView:(id)arg1;

@end
