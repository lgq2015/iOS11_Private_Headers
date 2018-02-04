/* made by EzioChiu.
 */

@protocol IKAppContextInspectorDelegate <IKAppContextDelegate>

@optional

- (bool)appContext:(IKAppContext *)arg1 highlightViewForElement:(IKViewElement *)arg2 contentColor:(UIColor *)arg3 paddingColor:(UIColor *)arg4 borderColor:(UIColor *)arg5 marginColor:(UIColor *)arg6;
- (bool)appContext:(IKAppContext *)arg1 highlightViewsForElements:(NSArray *)arg2 contentColor:(UIColor *)arg3 paddingColor:(UIColor *)arg4 borderColor:(UIColor *)arg5 marginColor:(UIColor *)arg6;
- (bool)cancelHighlightViewForAppContext:(IKAppContext *)arg1;

@end
