/* made by EzioChiu.
 */

@protocol IKAppTabBarController <NSObject>

@required

- (unsigned long long)numberOfTabsInTabBar:(IKAppTabBar *)arg1;
- (NSString *)selectedTabItemForTabBar:(IKAppTabBar *)arg1;
- (void)tabBar:(IKAppTabBar *)arg1 setSelectedTabItem:(NSString *)arg2;
- (NSArray *)tabBar:(IKAppTabBar *)arg1 setTabItems:(NSArray *)arg2;
- (NSDictionary *)tabBar:(IKAppTabBar *)arg1 tabItemAtIndex:(unsigned long long)arg2;
- (NSString *)transientTabItemForTabBar:(IKAppTabBar *)arg1;

@end
