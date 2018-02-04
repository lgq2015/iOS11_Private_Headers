/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATDownloadProgressManager : NSObject <ATAssetLinkControllerObserver, ATDownloadProgressListener, NSXPCListenerDelegate> {
    NSMutableSet * _downloadObservers;
    NSXPCListener * _listener;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)assetLinkController:(id)arg1 didEnqueueAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didProcessFinishedAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2;
- (void)getAllDownloadsWithReplyBlock:(id /* block */)arg1;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)prioritizeDownloadWithStoreForLibraryIdentifier:(long long)arg1 withReplyBlock:(id /* block */)arg2;
- (void)start;
- (void)stop;

@end
