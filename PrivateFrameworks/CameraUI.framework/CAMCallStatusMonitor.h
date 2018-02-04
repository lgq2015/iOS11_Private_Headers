/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMCallStatusMonitor : NSObject {
    NSObject<OS_dispatch_queue> * __avscAccessQueue;
    NSMutableSet * __disabledReasons;
    bool  _callActive;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_avscAccessQueue;
@property (nonatomic, readonly) NSMutableSet *_disabledReasons;
@property (getter=isCallActive, nonatomic) bool callActive;

- (void).cxx_destruct;
- (void)_accessQueue_queryCallActiveStatusForReason:(id)arg1;
- (id)_avscAccessQueue;
- (id)_descriptionForReasons:(id)arg1;
- (id)_descriptionStringForReason:(long long)arg1;
- (id)_disabledReasons;
- (void)_enableCallStatusMonitor;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_handleCallIsActiveDidChangeNotification:(id)arg1;
- (void)_handleServerConnectionDiedNotification:(id)arg1;
- (void)_registerForAVSystemControllerNotifications;
- (void)_setCallActive:(bool)arg1;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)addDisabledReason:(long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initDisabledForLaunch;
- (id)initWithInitialDisabledReasons:(id)arg1;
- (bool)isCallActive;
- (void)removeDisabledReason:(long long)arg1;
- (void)setCallActive:(bool)arg1;

@end
