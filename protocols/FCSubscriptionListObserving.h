/* made by EzioChiu.
 */

@protocol FCSubscriptionListObserving <NSObject>

@required

- (void)subscriptionList:(FCSubscriptionList *)arg1 didAddSubscriptions:(NSSet *)arg2 changeSubscriptions:(NSSet *)arg3 removeSubscriptions:(NSSet *)arg4 eventInitiationLevel:(long long)arg5;

@end
