/* made by EzioChiu.
 */

@protocol HDFitnessMachineConnectionInitiatorProtocol <NSObject>

@required

- (void)forbidConnectionForFitnessMachineSessionUUID:(NSUUID *)arg1 withConnectionUUID:(NSUUID *)arg2;
- (void)permitConnectionForFitnessMachineSessionUUID:(NSUUID *)arg1 activityType:(unsigned long long)arg2 withConnectionUUID:(NSUUID *)arg3;
- (void)registerConnectionInitiatorClient:(id <HKFitnessMachineConnectionInitiatorClientInterface>)arg1 withConnectionUUID:(NSUUID *)arg2;
- (void)simulateAccept;
- (void)simulateTapWithFitnessMachineType:(unsigned long long)arg1;

@end
