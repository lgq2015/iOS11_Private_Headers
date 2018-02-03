/* made by EzioChiu.
 */

@protocol UIViewAnimationComposing <NSObject>

@required

- (<UIIntervalAnimating> *)composeAnimation:(void *)arg1 withNewAnimationDescription:(void *)arg2 interactive:(void *)arg3 currentValue:(void *)arg4 targetValueGetter:(void *)arg5; // needs 5 arg types, found 9: <UIIntervalAnimating> *, id, bool, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, void*, void*
- (bool)isActive;

@end