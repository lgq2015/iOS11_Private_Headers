/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYTransaction : NSObject <SYChangeTracking> {
    NSMutableArray * _changes;
    id /* block */  _completion;
    NSDictionary * _contextInfo;
    NSDictionary * _idsOptions;
    bool  _inTransaction;
    SYLegacyStore * _store;
}

@property (nonatomic, retain) NSMutableArray *changes;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, copy) NSDictionary *contextInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *idsOptions;
@property (nonatomic, retain) SYLegacyStore *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_beginTransaction;
- (bool)_endTransaction;
- (void)_transactionDidComplete:(bool)arg1;
- (void)addObject:(id)arg1;
- (void)addObject:(id)arg1 completion:(id /* block */)arg2;
- (void)addObject:(id)arg1 context:(id)arg2;
- (void)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (id)changeList;
- (id)changes;
- (void)commit;
- (void)commitBlocking:(bool)arg1 reportError:(id /* block */)arg2;
- (id /* block */)completion;
- (id)contextInfo;
- (void)dealloc;
- (void)deleteObject:(id)arg1;
- (void)deleteObject:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteObject:(id)arg1 context:(id)arg2;
- (void)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
- (id)idsOptions;
- (id)initWithStore:(id)arg1;
- (void)rollback;
- (void)setChanges:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setContextInfo:(id)arg1;
- (void)setIdsOptions:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (void)updateObject:(id)arg1;
- (void)updateObject:(id)arg1 completion:(id /* block */)arg2;
- (void)updateObject:(id)arg1 context:(id)arg2;
- (void)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;

@end
