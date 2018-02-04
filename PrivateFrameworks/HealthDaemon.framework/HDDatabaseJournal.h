/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDatabaseJournal : NSObject {
    NSFileHandle * _fileHandle;
    NSLock * _journalLock;
    unsigned long long  _mergeTransactionOptions;
    NSString * _path;
}

@property (nonatomic, retain) NSFileHandle *fileHandle;
@property (nonatomic, retain) NSLock *journalLock;
@property (nonatomic) unsigned long long mergeTransactionOptions;
@property (nonatomic, copy) NSString *path;

- (void).cxx_destruct;
- (bool)_appendData:(id)arg1 error:(id*)arg2;
- (void)_executeAtomically:(id /* block */)arg1;
- (id)_loadJournalEntry:(id)arg1;
- (bool)_loadJournalFromMapping:(void*)arg1 size:(unsigned long long)arg2 headerLength:(unsigned long long)arg3 journalEntries:(id*)arg4 error:(id*)arg5;
- (bool)_loadJournalWithFileHandle:(id)arg1 journalEntries:(id*)arg2 error:(id*)arg3;
- (void)_mergeJournalEntries:(id)arg1 profile:(id)arg2;
- (id)_nameOfNextJournalFile;
- (bool)_openNextJournalFileWithError:(id*)arg1;
- (bool)_performPostJournalMergeWithVersion:(unsigned int)arg1 profile:(id)arg2 database:(id)arg3 error:(id*)arg4;
- (unsigned int)_processJournalFile:(id)arg1 profile:(id)arg2 sqlDatabase:(id)arg3 fileHandle:(id)arg4 mapping:(void*)arg5 length:(unsigned long long)arg6 error:(id*)arg7;
- (unsigned int)_processJournalFile:(id)arg1 profile:(id)arg2 sqlDatabase:(id)arg3 fileSize:(unsigned long long*)arg4 error:(id*)arg5;
- (unsigned int)_processMonarchJournalWithVersion:(unsigned int)arg1 fileHandle:(id)arg2 mapping:(void*)arg3 size:(unsigned long long)arg4 headerLength:(unsigned long long)arg5 profile:(id)arg6 database:(id)arg7 error:(id*)arg8;
- (unsigned int)_processOkemoJournalWithVersion:(unsigned int)arg1 fileHandle:(id)arg2 mapping:(void*)arg3 size:(unsigned long long)arg4 headerLength:(unsigned long long)arg5 profile:(id)arg6 database:(id)arg7 error:(id*)arg8;
- (id)_sortedListOfJournalFiles;
- (void)_unitTesting_closeCurrentJournalFile;
- (bool)addJournalEntries:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)fileHandle;
- (id)init;
- (id)initAsSecondaryWithPath:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)journalLock;
- (unsigned long long)mergeTransactionOptions;
- (bool)mergeWithProfile:(id)arg1;
- (id)path;
- (void)setFileHandle:(id)arg1;
- (void)setJournalLock:(id)arg1;
- (void)setMergeTransactionOptions:(unsigned long long)arg1;
- (void)setPath:(id)arg1;

@end
