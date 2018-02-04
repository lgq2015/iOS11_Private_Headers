/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUINavigationControllerAssistant : NSObject {
    UIView * _childPaletteView;
    SKUIClientContext * _clientContext;
    bool  _hidesShadow;
    UINavigationController * _navigationController;
    _UINavigationControllerPalette * _paletteBackgroundView;
    <SKUIStatusOverlayProvider> * _statusOverlayProvider;
    UIViewController * _statusOverlayViewController;
}

@property (nonatomic, retain) UIView *childPaletteView;
@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (nonatomic) bool hidesShadow;
@property (nonatomic) UINavigationController *navigationController;
@property (nonatomic, retain) _UINavigationControllerPalette *paletteBackgroundView;
@property (nonatomic, retain) <SKUIStatusOverlayProvider> *statusOverlayProvider;
@property (nonatomic, retain) UIViewController *statusOverlayViewController;

+ (id)assistantForNavigationController:(id)arg1 clientContext:(id)arg2;
+ (id)existingAssistantForNavigationController:(id)arg1;

- (void).cxx_destruct;
- (void)_hideChildPaletteView:(id)arg1 animated:(bool)arg2;
- (void)_hideOverlayView:(id)arg1 animated:(bool)arg2;
- (id)_initWithNavigationController:(id)arg1 clientContext:(id)arg2;
- (void)_previewDocumentChangeNotification:(id)arg1;
- (void)_setStatusOverlayProvider:(id)arg1 animated:(bool)arg2;
- (void)_showOverlayView:(id)arg1 previousOverlayView:(id)arg2 animated:(bool)arg3;
- (void)_transitionToPaletteView:(id)arg1 animated:(bool)arg2 operation:(long long)arg3;
- (id)childPaletteView;
- (id)clientContext;
- (void)dealloc;
- (bool)hidesShadow;
- (id)navigationController;
- (id)paletteBackgroundView;
- (void)setChildPaletteView:(id)arg1;
- (void)setHidesShadow:(bool)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setPaletteBackgroundView:(id)arg1;
- (void)setPalettePinningBarHidden:(bool)arg1;
- (void)setPaletteView:(id)arg1 animated:(bool)arg2;
- (void)setStatusOverlayProvider:(id)arg1;
- (void)setStatusOverlayProvider:(id)arg1 animated:(bool)arg2;
- (void)setStatusOverlayViewController:(id)arg1;
- (id)statusOverlayProvider;
- (id)statusOverlayViewController;
- (void)willShowViewController:(id)arg1 animated:(bool)arg2;

@end
