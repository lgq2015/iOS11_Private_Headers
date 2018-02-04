/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

@interface NCNotificationCollapsingQueue : NSObject {
    unsigned long long  _collapsingThreshold;
    NSMutableArray * _requests;
}

@property (nonatomic) unsigned long long collapsingThreshold;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *enqueuedRequestIdentifiers;
@property (nonatomic, retain) NSMutableArray *requests;

- (void).cxx_destruct;
- (unsigned long long)_collapsedCountForCollapsibleRequests:(id)arg1;
- (id)_collapsedNotificationRequestForNotificationRequest:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_collapsedNotificationRequestFromCollapsibleRequests:(id)arg1;
- (unsigned long long)_indexOfRequestMatchingNotificationRequest:(id)arg1;
- (void)_insertPreemptingNotificationRequest:(id)arg1;
- (id)_requestsCollapsibleWithNotificationRequest:(id)arg1;
- (void)addNotificationRequest:(id)arg1;
- (unsigned long long)collapsingThreshold;
- (bool)containsNotificationRequest:(id)arg1;
- (bool)containsNotificationRequestMatchingRequest:(id)arg1;
- (unsigned long long)count;
- (id)enqueuedRequestIdentifiers;
- (id)init;
- (id)notificationRequestsCoalescebleWithCoalescedRequest:(id)arg1;
- (id)peekNextNotificationRequest;
- (id)peekNextNotificationRequestPassingTest:(id /* block */)arg1;
- (void)removeNotificationRequest:(id)arg1;
- (void)replaceNotificationRequest:(id)arg1;
- (id)requests;
- (void)setCollapsingThreshold:(unsigned long long)arg1;
- (void)setRequests:(id)arg1;

@end
