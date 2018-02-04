/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchSubscriptionsOperation : CKDDatabaseOperation {
    bool  _isFetchAllSubscriptionsOperation;
    id /* block */  _subscriptionFetchedProgressBlock;
    NSArray * _subscriptionIDs;
    NSMutableArray * _subscriptions;
}

@property (nonatomic) bool isFetchAllSubscriptionsOperation;
@property (nonatomic, copy) id /* block */ subscriptionFetchedProgressBlock;
@property (nonatomic, retain) NSArray *subscriptionIDs;
@property (nonatomic, retain) NSMutableArray *subscriptions;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleSubscriptionFetched:(id)arg1 withID:(id)arg2 responseCode:(id)arg3;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (bool)isFetchAllSubscriptionsOperation;
- (void)main;
- (void)setIsFetchAllSubscriptionsOperation:(bool)arg1;
- (void)setSubscriptionFetchedProgressBlock:(id /* block */)arg1;
- (void)setSubscriptionIDs:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (id /* block */)subscriptionFetchedProgressBlock;
- (id)subscriptionIDs;
- (id)subscriptions;

@end
