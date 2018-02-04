/* made by EzioChiu.
 */

@protocol BYDaemonProximityTargetProtocol <NSObject>

@required

- (void)beginAdvertisingProximitySetup;
- (void)endAdvertisingProximitySetup;
- (void)endPairing;
- (void)hasConnection:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)resumeProximitySetup:(void *)arg1; // needs 1 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SASProximityHandshake *, SASProximityInformation *, CUMessageSession *, NSString *, NSString *, bool, void*
- (void)storeHandshake:(SASProximityHandshake *)arg1;
- (void)storeInformation:(SASProximityInformation *)arg1;

@end
