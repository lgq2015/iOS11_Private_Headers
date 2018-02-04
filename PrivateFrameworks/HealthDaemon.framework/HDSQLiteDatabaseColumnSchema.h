/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteDatabaseColumnSchema : NSObject {
    NSString * _defaultValue;
    long long  _deletionAction;
    NSString * _foreignKeyTargetColumn;
    NSString * _foreignKeyTargetTable;
    bool  _isAutoincrement;
    bool  _isNullable;
    bool  _isPrimaryKey;
    NSString * _name;
    NSString * _type;
}

@property (nonatomic, copy) NSString *defaultValue;
@property (nonatomic) long long deletionAction;
@property (nonatomic, copy) NSString *foreignKeyTargetColumn;
@property (nonatomic, copy) NSString *foreignKeyTargetTable;
@property (nonatomic) bool isAutoincrement;
@property (nonatomic) bool isNullable;
@property (nonatomic) bool isPrimaryKey;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)defaultValue;
- (long long)deletionAction;
- (id)description;
- (id)foreignKeyTargetColumn;
- (id)foreignKeyTargetTable;
- (unsigned long long)hash;
- (bool)isAutoincrement;
- (bool)isEqual:(id)arg1;
- (bool)isNullable;
- (bool)isPrimaryKey;
- (id)name;
- (void)setDefaultValue:(id)arg1;
- (void)setDeletionAction:(long long)arg1;
- (void)setForeignKeyTargetColumn:(id)arg1;
- (void)setForeignKeyTargetTable:(id)arg1;
- (void)setIsAutoincrement:(bool)arg1;
- (void)setIsNullable:(bool)arg1;
- (void)setIsPrimaryKey:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
