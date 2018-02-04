/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAppPurchaseHistoryDatabase : NSObject {
    SSSQLiteDatabase * _database;
}

+ (void)_createDatabaseDirectory;
+ (bool)_setupDatabase:(id)arg1;
+ (id)accountUniqueIdentifierKey;
+ (id)newDefaultInstance;

- (id)allProperties:(id)arg1 accountID:(id)arg2 includingHidden:(bool)arg3;
- (id)currentAccountUniqueIdentifier;
- (id)database;
- (void)dealloc;
- (id)init;
- (id)initWithDatabaseURL:(id)arg1 readOnly:(bool)arg2;
- (long long)localRevisionForAccountUniqueIdentifier:(id)arg1;
- (void)modifyUsingAppPurchaseHistoryTransactionBlock:(id /* block */)arg1;
- (void)readAsyncUsingTransactionBlock:(id /* block */)arg1;
- (void)readUsingTransactionBlock:(id /* block */)arg1;
- (bool)removeValueForDatabaseProperty:(id)arg1;
- (bool)resetCacheForNewAccountID:(id)arg1;
- (bool)setCurrentAccountUniqueIdentifier:(id)arg1;
- (bool)setLocalRevision:(long long)arg1 forAccountUniqueIdentifier:(id)arg2;
- (bool)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (id)valueForDatabaseProperty:(id)arg1;

@end
