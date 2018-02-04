/* made by EzioChiu.
 */

@protocol ADAdSheetConnectionDelegate <NSObject>

@required

- (NSString *)adSheetMachServiceName;
- (void)configureConnection:(NSXPCConnection *)arg1;

@optional

- (void)adSheetConnectionEstablished;
- (void)adSheetConnectionLost;
- (bool)shouldConnectToAdSheet;

@end
