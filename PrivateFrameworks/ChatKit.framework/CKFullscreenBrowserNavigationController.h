/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKFullscreenBrowserNavigationController : UINavigationController <CKAdaptivePresentedControllerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)constrainToPresentingVCBounds;
- (bool)forceWindowedPresentation;
- (void)loadView;
- (bool)preserveModalPresentationStyle;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)wantsWindowedPresentation;

@end
