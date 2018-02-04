/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDNanoSyncSession : HDSyncSession {
    id /* block */  _completion;
    unsigned long long  _messageCount;
    bool  _pullRequest;
    bool  _requestedByRemote;
}

@property (nonatomic, readonly, copy) id /* block */ completion;
@property (nonatomic, readonly) unsigned long long messageCount;
@property (nonatomic, readonly) HDNanoSyncStore *nanoSyncStore;
@property (getter=isPullRequest, nonatomic, readonly) bool pullRequest;
@property (getter=isRequestedByRemote, nonatomic, readonly) bool requestedByRemote;

- (void).cxx_destruct;
- (id)changeSetWithChanges:(id)arg1 statusCode:(int)arg2 error:(id)arg3;
- (id /* block */)completion;
- (void)incrementMessageCount;
- (id)initWithSyncStore:(id)arg1 attemptWhileLocking:(bool)arg2 pullRequest:(bool)arg3 requestedByRemote:(bool)arg4 reason:(id)arg5 delegate:(id)arg6 completion:(id /* block */)arg7;
- (void)invokeCompletionWithSuccess:(bool)arg1 error:(id)arg2;
- (bool)isPullRequest;
- (bool)isRequestedByRemote;
- (long long)maxEncodedBytesPerMessageForSyncEntityClass:(Class)arg1;
- (unsigned long long)messageCount;
- (id)nanoSyncStore;
- (id)newChangeWithSyncEntityClass:(Class)arg1;
- (id)predicateForSyncEntityClass:(Class)arg1;

@end
