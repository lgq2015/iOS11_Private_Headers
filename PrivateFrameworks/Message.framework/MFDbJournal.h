/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDbJournal : NSObject {
    int  _fd;
    NSMutableArray * _journalStatements;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    MFMailboxUid * _mailbox;
    NSMutableArray * _onMergeEnvelopeUpdates;
    NSString * _path;
}

+ (void)initialize;
+ (id)journalForMailbox:(id)arg1;
+ (id)legacyJournal;
+ (long long)mergeWithLibrary:(id)arg1;

- (int)_executeStatements:(id)arg1 db:(struct sqlite3 { }*)arg2;
- (bool)_markMailboxForReconciliation:(bool)arg1 db:(struct sqlite3 { }*)arg2;
- (int)_processJournalFile:(id)arg1 db:(struct sqlite3 { }*)arg2;
- (bool)_writeToDisk:(struct sqlite3 { }*)arg1;
- (bool)append:(const char *)arg1 mergeUpdateStatement:(const char *)arg2;
- (void)clear;
- (int)commit:(struct sqlite3 { }*)arg1 isProtectedDataAvailable:(bool)arg2;
- (void)dealloc;
- (id)initWithMailbox:(id)arg1;
- (long long)mergeWithLibrary:(id)arg1;

@end
