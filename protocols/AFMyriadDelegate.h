/* made by EzioChiu.
 */

@protocol AFMyriadDelegate <NSObject>

@optional

- (void)advertisingDidBegin:(AFMyriadCoordinator *)arg1;
- (void)advertisingDidEnd:(AFMyriadCoordinator *)arg1;
- (void)listeningDidBegin:(AFMyriadCoordinator *)arg1;
- (void)listeningDidEnd:(AFMyriadCoordinator *)arg1;
- (void)shouldAbortAnotherDeviceBetter:(AFMyriadCoordinator *)arg1;
- (void)shouldContinue:(AFMyriadCoordinator *)arg1;
- (void)shouldHandleEmergency:(AFMyriadCoordinator *)arg1;
- (void)shouldUnduck:(AFMyriadCoordinator *)arg1;

@end
