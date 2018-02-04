/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteIndexDefinition : NSObject {
    NSArray * _columns;
    Class  _entityClass;
    NSString * _name;
    HDSQLitePredicate * _predicate;
    bool  _unique;
}

@property (nonatomic, readonly) NSArray *columns;
@property (nonatomic, readonly, copy) NSString *disambiguatedName;
@property (nonatomic, readonly) Class entityClass;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) HDSQLitePredicate *predicate;
@property (getter=isUnique, nonatomic, readonly) bool unique;

- (void).cxx_destruct;
- (id)columns;
- (id)creationSQL;
- (id)disambiguatedName;
- (Class)entityClass;
- (id)initWithEntity:(Class)arg1 name:(id)arg2 columns:(id)arg3;
- (id)initWithEntity:(Class)arg1 name:(id)arg2 columns:(id)arg3 unique:(bool)arg4 predicate:(id)arg5;
- (bool)isUnique;
- (id)name;
- (id)predicate;

@end
