/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUVideoEditPluginDataSource : NSObject <PUVideoEditPluginSessionDataSource> {
    bool  _allowsRevertInSession;
    PHAsset * _videoAsset;
}

@property (nonatomic) bool allowsRevertInSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PHAsset *videoAsset;

- (void).cxx_destruct;
- (void)_fetchCanRevertAsset:(id)arg1 asynchronously:(bool)arg2 handler:(id /* block */)arg3;
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(bool)arg3 resultHandler:(id /* block */)arg4;
- (bool)allowsRevertInSession;
- (void)editPluginSession:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)editPluginSession:(id)arg1 loadAdjustmentDataWithHandler:(id /* block */)arg2;
- (void)editPluginSession:(id)arg1 loadPlaceholderImageWithHandler:(id /* block */)arg2;
- (void)editPluginSession:(id)arg1 loadVideoURLWithHandler:(id /* block */)arg2;
- (void)editPluginSession:(id)arg1 revertToOriginalWithCompletionHandler:(id /* block */)arg2;
- (bool)editPluginSessionCanRevertToOriginal:(id)arg1;
- (id)init;
- (id)initWithVideoAsset:(id)arg1;
- (void)setAllowsRevertInSession:(bool)arg1;
- (void)setVideoAsset:(id)arg1;
- (id)videoAsset;

@end
