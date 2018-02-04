/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUVideoEditMaker : NSObject {
    id /* block */  __exportCompletionBlock;
    id /* block */  __exportProgressBlock;
    NSTimer * __exportProgressTimer;
    PUVideoEditMakerOptions * __makerOptions;
    NSString * __outputFilePath;
    AVAssetExportSession * __trimExportSession;
    PFVideoAdjustments * __videoAdjustments;
    <PUEditableAsset> * __videoAsset;
    PUVideoEditModel * __videoEditModel;
    PUMediaDestination * __videoMediaDestination;
    bool  _isExportInProgress;
}

@property (setter=_setExportCompletionBlock:, nonatomic, copy) id /* block */ _exportCompletionBlock;
@property (setter=_setExportProgressBlock:, nonatomic, copy) id /* block */ _exportProgressBlock;
@property (setter=_setExportProgressTimer:, nonatomic, retain) NSTimer *_exportProgressTimer;
@property (setter=_setMakerOptions:, nonatomic, copy) PUVideoEditMakerOptions *_makerOptions;
@property (setter=_setOutputFilePath:, nonatomic, retain) NSString *_outputFilePath;
@property (setter=_setTrimExportSession:, nonatomic, retain) AVAssetExportSession *_trimExportSession;
@property (setter=_setVideoAdjustments:, nonatomic, retain) PFVideoAdjustments *_videoAdjustments;
@property (nonatomic, readonly) <PUEditableAsset> *_videoAsset;
@property (nonatomic, readonly) PUVideoEditModel *_videoEditModel;
@property (nonatomic, readonly) PUMediaDestination *_videoMediaDestination;

+ (bool)canTrimAssetInPlace:(id)arg1;

- (void).cxx_destruct;
- (void)_callProgressBlockWithProgress:(float)arg1 shouldDestroyBlock:(bool)arg2;
- (void)_endSessionWithSuccess:(bool)arg1 duplicateAsset:(id)arg2;
- (id /* block */)_exportCompletionBlock;
- (id /* block */)_exportProgressBlock;
- (id)_exportProgressTimer;
- (id)_makerOptions;
- (void)_newAssetAfterTrim;
- (id)_outputFilePath;
- (void)_replaceOriginalAfterTrim;
- (void)_runTrimExportSession;
- (void)_saveSlomoForVideo;
- (void)_setExportCompletionBlock:(id /* block */)arg1;
- (void)_setExportProgressBlock:(id /* block */)arg1;
- (void)_setExportProgressTimer:(id)arg1;
- (void)_setMakerOptions:(id)arg1;
- (void)_setOutputFilePath:(id)arg1;
- (void)_setTrimExportSession:(id)arg1;
- (void)_setVideoAdjustments:(id)arg1;
- (id)_trimExportSession;
- (void)_trimVideo;
- (void)_updateExportProgressTimer;
- (id)_videoAdjustments;
- (id)_videoAsset;
- (id)_videoEditModel;
- (id)_videoMediaDestination;
- (void)exportVideowithOptions:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithAsset:(id)arg1 mediaDestination:(id)arg2 editModel:(id)arg3;

@end
