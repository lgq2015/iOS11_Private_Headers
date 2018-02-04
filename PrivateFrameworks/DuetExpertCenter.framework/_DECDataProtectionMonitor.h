/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECDataProtectionMonitor : NSObject {
    long long  _dataProtectionStatus;
    <_DECDataProtectionMonitorDelegate> * _delegate;
    long long  _encryptedDataAvailability;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _rwlock;
    bool  _unlockedSinceBoot;
}

@property (nonatomic, readonly) long long dataProtectionStatus;
@property (nonatomic) <_DECDataProtectionMonitorDelegate> *delegate;
@property (nonatomic, readonly) long long encryptedDataAvailability;
@property (nonatomic, readonly) bool unlockedSinceBoot;

+ (id)_DECDataProtectionMonitorDataProtectionStatus:(long long)arg1;
+ (id)_DECDataProtectionMonitorEncryptedDataAvailabilityToString:(long long)arg1;
+ (id)_DECDataProtectionMonitorLockStateToString:(long long)arg1;

- (void).cxx_destruct;
- (void)_registerForKeyBagNotifications;
- (bool)dataProtectionEnabled;
- (long long)dataProtectionStatus;
- (void)dealloc;
- (id)delegate;
- (long long)encryptedDataAvailability;
- (void)handkeKeybagLockStatusChange:(long long)arg1;
- (void)handleUnlockedSinceBoot;
- (id)init;
- (void)setDataProtectionStatus:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEncryptedDataAvailability:(long long)arg1;
- (void)setUnlockedSinceBoot:(bool)arg1;
- (bool)unlockedSinceBoot;

@end
