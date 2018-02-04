/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAggregateAlbumList : NSObject <PLAlbumContainer, PLAssetContainerListChangeObserver> {
    NSMutableOrderedSet * _allAlbums;
    NSMutableOrderedSet * _childAlbumLists;
    int  _filter;
}

@property (nonatomic, readonly, retain) NSString *_prettyDescription;
@property (nonatomic, readonly, retain) NSString *_typeDescription;
@property (nonatomic, readonly) unsigned long long albumsCount;
@property (nonatomic, readonly, copy) id /* block */ albumsSortingComparator;
@property (nonatomic, readonly) unsigned long long containersCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int filter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFolder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long unreadAlbumsCount;

+ (struct NSObject { Class x1; }*)albumListWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;

- (void)_invalidateAllAlbums;
- (id)_prettyDescription;
- (id)_typeDescription;
- (bool)albumHasFixedOrder:(struct NSObject { Class x1; }*)arg1;
- (short)albumListType;
- (id)albums;
- (unsigned long long)albumsCount;
- (id /* block */)albumsSortingComparator;
- (void)assetContainerListDidChange:(id)arg1;
- (bool)canEditAlbums;
- (bool)canEditContainers;
- (id)containers;
- (unsigned long long)containersCount;
- (id)containersRelationshipName;
- (void)dealloc;
- (int)filter;
- (bool)hasAtLeastOneAlbum;
- (id)identifier;
- (id)initWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;
- (bool)isEmpty;
- (bool)isFolder;
- (id)managedObjectContext;
- (bool)needsReordering;
- (id)photoLibrary;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)setFilter:(int)arg1;
- (void)setNeedsReordering;
- (unsigned long long)unreadAlbumsCount;
- (void)updateAlbumsOrderIfNeeded;

@end
