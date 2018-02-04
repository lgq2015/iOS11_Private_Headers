/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

@interface CALNRemoteReminderProvider : CALNRemoteDataProvider {
    NSObject<OS_dispatch_queue> * _badgeCountQueue;
    SBSApplicationShortcutService * _sbApplicationShortcutService;
}

@property (retain) SBSApplicationShortcutService *sbApplicationShortcutService;

+ (id)logHandle;

- (void).cxx_destruct;
- (id)_bulletinRequestForReminder:(id)arg1;
- (id)_formattedPhoneNumberFromPhoneNumber:(id)arg1;
- (void)_handleDeclineAndRemindMessageWithUserInfo:(id)arg1;
- (id)_phoneNumberTypeStringFromPhoneNumber:(id)arg1;
- (bool)_shouldIncludeBulletin:(id)arg1 sinceDate:(id)arg2 addedIDs:(id)arg3;
- (id)_sortedListOfCalendarsFromEventStore:(id)arg1;
- (id)_springBoardRemindersShortcutItemsFromEventStore:(id)arg1;
- (void)_updateBadgeCount:(id)arg1;
- (void)_updateBulletinRequest:(id)arg1 forReminder:(id)arg2;
- (void)acknowledgeLocationAlertWithURL:(id)arg1 entityID:(id)arg2;
- (id)actionButtonColorForAlertInfo:(id)arg1;
- (id)actionButtonTitleForAlertInfo:(id)arg1;
- (void)activate;
- (void)alertInfosFired:(id)arg1;
- (bool)allowsLocationAlerts;
- (void)bulletinAcknowledgedWithResponse:(id)arg1 acknowledgeAlarm:(bool)arg2 extraActions:(id /* block */)arg3;
- (id)bulletinRequestForAlertInfo:(id)arg1;
- (id)bulletinRequestWithCalendarNotification:(id)arg1;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)closeActionForAlertInfo:(id)arg1;
- (id)customActionWithAlertInfo:(id)arg1 forBulletin:(id)arg2;
- (void)dataProviderDidLoad;
- (void)dealloc;
- (id)defaultSectionInfo;
- (id)defaultURLForAlertInfo:(id)arg1;
- (id)entityScheme;
- (void)firstUnlock;
- (void)handleBulletinActionResponse:(id)arg1;
- (void)handleDarwinNotification:(id)arg1;
- (id)initWithNotificationFetchBlock:(id /* block */)arg1;
- (id)markAsCompletedActionWithAlertInfo:(id)arg1;
- (id)messageStringForAlertInfo:(id)arg1;
- (void)protectedAcknowledgeAlarm:(bool)arg1 forBulletinWithEntityID:(id)arg2 externalID:(id)arg3 extraActions:(id /* block */)arg4;
- (id)protectedItemForBulletinRecordID:(id)arg1;
- (void)receiveMessageWithName:(id)arg1 userInfo:(id)arg2;
- (id)sbApplicationShortcutService;
- (id)sectionDisplayName;
- (id)sectionIcon;
- (id)sectionIdentifier;
- (id)sectionParameters;
- (void)setSbApplicationShortcutService:(id)arg1;
- (bool)shouldCompleteReminderWhenCustomActionExecuted:(id)arg1;
- (bool)shouldPostBulletinForAlertInfo:(id)arg1;
- (bool)shouldWithdrawBulletin:(id)arg1 forItem:(id)arg2;
- (id)snoozeActionForAlertInfo:(id)arg1 timeSpan:(int)arg2 snoozeInterval:(double*)arg3;
- (id)sortDescriptors;
- (id)supplementaryActionsForAlertInfo:(id)arg1 bulletin:(id)arg2 compactLayout:(bool)arg3;
- (id)titleStringForAlertInfo:(id)arg1;
- (id)universalSectionIdentifier;
- (void)updateQuickActions;
- (id)viewActionForAlertInfo:(id)arg1;
- (void)willPostBulletinForAlertInfo:(id)arg1;

@end
