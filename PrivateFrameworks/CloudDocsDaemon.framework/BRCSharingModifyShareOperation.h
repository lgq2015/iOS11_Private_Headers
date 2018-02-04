/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharingModifyShareOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    BRCItemID * _itemID;
    BRCServerZone * _serverZone;
    CKShare * _share;
    CKRecord * _sharingIdentityPreparedRecord;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performAfterCopyingPublicSharingKeyWithRecordID:(id)arg1 completion:(id /* block */)arg2;
- (void)_performAfterFetchingSharingIdentityOnDirectoryItem:(id)arg1 completion:(id /* block */)arg2;
- (void)_performAfterFetchingSharingIdentityOnDocumentItem:(id)arg1 completion:(id /* block */)arg2;
- (void)_performAfterFetchingiWorkRoutingTokenIfNecessary:(id)arg1 completion:(id /* block */)arg2;
- (void)_performAfterFetchingiWorkSharingIdentityOnItem:(id)arg1 wantRoutingKey:(bool)arg2 completion:(id /* block */)arg3;
- (void)_performAfterGettingPublicSharingKeyForRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)_performAfterPreparingSharingIdentityIfNecessaryWhenWantRoutingKey:(bool)arg1 completion:(id /* block */)arg2;
- (void)_updateDBAndSyncDownIfNeededWithShare:(id)arg1;
- (id)createActivity;
- (id)initWithName:(id)arg1 zone:(id)arg2 share:(id)arg3;
- (void)main;
- (void)performAfterPreparingSharingIdentityIfNecessary:(id /* block */)arg1;
- (bool)shouldRetryForError:(id)arg1;

@end
