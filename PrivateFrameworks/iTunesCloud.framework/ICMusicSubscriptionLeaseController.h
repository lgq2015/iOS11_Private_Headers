/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionLeaseController : NSObject <ICEnvironmentMonitorObserver, ICMusicSubscriptionLeaseSessionDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _accountDSIDToFairPlayKeyStatus;
    NSMutableDictionary * _cacheKeyToLeaseSession;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    bool  _hasReceivedUserInteractionEvent;
    bool  _isRemoteServerLikelyReachable;
    bool  _isServerReachable;
    int  _leaseDidEndNotificationToken;
    NSOperationQueue * _leaseSessionPreparationOperationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_handlePlaybackLeaseDidEndPushNotification;
- (id)_init;
- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)getLeaseSessionWithRequestContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)musicLeaseSession:(id)arg1 didFinishPlaybackRequest:(id)arg2 withPlaybackResponse:(id)arg3 responseError:(id)arg4 updatedFairPlayKeyStatusList:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)receivedUserInteractionEvent;

@end
