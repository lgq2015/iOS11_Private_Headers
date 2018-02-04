/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLChangeNode : NSObject {
    Class  _changeHubClass;
    NSObject<OS_xpc_object> * _hubConnection;
    NSObject<OS_dispatch_queue> * _hubConnectionQueue;
    bool  _isObservingOrderKeys;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    unsigned long long  _lastKnownChangeHubEventIndex;
    unsigned char  _nodeUUID;
    int  _notifyToken;
    NSSet * _observedRelationships;
    NSMutableDictionary * _updatedOrderKeyObjectIDs;
}

+ (id)_createXPCObjectFromChangedObjectIDs:(id)arg1 redundantDeletes:(id)arg2 uuidsForCloudDeletion:(id)arg3 updatedAttributesByObjectID:(id)arg4 updatedRelationshipsByObjectID:(id)arg5 updatedOrderKeys:(id)arg6 changeSource:(int)arg7 syncChangeMarker:(bool)arg8;
+ (id)_descriptionForEvent:(id)arg1;
+ (unsigned int)handleNotifyGetStateForToken:(int)arg1 state:(unsigned long long*)arg2;
+ (id)localChangeEventFromChangeHubEvent:(id)arg1;
+ (id)sharedNode;

- (bool)_inq_registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)arg1;
- (void)_processCloudFeedUpdateDataFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedAlbumCountUpdates:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedAlbumCountUpdatesFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedAssetsForAnalysis:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedAssetsForFileSystemPersistencyFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedDupeAnalysisFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedSearchIndexUpdates:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedSearchIndexUpdatesFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_processDeletionsFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_setupHubConnection;
- (void)connectManagedObjectContext:(id)arg1;
- (void)dealloc;
- (void)disconnectManagedObjectContext:(id)arg1;
- (void)distributeRemoteChangeHubEvent:(id)arg1 withGroup:(id)arg2 transaction:(id)arg3;
- (void)distributeRemoteContextDidSaveEvent:(id)arg1 withGroup:(id)arg2 transaction:(id)arg3;
- (void)fetchNewEventsFromChangeHub;
- (void)forceUserInterfaceReload;
- (id)getAndClearUpdatedOrderKeys;
- (void)handleRemoteChangeHubRequest:(id)arg1;
- (id)init;
- (bool)isEventOriginatingFromHere:(id)arg1;
- (void)persistentStoreDidUpdateOrderKeys:(id)arg1;
- (void)printChangeStore;
- (void)processDelayedAssetsForFileSystemPersistency:(id)arg1 transaction:(id)arg2;
- (void)processDelayedCloudFeedAlbumUpdates:(id)arg1 assetInserts:(id)arg2 assetUpdates:(id)arg3 commentInserts:(id)arg4 invitationRecordUpdates:(id)arg5 deletionEntries:(id)arg6 transaction:(id)arg7;
- (void)processDelayedDupeAnalysisNormalInserts:(id)arg1 cloudInserts:(id)arg2 transaction:(id)arg3;
- (void)processDelayedMomentChangesWithTransaction:(id)arg1;
- (void)processRemoteEvents:(id)arg1;
- (void)sendChangeHubEventForDidSaveObjectIDsNotification:(id)arg1;
- (id)sendEventToChangeHub:(id)arg1 transaction:(id)arg2;

@end
