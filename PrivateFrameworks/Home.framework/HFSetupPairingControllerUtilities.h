/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFSetupPairingControllerUtilities : NSObject

+ (id)_accessoryNotFoundStatusDescriptionSuffixForSetupResult:(id)arg1;
+ (double)accessoryDiscoveryFatalTimeout;
+ (double)accessoryDiscoverySoftTimeout;
+ (id)descriptionForPairingPhase:(unsigned long long)arg1;
+ (void)getStatusTitle:(id*)arg1 statusDescription:(id*)arg2 forPairingPhase:(unsigned long long)arg3 phaseStartDate:(id)arg4 discoveredAccessory:(id)arg5 setupResult:(id)arg6;
+ (bool)isPairingPhaseIdle:(unsigned long long)arg1;

@end
