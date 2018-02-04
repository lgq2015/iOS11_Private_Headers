/* made by EzioChiu.
 */

@protocol SBUIPluginViewControllerInterface <NSObject>

@optional

- (void)animateAppearanceFromContext:(SBUIPluginAppearanceContext *)arg1;
- (void)animateDisappearanceFromContext:(SBUIPluginAppearanceContext *)arg1;
- (<SBUIPluginFluidDismissalState> *)fluidDismissalState;
- (void)setFluidDismissalState:(id <SBUIPluginFluidDismissalState>)arg1;
- (void)setShowsStatusBar:(bool)arg1;
- (bool)shouldTurnOnScreenOnAppearance;
- (void)willAnimateAppearanceFromContext:(SBUIPluginAppearanceContext *)arg1;
- (void)willAnimateDisappearanceFromContext:(SBUIPluginAppearanceContext *)arg1;

@end
