/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBPasscodeKeyboardAnimator : _UIKeyboardAnimator {
    BSAnimationSettings * _animationSettings;
    <SBPasscodeKeyboardAnimatorDelegate> * _delegate;
}

@property (nonatomic, retain) BSAnimationSettings *animationSettings;
@property (nonatomic) <SBPasscodeKeyboardAnimatorDelegate> *delegate;

- (void).cxx_destruct;
- (id)animationSettings;
- (void)completeAnimationWithState:(id)arg1;
- (id)delegate;
- (void)performAnimation:(id /* block */)arg1 afterStarted:(id /* block */)arg2 onCompletion:(id /* block */)arg3;
- (void)prepareForAnimationWithState:(id)arg1;
- (void)runAnimationWithState:(id)arg1;
- (void)setAnimationSettings:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
