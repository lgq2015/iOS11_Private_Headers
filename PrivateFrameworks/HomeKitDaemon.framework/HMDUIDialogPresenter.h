/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUIDialogPresenter : HMFObject {
    id  _currentContext;
    struct __CFUserNotification { } * _currentNotification;
    NSObject<OS_dispatch_semaphore> * _notificationSem;
    bool  _peerDeviceAcceptedSelection;
    NSMutableArray * _pendingContexts;
    bool  _selectedByPeerDevice;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) id currentContext;
@property (nonatomic) struct __CFUserNotification { }*currentNotification;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *notificationSem;
@property (nonatomic) bool peerDeviceAcceptedSelection;
@property (nonatomic, retain) NSMutableArray *pendingContexts;
@property (nonatomic) bool selectedByPeerDevice;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedUIDialogPresenter;

- (void).cxx_destruct;
- (bool)_addCurrentNotification:(struct __CFUserNotification { }*)arg1 withContext:(id)arg2;
- (bool)_addToPendingContext:(id)arg1;
- (void)_confirmAddUser:(id)arg1 toHome:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_confirmRemoveUser:(id)arg1 fromHome:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_displayInternalErrorWithContext:(id)arg1 message:(id)arg2;
- (void)_displayKeychainSyncForHome:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_displayUpgradeNeededWithContext:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_displayiCloudSwitchWithContext:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_isPendingContext:(id)arg1;
- (bool)_presentDialogWithInfo:(id)arg1 options:(unsigned long long)arg2 targetResponse:(unsigned long long)arg3 textField:(id*)arg4 withContext:(id)arg5;
- (bool)_presentDialogWithInfo:(id)arg1 options:(unsigned long long)arg2 targetResponse:(unsigned long long)arg3 textField:(id*)arg4 withContext:(id)arg5 selectedByPeerDevice:(bool*)arg6 timeout:(double)arg7;
- (bool)_presentDialogWithInfo:(id)arg1 options:(unsigned long long)arg2 textField:(id*)arg3 withContext:(id)arg4;
- (bool)_removeCurrentNotification:(struct __CFUserNotification { }*)arg1 currentSelection:(bool)arg2 selectedByPeerDevice:(bool*)arg3 andContext:(id)arg4;
- (void)_requestPairingPasswordForAccessory:(id)arg1 home:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_requestUserPermissionForLegacyWACAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_requestUserPermissionForUnauthenticatedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)confirmAddUser:(id)arg1 toHome:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)confirmRemoveUser:(id)arg1 fromHome:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)confirmReportAccessory:(id)arg1 context:(id)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)currentContext;
- (struct __CFUserNotification { }*)currentNotification;
- (void)dismissPendingDialogDueToPeerDeviceSelection:(bool)arg1 context:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)dismissPendingDialogWithContext:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)displayExecutionErrorOfTrigger:(id)arg1 partialSuccess:(bool)arg2 context:(id)arg3 completionQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)displayInternalErrorWithContext:(id)arg1 message:(id)arg2;
- (void)displayKeychainSyncForHome:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)displayUpgradeNeededWithContext:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)displayiCloudSwitchWithContext:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)notificationSem;
- (bool)peerDeviceAcceptedSelection;
- (id)pendingContexts;
- (void)requestPairingPasswordForAccessory:(id)arg1 home:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)requestUserPermissionForLegacyWACAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)requestUserPermissionForUnauthenticatedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)selectedByPeerDevice;
- (void)setCurrentContext:(id)arg1;
- (void)setCurrentNotification:(struct __CFUserNotification { }*)arg1;
- (void)setNotificationSem:(id)arg1;
- (void)setPeerDeviceAcceptedSelection:(bool)arg1;
- (void)setPendingContexts:(id)arg1;
- (void)setSelectedByPeerDevice:(bool)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
