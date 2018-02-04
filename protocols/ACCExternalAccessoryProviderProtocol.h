/* made by EzioChiu.
 */

@protocol ACCExternalAccessoryProviderProtocol <NSObject>

@required

- (void)EAAccessoryArrived:(NSDictionary *)arg1;
- (void)EAAccessoryLeft:(NSDictionary *)arg1;
- (void)accessoryClosedEASession:(NSString *)arg1;
- (void)handleIncomingExternalAccessoryData:(void *)arg1 forEASessionIdentifier:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 8: NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)resumeEASessionData:(NSString *)arg1;

@optional

- (void)destinationSharingStatus:(bool)arg1 forDestinationUUID:(NSString *)arg2 supportedParams:(NSArray *)arg3 forUUID:(NSString *)arg4;
- (void)initialEAAccessoriesAttachedAfterClientConnection:(NSArray *)arg1;
- (void)nmeaSentenceArrived:(NSString *)arg1 forAccessoryUUID:(NSString *)arg2;
- (void)startDestinationSharingForUUID:(NSString *)arg1;
- (void)stopDestinationSharingForUUID:(NSString *)arg1;
- (void)updateAccessoryInfo:(NSDictionary *)arg1;
- (void)vehicleStatusUpdate:(NSDictionary *)arg1 forAccessoryUUID:(NSString *)arg2;

@end
