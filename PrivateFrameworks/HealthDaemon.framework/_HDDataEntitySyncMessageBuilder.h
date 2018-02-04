/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDataEntitySyncMessageBuilder : NSObject {
    long long  _currentEncodedBytes;
    HDSQLiteDatabase * _database;
    bool  _didSendFinal;
    Class  _entityClass;
    HDEntityEncoder * _entityEncoder;
    id /* block */  _handler;
    bool  _hasSentObject;
    long long  _lastSyncAnchor;
    NSMutableDictionary * _localProvenanceMapping;
    NSMutableDictionary * _localSourceMapping;
    long long  _maxEncodedBytesPerMessage;
    HDProfile * _profile;
    HDDataProvenanceCache * _provenanceCache;
    bool  _requiresLocalSourceConversion;
    HDSyncSession * _syncSession;
}

@property (nonatomic, readonly) long long currentEncodedBytes;
@property (nonatomic, readonly) long long lastSyncAnchor;
@property (nonatomic, readonly) long long maxEncodedBytesPerMessage;
@property (nonatomic, readonly) NSArray *orderedProperties;
@property (nonatomic, readonly) HDSyncSession *syncSession;

- (void).cxx_destruct;
- (id)_provenanceForID:(long long)arg1 error:(id*)arg2;
- (bool)_sendCurrentCollectionWithAnchor:(long long)arg1 final:(bool)arg2 error:(id*)arg3;
- (long long)addEntity:(id)arg1 properties:(id)arg2 row:(struct HDSQLiteRow { }*)arg3 anchor:(long long)arg4 index:(unsigned long long)arg5 error:(id*)arg6;
- (long long)currentEncodedBytes;
- (bool)finishAndFlush:(bool)arg1 error:(id*)arg2;
- (id)initWithProfile:(id)arg1 database:(id)arg2 entityClass:(Class)arg3 bytesPerMessage:(long long)arg4 syncSession:(id)arg5 handler:(id /* block */)arg6;
- (long long)lastSyncAnchor;
- (long long)maxEncodedBytesPerMessage;
- (id)orderedProperties;
- (id)syncSession;

@end
