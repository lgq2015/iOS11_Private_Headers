/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSFluidProgressController : NSObject {
    <WBSFluidProgressControllerDelegate> * _delegate;
    <WBSFluidProgressControllerWindowDelegate> * _windowDelegate;
}

@property <WBSFluidProgressControllerDelegate> *delegate;
@property <WBSFluidProgressControllerWindowDelegate> *windowDelegate;

- (void).cxx_destruct;
- (void)_updateFluidProgressWithProgressStateSource:(id)arg1;
- (void)animationStepCompleted:(id)arg1;
- (void)cancelFluidProgressWithProgressStateSource:(id)arg1;
- (id)delegate;
- (void)finishFluidProgressWithProgressStateSource:(id)arg1;
- (void)frontmostTabDidChange;
- (void)progressStateSourceDidCommitLoad:(id)arg1 loadingSingleResource:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setWindowDelegate:(id)arg1;
- (void)startFluidProgressWithProgressStateSource:(id)arg1;
- (void)startRocketEffectWithProgressStateSource:(id)arg1;
- (void)updateFluidProgressWithProgressStateSource:(id)arg1;
- (id)windowDelegate;

@end
