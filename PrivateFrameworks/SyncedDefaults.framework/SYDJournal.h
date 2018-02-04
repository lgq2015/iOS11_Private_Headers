/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

@interface SYDJournal : NSObject {
    NSMutableDictionary * journal;
    bool  readonly;
    NSMutableDictionary * store;
}

- (void).cxx_destruct;
- (void)addChange:(int)arg1 forKey:(id)arg2 changeCount:(long long)arg3;
- (int)changeSinceChangeCount:(long long)arg1 forKey:(id)arg2;
- (id)changesSinceChangeCount:(long long)arg1;
- (id)description;
- (id)init;
- (id)initWithMutableStore:(id)arg1;
- (id)initWithStore:(id)arg1;
- (long long)maximumChangeCount;
- (bool)removeChangesUntilChangeCount:(long long)arg1;

@end
