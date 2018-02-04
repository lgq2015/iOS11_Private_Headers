/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKKnowledgeStore : NSObject <_DKKnowledgeDeleting, _DKKnowledgeEventStreamDeleting, _DKKnowledgeQuerying, _DKKnowledgeSaving, _DKKnowledgeSynchronizing> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _defaultQueue;
    _DKPrivacyPolicyEnforcer * _privacyEnforcer;
    _DKRateLimitPolicyEnforcer * _rateLimitEnforcer;
}

@property (retain) NSXPCConnection *connection;
@property (retain) NSObject<OS_dispatch_queue> *defaultQueue;
@property (readonly) _DKPrivacyPolicyEnforcer *privacyEnforcer;
@property (readonly) _DKRateLimitPolicyEnforcer *rateLimitEnforcer;

+ (id)knowledgeStore;
+ (id)knowledgeStoreWithDirectReadOnlyAccess;
+ (id)knowledgeStoreWithDirectReadOnlyAccessWithConnection:(id)arg1 storeDirectory:(id)arg2;
+ (id)knowledgeStoreWithDirectReadOnlyAccessWithStore:(id)arg1 storeDirectory:(id)arg2;
+ (id)userKnowledgeStore;
+ (id)userKnowledgeStoreWithDirectReadOnlyAccess;

- (void).cxx_destruct;
- (bool)confirmConnectionWithError:(id*)arg1;
- (id)connection;
- (void)dealloc;
- (id)defaultQueue;
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (bool)deleteObjects:(id)arg1 error:(id*)arg2;
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)deleteRemoteState:(id*)arg1;
- (id)executeQuery:(id)arg1 error:(id*)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;
- (id)privacyEnforcer;
- (id)rateLimitEnforcer;
- (bool)saveObjects:(id)arg1 error:(id*)arg2;
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setConnection:(id)arg1;
- (void)setDefaultQueue:(id)arg1;
- (bool)synchronizeWithError:(id*)arg1;

@end
