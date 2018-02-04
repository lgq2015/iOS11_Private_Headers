/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDatabaseJournal : NSObject {
    SGDatabaseJournalFile * _currentFile;
    NSString * _directoryPath;
    bool  _inMemory;
    bool  _journaling;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _serialNumber;
    NSString * _uuid;
}

@property (nonatomic, readonly) bool journaling;

+ (id /* block */)_binderForDictionary:(id)arg1;
+ (id)journalForInMemoryDb;
+ (id)journalWithName:(id)arg1;

- (void).cxx_destruct;
- (void)_addCurrentFileToLog;
- (void)_clearCurrentFile;
- (void)_closeCurrentFile;
- (bool)_executeFile:(id)arg1 onDb:(id)arg2 becameLocked:(bool*)arg3;
- (id)_getCurrentFile;
- (bool)deleteAllJournaledQueries;
- (bool)executeQueriesOnDatabase:(id)arg1;
- (bool)journaling;
- (void)runQuery:(id)arg1 values:(id)arg2 onDb:(id)arg3;
- (bool)startJournaling;
- (bool)stopJournaling;

@end
