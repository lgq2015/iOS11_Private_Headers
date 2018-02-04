/* made by EzioChiu.
 */

@protocol HDSQLiteDatabasePoolDelegate <NSObject>

@required

- (void)databasePool:(HDSQLiteDatabasePool *)arg1 didFlushDatabases:(NSArray *)arg2;
- (HDSQLiteDatabase *)newDatabaseForDatabasePool:(HDSQLiteDatabasePool *)arg1 error:(id*)arg2;

@end
