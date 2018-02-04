/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPasscodeLockManager : NSObject <MCProfileConnectionObserver> {
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _isPasscodeSet;
    NSHashTable * _observers;
    MCProfileConnection * _profileConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPasscodeSet;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isPasscodeSet;
- (void)profileConnectionDidReceivePasscodeChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)removeObserver:(id)arg1;

@end
