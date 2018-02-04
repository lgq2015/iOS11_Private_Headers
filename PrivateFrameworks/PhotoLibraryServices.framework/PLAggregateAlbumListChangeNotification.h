/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification {
    PLAggregateAlbumList * _albumList;
    unsigned long long  _indexOffet;
    PLAssetContainerListChangeNotification * _note;
}

+ (id)notificationForAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3;

- (bool)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (struct NSObject { Class x1; }*)albumList;
- (id)changedIndexes;
- (id)changedIndexesRelativeToSnapshot;
- (id)changedObjects;
- (void)dealloc;
- (id)deletedIndexes;
- (id)deletedObjects;
- (void)enumerateMovesWithBlock:(id /* block */)arg1;
- (id)initWithAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3;
- (id)insertedIndexes;
- (id)insertedObjects;
- (id)object;
- (bool)shouldReload;
- (unsigned long long)snapshotIndexForContainedObject:(id)arg1;

@end
