/* made by EzioChiu.
 */

@protocol BYDaemonProximitySourceProtocol <NSObject>

@required

- (void)activateWithSharingChannel:(CUMessageSession *)arg1;
- (void)invalidate;

@end
