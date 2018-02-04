/* made by EzioChiu.
 */

@protocol DKExtensionAttributes

@required

- (struct NSString { Class x1; }*)bundleIdentifier;
- (NSExtension *)extension;
- (id)initWithExtension:(NSExtension *)arg1;
- (bool)isHeadless;

@end