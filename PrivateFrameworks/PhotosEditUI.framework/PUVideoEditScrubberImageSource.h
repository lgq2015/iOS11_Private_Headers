/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUVideoEditScrubberImageSource : NSObject {
    NSMutableDictionary * _cachedImages;
    AVAssetImageGenerator * _imageGenerator;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumThumbnailSize;
    NSMutableArray * _pendingTimestampRequests;
    NSMutableDictionary * _requestCompletionHandlers;
    AVAsset * _videoAsset;
    AVVideoComposition * _videoComposition;
}

@property (nonatomic) struct CGSize { double x1; double x2; } maximumThumbnailSize;
@property (nonatomic, readonly) AVAsset *videoAsset;
@property (nonatomic, readonly) AVVideoComposition *videoComposition;

- (void).cxx_destruct;
- (void)_handleGeneratorResult:(long long)arg1 image:(struct CGImage { }*)arg2 requestedTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 actualTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 error:(id)arg5 cmTimeToDouble:(id)arg6;
- (void)_isolationQueue_handleGeneratorResult:(long long)arg1 image:(struct CGImage { }*)arg2 requestedTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 actualTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 error:(id)arg5 cmTimeToDouble:(id)arg6;
- (void)_isolationQueue_processPendingRequests;
- (void)_performThumbnailRequestForTimestamp:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)cancelPendingThumbnailRequests;
- (void)dealloc;
- (void)enqueueThumbnailRequestForTimestamp:(id)arg1 withResultHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithAVAsset:(id)arg1;
- (id)initWithAVAsset:(id)arg1 videoComposition:(id)arg2;
- (struct CGSize { double x1; double x2; })maximumThumbnailSize;
- (void)processPendingThumbnailRequests;
- (void)setMaximumThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (id)videoAsset;
- (id)videoComposition;

@end
