/* made by EzioChiu.
 */

@protocol SXFontIndex <NSObject>

@required

- (<SXFontAttributes> *)fontAttributesForFontName:(NSString *)arg1;
- (NSString *)fontNameForFontAttributes:(id <SXFontAttributes>)arg1;

@end
