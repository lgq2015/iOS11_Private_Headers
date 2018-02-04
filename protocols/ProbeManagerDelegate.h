/* made by EzioChiu.
 */

@protocol ProbeManagerDelegate <NSObject>

@optional

- (void)probeFactString:(NSString *)arg1 module:(NSString *)arg2 run:(bool)arg3;
- (void)probeOutputFilePaths:(NSArray *)arg1 forDiagSessionUUID:(NSString *)arg2;
- (void)probeStatusUpdate:(NSDictionary *)arg1;
- (void)serviceAdded:(NSDictionary *)arg1 type:(long long)arg2;
- (void)serviceRemoved:(NSDictionary *)arg1 type:(long long)arg2;
- (void)serviceUpdated:(NSDictionary *)arg1 type:(long long)arg2;

@end
