/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface AWDMetricReporter : NSObject

+ (void)reportPiggyBackWithSuccess:(bool)arg1 error:(id)arg2;
+ (void)reportStateMachineCircleJoinWithResult:(id)arg1 error:(id)arg2;
+ (void)reportStateMachineCompletionShouldCompleteSignIn:(bool)arg1 cloudDataProtectionEnabled:(bool)arg2 error:(id)arg3;
+ (void)reportStateMachineEnableCDPResult:(id)arg1;
+ (void)reportStateMachineLockAssertionWithError:(id)arg1;
+ (void)reportStateMachineRecoveryWithSecretType:(long long)arg1 userDidReset:(bool)arg2 error:(id)arg3;
+ (void)reportStateMachineRepairCircleAuth;
+ (void)reportStateMachineRepairHSA2AuthWithError:(id)arg1;

@end
