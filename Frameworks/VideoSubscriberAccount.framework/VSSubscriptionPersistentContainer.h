/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSSubscriptionPersistentContainer : NSObject {
    bool  _didSetupPersistence;
    NSOperationQueue * _migrationQueue;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
    NSString * _persistentStoreType;
    NSURL * _persistentStoreURL;
    bool  _skipMigration;
    NSURL * _subscriptionsPropertyListURL;
    VSOptional * _viewContext;
}

@property (nonatomic) bool didSetupPersistence;
@property (nonatomic, retain) NSOperationQueue *migrationQueue;
@property (nonatomic, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (nonatomic, copy) NSString *persistentStoreType;
@property (nonatomic, copy) NSURL *persistentStoreURL;
@property (nonatomic) bool skipMigration;
@property (nonatomic, copy) NSURL *subscriptionsPropertyListURL;
@property (nonatomic, retain) VSOptional *viewContext;

- (void).cxx_destruct;
- (void)_performBlock:(id /* block */)arg1 andWait:(bool)arg2;
- (bool)_setupPersistenceIfNeeded:(id*)arg1;
- (bool)didSetupPersistence;
- (id)init;
- (id)migrationQueue;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;
- (id)persistentStoreCoordinator;
- (id)persistentStoreType;
- (id)persistentStoreURL;
- (void)setDidSetupPersistence:(bool)arg1;
- (void)setMigrationQueue:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (void)setPersistentStoreType:(id)arg1;
- (void)setPersistentStoreURL:(id)arg1;
- (void)setSkipMigration:(bool)arg1;
- (void)setSubscriptionsPropertyListURL:(id)arg1;
- (void)setViewContext:(id)arg1;
- (bool)skipMigration;
- (id)subscriptionsPropertyListURL;
- (id)viewContext;

@end
