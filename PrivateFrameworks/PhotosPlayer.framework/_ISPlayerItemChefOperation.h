/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface _ISPlayerItemChefOperation : NSOperation {
    AVAsset * _asset;
    bool  _includeAudio;
    bool  _includeVideo;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _photoTime;
    id /* block */  _resultHandler;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _trimmedTimeRange;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic, readonly) bool includeAudio;
@property (nonatomic, readonly) bool includeVideo;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoTime;
@property (nonatomic, readonly, copy) id /* block */ resultHandler;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } trimmedTimeRange;

- (void).cxx_destruct;
- (void)_handleValuesDidLoad;
- (void)_preparePlayerItem;
- (id)asset;
- (bool)includeAudio;
- (bool)includeVideo;
- (id)initWithAsset:(id)arg1 trimmedTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 photoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 includeAudio:(bool)arg4 includeVideo:(bool)arg5 resultHandler:(id /* block */)arg6;
- (void)main;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoTime;
- (id /* block */)resultHandler;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })trimmedTimeRange;

@end
