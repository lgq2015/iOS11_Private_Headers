/* made by EzioChiu.
 */

@protocol AAUISpecifierProviderDelegate <NSObject>

@required

- (void)reloadSpecifiersForProvider:(id <AAUISpecifierProvider>)arg1 oldSpecifiers:(NSArray *)arg2 animated:(bool)arg3;
- (void)showViewController:(UIViewController *)arg1 sender:(id)arg2;

@end
