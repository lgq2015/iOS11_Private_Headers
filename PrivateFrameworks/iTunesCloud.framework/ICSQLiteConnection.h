/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICSQLiteConnection : NSObject {
    NSMutableArray * _afterTransactionBlocks;
    struct sqlite3 { } * _database;
    <ICSQLiteConnectionDelegate> * _delegate;
    bool  _didResetForCorruption;
    ICSQLiteConnectionOptions * _options;
    NSMapTable * _preparedStatements;
    long long  _transactionDepth;
    bool  _transactionWantsRollback;
}

@property (nonatomic, readonly, copy) NSError *currentError;
@property (nonatomic) <ICSQLiteConnectionDelegate> *delegate;
@property (nonatomic, readonly) long long lastChangeCount;
@property (nonatomic, readonly, copy) ICSQLiteConnectionOptions *options;

- (void).cxx_destruct;
- (bool)_close;
- (bool)_executeStatement:(id)arg1 error:(id*)arg2;
- (void)_finalizeAllStatements;
- (void)_flushAfterTransactionBlocks;
- (bool)_open;
- (bool)_performResetAfterCorruptionError;
- (id)_prepareStatement:(id)arg1 error:(id*)arg2;
- (id)_statementForPreparedStatement:(id)arg1 error:(id*)arg2;
- (id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id*)arg2;
- (id)_verifiedStatementForSQL:(id)arg1 error:(id*)arg2;
- (bool)close;
- (id)currentError;
- (id)delegate;
- (void)dispatchAfterTransaction:(id /* block */)arg1;
- (void)executePreparedQuery:(id)arg1 withResults:(id /* block */)arg2;
- (bool)executePreparedStatement:(id)arg1 error:(id*)arg2;
- (bool)executePreparedStatement:(id)arg1 error:(id*)arg2 bindings:(id /* block */)arg3;
- (void)executeQuery:(id)arg1 withResults:(id /* block */)arg2;
- (bool)executeStatement:(id)arg1 error:(id*)arg2;
- (bool)executeStatement:(id)arg1 error:(id*)arg2 bindings:(id /* block */)arg3;
- (id)initWithOptions:(id)arg1;
- (long long)lastChangeCount;
- (bool)open;
- (id)options;
- (void)performTransaction:(id /* block */)arg1;
- (id)prepareStatement:(id)arg1 error:(id*)arg2;
- (bool)resetAfterCorruptionError;
- (bool)resetAfterIOError;
- (void)setDelegate:(id)arg1;
- (bool)truncate;

@end
