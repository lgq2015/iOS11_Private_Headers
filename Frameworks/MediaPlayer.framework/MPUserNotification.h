/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPUserNotification : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _callbackInvocationQueue;
    struct __CFUserNotification { } * _cfUserNotification;
    bool  _isShowing;
    struct __CFRunLoopSource { } * _runLoopSource;
    NSMutableArray * _showingCompletionHandlers;
    id /* block */  _willShowNotificationHandler;
    id  strongSelf;
}

@property (nonatomic, readonly) struct __CFUserNotification { }*cfUserNotification;
@property (nonatomic, copy) id /* block */ willShowNotificationHandler;

+ (void)_setUserNotification:(id)arg1 forCFUserNotification:(struct __CFUserNotification { }*)arg2;
+ (id)_userNotificationConversionAccessQueue;
+ (id)_userNotificationForCFUserNotification:(struct __CFUserNotification { }*)arg1;

- (void).cxx_destruct;
- (void)_cancelSynchronously:(bool)arg1;
- (void)_didReceiveResponseWithFlags:(unsigned long long)arg1;
- (void)cancel;
- (struct __CFUserNotification { }*)cfUserNotification;
- (void)dealloc;
- (id)init;
- (id)initWithCFUserNotification:(struct __CFUserNotification { }*)arg1;
- (void)setWillShowNotificationHandler:(id /* block */)arg1;
- (void)showWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)willShowNotificationHandler;

@end
