/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCServerPersistedState : NSObject <NSCopying, NSSecureCoding, PQLBindable> {
    NSDate * _lastSyncDownDate;
    long long  _nextRank;
    NSMutableDictionary * _pendingMigrations;
    BRCServerChangeState * _sharedDatabaseChangeState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastSyncDownDate;
@property (nonatomic) long long nextRank;
@property (retain) BRCServerChangeState *sharedDatabaseChangeState;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)containerIDIsPendingMigration:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dumpMigrationQueriesForContainerID:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(id)arg1;
- (void)initiateMigrationQueryForContainerIDs:(id)arg1 key:(id)arg2;
- (id)lastSyncDownDate;
- (void)migrationQueryForContainerID:(id)arg1 key:(id)arg2 didCompleteWithContinuationCursor:(id)arg3;
- (id)migrationQueryKeyForContainerID:(id)arg1 continuationCursor:(id*)arg2;
- (long long)nextRank;
- (void)saveToDB:(id)arg1;
- (void)setLastSyncDownDate:(id)arg1;
- (void)setNextRank:(long long)arg1;
- (void)setSharedDatabaseChangeState:(id)arg1;
- (id)sharedDatabaseChangeState;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
