/* made by EzioChiu.
 */

@protocol SFDynamicURLImageResource <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSString *)formatURL;
- (NSArray *)imageOptions;
- (NSData *)jsonData;
- (double)pixelHeight;
- (double)pixelWidth;
- (void)setFormatURL:(NSString *)arg1;
- (void)setImageOptions:(NSArray *)arg1;
- (void)setPixelHeight:(double)arg1;
- (void)setPixelWidth:(double)arg1;
- (void)setSupportsResizing:(bool)arg1;
- (bool)supportsResizing;

@end
