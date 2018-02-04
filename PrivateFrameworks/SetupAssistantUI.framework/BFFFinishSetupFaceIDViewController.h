/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFFinishSetupFaceIDViewController : BFFFaceIDViewController <BFFFaceIDViewControllerDelegate> {
    id /* block */  _completion;
    NSString * _passcode;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, copy) NSString *passcode;

- (void).cxx_destruct;
- (id /* block */)completion;
- (void)faceIDViewController:(id)arg1 didCompleteWithResult:(unsigned long long)arg2 pushedViewControllers:(id)arg3;
- (id)init;
- (id)passcode;
- (id)passcodeForFaceIDViewController:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setPasscode:(id)arg1;

@end
