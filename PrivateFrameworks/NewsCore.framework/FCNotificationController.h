/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNotificationController : NSObject <FCUserInfoObserving> {
    FCAppConfigurationManager * _appConfigManager;
    FCCommandQueue * _commandQueue;
    NSString * _deviceToken;
    NSString * _notificationsUserID;
    FCUserInfo * _userInfo;
}

@property (nonatomic, retain) FCAppConfigurationManager *appConfigManager;
@property (nonatomic, retain) FCCommandQueue *commandQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceToken;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *notificationsUserID;
@property (readonly) Class superclass;
@property (nonatomic, retain) FCUserInfo *userInfo;

- (void).cxx_destruct;
- (void)_registerDeviceToken:(id)arg1;
- (id)appConfigManager;
- (id)appendBreakingNewsIfNeededToChannelIDs:(id)arg1;
- (id)commandQueue;
- (void)dealloc;
- (id)deviceToken;
- (id)init;
- (id)initWithUserInfo:(id)arg1 commandQueue:(id)arg2 appConfigurationManager:(id)arg3;
- (id)notificationsUserID;
- (bool)refreshNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2;
- (void)registerDeviceToken:(id)arg1;
- (bool)registerNotificationsForTagID:(id)arg1 isPaid:(bool)arg2;
- (void)setAppConfigManager:(id)arg1;
- (void)setCommandQueue:(id)arg1;
- (void)setDeviceToken:(id)arg1;
- (void)setNotificationsUserID:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)unregisterNotificationsForTagID:(id)arg1;
- (id)userInfo;
- (void)userInfoDidChangeNotificationsUserID:(id)arg1;

@end
