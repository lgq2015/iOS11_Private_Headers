/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface OSLogPersistence : NSObject {
    unsigned long long  _batchSize;
    NSString * _currentFile;
    unsigned long long  _decodeFailures;
    <OSLogPersistenceDelegate> * _delegate;
    NSDate * _endDate;
    _OSLogIndex * _index;
    NSURL * _logArchive;
    NSURL * _logFile;
    unsigned long long  _logMessageCount;
    unsigned long long  _messagesFiltered;
    unsigned long long  _options;
    _OSLogCollectionReference * _oslcr;
    NSCompoundPredicate * _predicate;
    NSDate * _sparseDataStart;
    NSDate * _startDate;
    bool  _verbose;
    _OSLogVersioning * _version;
}

@property (nonatomic, readonly) long long archiveState;
@property (nonatomic, readonly) long long archiveVersion;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, readonly, copy) NSString *currentFile;
@property (nonatomic, readonly) unsigned long long decodeFailures;
@property (nonatomic) <OSLogPersistenceDelegate> *delegate;
@property (nonatomic, readonly, copy) NSDate *endDate;
@property (nonatomic, copy) NSURL *logArchive;
@property (nonatomic, copy) NSURL *logFile;
@property (nonatomic, readonly) unsigned long long logMessageCount;
@property (nonatomic, readonly) unsigned long long messagesFiltered;
@property (nonatomic) unsigned long long options;
@property (nonatomic, copy) NSCompoundPredicate *predicate;
@property (nonatomic, readonly, copy) NSDate *sparseDataStart;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (nonatomic, readonly, retain) NSDictionary *statistics;
@property (nonatomic, readonly) struct _os_timesync_db_s { }*timesync;
@property (nonatomic) bool verbose;

- (void).cxx_destruct;
- (void)_openFiles;
- (void)_openLocalPersistenceDir;
- (void)_openPath:(id)arg1;
- (bool)allowSensitive;
- (long long)archiveState;
- (long long)archiveVersion;
- (unsigned long long)batchSize;
- (id)currentFile;
- (void)dealloc;
- (unsigned long long)decodeFailures;
- (id)delegate;
- (id)endDate;
- (void)enumerateFromLastBootWithBlock:(id /* block */)arg1;
- (void)enumerateFromStartDate:(id)arg1 toEndDate:(id)arg2 withBlock:(id /* block */)arg3;
- (void)fetchFromStartDate:(id)arg1 toEndDate:(id)arg2;
- (id)init;
- (id)logArchive;
- (id)logFile;
- (unsigned long long)logMessageCount;
- (unsigned long long)messagesFiltered;
- (unsigned long long)options;
- (id)predicate;
- (void)resetWorkingState;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLogArchive:(id)arg1;
- (void)setLogFile:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPredicate:(id)arg1;
- (void)setVerbose:(bool)arg1;
- (id)sparseDataStart;
- (id)startDate;
- (id)statistics;
- (bool)streamChunks:(id /* block */)arg1 andEntries:(id /* block */)arg2 flags:(unsigned int)arg3;
- (struct _os_timesync_db_s { }*)timesync;
- (bool)verbose;

@end
