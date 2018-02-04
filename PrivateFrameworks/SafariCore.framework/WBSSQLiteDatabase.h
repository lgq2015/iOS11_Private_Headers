/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

@interface WBSSQLiteDatabase : NSObject {
    <WBSSQLiteDatabaseDelegate> * _delegate;
    struct sqlite3 { } * _handle;
    NSObject<OS_dispatch_queue> * _queue;
    NSURL * _url;
}

@property (nonatomic, readonly) long long changedRowCount;
@property (nonatomic) <WBSSQLiteDatabaseDelegate> *delegate;
@property (nonatomic, readonly) struct sqlite3 { }*handle;
@property (nonatomic, readonly) NSError *lastError;
@property (nonatomic, readonly) int lastErrorCode;
@property (nonatomic, readonly) NSString *lastErrorMessage;
@property (nonatomic, readonly) long long lastInsertRowID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSURL *url;

+ (id)_errorWithErrorCode:(int)arg1;
+ (void)initialize;
+ (void)setUpLogCollection;
+ (id)writeAheadLogSharedMemoryURLForDatabaseURL:(id)arg1;
+ (id)writeAheadLogURLForDatabaseURL:(id)arg1;

- (void).cxx_destruct;
- (bool)_openWithFlags:(int)arg1 vfs:(id)arg2 error:(id*)arg3;
- (void)_reportSevereError:(id)arg1;
- (long long)changedRowCount;
- (id)checkIntegrity;
- (int)checkpointWriteAheadLogWithLogFrameCount:(int*)arg1 checkpointedFrameCount:(int*)arg2;
- (int)close;
- (void)dealloc;
- (id)delegate;
- (bool)enableWAL:(id*)arg1;
- (bool)executeQuery:(id)arg1 error:(id*)arg2;
- (id)fetchQuery:(id)arg1;
- (id)fetchQuery:(id)arg1 stringArguments:(id)arg2;
- (struct sqlite3 { }*)handle;
- (id)initWithURL:(id)arg1 queue:(id)arg2;
- (id)lastError;
- (int)lastErrorCode;
- (id)lastErrorMessage;
- (long long)lastInsertRowID;
- (bool)openWithAccessType:(long long)arg1 error:(id*)arg2;
- (bool)openWithAccessType:(long long)arg1 vfs:(id)arg2 error:(id*)arg3;
- (id)queue;
- (bool)reportErrorWithCode:(int)arg1 query:(id)arg2 error:(id*)arg3;
- (bool)reportErrorWithCode:(int)arg1 statement:(struct sqlite3_stmt { }*)arg2 error:(id*)arg3;
- (void)setDelegate:(id)arg1;
- (bool)tryToPerformTransactionInBlock:(id /* block */)arg1;
- (id)url;

@end
