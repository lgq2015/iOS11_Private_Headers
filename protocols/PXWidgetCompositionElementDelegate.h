/* made by EzioChiu.
 */

@protocol PXWidgetCompositionElementDelegate <NSObject>

@required

- (struct NSObject { Class x1; }*)elementViewController:(PXWidgetCompositionElement *)arg1;

@optional

- (bool)element:(PXWidgetCompositionElement *)arg1 requestViewControllerDismissalAnimated:(bool)arg2;
- (bool)element:(PXWidgetCompositionElement *)arg1 transitionToViewController:(struct NSObject { Class x1; }*)arg2 withTransitionType:(long long)arg3;

@end
