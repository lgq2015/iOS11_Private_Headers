/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVSubscriptionStatusCoordinator : NSObject {
    SSVSubscriptionStatusRequest * _activeRequest;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _didReset;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    SSVSubscriptionStatus * _lastKnownStatus;
    NSDate * _lastStatusDate;
    int  _notificationToken;
    NSMutableArray * _statusBlocks;
}

@property (readonly, copy) SSVSubscriptionStatus *lastKnownStatus;

+ (id)_changeNotificationSuspensionAccessQueue;
+ (id)_existingSharedCoordinator;
+ (void)_sendChangeNotification;
+ (void)beginSuspendingSubscriptionStatusChangeNotifications;
+ (id)copyStatusFromUserDefaults;
+ (void)endSuspendingSubscriptionStatusChangeNotifications;
+ (void)removeUserDefaultsForAccountIdentifier:(id)arg1;
+ (void)sendChangeNotification;
+ (id)sharedCoordinator;
+ (void)updateUserDefaultsWithStatus:(id)arg1;
+ (void)updateWithResponseDictionary:(id)arg1 accountIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)_copyStatusDateFromUserDefaults;
- (id)_copyStatusFromUserDefaults;
- (id)_copyValidStatusForStatus:(id)arg1;
- (void)_deviceStoreFrontChangedNotification;
- (void)_externalChangeNotification;
- (void)_fireStatusBlocksWithStatus:(id)arg1 isFinal:(bool)arg2 error:(id)arg3;
- (void)_handleRequestResponseWithStatus:(id)arg1 isFinal:(bool)arg2 error:(id)arg3;
- (void)_invalidateLastKnownStatus;
- (void)_validateLastKnownStatus;
- (void)dealloc;
- (void)getStatusWithOptions:(id)arg1 statusBlock:(id /* block */)arg2;
- (id)init;
- (id)lastKnownStatus;
- (void)modifyLastKnownStatusUsingBlock:(id /* block */)arg1;
- (void)reset;

@end
