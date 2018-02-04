/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryDownloadQueueResponse : MPModelResponse <MPMediaDownloadObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)downloadManager:(id)arg1 didEnqueueAssetDownloads:(id)arg2 didRemoveAssetDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 didFinishAsset:(id)arg2 withError:(id)arg3;
- (void)getChangeDetailsFromPreviousResponse:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithRequest:(id)arg1;

@end
