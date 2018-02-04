/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISFrameCurator : NSObject {
    int  _nextRequestID;
    NSMutableDictionary * _requestsByID;
    NSObject<OS_dispatch_queue> * _requestsByIDQueue;
    NSObject<OS_dispatch_queue> * _workQueue;
}

+ (id)defaultCurator;

- (void).cxx_destruct;
- (int)_nextRequestID;
- (id)_removeRequestWithID:(int)arg1;
- (void)_storeRequest:(id)arg1 withID:(int)arg2;
- (void)cancelRequestWithID:(int)arg1;
- (id)init;
- (int)requestBestFramesInVideo:(id)arg1 trackID:(int)arg2 completion:(id /* block */)arg3;

@end
