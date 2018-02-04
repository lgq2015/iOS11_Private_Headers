/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationStateForegroundNoDestination : MNNavigationStateCommute

- (unsigned long long)desiredCommuteSessionState;
- (unsigned long long)desiredLocationProviderType;
- (unsigned long long)desiredResourcePolicy;
- (void)startPredictingDestinationsWithHandler:(id /* block */)arg1;
- (unsigned long long)type;
- (void)updateMapsActive:(bool)arg1;

@end