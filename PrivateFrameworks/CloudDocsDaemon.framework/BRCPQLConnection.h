/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPQLConnection : PQLConnection {
    bool  _autovacuumInProgress;
    br_pacer * _batchingPacer;
    int  _changeCount;
    bool  _flushImmediately;
    double  _flushInterval;
    unsigned long long  _vmStepsExecuted;
}

@property (nonatomic, copy) id /* block */ lockedHandler;
@property (nonatomic) bool profilingEnabled;
@property (nonatomic, readonly) unsigned long long vmStepsExecuted;

- (void).cxx_destruct;
- (void)_setErrorHandlerWithDBCorruptionHandler:(id /* block */)arg1;
- (void)_setLockedHandler;
- (bool)_shouldFlushWithChangeCount:(int)arg1;
- (bool)attachDBAtPath:(id)arg1 as:(id)arg2 error:(id*)arg3;
- (void)autovacuumIfNeeded;
- (void)brc_close;
- (void)disableProfilingForQueriesInBlock:(id /* block */)arg1;
- (bool)executeWithErrorHandler:(id /* block */)arg1 sql:(id)arg2;
- (bool)executeWithSlowStatementRadar:(id)arg1 sql:(id)arg2;
- (id)fetchWithSlowStatementRadar:(id)arg1 objectOfClass:(Class)arg2 sql:(id)arg3;
- (id)fetchWithSlowStatementRadar:(id)arg1 sql:(id)arg2;
- (void)flushToMakeEditsVisibleToIPCReaders;
- (id)init;
- (id)initWithLabel:(id)arg1 dbCorruptionHandler:(id /* block */)arg2;
- (bool)needsAutovacuum;
- (bool)openAtURL:(id)arg1 withFlags:(int)arg2 error:(id*)arg3;
- (bool)profilingEnabled;
- (void)setProfilingEnabled:(bool)arg1;
- (void)setProfilingHook:(id /* block */)arg1;
- (long long)sizeInBytes;
- (void)usePacedBatchingWithInterval:(double)arg1 changeCount:(int)arg2;
- (unsigned long long)vmStepsExecuted;

@end
