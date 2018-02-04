/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFeatureManager : NSObject {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    bool  _autoFillAvailable;
    bool  _bookmarksAvailable;
    bool  _cloudSyncAvailable;
    bool  _inMemoryBookmarkChangeTrackingAvailable;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _offlineReadingListAvailable;
    bool  _readingListAvailable;
}

@property (getter=isAutoFillAvailable, nonatomic, readonly) bool autoFillAvailable;
@property (getter=isBookmarksAvailable, nonatomic, readonly) bool bookmarksAvailable;
@property (getter=isCloudHistorySyncAvailable, nonatomic, readonly) bool cloudHistorySyncAvailable;
@property (getter=isCloudKitBookmarksAvailable, nonatomic, readonly) bool cloudKitBookmarksAvailable;
@property (getter=isCloudSyncAvailable, nonatomic, readonly) bool cloudSyncAvailable;
@property (getter=isCloudTabsAvailable, nonatomic, readonly) bool cloudTabsAvailable;
@property (getter=isCreditCardStorageAvailable, nonatomic, readonly) bool creditCardStorageAvailable;
@property (getter=isInMemoryBookmarkChangeTrackingAvailable, nonatomic, readonly) bool inMemoryBookmarkChangeTrackingAvailable;
@property (getter=isOfflineReadingListAvailable, nonatomic, readonly) bool offlineReadingListAvailable;
@property (getter=isParsecITunesResultsAvailable, nonatomic, readonly) bool parsecITunesResultsAvailable;
@property (getter=isReadingListAvailable, nonatomic, readonly) bool readingListAvailable;

+ (long long)accessLevel;
+ (id)webui_sharedFeatureManager;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (bool)_isUsingManagedAppleID;
- (void)_setupAccountStore;
- (void)_updateAppleAccount;
- (void)_updateFeatureAvailabilityByAccessLevel;
- (void)dealloc;
- (id)init;
- (bool)isAutoFillAvailable;
- (bool)isBookmarksAvailable;
- (bool)isCloudHistorySyncAvailable;
- (bool)isCloudKitBookmarksAvailable;
- (bool)isCloudSyncAvailable;
- (bool)isCloudTabsAvailable;
- (bool)isCreditCardStorageAvailable;
- (bool)isInMemoryBookmarkChangeTrackingAvailable;
- (bool)isOfflineReadingListAvailable;
- (bool)isParsecITunesResultsAvailable;
- (bool)isReadingListAvailable;

@end
