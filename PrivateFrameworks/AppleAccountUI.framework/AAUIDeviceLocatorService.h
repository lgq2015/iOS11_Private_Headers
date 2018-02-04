/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIDeviceLocatorService : NSObject {
    NSMutableArray * _completionArray;
    bool  _hasAttemptedToFetchState;
    unsigned long long  _lastKnownState;
    NSObject<OS_dispatch_queue> * _stateUpdateQueue;
    bool  _wantsToEnable;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_stateUpdateQueue_callCompletionsIfNecessary;
- (void)_updateStateAndNotify:(bool)arg1;
- (void)disableInContext:(unsigned long long)arg1 withWipeToken:(id)arg2;
- (void)disableInContext:(unsigned long long)arg1 withWipeToken:(id)arg2 completion:(id /* block */)arg3;
- (void)enableInContext:(unsigned long long)arg1;
- (void)enableInContext:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)init;
- (bool)isChangingState;
- (bool)isEnabled;
- (bool)isStateKnown;
- (void)setShouldEnable:(bool)arg1;
- (bool)shouldEnable;

@end
