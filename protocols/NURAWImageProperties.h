/* made by EzioChiu.
 */

@protocol NURAWImageProperties <NSObject>

@required

- (NSArray *)availableDecoderVersions;
- (NSString *)decoderVersion;
- (<NURAWNoiseReductionProperties> *)noiseReductionProperties;
- (double)temperature;
- (double)tint;

@end
