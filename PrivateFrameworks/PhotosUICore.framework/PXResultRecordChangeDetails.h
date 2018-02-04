/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXResultRecordChangeDetails : NSObject {
    PHFetchResultChangeDetails * _exposedFetchResultChangeDetails;
    PHFetchResultChangeDetails * _keyAssetsFetchResultChangeDetails;
    PXResultRecord * _resultRecordAfterChanges;
    PXResultRecord * _resultRecordBeforeChanges;
}

@property (nonatomic, readonly) PHFetchResultChangeDetails *exposedFetchResultChangeDetails;
@property (nonatomic, readonly) PHFetchResultChangeDetails *keyAssetsFetchResultChangeDetails;
@property (nonatomic, readonly) PXResultRecord *resultRecordAfterChanges;
@property (nonatomic, readonly) PXResultRecord *resultRecordBeforeChanges;

+ (id)resultRecordChangeDetailsFor:(id)arg1 withChange:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)exposedFetchResultChangeDetails;
- (id)initWithResultRecordBeforeChanges:(id)arg1 resultRecordAfterChanges:(id)arg2 exposedFetchResultChangeDetails:(id)arg3 keyAssetsFetchResultChangeDetails:(id)arg4;
- (id)keyAssetsFetchResultChangeDetails;
- (id)resultRecordAfterChanges;
- (id)resultRecordBeforeChanges;

@end
