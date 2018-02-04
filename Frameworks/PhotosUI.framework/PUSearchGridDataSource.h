/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchGridDataSource : NSObject {
    NSSet * _additionalAssetUUIDs;
    NSSet * _assetUUIDs;
    <PUSearchGridDataSourceDelegate> * _delegate;
    PHFetchResult * _fetchResult;
    bool  _finished;
    bool  _hasPendingChanges;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _searchCategories;
    unsigned long long  _taskId;
}

@property (nonatomic, retain) NSSet *additionalAssetUUIDs;
@property (nonatomic, retain) NSSet *assetUUIDs;
@property (nonatomic) <PUSearchGridDataSourceDelegate> *delegate;
@property (nonatomic, retain) PHFetchResult *fetchResult;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (nonatomic) bool hasPendingChanges;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long searchCategories;
@property (nonatomic) unsigned long long taskId;

- (void).cxx_destruct;
- (void)_inqClearPendingChanges;
- (bool)_inqIsCancelledWithTaskId:(unsigned long long)arg1;
- (bool)_isCancelledWithTaskId:(unsigned long long)arg1;
- (void)_updateAssetUUIDs:(id)arg1 additionalAssetUUIDs:(id)arg2 taskId:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)additionalAssetUUIDs;
- (id)assetUUIDs;
- (id)delegate;
- (id)fetchResult;
- (bool)hasPendingChanges;
- (id)init;
- (bool)isFinished;
- (void)mergePendingChanges;
- (id)queue;
- (unsigned long long)searchCategories;
- (void)setAdditionalAssetUUIDs:(id)arg1;
- (void)setAssetUUIDs:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchResult:(id)arg1;
- (void)setHasPendingChanges:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setSearchCategories:(unsigned long long)arg1;
- (void)setTaskId:(unsigned long long)arg1;
- (unsigned long long)taskId;
- (void)updateAssetUUIDs:(id)arg1 additionalAssetUUIDs:(id)arg2 completion:(id /* block */)arg3;
- (void)updateAssetUUIDs:(id)arg1 completion:(id /* block */)arg2;

@end
