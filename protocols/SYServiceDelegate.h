/* made by EzioChiu.
 */

@protocol SYServiceDelegate <NSObject>

@required

- (bool)service:(SYService *)arg1 startSession:(SYSession *)arg2 error:(id*)arg3;

@optional

- (void)service:(SYService *)arg1 didSwitchFromPairingID:(NSUUID *)arg2 toPairingID:(NSUUID *)arg3;
- (void)service:(SYService *)arg1 encounteredError:(NSError *)arg2 context:(NSDictionary *)arg3;
- (void)service:(void *)arg1 incomingData:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: SYService *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)service:(void *)arg1 incomingStream:(void *)arg2 metadata:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: SYService *, NSInputStream *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)service:(SYService *)arg1 sessionEnded:(SYSession *)arg2 error:(NSError *)arg3;
- (void)service:(SYService *)arg1 targetDeviceProximityChanged:(bool)arg2;
- (SYSession *)service:(SYService *)arg1 willPreferSession:(SYSession *)arg2 overSession:(SYSession *)arg3;
- (void)service:(SYService *)arg1 willSwitchFromPairingID:(NSUUID *)arg2 toPairingID:(NSUUID *)arg3;
- (void)serviceDidPairDevice:(SYService *)arg1;
- (void)serviceDidUnpairDevice:(SYService *)arg1;

@end
