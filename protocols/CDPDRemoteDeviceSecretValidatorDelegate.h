/* made by EzioChiu.
 */

@protocol CDPDRemoteDeviceSecretValidatorDelegate <CDPDDeviceSecretValidatorDelegate>

@required

- (void)cancelRemoteSecretValidatorApplicationToJoinCircle:(CDPDRemoteDeviceSecretValidator *)arg1;
- (void)remoteSecretValidator:(void *)arg1 applyToJoinCircleWithJoinHandler:(void *)arg2; // needs 2 arg types, found 8: CDPDRemoteDeviceSecretValidator *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
