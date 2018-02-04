/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesFeedAlbumsDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    PHFetchResult * _albumsFetchResult;
    NSMutableArray * _entries;
    NSDictionary * _groupsByIdentifier;
    NSArray * _orderedIdentifiers;
    PHPhotoLibrary * _photoLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_entriesFromAssetCollections:(id)arg1 orderedIdentifiers:(id)arg2;
- (void)_getGroupedCollectionsFromEnumerable:(id)arg1 groupedCollections:(id*)arg2 orderedIdentifiers:(id*)arg3;
- (id)_groupIdentifierForAssetCollection:(id)arg1;
- (void)_handleIncrementalFetchResultChange:(id)arg1;
- (void)_handleNonIncrementalFetchResultChange:(id)arg1;
- (id)init;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;

@end
