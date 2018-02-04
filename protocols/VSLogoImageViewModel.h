/* made by EzioChiu.
 */

@protocol VSLogoImageViewModel <NSObject>

@required

- (UIImage *)logo;
- (NSString *)logoAccessibilityLabel;
- (NSItemProvider *)logoProvider;
- (void)setLogo:(UIImage *)arg1;
- (void)setLogoAccessibilityLabel:(NSString *)arg1;
- (void)setLogoProvider:(NSItemProvider *)arg1;

@end
