/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKSQLiteError : NSObject

+ (void)ABORT:(id)arg1;
+ (void)ABORT_ROLLBACK:(id)arg1;
+ (void)BUSY:(id)arg1;
+ (void)BUSY_RECOVERY:(id)arg1;
+ (void)BUSY_SNAPSHOT:(id)arg1;
+ (void)CANTOPEN:(id)arg1;
+ (void)CANTOPEN_CONVPATH:(id)arg1;
+ (void)CANTOPEN_FULLPATH:(id)arg1;
+ (void)CANTOPEN_ISDIR:(id)arg1;
+ (void)CANTOPEN_NOTEMPDIR:(id)arg1;
+ (void)CONSTRAINT:(id)arg1;
+ (void)CONSTRAINT_CHECK:(id)arg1;
+ (void)CONSTRAINT_COMMITHOOK:(id)arg1;
+ (void)CONSTRAINT_FOREIGNKEY:(id)arg1;
+ (void)CONSTRAINT_FUNCTION:(id)arg1;
+ (void)CONSTRAINT_NOTNULL:(id)arg1;
+ (void)CONSTRAINT_PRIMARYKEY:(id)arg1;
+ (void)CONSTRAINT_ROWID:(id)arg1;
+ (void)CONSTRAINT_TRIGGER:(id)arg1;
+ (void)CONSTRAINT_UNIQUE:(id)arg1;
+ (void)CONSTRAINT_VTAB:(id)arg1;
+ (void)CORRUPT:(id)arg1;
+ (void)CORRUPT_VTAB:(id)arg1;
+ (void)ERROR:(id)arg1;
+ (void)FULL:(id)arg1;
+ (void)INTERNAL:(id)arg1;
+ (void)INTERRUPT:(id)arg1;
+ (void)IOERR:(id)arg1;
+ (void)IOERR_ACCESS:(id)arg1;
+ (void)IOERR_BLOCKED:(id)arg1;
+ (void)IOERR_CHECKRESERVEDLOCK:(id)arg1;
+ (void)IOERR_CLOSE:(id)arg1;
+ (void)IOERR_CONVPATH:(id)arg1;
+ (void)IOERR_DELETE:(id)arg1;
+ (void)IOERR_DELETE_NOENT:(id)arg1;
+ (void)IOERR_DIR_CLOSE:(id)arg1;
+ (void)IOERR_DIR_FSYNC:(id)arg1;
+ (void)IOERR_FSTAT:(id)arg1;
+ (void)IOERR_FSYNC:(id)arg1;
+ (void)IOERR_GETTEMPPATH:(id)arg1;
+ (void)IOERR_LOCK:(id)arg1;
+ (void)IOERR_MMAP:(id)arg1;
+ (void)IOERR_NOMEM:(id)arg1;
+ (void)IOERR_RDLOCK:(id)arg1;
+ (void)IOERR_READ:(id)arg1;
+ (void)IOERR_SEEK:(id)arg1;
+ (void)IOERR_SHMLOCK:(id)arg1;
+ (void)IOERR_SHMMAP:(id)arg1;
+ (void)IOERR_SHMOPEN:(id)arg1;
+ (void)IOERR_SHMSIZE:(id)arg1;
+ (void)IOERR_SHORT_READ:(id)arg1;
+ (void)IOERR_TRUNCATE:(id)arg1;
+ (void)IOERR_UNLOCK:(id)arg1;
+ (void)IOERR_WRITE:(id)arg1;
+ (void)LOCKED:(id)arg1;
+ (void)LOCKED_SHAREDCACHE:(id)arg1;
+ (void)MISMATCH:(id)arg1;
+ (void)MISUSE:(id)arg1;
+ (void)NOMEM:(id)arg1;
+ (void)NOTADB:(id)arg1;
+ (void)NOTFOUND:(id)arg1;
+ (void)NOTICE_RECOVER_ROLLBACK:(id)arg1;
+ (void)NOTICE_RECOVER_WAL:(id)arg1;
+ (void)PERM:(id)arg1;
+ (void)PROTOCOL:(id)arg1;
+ (void)RANGE:(id)arg1;
+ (void)READONLY:(id)arg1;
+ (void)READONLY_CANTLOCK:(id)arg1;
+ (void)READONLY_DBMOVED:(id)arg1;
+ (void)READONLY_RECOVERY:(id)arg1;
+ (void)READONLY_ROLLBACK:(id)arg1;
+ (void)SCHEMA:(id)arg1;
+ (void)TOOBIG:(id)arg1;
+ (void)raise:(id)arg1 code:(int)arg2 extended:(int)arg3;

@end
