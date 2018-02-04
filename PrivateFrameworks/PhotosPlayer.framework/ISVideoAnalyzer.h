/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISVideoAnalyzer : NSObject {
    long long  __currentRequestID;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSOperationQueue * _operationQueue;
    NSMutableDictionary * _operationsByRequestID;
}

@property (setter=_setCurrentRequestID:, nonatomic) long long _currentRequestID;

+ (id)defaultAnalyzer;

- (void).cxx_destruct;
- (long long)_currentRequestID;
- (void)_handleAllFrameTimesRequestFinishedForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 frameTimes:(id)arg2 completion:(id /* block */)arg3;
- (void)_setCurrentRequestID:(long long)arg1;
- (id)init;
- (long long)requestAllFrameTimesInAsset:(id)arg1 trackID:(int)arg2 completion:(id /* block */)arg3;
- (long long)requestFrameTimesAroundTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inAsset:(id)arg2 trackID:(int)arg3 completion:(id /* block */)arg4;

@end
