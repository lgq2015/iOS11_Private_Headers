/* made by EzioChiu.
 */

@protocol NCNotificationSectionList <NSObject>

@required

- (NSSet *)allNotificationRequests;
- (void)clearAllSections;
- (void)clearSectionWithIdentifier:(NSString *)arg1;
- (bool)containsNotificationRequest:(NCNotificationRequest *)arg1;
- (NSDate *)dateForSectionIdentifier:(NSString *)arg1;
- (<NCNotificationSectionListDelegate> *)delegate;
- (void)hideRequestsForNotificationSectionIdentifier:(NSString *)arg1 subSectionIdentifier:(NSString *)arg2;
- (NSString *)identifierForSectionIndex:(unsigned long long)arg1;
- (NSIndexPath *)insertNotificationRequest:(NCNotificationRequest *)arg1;
- (NSIndexPath *)modifyNotificationRequest:(NCNotificationRequest *)arg1;
- (NCNotificationRequest *)notificationRequestAtIndexPath:(NSIndexPath *)arg1;
- (NSArray *)notificationRequestsAtIndexPaths:(NSArray *)arg1;
- (NSSet *)notificationRequestsForSectionIdentifier:(NSString *)arg1;
- (NSIndexPath *)removeNotificationRequest:(NCNotificationRequest *)arg1;
- (NSArray *)requestsIndexPathsPassingTest:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NCNotificationRequest *, void*
- (unsigned long long)rowCountForSectionIndex:(unsigned long long)arg1;
- (unsigned long long)sectionCount;
- (long long)sectionIndexForListSectionIdentifier:(NSString *)arg1;
- (void)setDelegate:(id <NCNotificationSectionListDelegate>)arg1;
- (void)showRequestsForNotificationSectionIdentifier:(NSString *)arg1 subSectionIdentifier:(NSString *)arg2;
- (NSString *)titleForSectionIndex:(unsigned long long)arg1;

@end
