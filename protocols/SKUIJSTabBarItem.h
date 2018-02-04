/* made by EzioChiu.
 */

@protocol SKUIJSTabBarItem <JSExport>

@required

- (NSString *)badgeValue;
- (NSString *)identifier;
- (IKJSNavigationDocument *)navigationDocument;
- (NSString *)rootURL;
- (void)setBadgeValue:(NSString *)arg1;
- (NSString *)title;

@end
