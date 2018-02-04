/* made by EzioChiu.
 */

@protocol AFUIDebugControllerDelegate

@required

- (void)debugController:(id <AFUIDebugControlling>)arg1 openURL:(NSURL *)arg2;
- (void)debugController:(id <AFUIDebugControlling>)arg1 stateDidChangeWithAddViews:(SAUIAddViews *)arg2;
- (void)debugController:(id <AFUIDebugControlling>)arg1 wantsDismissViewController:(UIViewController *)arg2;
- (void)debugController:(id <AFUIDebugControlling>)arg1 wantsPresentViewController:(UIViewController *)arg2;
- (void)getScreenshotImageForDebugController:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: <AFUIDebugControlling> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*
- (UIViewController *)presentedViewControllerForDebugController;

@end
