/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPServerObjectProxy : NSObject {
    unsigned int  _didPrepareForRemoteSelectorInvocation;
    double  _lastPrepareAttemptTime;
    unsigned int  _lastPrepareForRemoteSelectorInvocationTimedOut;
}

+ (id)_center;

- (void)_messagingCenterDied:(id)arg1;
- (bool)_performRemoteSelector:(SEL)arg1 userInfo:(id)arg2 timeout:(double)arg3;
- (id)_performRemoteSelectorAndReceiveReply:(SEL)arg1 userInfo:(id)arg2 timeout:(double)arg3;
- (void)_serverConnectionDied;
- (void)dealloc;
- (void)didPrepareForRemoteSelectorInvocation;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (bool)prepareForRemoteSelectorInvocation;
- (bool)prepareForRemoteSelectorInvocationWithTimeout:(double*)arg1;
- (void)serverConnectionDied;

@end
