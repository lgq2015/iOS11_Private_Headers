/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPXOneUpPresentationImplementationDelegate : NSObject <PXOneUpPresentationImplementationDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)oneUpPresentation:(id)arg1 commitPreviewViewController:(id)arg2;
- (void)oneUpPresentation:(id)arg1 didDismissPreviewViewController:(id)arg2 committing:(bool)arg3;
- (bool)oneUpPresentation:(id)arg1 handlePresentingPinchGestureRecognizer:(id)arg2;
- (void)oneUpPresentation:(id)arg1 presentingViewControllerViewDidAppear:(bool)arg2;
- (void)oneUpPresentation:(id)arg1 presentingViewControllerViewDidDisappear:(bool)arg2;
- (void)oneUpPresentation:(id)arg1 presentingViewControllerViewWillAppear:(bool)arg2;
- (void)oneUpPresentation:(id)arg1 presentingViewControllerViewWillDisappear:(bool)arg2;
- (bool)oneUpPresentation:(id)arg1 startAnimated:(bool)arg2 interactiveMode:(long long)arg3;
- (void)oneUpPresentation:(id)arg1 stopAnimated:(bool)arg2;
- (bool)oneUpPresentationCanStart:(id)arg1;
- (bool)oneUpPresentationCanStop:(id)arg1;
- (void)oneUpPresentationInvalidatePresentingGeometry:(id)arg1;
- (id)previewViewControllerForOneUpPresentation:(id)arg1 allowingActions:(bool)arg2;

@end
