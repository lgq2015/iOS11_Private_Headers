/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface CSSearchClientConnection : NSObject {
    NSString * _bundleID;
    unsigned int  _egid;
    unsigned int  _euid;
    bool  _isExtension;
    unsigned int  _outBatchCount;
    NSMutableOrderedSet * _pausedTasks;
    int  _pid;
    NSString * _protectionClass;
    NSMutableDictionary * _queryTasks;
    bool  _searchInternal;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) unsigned int egid;
@property (nonatomic, readonly) unsigned int euid;
@property (nonatomic, readonly) bool isExtension;
@property (nonatomic, readonly) unsigned int outBatchCount;
@property (nonatomic, retain) NSMutableOrderedSet *pausedTasks;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) NSString *protectionClass;
@property (nonatomic, retain) NSMutableDictionary *queryTasks;
@property (nonatomic, readonly) bool searchInternal;

- (void).cxx_destruct;
- (void)_didReceiveResultsBatchCompletion;
- (void)_willSendResultsBatch:(id)arg1 qid:(long long)arg2;
- (id)bundleID;
- (void)cancelQueryTask:(long long)arg1;
- (void)cancelQueryTasks;
- (void)dealloc;
- (unsigned int)egid;
- (unsigned int)euid;
- (id)initWithConnection:(id)arg1;
- (bool)isExtension;
- (unsigned int)outBatchCount;
- (id)pausedTasks;
- (int)pid;
- (id)protectionClass;
- (id)queryTask:(long long)arg1;
- (id)queryTasks;
- (bool)searchInternal;
- (void)setPausedTasks:(id)arg1;
- (void)setQueryTask:(id)arg1 forQueryID:(long long)arg2;
- (void)setQueryTasks:(id)arg1;

@end
