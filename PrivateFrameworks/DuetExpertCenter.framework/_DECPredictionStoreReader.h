/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECPredictionStoreReader : NSObject {
    struct sqlite3 { } * _db;
    _PASSqliteDatabase * _parentDb;
    NSString * _path;
}

- (void).cxx_destruct;
- (bool)_tryLoadDb;
- (void)close;
- (id)dateOfLastPredictionForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithInMemoryStore;
- (id)initWithPath:(id)arg1;
- (id)initWithSqliteDatabase:(id)arg1;
- (id)resultForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2;
- (id)resultForConsumer:(unsigned long long)arg1 category:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)schemaVersion;

@end
