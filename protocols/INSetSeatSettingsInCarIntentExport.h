/* made by EzioChiu.
 */

@protocol INSetSeatSettingsInCarIntentExport <NSObject, JSExport>

@required

- (NSNumber *)enableCooling;
- (NSNumber *)enableHeating;
- (NSNumber *)enableMassage;
- (id)init;
- (NSNumber *)level;
- (long long)relativeLevelSetting;
- (long long)seat;
- (void)setEnableCooling:(NSNumber *)arg1;
- (void)setEnableHeating:(NSNumber *)arg1;
- (void)setEnableMassage:(NSNumber *)arg1;
- (void)setLevel:(NSNumber *)arg1;
- (void)setRelativeLevelSetting:(long long)arg1;
- (void)setSeat:(long long)arg1;

@end
