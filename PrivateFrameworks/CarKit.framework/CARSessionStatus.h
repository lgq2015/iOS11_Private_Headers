/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CARSessionStatus : NSObject {
    NSObject<OS_dispatch_source> * _connectingTimer;
    CARSessionChangedNotificationConverter * _notificationConverter;
    CARSession * _session;
    <CARSessionObserving> * _sessionObserver;
    NSObject<OS_dispatch_queue> * _sessionUpdatesQueue;
    unsigned long long  _timeoutInterval;
}

@property (nonatomic, retain) NSObject<OS_dispatch_source> *connectingTimer;
@property (nonatomic, readonly) CARSession *currentSession;
@property (nonatomic, retain) CARSessionChangedNotificationConverter *notificationConverter;
@property (nonatomic, retain) CARSession *session;
@property (nonatomic) <CARSessionObserving> *sessionObserver;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *sessionUpdatesQueue;
@property (nonatomic) unsigned long long timeoutInterval;

- (void).cxx_destruct;
- (void)_handleAuthenticationSucceeded:(id)arg1;
- (void)_handleConnectingTimeout;
- (void)_handleInCarNotification;
- (void)_handleSessionChanged;
- (void)_notifyCancelledConnectionAttemptOnTransport:(unsigned long long)arg1;
- (void)_notifyDidConnectSession:(id)arg1;
- (void)_notifyDidDisconnectSession:(id)arg1;
- (void)_notifyStartedConnectionAttemptOnTransport:(unsigned long long)arg1;
- (void)_startConnectingTimer;
- (void)_stopConnectingTimer;
- (void)_updateSession;
- (id)connectingTimer;
- (id)currentSession;
- (void)dealloc;
- (id)init;
- (id)notificationConverter;
- (id)session;
- (id)sessionObserver;
- (id)sessionUpdatesQueue;
- (void)setConnectingTimer:(id)arg1;
- (void)setNotificationConverter:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionObserver:(id)arg1;
- (void)setSessionUpdatesQueue:(id)arg1;
- (void)setTimeoutInterval:(unsigned long long)arg1;
- (unsigned long long)timeoutInterval;
- (void)waitForSessionInitialization;

@end
