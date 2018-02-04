/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface _SBAlertController : UIAlertController <BSDescriptionProviding> {
    <_SBAlertControllerDelegate> * _alertControllerDelegate;
    SBAlertItem * _alertItem;
}

@property (nonatomic) <_SBAlertControllerDelegate> *alertControllerDelegate;
@property (nonatomic) SBAlertItem *alertItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alertControllerDelegate;
- (id)alertItem;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)setAlertControllerDelegate:(id)arg1;
- (void)setAlertItem:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)viewDidDisappear:(bool)arg1;

@end
