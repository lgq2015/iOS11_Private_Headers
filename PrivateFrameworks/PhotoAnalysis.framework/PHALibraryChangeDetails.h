/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHALibraryChangeDetails : NSObject {
    NSDictionary * _changedAssetIdentifierToWorkerFlagsMap;
    PHFetchResult * _changedAssetsFetchResult;
    NSArray * _deletes;
    NSArray * _inserts;
    NSArray * _updates;
}

@property (readonly) NSArray *allChangedObjects;
@property (retain) NSDictionary *changedAssetIdentifierToWorkerFlagsMap;
@property (retain) PHFetchResult *changedAssetsFetchResult;
@property (setter=_setDeletes:, copy) NSArray *deletes;
@property (setter=_setInserts:, copy) NSArray *inserts;
@property (setter=_setUpdates:, copy) NSArray *updates;

+ (id)changeDetailsForUpdatedObjects:(id)arg1;

- (void).cxx_destruct;
- (void)_setDeletes:(id)arg1;
- (void)_setInserts:(id)arg1;
- (void)_setUpdates:(id)arg1;
- (id)allChangedObjects;
- (id)changedAssetIdentifierToWorkerFlagsMap;
- (id)changedAssetsFetchResult;
- (id)deletes;
- (id)inserts;
- (void)setChangedAssetIdentifierToWorkerFlagsMap:(id)arg1;
- (void)setChangedAssetsFetchResult:(id)arg1;
- (id)updates;

@end
