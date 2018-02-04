/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ConditionalPredicate : ML3Predicate {
    ML3Predicate * _conditionPredicate;
    ML3Predicate * _elsePredicate;
    ML3Predicate * _thenPredicate;
}

@property (nonatomic, readonly, copy) ML3Predicate *conditionPredicate;
@property (nonatomic, readonly, copy) ML3Predicate *elsePredicate;
@property (nonatomic, readonly, copy) ML3Predicate *thenPredicate;

+ (id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;

- (void).cxx_destruct;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)conditionPredicate;
- (id)databaseStatementParameters;
- (id)description;
- (id)elsePredicate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;
- (bool)isDynamicForEntityClass:(Class)arg1;
- (bool)isEqual:(id)arg1;
- (id)spotlightPredicate;
- (id)thenPredicate;

@end
