/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDirectoryItem : BRCLocalItem <BRCTopLevelShareable> {
    long long  _mtime;
}

@property (nonatomic, readonly) BRCAliasItem *asBRAlias;
@property (nonatomic, readonly) BRCDirectoryItem *asDirectory;
@property (nonatomic, readonly) BRCDocumentItem *asDocument;
@property (nonatomic, readonly) long long mtime;
@property (nonatomic, readonly) NSString *unsaltedBookmarkData;

- (bool)_deleteFromDB:(id)arg1 keepAliases:(bool)arg2;
- (id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id*)arg4;
- (id)_initWithRelativePath:(id)arg1 parentGlobalID:(id)arg2;
- (id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2;
- (bool)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (bool)_markChildrenLostForDeadParent;
- (void)_markLostDirectoryAsAlmostDead;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)arg1;
- (bool)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (id)asDirectory;
- (id)asShareableItem;
- (bool)changedAtRelativePath:(id)arg1 scanPackage:(bool)arg2;
- (unsigned long long)childItemCount;
- (id)clientZonesChildrenNeedingSyncUpAreIn;
- (unsigned long long)diffAgainstServerItem:(id)arg1;
- (bool)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)hasDeadChildren;
- (bool)hasLiveChildren;
- (bool)hasLostChildren;
- (bool)hasPendingLostChildren;
- (bool)hasShareIDAndIsOwnedByMe;
- (bool)isDirectory;
- (bool)isDirectoryWithPackageName;
- (bool)markChildrenLost;
- (void)markRemovedFromFilesystemForServerEdit:(bool)arg1;
- (long long)mtime;
- (bool)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)updateFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;
- (void)updateItemMetadataFromServerItem:(id)arg1 appliedSharingPermission:(bool)arg2;
- (bool)updateLocationAndMetaFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2;

@end
