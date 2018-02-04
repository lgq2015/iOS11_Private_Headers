/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleWidgetDataSource : PXPeopleDataSource <PHPhotoLibraryChangeObserver> {
    bool  _containsSocialGroups;
    PXPeopleDetailsContext * _context;
    NSObject<OS_dispatch_queue> * _fetchQueue;
    bool  _isForOneUp;
    bool  _prefetchingStarted;
}

@property (nonatomic) bool containsSocialGroups;
@property (nonatomic, retain) PXPeopleDetailsContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isForOneUp;
@property (nonatomic, readonly) NSArray *members;
@property (nonatomic) bool prefetchingStarted;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_socialGroupsForIdentifiers:(id)arg1;
- (void)_updateMembers;
- (bool)containsSocialGroups;
- (id)context;
- (void)dealloc;
- (void)imageCacheDidChanged:(id)arg1;
- (id)initWithName:(id)arg1 objectsReloadBlock:(id /* block */)arg2;
- (bool)isForOneUp;
- (void)loadMembersWithCompletionBlock:(id /* block */)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)prefetchThumbnailsForTargetSize:(struct CGSize { double x1; double x2; })arg1 maxFetchCount:(unsigned long long)arg2;
- (bool)prefetchingStarted;
- (void)setContainsSocialGroups:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setIsForOneUp:(bool)arg1;
- (void)setPrefetchingStarted:(bool)arg1;
- (void)startListeningForChanges;
- (void)stopListeningForChanges;
- (id)titleAtIndex:(unsigned long long)arg1;

@end
