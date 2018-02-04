/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRadioController : NSObject <MPClientRadioController> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSXPCConnection * _connection;
    bool  _hasLaunchedService;
    bool  _isRadioAvailable;
    BKSProcessAssertion * _remoteProcessAssertion;
    id /* block */  _remoteProcessAssertionCompletionHandler;
    long long  _remoteProcessAssertionCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isRadioAvailable, nonatomic, readonly) bool radioAvailable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginRemoteProcessAssertionWithCompletionHandler:(id /* block */)arg1;
- (void)_endRemoteProcessAssertion;
- (void)_getConnectionWithCompletionHandler:(id /* block */)arg1;
- (void)_setRadioAvailable:(bool)arg1;
- (void)clientRadioControllerRadioAvailabilityDidChange:(bool)arg1;
- (void)clientRadioControllerRecentStationsDidChange;
- (void)dealloc;
- (void)getRecentStationGroupsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (bool)isRadioAvailable;

@end
