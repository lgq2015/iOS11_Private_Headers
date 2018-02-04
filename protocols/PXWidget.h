/* made by EzioChiu.
 */

@protocol PXWidget <NSObject>

@optional

+ (void)preloadResources;

- (bool)allowUserInteractionWithSubtitle;
- (long long)contentLayoutStyle;
- (PXTilingController *)contentTilingController;
- (struct NSObject { Class x1; }*)contentView;
- (long long)contentViewAnchoringType;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (void)contentViewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id <PXWidgetContentViewTransitionCoordinator>)arg2;
- (PXPhotosDetailsContext *)context;
- (void)deviceDidBecomeUnlocked;
- (bool)hasContentForCurrentInput;
- (bool)hasLoadedContentData;
- (bool)isFaceModeEnabled;
- (bool)isSelecting;
- (bool)isUserInteractionEnabled;
- (void)loadContentData;
- (NSString *)localizedCaption;
- (NSString *)localizedDisclosureTitle;
- (NSString *)localizedSubtitle;
- (NSString *)localizedTitle;
- (double)preferredContentHeightForWidth:(double)arg1;
- (PXSectionedSelectionManager *)selectionManager;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContext:(PXPhotosDetailsContext *)arg1;
- (void)setFaceModeEnabled:(bool)arg1;
- (void)setSelecting:(bool)arg1;
- (void)setSpec:(PXWidgetSpec *)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setWidgetDelegate:(id <PXWidgetDelegate>)arg1;
- (void)setWidgetUnlockDelegate:(id <PXWidgetUnlockDelegate>)arg1;
- (PXWidgetSpec *)spec;
- (bool)supportsFaceMode;
- (bool)supportsSelection;
- (void)unloadContentData;
- (void)userDidSelectDisclosureControl;
- (void)userDidSelectSubtitle;
- (<PXWidgetDelegate> *)widgetDelegate;
- (<PXWidgetUnlockDelegate> *)widgetUnlockDelegate;

@end