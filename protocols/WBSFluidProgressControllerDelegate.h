/* made by EzioChiu.
 */

@protocol WBSFluidProgressControllerDelegate <NSObject>

@required

- (void)fluidProgressController:(WBSFluidProgressController *)arg1 setProgressToCurrentPosition:(WBSFluidProgressState *)arg2;
- (void)fluidProgressController:(WBSFluidProgressController *)arg1 startFluidProgressBar:(WBSFluidProgressState *)arg2 animateFillFade:(bool)arg3;
- (void)fluidProgressController:(WBSFluidProgressController *)arg1 updateFluidProgressBar:(WBSFluidProgressState *)arg2;
- (void)fluidProgressControllerFinishProgressBar:(WBSFluidProgressController *)arg1 animateFillFade:(bool)arg2;

@end
