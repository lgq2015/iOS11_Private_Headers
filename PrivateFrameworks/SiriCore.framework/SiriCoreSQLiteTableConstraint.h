/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreSQLiteTableConstraint : NSObject <NSCopying> {
    NSArray * _columnNames;
    NSString * _name;
    long long  _type;
}

@property (nonatomic, readonly, copy) NSArray *columnNames;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long type;

+ (id)primaryKeyTableConstraintWithName:(id)arg1 columnNames:(id)arg2;
+ (id)uniqueTableConstraintWithName:(id)arg1 columnNames:(id)arg2;

- (void).cxx_destruct;
- (id)columnNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2 columnNames:(id)arg3;
- (id)name;
- (long long)type;

@end
