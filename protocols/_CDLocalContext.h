/* made by EzioChiu.
 */

@protocol _CDLocalContext <_CDContext>

@required

- (bool)setObject:(NSObject<NSCopying><NSSecureCoding> *)arg1 forContextualKeyPath:(_CDContextualKeyPath *)arg2;
- (bool)setObject:(NSObject<NSCopying><NSSecureCoding> *)arg1 forKeyedSubscript:(_CDContextualKeyPath *)arg2;

@end
