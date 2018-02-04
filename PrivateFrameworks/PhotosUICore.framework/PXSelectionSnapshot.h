/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSelectionSnapshot : NSObject {
    PXSectionedDataSource * _dataSource;
    PXIndexPathSet * _selectedIndexPaths;
}

@property (nonatomic, readonly) PXSectionedDataSource *dataSource;
@property (nonatomic, readonly) PXIndexPathSet *selectedIndexPaths;

- (void).cxx_destruct;
- (id)dataSource;
- (id)description;
- (id)init;
- (id)initWithDataSource:(id)arg1 selectedIndexPaths:(id)arg2;
- (bool)isIndexPathSelected:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)selectedIndexPaths;

@end
