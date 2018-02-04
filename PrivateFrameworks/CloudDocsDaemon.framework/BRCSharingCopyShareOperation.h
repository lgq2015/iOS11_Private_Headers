/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharingCopyShareOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    BRCClientZone * _clientZone;
    CKRecordID * _recordIDNeedingFetch;
    BRCItemID * _rootItemIDToLookup;
    CKRecordID * _shareID;
}

@property (nonatomic, retain) BRCClientZone *clientZone;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKRecordID *recordIDNeedingFetch;
@property (nonatomic, retain) BRCItemID *rootItemIDToLookup;
@property (nonatomic, retain) CKRecordID *shareID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clientZone;
- (id)createActivity;
- (void)fetchRootURLIfNecessaryAndFinishWithShare:(id)arg1;
- (id)initWithItem:(id)arg1;
- (void)main;
- (id)recordIDNeedingFetch;
- (id)rootItemIDToLookup;
- (void)setClientZone:(id)arg1;
- (void)setRecordIDNeedingFetch:(id)arg1;
- (void)setRootItemIDToLookup:(id)arg1;
- (void)setShareID:(id)arg1;
- (id)shareID;
- (bool)shouldRetryForError:(id)arg1;

@end
