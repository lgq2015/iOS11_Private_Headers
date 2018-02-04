/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

@interface ADAdTrackingSchedulingManager : NSObject <APSConnectionDelegate> {
    <NSObject> * _cloudKitNotifyToken;
    bool  _isConfigRequestInFlight;
    APSConnection * _pushConnection;
    <NSObject> * _storeFrontNotifyToken;
}

@property (nonatomic, retain) <NSObject> *cloudKitNotifyToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isConfigRequestInFlight;
@property (nonatomic, retain) APSConnection *pushConnection;
@property (nonatomic, retain) <NSObject> *storeFrontNotifyToken;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)cloudKitNotifyToken;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (id)currentBundleID;
- (void)dealloc;
- (bool)deviceUnlockedOnce;
- (void)forceExpiration;
- (void)handleAccountChange;
- (void)handleConfiguration;
- (id)init;
- (bool)isAdEnabledLocality;
- (bool)isConfigRequestInFlight;
- (bool)purpleBuddyWillRun;
- (id)pushConnection;
- (void)pushDisable;
- (void)pushEnable;
- (void)refreshConfiguration:(id /* block */)arg1;
- (void)registerForLockStateNotification;
- (void)runOnFirstUnlock:(id /* block */)arg1;
- (void)setCloudKitNotifyToken:(id)arg1;
- (void)setIsConfigRequestInFlight:(bool)arg1;
- (void)setPushConnection:(id)arg1;
- (void)setStoreFrontNotifyToken:(id)arg1;
- (id)storeFrontNotifyToken;

@end
