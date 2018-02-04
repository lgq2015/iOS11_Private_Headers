/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgCacheDBInfo : NSObject {
    NSString * _databaseFilePath;
    struct sqlite3 { } * _databaseHandle;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    void * _databaseQueueIdentityKey;
    void * _databaseQueueIdentityValue;
    bool  _logMessageCacheTransactionPending;
    NSObject<OS_dispatch_source> * _logMessageCacheTransactionTimer;
    long long  _pendingLogMessageCount;
}

- (void).cxx_destruct;
- (id)initWithQueueName:(const char *)arg1 queueId:(const char *)arg2;

@end
