/* made by EzioChiu.
 */

@protocol NCNotificationSectionListDelegate <NSObject>

@required

- (void)notificationSectionList:(id <NCNotificationSectionList>)arg1 didInsertNotificationRequest:(NCNotificationRequest *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)notificationSectionList:(id <NCNotificationSectionList>)arg1 didInsertSectionAtIndex:(unsigned long long)arg2;
- (void)notificationSectionList:(id <NCNotificationSectionList>)arg1 didRemoveNotificationRequest:(NCNotificationRequest *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)notificationSectionList:(id <NCNotificationSectionList>)arg1 didRemoveSectionAtIndex:(unsigned long long)arg2;
- (void)notificationSectionList:(id <NCNotificationSectionList>)arg1 didRemoveSectionsAtIndices:(NSIndexSet *)arg2;
- (void)notificationSectionList:(id <NCNotificationSectionList>)arg1 didReplaceNotificationRequest:(NCNotificationRequest *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)notificationSectionList:(id <NCNotificationSectionList>)arg1 requestsReloadAtIndices:(NSArray *)arg2;
- (void)notificationSectionListNeedsReload:(id <NCNotificationSectionList>)arg1;

@end
