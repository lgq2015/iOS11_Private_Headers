/* made by EzioChiu.
 */

@protocol AXMDescribing <NSObject>

@required

- (void)axmAppendRecursiveDescription:(NSMutableString *)arg1 withIndentation:(long long)arg2;
- (NSString *)axmDescription;

@end
