/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLNotificationCenter : NSObject <QLNotificationCenterProtocol> {
    NSMutableArray * _bufferedNotifications;
    NSPointerArray * _observers;
    <QLNotificationCenterProtocol> * _remoteNotificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_bufferNotificationName:(id)arg1 userInfo:(id)arg2;
- (long long)_indexOfObserver:(id)arg1;
- (void)_sendEnqueuedNotifications;
- (bool)_tryPostingNotificationName:(id)arg1 userInfo:(id)arg2;
- (id)init;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)registerObserver:(id)arg1;
- (void)setRemoteNotificationCenter:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
