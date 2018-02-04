/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

@interface AEProgressViewModelSnapshot : NSObject {
    PXIndexPathSet * __pathsWithProgress;
    NSDictionary * __progressByIndexPath;
    unsigned long long  _correspondingDataSourceIdentifier;
}

@property (nonatomic, readonly) PXIndexPathSet *_pathsWithProgress;
@property (nonatomic, readonly) NSDictionary *_progressByIndexPath;
@property (nonatomic, readonly) unsigned long long correspondingDataSourceIdentifier;

- (void).cxx_destruct;
- (id)_pathsWithProgress;
- (id)_progressByIndexPath;
- (unsigned long long)correspondingDataSourceIdentifier;
- (bool)hasProgressForIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)initWithProgressByIndexPath:(id)arg1 dataSourceIdenfitier:(unsigned long long)arg2;
- (id)progressForIndexPath:(struct PXSimpleIndexPath { unsigned long long x1; long long x2; long long x3; long long x4; })arg1;

@end
