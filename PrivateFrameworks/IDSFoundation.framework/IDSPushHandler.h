/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSPushHandler : NSObject <APSConnectionDelegate> {
    Class  _APSConnectionClass;
    APSConnection * _apsConnection;
    NSData * _cachedPushToken;
    NSMapTable * _handlerMap;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    bool  _shouldWaitToSetTopics;
    NSMutableSet * _topicsCache;
}

@property (nonatomic, retain) Class APSConnectionClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isConnected;
@property (nonatomic, readonly) NSData *pushToken;
@property (nonatomic) bool shouldWaitToSetTopics;
@property (readonly) Class superclass;

+ (id)sharedInstance;
+ (id)sharedInstanceWithPortName:(id)arg1;

- (void).cxx_destruct;
- (Class)APSConnectionClass;
- (id)_apsConnectionPushToken;
- (void)_recalculateTopicsCacheOnIvarQueue;
- (void)_updateTopicsOnIvarQueue;
- (bool)_validateHandler:(id)arg1 withSelector:(SEL)arg2 topic:(id)arg3 command:(id)arg4;
- (void)addListener:(id)arg1 topics:(id)arg2 commands:(id)arg3 queue:(id)arg4;
- (void)configureAsMacNotificationCenterObserver:(id)arg1;
- (void)configureAsMacNotificationCenterObserver:(id)arg1 withPushToWakeTopics:(id)arg2;
- (void)connection:(id)arg1 didChangeConnectedStatus:(bool)arg2;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connectionDidReconnect:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPort:(id)arg1;
- (bool)isConnected;
- (id)pushToken;
- (void)removeListener:(id)arg1;
- (void)setAPSConnectionClass:(Class)arg1;
- (void)setCommands:(id)arg1 forListener:(id)arg2;
- (void)setShouldWaitToSetTopics:(bool)arg1;
- (void)setTopics:(id)arg1 forListener:(id)arg2;
- (bool)shouldWaitToSetTopics;

@end
