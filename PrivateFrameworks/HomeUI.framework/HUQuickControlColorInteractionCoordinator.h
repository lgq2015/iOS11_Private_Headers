/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlColorInteractionCoordinator : HUQuickControlSimpleInteractionCoordinator <HUQuickControlColorViewInteractionDelegate> {
    HFColorPalette * _colorPalette;
    bool  _hasPendingColorPaletteChangeDelegateNotification;
}

@property (nonatomic, retain) HFColorPalette *colorPalette;
@property (nonatomic, readonly) HUQuickControlColorView *controlView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUQuickControlColorInteractionCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasPendingColorPaletteChangeDelegateNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyDelegateOfColorPaletteChangeIfNecessary;
- (id)colorPalette;
- (void)controlView:(id)arg1 activeModeDidChange:(unsigned long long)arg2;
- (void)controlView:(id)arg1 colorPaletteDidChange:(id)arg2;
- (void)controlView:(id)arg1 interactionStateDidChange:(bool)arg2 forFirstTouch:(bool)arg3;
- (void)controlView:(id)arg1 showAuxiliaryView:(id)arg2;
- (bool)hasPendingColorPaletteChangeDelegateNotification;
- (void)hideAuxiliaryViewForControlView:(id)arg1;
- (id)initWithControlView:(id)arg1 colorPalette:(id)arg2 delegate:(id)arg3;
- (void)setColorPalette:(id)arg1;
- (void)setHasPendingColorPaletteChangeDelegateNotification:(bool)arg1;

@end
