/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXQuickTypeBroker : PEXBroker {
    NSDate * _lastDetectedSinceDate;
    PEXNameLoadingContext * _lastNameLoadingContext;
    PEXNameDelegate * _nameLoadingDelegate;
    NSObject<OS_dispatch_queue> * _nameLoadingQueue;
    int  _nameResetCount;
    NSObject<OS_dispatch_source> * _namedEntityReloadTimer;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_namesForContext:(id)arg1 doReset:(bool)arg2;
- (void)_recentNamesFromSource:(unsigned char)arg1;
- (void)_recentNamesFromSource:(unsigned char)arg1 objects:(id)arg2;
- (void)_registerForNotifications;
- (void)deregisterNameDelegate;
- (id)init;
- (id)nameItemsWithLimit:(unsigned long long)arg1 timeout:(long long)arg2;
- (void)namesForContext:(id)arg1;
- (void)namesForContext:(id)arg1 detectedSince:(id)arg2;
- (id)quickTypeItemsForCriteria:(id)arg1 limit:(unsigned long long)arg2 timeout:(long long)arg3;
- (void)registerNameDelegate:(id)arg1;

@end
