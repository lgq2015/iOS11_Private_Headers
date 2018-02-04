/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPRemoteFavoritesContainerPersister : MSPContainerPersister <MSPMapsPushDaemonProxyObserver> {
    NSUUID * _lastOperationIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reportErrorIfAny:(id)arg1 purpose:(id)arg2;
- (void)commitByMergingWithStateSnapshot:(id)arg1 mergeOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)commitEditWithNewContents:(id)arg1 edits:(id)arg2 appliedToOldContents:(id)arg3 completion:(id /* block */)arg4;
- (void)dealloc;
- (void)eraseWithCompletion:(id /* block */)arg1;
- (void)favoritesDidChange;
- (void)fetchContentsWithCompletion:(id /* block */)arg1;
- (void)fetchStateSnapshotWithCompletion:(id /* block */)arg1;
- (void)historyDidChange;
- (id)init;
- (void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3;

@end
