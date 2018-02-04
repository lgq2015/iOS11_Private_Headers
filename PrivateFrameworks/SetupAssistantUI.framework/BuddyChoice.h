/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BuddyChoice : NSObject {
    UIAlertController * _alertController;
    BuddyChoiceController * _choiceController;
    id /* block */  _condition;
    id /* block */  _confirmationCompletion;
    UIViewController * _nextController;
    Class  _nextControllerClass;
    NSString * _title;
}

@property (nonatomic, retain) UIAlertController *alertController;
@property (nonatomic) BuddyChoiceController *choiceController;
@property (nonatomic, copy) id /* block */ condition;
@property (nonatomic, copy) id /* block */ confirmationCompletion;
@property (nonatomic, retain) Class nextControllerClass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_choiceConfirmed:(bool)arg1;
- (id)alertController;
- (id)choiceController;
- (id /* block */)condition;
- (id)confirmationAcceptActionWithTitle:(id)arg1 style:(long long)arg2 action:(id /* block */)arg3;
- (id)confirmationCancelActionWithTitle:(id)arg1 style:(long long)arg2 action:(id /* block */)arg3;
- (id /* block */)confirmationCompletion;
- (id)initWithTitle:(id)arg1 nextItemClass:(Class)arg2;
- (Class)nextControllerClass;
- (void)runConfirmationIfNeededCompletion:(id /* block */)arg1;
- (void)setAlertController:(id)arg1;
- (void)setChoiceController:(id)arg1;
- (void)setCondition:(id /* block */)arg1;
- (void)setConfirmationAlert:(id)arg1 condition:(id /* block */)arg2;
- (void)setConfirmationCompletion:(id /* block */)arg1;
- (void)setNextControllerClass:(Class)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
