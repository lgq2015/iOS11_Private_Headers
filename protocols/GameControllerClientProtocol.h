/* made by EzioChiu.
 */

@protocol GameControllerClientProtocol <NSObject>

@required

- (void)addController:(GCController *)arg1;
- (void)controllerWithUDID:(unsigned long long)arg1 setData:(NSData *)arg2;
- (void)controllerWithUDID:(unsigned long long)arg1 setValue0:(float)arg2 setValue1:(float)arg3 setValue2:(float)arg4 setValue3:(float)arg5 forElement:(int)arg6;
- (void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (void)microControllerWithDigitizerX:(float)arg1 withY:(float)arg2 withTimeStamp:(unsigned long long)arg3 touchDown:(bool)arg4;
- (void)microControllerWithUDID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(bool)arg5;
- (void)removeController:(GCController *)arg1;
- (void)replyConnectedHosts:(NSArray *)arg1;

@end
