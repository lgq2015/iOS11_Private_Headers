/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioAvailabilityController : NSObject <ICEnvironmentMonitorObserver, MCProfileConnectionObserver> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutSerialQueue;
    bool  _hasSuccessfullyLoadedURLBag;
    bool  _isRadioAvailable;
    bool  _isRadioAvailableFromBag;
    bool  _isRadioRestricted;
    NSNumber * _lastActiveAccountUniqueIdentifier;
    NSObject<OS_dispatch_queue> * _restrictionLoadQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasLoadedRadioAvailability;
@property (readonly) unsigned long long hash;
@property (getter=isRadioAvailable, nonatomic, readonly) bool radioAvailable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_calculateRadioRestricted;
- (id)_currentStoreFrontIdentifier;
- (void)_reloadRadioBagAvailabilityWithCompletionHandler:(id /* block */)arg1;
- (void)_reloadRadioRestriction;
- (void)_updateRadioAvailabilityAllowingNotifications:(bool)arg1;
- (void)_updateRadioAvailabilityWithStoreBagDictionary:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_userDefaultsDomain;
- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)getRadioAvailabilityWithCompletionHandler:(id /* block */)arg1;
- (bool)hasLoadedRadioAvailability;
- (id)init;
- (bool)isRadioAvailable;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;

@end
