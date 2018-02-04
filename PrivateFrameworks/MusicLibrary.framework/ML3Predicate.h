/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Predicate : NSObject <NSCoding, NSCopying>

- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (bool)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)databaseStatementParameters;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isDynamicForEntityClass:(Class)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFalseAlways;
- (bool)isTrueAlways;
- (id)spotlightPredicate;

@end
