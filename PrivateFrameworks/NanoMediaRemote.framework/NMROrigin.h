/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMROrigin : NSObject <NMROriginMediaRemoteObserverNotificationHandler> {
    void * _mediaRemoteOrigin;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) bool isLocal;
@property (nonatomic, readonly) void*mediaRemoteOrigin;
@property (nonatomic, readonly) int originType;
@property (nonatomic, readonly) NSNumber *uniqueIdentifier;

+ (void*)_originFromNotification:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)initWithMROriginRef:(void*)arg1;
- (bool)isLocal;
- (void*)mediaRemoteOrigin;
- (int)originType;
- (bool)shouldHandleNotification:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateWithMROrigin:(void*)arg1;

@end
