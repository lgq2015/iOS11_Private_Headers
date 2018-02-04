/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDMetadataValueEntityPredicate : HDSQLitePredicate {
    HDSQLitePredicate * _keyPredicate;
    bool  _matchObjectsWithoutKey;
    HDSQLitePredicate * _valuePredicate;
}

+ (id)predicateWithMetadataKey:(id)arg1 allowedValues:(id)arg2;
+ (id)predicateWithMetadataKey:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (id)_valuePredicateForValue:(id)arg1 operatorType:(unsigned long long)arg2;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;

@end
