/* made by EzioChiu.
 */

@protocol SXEmbedType <NSObject>

@required

- (unsigned long long)autoPlayMedia;
- (NSURL *)baseURL;
- (NSString *)enclosingHTML;
- (NSString *)javaScript;
- (double)maximumWidth;
- (double)minimumWidth;

@end
