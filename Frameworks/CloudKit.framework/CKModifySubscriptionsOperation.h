/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifySubscriptionsOperation : CKDatabaseOperation <MSPCloudRequest> {
    NSMutableArray * _deletedSubscriptionIDs;
    id /* block */  _modifySubscriptionsCompletionBlock;
    NSMutableArray * _savedSubscriptions;
    NSMutableDictionary * _subscriptionErrors;
    NSArray * _subscriptionIDsToDelete;
    NSMutableDictionary * _subscriptionsBySubscriptionIDs;
    NSArray * _subscriptionsToSave;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableArray *deletedSubscriptionIDs;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ modifySubscriptionsCompletionBlock;
@property (nonatomic, retain) NSMutableArray *savedSubscriptions;
@property (nonatomic, readonly) bool shouldEnqueueDependenciesWhenPerformingAsCloudRequest;
@property (nonatomic, retain) NSMutableDictionary *subscriptionErrors;
@property (nonatomic, copy) NSArray *subscriptionIDsToDelete;
@property (nonatomic, retain) NSMutableDictionary *subscriptionsBySubscriptionIDs;
@property (nonatomic, copy) NSArray *subscriptionsToSave;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (id)deletedSubscriptionIDs;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2;
- (id /* block */)modifySubscriptionsCompletionBlock;
- (void)performCKOperation;
- (id)savedSubscriptions;
- (void)setDeletedSubscriptionIDs:(id)arg1;
- (void)setModifySubscriptionsCompletionBlock:(id /* block */)arg1;
- (void)setSavedSubscriptions:(id)arg1;
- (void)setSubscriptionErrors:(id)arg1;
- (void)setSubscriptionIDsToDelete:(id)arg1;
- (void)setSubscriptionsBySubscriptionIDs:(id)arg1;
- (void)setSubscriptionsToSave:(id)arg1;
- (id)subscriptionErrors;
- (id)subscriptionIDsToDelete;
- (id)subscriptionsBySubscriptionIDs;
- (id)subscriptionsToSave;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

- (void)addCloudAccessCompletionBlock:(id /* block */)arg1;
- (unsigned long long)maximumRetries;

@end
