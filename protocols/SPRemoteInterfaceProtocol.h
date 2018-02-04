/* made by EzioChiu.
 */

@protocol SPRemoteInterfaceProtocol <NSObject>

@required

- (void)applicationContentsDidReset:(NSString *)arg1;
- (void)applicationDidBecomeActive:(NSString *)arg1;
- (void)applicationDidFinishConnecting:(NSString *)arg1;
- (void)applicationDidReceiveNotification:(void *)arg1 clientIdentifier:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)applicationDidTerminate:(NSString *)arg1;
- (void)applicationHandleWatchTaskKeys:(NSDictionary *)arg1 reasonForSnapshot:(unsigned long long)arg2 visibleVCID:(NSString *)arg3 barTaskUUID:(NSUUID *)arg4 clientIdentifier:(NSString *)arg5;
- (void)applicationIsStillActive;
- (void)applicationWillResignActive:(NSString *)arg1;
- (void)dataInterfaceDidBecomeActive:(NSString *)arg1;
- (void)dataInterfaceWillResignActive:(NSString *)arg1;
- (void)layoutDirection:(long long)arg1;
- (void)preferredContentSizeCategory:(NSString *)arg1;
- (void)receiveData:(NSData *)arg1 fromIdentifier:(NSString *)arg2;
- (void)receiveProtoData:(NSData *)arg1 fromIdentifier:(NSString *)arg2;

@optional

- (void)receiveNativeComplicationRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)replyTimingData:(NSDictionary *)arg1;

@end
