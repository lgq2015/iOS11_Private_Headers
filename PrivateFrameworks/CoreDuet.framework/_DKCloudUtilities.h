/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKCloudUtilities : NSObject {
    NSObject<OS_dispatch_queue> * _fetchQueue;
    bool  _isCloudSyncAvailable;
    bool  _isSingleDevice;
}

@property (nonatomic, readonly) bool isCloudSyncAvailable;
@property (nonatomic, readonly) bool isSingleDevice;

+ (id)containerIdentifier;
+ (bool)isCloudKitEnabled;
+ (bool)isSyncAvailableAndEnabled;
+ (bool)isUnitTesting;
+ (void)setCloudKitEnabled:(bool)arg1;
+ (void)setUnitTesting:(bool)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_accountDidChange:(id)arg1;
- (void)_fetchAccountInfoWithCompletionHandler:(id /* block */)arg1;
- (void)_fetchCloudKitConfigurationAndStatus;
- (void)_performUpdateNumberOfSyncedDevicesWithAttempt:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_performUpdateNumberOfSyncedDevicesWithCompletionHandler:(id /* block */)arg1;
- (void)_resetServerChangeToken;
- (void)_updateAccountInfo:(id)arg1 error:(id)arg2;
- (void)_updateNumberOfSyncedDevicesWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteRemoteStateWithReply:(id /* block */)arg1;
- (id)init;
- (bool)isCloudSyncAvailable;
- (bool)isSingleDevice;
- (void)setCloudSyncAvailable:(bool)arg1;

@end
