/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesDataSource : PXSectionedDataSource {
    PXMemoriesDataSourceState * __state;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) PXMemoriesDataSourceState *_state;

- (void).cxx_destruct;
- (id)_state;
- (struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)initWithState:(id)arg1;
- (id)memoryEntryInfoAtSectionIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)memoryInfoAtItemIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;

@end
