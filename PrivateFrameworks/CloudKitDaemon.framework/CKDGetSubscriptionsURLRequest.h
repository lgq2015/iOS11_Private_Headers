/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetSubscriptionsURLRequest : CKDURLRequest {
    id /* block */  _subscriptionFetchedBlock;
    NSMutableDictionary * _subscriptionIDByRequestID;
    NSArray * _subscriptionIDs;
    NSMutableArray * _subscriptions;
}

@property (nonatomic, copy) id /* block */ subscriptionFetchedBlock;
@property (nonatomic, retain) NSMutableDictionary *subscriptionIDByRequestID;
@property (nonatomic, retain) NSArray *subscriptionIDs;
@property (nonatomic, retain) NSMutableArray *subscriptions;

- (void).cxx_destruct;
- (id)generateRequestOperations;
- (id)initWithSubscriptionIDs:(id)arg1;
- (int)operationType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setSubscriptionFetchedBlock:(id /* block */)arg1;
- (void)setSubscriptionIDByRequestID:(id)arg1;
- (void)setSubscriptionIDs:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (id /* block */)subscriptionFetchedBlock;
- (id)subscriptionIDByRequestID;
- (id)subscriptionIDs;
- (id)subscriptions;

@end
