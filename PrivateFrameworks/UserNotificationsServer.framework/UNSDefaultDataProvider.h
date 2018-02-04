/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSDefaultDataProvider : NSObject <BBRemoteDataProvider, UNSNotificationCategoryRepositoryObserver, UNSNotificationRepositoryObserver> {
    BSCFBundle * _appBundle;
    UNSApplicationLauncher * _appLauncher;
    UNSAttachmentsService * _attachmentsService;
    UNSNotificationCategoryRepository * _categoryRepository;
    NSMutableDictionary * _categoryToParamSubType;
    NSURL * _dataContainerURL;
    UNSNotificationRepository * _notificationRepository;
    NSMutableDictionary * _primaryAttachmentMetadata;
    NSMutableDictionary * _primaryAttachments;
    BBDataProviderProxy * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _sectionID;
    NSString * _universalApplicationIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BBDataProviderProxy *proxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_BBActionBehaviorForUNAction:(id)arg1;
- (id)_BBActionBehaviorParametersForUNAction:(id)arg1;
- (id)_BBActionFromUIUserNotificationAction:(id)arg1;
- (id)_BBActionsFromUIUserNotificationActions:(id)arg1;
- (unsigned long long)_BBActivationModeForUNAction:(id)arg1;
- (id)_UNActionsForCompactLayoutForCategory:(id)arg1;
- (id)_UNActionsForNormalLayoutForCategory:(id)arg1;
- (id)_actionsForCompactLayoutForCategory:(id)arg1;
- (id)_actionsForNormalLayoutForCategory:(id)arg1;
- (void)_addAttachments:(id)arg1 toBulletinRequest:(id)arg2;
- (id)_allBulletinsWithMaxCount:(unsigned long long)arg1 sinceDate:(id)arg2;
- (bool)_allowInCarPlayForCategoryIdentifier:(id)arg1;
- (id)_categoryForIdentifier:(id)arg1;
- (id)_defaultActionWithTitle:(id)arg1;
- (id)_dismissActionForCategory:(id)arg1;
- (void)_handleBulletinActionResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)_isAuthenticationRequiredForUNAction:(id)arg1;
- (bool)_isDestructiveForUNAction:(id)arg1;
- (bool)_isPushDataProvider;
- (bool)_isResourceValidForPath:(id)arg1 withContainerPath:(id)arg2;
- (id)_pathForSoundName:(id)arg1;
- (void)_queue_addBulletinForNotification:(id)arg1;
- (id)_queue_bulletinForNotification:(id)arg1;
- (void)_queue_notificationRepositoryDidPerformUpdates:(id)arg1;
- (void)_queue_withdrawBulletinForNotification:(id)arg1;
- (id)_unarchiveNotificationFromData:(id)arg1;
- (float)attachmentAspectRatioForRecordID:(id)arg1;
- (id)attachmentPNGDataForRecordID:(id)arg1 sizeConstraints:(id)arg2;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (void)categoryRepository:(id)arg1 didChangeCategoriesForBundleIdentifier:(id)arg2;
- (id)clearedInfoAndBulletinsForClearingAllBulletinsWithLimit:(unsigned long long)arg1 lastClearedInfo:(id)arg2;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (void)dataProviderDidLoad;
- (void)dealloc;
- (id)defaultSectionInfo;
- (void)handleBulletinActionResponse:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithApplicationDescription:(id)arg1 applicationLauncher:(id)arg2 categoryRepository:(id)arg3 notificationRepository:(id)arg4 attachmentsService:(id)arg5 queue:(id)arg6;
- (void)invalidate;
- (void)noteSectionInfoDidChange:(id)arg1;
- (id)notificationRecords;
- (void)notificationRepository:(id)arg1 didPerformUpdates:(id)arg2 forBundleIdentifier:(id)arg3;
- (id)primaryAttachmentDataForRecordID:(id)arg1;
- (id)proxy;
- (id)sectionIdentifier;
- (id)sectionParameters;
- (void)setApplicationDescription:(id)arg1;
- (void)setProxy:(id)arg1;
- (id)sortDescriptors;
- (bool)syncsBulletinDismissal;
- (void)uninstall;
- (id)universalSectionIdentifier;

@end