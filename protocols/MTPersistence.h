/* made by EzioChiu.
 */

@protocol MTPersistence <NSObject>

@required

- (float)floatForKey:(NSString *)arg1;
- (id)objectForKey:(NSString *)arg1;
- (void)setFloat:(float)arg1 forKey:(NSString *)arg2;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;

@end
