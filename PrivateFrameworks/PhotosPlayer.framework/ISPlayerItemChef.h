/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISPlayerItemChef : NSObject {
    long long  __currentRequestID;
    NSObject<OS_dispatch_queue> * __isolationQueue;
    NSOperationQueue * __operationQueue;
    NSMutableDictionary * __operationsByRequestID;
}

@property (setter=_setCurrentRequestID:, nonatomic) long long _currentRequestID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_isolationQueue;
@property (nonatomic, readonly) NSOperationQueue *_operationQueue;
@property (nonatomic, readonly) NSMutableDictionary *_operationsByRequestID;

+ (id)defaultChef;

- (void).cxx_destruct;
- (long long)_currentRequestID;
- (id)_isolationQueue;
- (id)_operationQueue;
- (id)_operationsByRequestID;
- (void)_setCurrentRequestID:(long long)arg1;
- (void)cancelPreparationOfIrisAssetWithRequestID:(long long)arg1;
- (id)init;
- (long long)prepareIrisPlayerItemWithAsset:(id)arg1 trimmedTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 photoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 includeVideo:(bool)arg4 includeAudio:(bool)arg5 completion:(id /* block */)arg6;
- (long long)prepareIrisVideoWithAsset:(id)arg1 photoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 trimmedTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 completion:(id /* block */)arg4;

@end