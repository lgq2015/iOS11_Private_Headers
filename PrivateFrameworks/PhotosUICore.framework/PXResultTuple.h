/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXResultTuple : NSObject {
    PHFetchResult * _curatedFetchResult;
    PHFetchResult * _fetchResult;
    PHFetchResult * _keyAssetsFetchResult;
}

@property (nonatomic, readonly) PHFetchResult *curatedFetchResult;
@property (nonatomic, readonly) PHFetchResult *fetchResult;
@property (nonatomic, readonly) PHFetchResult *keyAssetsFetchResult;

- (void).cxx_destruct;
- (id)curatedFetchResult;
- (id)description;
- (id)fetchResult;
- (id)initWithFetchResult:(id)arg1 curatedFetchResult:(id)arg2 keyAssetsFetchResult:(id)arg3;
- (id)keyAssetsFetchResult;
- (id)resultTupleUpdatedWithChange:(id)arg1;

@end
