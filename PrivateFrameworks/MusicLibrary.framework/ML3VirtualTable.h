/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3VirtualTable : NSObject <ML3DatabaseModuleContext> {
    ML3DatabaseConnection * _connection;
    struct shared_ptr<ML3VirtualTableDataSource> { 
        struct ML3VirtualTableDataSource {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _dataSource;
    ML3DatabaseTable * _databaseTable;
    <ML3VirtualTableDelegate> * _delegate;
    ML3DatabaseModule * _module;
    NSString * _virtualTableName;
}

@property (nonatomic, readonly) ML3DatabaseConnection *connection;
@property (nonatomic) struct shared_ptr<ML3VirtualTableDataSource> { struct ML3VirtualTableDataSource {} *x1; struct __shared_weak_count {} *x2; } dataSource;
@property (nonatomic, readonly) ML3DatabaseTable *databaseTable;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ML3VirtualTableDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)connection;
- (struct shared_ptr<ML3VirtualTableDataSource> { struct ML3VirtualTableDataSource {} *x1; struct __shared_weak_count {} *x2; })dataSource;
- (id)databaseTable;
- (void)dealloc;
- (id)delegate;
- (id)initWithDatabaseTable:(id)arg1;
- (id)name;
- (bool)registerWithConnection:(id)arg1;
- (void)setDataSource:(struct shared_ptr<ML3VirtualTableDataSource> { struct ML3VirtualTableDataSource {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setDelegate:(id)arg1;
- (bool)unregister;

@end
