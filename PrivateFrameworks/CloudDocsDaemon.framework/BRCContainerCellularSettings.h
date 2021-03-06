/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCContainerCellularSettings : NSObject {
    <NSObject> * _accountDidChangeNotificationObserver;
    NSNumber * _isCellularEnabledForDocumentsAndData;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)_notifAccountStore;
+ (id)containerCellularSettings;

- (void).cxx_destruct;
- (void)_accountDidChange;
- (bool)_isCellularEnabledForBundleID:(id)arg1;
- (bool)_isCellularEnabledForDocumentsAndData;
- (void)dealloc;
- (id)init;
- (bool)isCellularEnabledForContainerID:(id)arg1;

@end
