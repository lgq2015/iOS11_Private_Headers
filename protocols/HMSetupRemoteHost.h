/* made by EzioChiu.
 */

@protocol HMSetupRemoteHost

@required

- (void)accessorySetupDidBeginPairing;
- (void)accessorySetupDidFinishPairing;
- (void)accessorySetupDidFinishWithError:(NSError *)arg1;
- (void)accessorySetupDidLoad;

@end
