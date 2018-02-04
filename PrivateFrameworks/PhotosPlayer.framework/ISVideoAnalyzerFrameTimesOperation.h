/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISVideoAnalyzerFrameTimesOperation : NSOperation {
    AVAsset * _asset;
    AVAssetReader * _assetReader;
    AVAssetReaderSampleReferenceOutput * _assetReaderOutput;
    id /* block */  _resultHandler;
    int  _trackID;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic, readonly, copy) id /* block */ resultHandler;
@property (nonatomic, readonly) int trackID;

- (void).cxx_destruct;
- (void)_handleAssetDidLoadValues;
- (id)asset;
- (id)initWithAsset:(id)arg1 trackID:(int)arg2 resultHandler:(id /* block */)arg3;
- (void)main;
- (id /* block */)resultHandler;
- (int)trackID;

@end
