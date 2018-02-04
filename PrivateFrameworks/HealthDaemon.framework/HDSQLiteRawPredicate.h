/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteRawPredicate : HDSQLitePredicate <NSCopying> {
    NSArray * _properties;
    NSString * _sql;
    NSArray * _values;
}

+ (id)predicateWithSQL:(id)arg1 overProperties:(id)arg2 values:(id)arg3;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isCompatibleWithPredicate:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
