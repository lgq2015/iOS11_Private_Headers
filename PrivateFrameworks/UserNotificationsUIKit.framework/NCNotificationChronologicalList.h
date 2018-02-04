/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationChronologicalList : NSObject <BSDescriptionProviding, NCNotificationSectionList> {
    <NCNotificationSectionListDelegate> * _delegate;
    NCNotificationHiddenRequestsList * _hiddenRequestsList;
    NSMutableArray * _sections;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationSectionListDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NCNotificationHiddenRequestsList *hiddenRequestsList;
@property (nonatomic, readonly) unsigned long long sectionCount;
@property (nonatomic, retain) NSMutableArray *sections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allNotificationRequestsFromSectionIndex:(unsigned long long)arg1;
- (id)_completeIndexSet;
- (id)_existingSectionForDate:(id)arg1;
- (id)_existingSectionForNotificationRequest:(id)arg1;
- (void)_handleLocaleChange;
- (void)_handleTimeZoneChange;
- (id)_identifierForDate:(id)arg1;
- (unsigned long long)_insertionIndexForSection:(id)arg1;
- (id)_newSectionForDate:(id)arg1;
- (id)_newSectionForNotificationRequest:(id)arg1;
- (void)_rebuildSectionsList;
- (void)_reloadSectionHeaders;
- (id)_sectionContainingNotificationRequest:(id)arg1;
- (id)_simpleDateFromDate:(id)arg1;
- (id)_targetIndexPathForNotificationRequest:(id)arg1;
- (id)_titleForDate:(id)arg1;
- (void)_updateListForDateChange;
- (id)allNotificationRequests;
- (void)clearAllSections;
- (void)clearSectionWithIdentifier:(id)arg1;
- (bool)containsNotificationRequest:(id)arg1;
- (id)dateForSectionIdentifier:(id)arg1;
- (id)debugDescription;
- (id)delegate;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)hiddenRequestsList;
- (void)hideRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (id)identifierForSectionIndex:(unsigned long long)arg1;
- (id)init;
- (id)insertNotificationRequest:(id)arg1;
- (id)modifyNotificationRequest:(id)arg1;
- (id)notificationRequestAtIndexPath:(id)arg1;
- (id)notificationRequestsAtIndexPaths:(id)arg1;
- (id)notificationRequestsForSectionIdentifier:(id)arg1;
- (id)removeNotificationRequest:(id)arg1;
- (id)requestsIndexPathsPassingTest:(id /* block */)arg1;
- (unsigned long long)rowCountForSectionIndex:(unsigned long long)arg1;
- (unsigned long long)sectionCount;
- (long long)sectionIndexForListSectionIdentifier:(id)arg1;
- (id)sections;
- (void)setDelegate:(id)arg1;
- (void)setHiddenRequestsList:(id)arg1;
- (void)setSections:(id)arg1;
- (void)showRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)titleForSectionIndex:(unsigned long long)arg1;

@end
