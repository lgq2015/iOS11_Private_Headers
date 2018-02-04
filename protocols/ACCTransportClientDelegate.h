/* made by EzioChiu.
 */

@protocol ACCTransportClientDelegate <NSObject>

@optional

- (void)transportClient:(ACCTransportClient *)arg1 authStatusDidChange:(bool)arg2 forConnectionWithUUID:(NSString *)arg3;
- (void)transportClient:(ACCTransportClient *)arg1 propertiesDidChange:(NSDictionary *)arg2 forConnectionWithUUID:(NSString *)arg3 previousProperties:(NSDictionary *)arg4;
- (void)transportClient:(ACCTransportClient *)arg1 propertiesDidChange:(NSDictionary *)arg2 forEndpointWithUUID:(NSString *)arg3 previousProperties:(NSDictionary *)arg4 connectionUUID:(NSString *)arg5;

@end
