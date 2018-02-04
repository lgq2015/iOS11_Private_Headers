/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesFeedMomentsDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    NSMutableArray * _entries;
    PHFetchResult * _momentsFetchResult;
}

@property (nonatomic, readonly) PXMemoriesFeedDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_randomMoment;
- (void)generateNewEntry;
- (id)init;

@end
