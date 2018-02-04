/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMNotificationCenterEventListener : IMEventListener {
    NSString * _notificationName;
    id  _notificationObject;
    NSString * _registeredNotificationName;
}

@property (readonly) bool isRegisteredForNotification;
@property (readonly, copy) NSString *notificationName;
@property (readonly) id notificationObject;
@property (nonatomic, readonly) NSString *registeredNotificationName;

+ (id)eventListenerForNotificationName:(id)arg1;
+ (id)eventListenerForNotificationName:(id)arg1 object:(id)arg2;

- (void).cxx_destruct;
- (void)_notification:(id)arg1;
- (void)dealloc;
- (bool)isListening;
- (bool)isRegisteredForNotification;
- (id)notificationName;
- (id)notificationObject;
- (void)registerForNotificationName:(id)arg1;
- (void)registerForNotificationName:(id)arg1 object:(id)arg2;
- (id)registeredNotificationName;
- (void)willReset;
- (void)willStartListening;
- (void)willStopListening;

@end
