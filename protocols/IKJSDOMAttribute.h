/* made by EzioChiu.
 */

@protocol IKJSDOMAttribute <JSExport>

@required

- (NSString *)name;
- (IKDOMNode *)ownerElement;
- (NSString *)value;

@end
