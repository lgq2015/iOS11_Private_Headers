/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDPCModel : NSObject {
    NSString * _bundleID;
    NSMapTable * _identifiersToItems;
    NSObject<OS_dispatch_queue> * _imageProcessingQueue;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    NSObject<OS_dispatch_group> * _mediaRemoteGroup;
    NSObject<OS_dispatch_queue> * _mediaRemoteNotificationQueue;
    bool  _needsInvalidation;
    unsigned long long  _nextAllowedInvalidate;
    unsigned long long  _nextAllowedUpdate;
    NSCache * _resizedImages;
    MCDPCItem * _rootItem;
    NSObject<OS_dispatch_queue> * _serialAccessQueue;
    NSMutableSet * _updatedItems;
}

@property (nonatomic, readonly) NSString *appTitle;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, readonly) MCDPCItem *rootItem;

- (void).cxx_destruct;
- (void)_beginMediaRemoteAccess;
- (void)_contentItemsUpdated:(id)arg1;
- (void)_dataSourceInvalidated:(id)arg1;
- (void)_endMediaRemoteAccess;
- (void)_finishLoadingNotification:(id)arg1;
- (void)_mediaRemoteCommunicationWithIndexPath:(id)arg1 work:(id /* block */)arg2;
- (void)_nowPlayingAppDidChangeNotification:(id)arg1;
- (void)_nowPlayingDidChangeNotification:(id)arg1;
- (void)_performMediaRemoteAccess:(id /* block */)arg1 onQueue:(id)arg2;
- (void)_playbackInitiatedNotification:(id)arg1;
- (void)_populateImageForItem:(id)arg1;
- (void)_registerNotifications;
- (id)appTitle;
- (id)bundleID;
- (id)containerForRoot;
- (void)dealloc;
- (void)getChildrenAtIndexPath:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completion:(id /* block */)arg3;
- (void)getChildrenSupportsPlaybackProgressForIndexPath:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getCountOfChildrenAtIndexPath:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getItemAtIndexPath:(id)arg1 completion:(id /* block */)arg2;
- (void)getNowPlayingIdentifiersWithCompletion:(id /* block */)arg1;
- (void)getRemoteAppIsPlaying:(id /* block */)arg1;
- (id)imageForIdentifier:(id)arg1;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithBundleID:(id)arg1;
- (void)initiatePlaybackAtIndexPath:(id)arg1 completion:(id /* block */)arg2;
- (id)itemsFromMRContentItems:(id)arg1;
- (id)rootItem;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;

@end
