/* made by EzioChiu.
 */

@protocol _CDContext

@required

- (void)deregisterCallback:(_CDContextualChangeRegistration *)arg1;
- (bool)hasKnowledgeOfContextualKeyPath:(_CDContextualKeyPath *)arg1;
- (NSDate *)lastModifiedDateForContextualKeyPath:(_CDContextualKeyPath *)arg1;
- (NSObject<NSCopying><NSSecureCoding> *)objectForContextualKeyPath:(_CDContextualKeyPath *)arg1;
- (NSObject<NSCopying><NSSecureCoding> *)objectForKeyedSubscript:(_CDContextualKeyPath *)arg1;
- (void)registerCallback:(_CDContextualChangeRegistration *)arg1;

@optional

- (bool)evaluatePredicate:(_CDContextualPredicate *)arg1;

@end
