/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetsDataSourceManager : PXSectionedDataSourceManager

@property (nonatomic, readonly) PXAssetsDataSource *dataSource;

- (void)registerChangeObserver:(id)arg1 context:(void*)arg2;
- (void)unregisterChangeObserver:(id)arg1 context:(void*)arg2;

@end
