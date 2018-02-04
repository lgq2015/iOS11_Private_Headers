/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLLoopingMediaItemViewController : QLMediaItemBaseViewController {
    bool  _addedObservers;
    UIColor * _fullscreenBackgroundColor;
    AVQueuePlayer * _queuePlayer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)fullscreenBackgroundColor;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)play;
- (id)player;
- (void)previewDidAppear:(bool)arg1;
- (void)setupPlayerWithMediaAsset:(id)arg1;
- (void)startObservingItem;
- (void)stopObservingItem;

@end
