/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioPushNotificationController : NSObject <APSConnectionDelegate> {
    APSConnection * _connection;
    <RadioPushNotificationControllerDelegate> * _delegate;
    NSString * _environment;
    bool  _notificationsEnabled;
    bool  _pushEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RadioPushNotificationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool notificationsEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadURLBagWithCompletionHandler:(id /* block */)arg1;
- (id)_portNameForEnvironmentName:(id)arg1;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)notificationsEnabled;
- (void)setDelegate:(id)arg1;
- (void)setNotificationsEnabled:(bool)arg1;

@end
