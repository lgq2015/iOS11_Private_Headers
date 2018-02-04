/* made by EzioChiu.
 */

@protocol WGWidgetListEditViewControllerDataSource <NSObject>

@required

- (NSArray *)disabledInterfaceItemIdentifiersForWidgetListEditViewController:(WGWidgetListEditViewController *)arg1;
- (NSArray *)groupsForWidgetListEditViewController:(WGWidgetListEditViewController *)arg1;
- (void)widgetListEditViewController:(WGWidgetListEditViewController *)arg1 acknowledgeInterfaceItemsWithIdentifiers:(NSArray *)arg2;
- (NSString *)widgetListEditViewController:(WGWidgetListEditViewController *)arg1 defaultGroupForItemWithIdentifier:(NSString *)arg2;
- (void)widgetListEditViewController:(WGWidgetListEditViewController *)arg1 didReorderItemsWithIdentifiersInGroups:(NSDictionary *)arg2;
- (NSString *)widgetListEditViewController:(WGWidgetListEditViewController *)arg1 displayNameForItemWithIdentifier:(NSString *)arg2;
- (UIImage *)widgetListEditViewController:(WGWidgetListEditViewController *)arg1 iconForItemWithIdentifier:(NSString *)arg2;
- (bool)widgetListEditViewController:(WGWidgetListEditViewController *)arg1 isItemWithIdentifierEnabled:(NSString *)arg2;
- (bool)widgetListEditViewController:(WGWidgetListEditViewController *)arg1 isItemWithIdentifierNew:(NSString *)arg2;
- (NSArray *)widgetListEditViewController:(WGWidgetListEditViewController *)arg1 itemIdentifiersForGroup:(NSString *)arg2;
- (void)widgetListEditViewController:(WGWidgetListEditViewController *)arg1 setEnabled:(bool)arg2 forItemsWithIdentifiers:(NSArray *)arg3;
- (bool)widgetListEditViewControllerShouldIncludeInternalWidgets:(WGWidgetListEditViewController *)arg1;

@optional

- (long long)layoutModeForWidgetListEditViewController:(WGWidgetListEditViewController *)arg1;
- (NSString *)widgetListEditViewController:(WGWidgetListEditViewController *)arg1 displayNameForGroup:(NSString *)arg2;

@end
