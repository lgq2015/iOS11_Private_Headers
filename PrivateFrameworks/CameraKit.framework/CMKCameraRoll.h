/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKCameraRoll : NSObject {
    NSMutableSet * __cachedChangeObservers;
    bool  __hasLoadedCameraRollFrameworks;
    bool  __hasPendingSessionAssets;
    NSMutableDictionary * __inflightAssets;
    NSMutableSet * __sessionAssetUUIDs;
    PHFetchResult * __userLibraryAssetsFetchResult;
    PHAssetCollection * __weakAssetCollection;
    PHFetchResult * __weakAssetCollectionFetchResult;
    bool  __weakAssetCollectionLoaded;
    bool  _changeNotificationsEnabled;
    NSDate * _sessionIdentifier;
}

@property (nonatomic, readonly) NSMutableSet *_cachedChangeObservers;
@property (nonatomic, readonly) bool _hasLoadedCameraRollFrameworks;
@property (nonatomic, readonly) bool _hasPendingSessionAssets;
@property (nonatomic, readonly) NSMutableDictionary *_inflightAssets;
@property (nonatomic, readonly) NSMutableSet *_sessionAssetUUIDs;
@property (nonatomic, readonly) PHFetchResult *_userLibraryAssetsFetchResult;
@property (nonatomic, readonly) PHAssetCollection *_weakAssetCollection;
@property (nonatomic, readonly) PHFetchResult *_weakAssetCollectionFetchResult;
@property (getter=_isWeakAssetCollectionLoaded, nonatomic, readonly) bool _weakAssetCollectionLoaded;
@property (nonatomic) bool changeNotificationsEnabled;
@property (nonatomic, readonly) NSDate *sessionIdentifier;

+ (id)sharedCameraRoll;

- (void).cxx_destruct;
- (id)_cachedChangeObservers;
- (void)_ensureFetchedSessionAssets;
- (void)_ensureWeakAssetCollection;
- (bool)_hasLoadedCameraRollFrameworks;
- (bool)_hasPendingSessionAssets;
- (id)_inflightAssets;
- (void)_invalidateAssetCollection;
- (bool)_isWeakAssetCollectionLoaded;
- (void)_registerAllChangeNotificationObservers;
- (void)_registerChangeNotificationObserver:(id)arg1;
- (void)_reloadSessionAssets;
- (void)_removeAllSessionAssets;
- (void)_removeSessionAssets:(id)arg1;
- (id)_sessionAssetUUIDs;
- (id)_sessionLocalIdentifiers;
- (void)_unregisterAllObjectsForChangeNotifications;
- (void)_unregisterChangeNotificationObserver:(id)arg1;
- (void)_updateWeakAlbumChangeNotificationsState;
- (void)_updateWeakAssetCollectionFromSessionChange;
- (id)_userLibraryAssetsFetchResult;
- (id)_weakAssetCollection;
- (id)_weakAssetCollectionFetchResult;
- (void)addChangeNotificationsObserver:(id)arg1;
- (void)addInflightAsset:(id)arg1;
- (void)addSessionAsset:(id)arg1;
- (id)album;
- (bool)changeNotificationsEnabled;
- (void)dealloc;
- (id)fetchResultContainingAssetCollection;
- (void)finishSession;
- (bool)hasInflightAssets;
- (id)init;
- (bool)isCameraSessionActive;
- (void)preflightCameraRollFrameworks;
- (id)realizedWeakAssetCollection;
- (void)removeChangeNotificationsObserver:(id)arg1;
- (void)removeInflightAsset:(id)arg1;
- (id)sessionIdentifier;
- (void)setChangeNotificationsEnabled:(bool)arg1;
- (void)startNewSession;
- (void)startNewSessionWithIdentifier:(id)arg1;
- (bool)updateFromChanges:(id)arg1;

@end
