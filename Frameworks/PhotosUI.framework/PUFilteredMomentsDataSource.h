/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFilteredMomentsDataSource : NSObject <PLDiagnosticsProvider> {
    NSSet * _assetUUIDs;
    NSOrderedSet * _containers;
    <PUFilteredMomentsDataSourceDelegate> * _delegate;
    bool  _finished;
    bool  _hasPendingChanges;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _taskId;
    NSSet * _uncommittedAssetUUIDs;
    NSMutableOrderedSet * _uncommittedContainers;
}

@property (nonatomic, readonly) NSSet *assetUUIDs;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUFilteredMomentsDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_inqClearPendingChanges;
- (bool)_inqIsCancelledWithTaskId:(unsigned long long)arg1;
- (bool)_isCancelledWithTaskId:(unsigned long long)arg1;
- (void)_updateAssetUUIDs:(id)arg1 localIdenifiers:(id)arg2 taskId:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)assetUUIDs;
- (id)delegate;
- (id)fetchResult;
- (id)init;
- (bool)isFinished;
- (void)mergePendingChanges;
- (void)setDelegate:(id)arg1;
- (void)updateAssetUUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)updateAssetUUIDs:(id)arg1 localIdenifiers:(id)arg2 completion:(id /* block */)arg3;

@end
