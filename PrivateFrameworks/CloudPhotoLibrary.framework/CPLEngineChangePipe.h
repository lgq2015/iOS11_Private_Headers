/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineChangePipe : CPLEngineStorage <CPLAbstractObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLocked, nonatomic) bool locked;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (id)allChangeBatches;
- (bool)appendChangeBatch:(id)arg1 error:(id*)arg2;
- (bool)compactChangeBatchesWithError:(id*)arg1;
- (unsigned long long)countOfQueuedBatches;
- (bool)deleteAllChangeBatchesWithError:(id*)arg1;
- (bool)hasQueuedBatches;
- (bool)hasSomeChangeWithIdentifier:(id)arg1;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (bool)isLocked;
- (id)nextBatch;
- (id)popAllChangeBatchesWithError:(id*)arg1;
- (bool)popChangeBatch:(id*)arg1 error:(id*)arg2;
- (bool)popNextBatchWithError:(id*)arg1;
- (void)setLocked:(bool)arg1;

@end
