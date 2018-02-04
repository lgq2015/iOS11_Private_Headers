/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataExternalSyncIdentifierEntityPredicate : HDSQLitePredicate {
    bool  _matchObjectsWithoutKey;
    HDSQLitePredicate * _valuePredicate;
}

+ (id)_propertyForKey:(id)arg1;
+ (Class)_valueClassForKey:(id)arg1;
+ (id)_valuePredicateForKey:(id)arg1 allowedValues:(id)arg2;
+ (id)_valuePredicateForKey:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3;
+ (id)predicateWithMetadataKey:(id)arg1 allowedValues:(id)arg2;
+ (id)predicateWithMetadataKey:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;

@end
