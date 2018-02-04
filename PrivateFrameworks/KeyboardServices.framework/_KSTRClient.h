/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSTRClient : NSObject <_KSTextReplacementServiceProtocol> {
    long long  _generation;
    bool  _hasReadAccess;
    _KSTextReplacementServer * _owner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long generation;
@property (nonatomic, readonly) bool hasReadAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withReply:(id /* block */)arg3;
- (void)cancel;
- (void)cancelPendingUpdatesWithReply:(id /* block */)arg1;
- (long long)generation;
- (bool)hasReadAccess;
- (id)initWithOwner:(id)arg1;
- (id)initWithOwner:(id)arg1 forConnection:(id)arg2;
- (void)queryTextReplacementEntriesWithReply:(id /* block */)arg1;
- (void)queryTextReplacementsWithPredicate:(id)arg1 reply:(id /* block */)arg2;
- (void)removeAllEntries;
- (void)requestSyncWithReply:(id /* block */)arg1;
- (void)setGeneration:(long long)arg1;

@end
