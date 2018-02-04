/* made by EzioChiu.
 */

@protocol PXWidgetCompositionDelegate <NSObject>

@required

- (struct NSObject { Class x1; }*)widgetComposition:(PXWidgetComposition *)arg1 viewControllerHostingWidget:(id <PXWidget>)arg2;

@optional

- (void)widgetComposition:(PXWidgetComposition *)arg1 didUpdateCompositionWithDefaultAnimationOptions:(id <NSObject>)arg2;
- (long long)widgetComposition:(PXWidgetComposition *)arg1 loadingPriorityForWidget:(id <PXWidget>)arg2;
- (bool)widgetComposition:(PXWidgetComposition *)arg1 requestViewControllerDismissalAnimated:(bool)arg2;
- (bool)widgetComposition:(PXWidgetComposition *)arg1 shouldUseEdgeToEdgeLayoutForWidget:(id <PXWidget>)arg2;
- (bool)widgetComposition:(PXWidgetComposition *)arg1 widget:(id <PXWidget>)arg2 transitionToViewController:(struct NSObject { Class x1; }*)arg3 withTransitionType:(long long)arg4;
- (void)widgetComposition:(PXWidgetComposition *)arg1 widgetHasLoadedContentDataDidChange:(id <PXWidget>)arg2;
- (bool)widgetCompositionHasContentAbove:(PXWidgetComposition *)arg1;

@end