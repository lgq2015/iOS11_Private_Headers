/* made by EzioChiu.
 */

@protocol INHomeEntityExport <NSObject, JSExport>

@required

- (long long)deviceType;
- (id)init;
- (NSString *)name;
- (void)setDeviceType:(long long)arg1;
- (void)setName:(NSString *)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
