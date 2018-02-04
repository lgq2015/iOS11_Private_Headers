/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICInternalSource : NSObject <_ICPredictionSourcing>

- (id)localizedStringForKey:(id)arg1 withLocale:(id)arg2;
- (void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(float)arg4 handler:(id /* block */)arg5;
- (void)searchForMeCardEmailAddressesWithTimeout:(int)arg1 handler:(id /* block */)arg2;
- (void)searchForMeCardRegionsWithTimeout:(int)arg1 handler:(id /* block */)arg2;

@end
