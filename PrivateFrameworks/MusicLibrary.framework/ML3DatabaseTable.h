/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseTable : NSObject <NSCopying, NSMutableCopying> {
    NSArray * _columns;
    NSArray * _foreignKeyConstraints;
    NSString * _name;
}

@property (nonatomic, readonly) NSArray *columns;
@property (nonatomic, readonly) NSArray *foreignKeyConstraints;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)_copyWithZone:(struct _NSZone { }*)arg1 concreteClass:(Class)arg2;
- (id)columnDefinitionsSQL;
- (id)columns;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createTableSQLWithExistenceClause:(bool)arg1;
- (id)foreignKeyConstraints;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;

@end
