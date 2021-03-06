/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLBBPendingBulletinsBatch : NSObject {
    NSObject<OS_dispatch_source> * _coalescingTimerSource;
    int  _currentState;
    <PLBBPendingBulletinsBatchDelegate> * _delegate;
    bool  _downloadTimerExpired;
    NSObject<OS_dispatch_source> * _downloadTimerSource;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSMutableArray * _pendingBulletins;
}

@property (readonly) bool canAcceptMergeBulletins;
@property (readonly) bool canAcceptNewBulletins;
@property <PLBBPendingBulletinsBatchDelegate> *delegate;

- (void)_cancelCoalescingTimer;
- (void)_cancelDownloadTimer;
- (void)_evaluateAndProcessPendingBulletins;
- (void)_scheduleEvaluatePendingBulletins;
- (void)_startDownloadTimer;
- (void)_trackCompletionPercentageForState:(int)arg1;
- (void)_transitionToStateForEvent:(int)arg1;
- (bool)addBulletin:(id)arg1 forMergeOnly:(bool)arg2;
- (bool)canAcceptMergeBulletins;
- (bool)canAcceptNewBulletins;
- (void)dealloc;
- (id)delegate;
- (id)initWithIsolationQueue:(id)arg1;
- (void)noteAssetWithUUID:(id)arg1 didChangePlaceholderKindTo:(short)arg2 fromOldKind:(short)arg3;
- (void)removeBulletinsWithAlbumUUID:(id)arg1 bulletinTypes:(id)arg2;
- (void)removeBulletinsWithAssetUUID:(id)arg1 deleteCommentsOrLikesBulletin:(bool)arg2 deletePhotosAddedToAlbumBulletin:(bool)arg3;
- (void)setDelegate:(id)arg1;

@end
