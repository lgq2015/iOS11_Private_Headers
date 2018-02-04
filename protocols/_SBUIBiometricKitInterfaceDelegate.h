/* made by EzioChiu.
 */

@protocol _SBUIBiometricKitInterfaceDelegate <NSObject>

@required

- (void)biometricKitInterface:(_SBUIBiometricKitInterface *)arg1 enrolledIdentitiesDidChange:(bool)arg2;
- (void)biometricKitInterface:(_SBUIBiometricKitInterface *)arg1 handleEvent:(unsigned long long)arg2;

@end
