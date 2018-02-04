/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewCollectionHostContext : NSExtensionContext <QLPreviewCollectionServiceProtocol>

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)_protocolService;
- (void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1;
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4;
- (void)getNetworkObserverWithCompletionBlock:(id /* block */)arg1;
- (void)getPreviewCollectionUUIDWithCompletionHandler:(id /* block */)arg1;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationDidEnterBackground:(bool)arg1;
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)invalidatePreviewCollection;
- (void)keyCommandWasPerformed:(id)arg1;
- (void)keyCommandsWithCompletionHandler:(id /* block */)arg1;
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1;
- (void)prepareForActionSheetPresentationWithCompletionHandler:(id /* block */)arg1;
- (void)setAllowInteractiveTransitions:(bool)arg1;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(bool)arg2;
- (void)setLoadingString:(id)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)tearDownTransition:(bool)arg1;
- (void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)toolbarButtonsForTraitCollection:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end
