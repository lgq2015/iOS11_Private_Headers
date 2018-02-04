/* made by EzioChiu.
 */

@protocol HFTemperatureFormatter <NSObject, NSCopying>

@required

- (NSString *)fallbackTemperatureString;
- (bool)inputIsCelsius;
- (void)setFallbackTemperatureString:(NSString *)arg1;
- (void)setInputIsCelsius:(bool)arg1;

@end
