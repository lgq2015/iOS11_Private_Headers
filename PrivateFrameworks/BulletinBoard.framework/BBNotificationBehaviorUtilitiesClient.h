/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBNotificationBehaviorUtilitiesClient : NSObject <BBNotificationBehaviorUtilitiesClientProtocol> {
    id /* block */  _activeBehaviorOverridesChangeHandler;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSXPCConnection * _connection;
    id /* block */  _filteringStateChangeHandler;
    int  _listeningToken;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterface;

- (void).cxx_destruct;
- (id)_queue_connection;
- (void)_queue_invalidate;
- (void)_registerForPublicationNotification;
- (void)activeBehaviorOverrideTypesChanged:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)dealloc;
- (void)establishXPCConnection;
- (id)init;
- (void)invalidate;
- (void)notificationPresentationFilteringChangedToEnabled:(bool)arg1;
- (void)setActiveBehaviorOverridesChangeHandler:(id /* block */)arg1;
- (void)setFilteringStateChangeHandler:(id /* block */)arg1;
- (void)shouldPresentNotificationOfType:(int)arg1 fromSender:(id)arg2 withHandler:(id /* block */)arg3;

@end
