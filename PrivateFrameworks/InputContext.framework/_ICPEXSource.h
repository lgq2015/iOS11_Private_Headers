/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICPEXSource : NSObject <_ICLexiconSourcing, _ICPredictionSourcing> {
    NSMutableArray * _contacts;
    PEXQuickTypeBroker * _pexBroker;
    NSCondition * _pexBrokerLoadedCondition;
    NSObject<OS_dispatch_semaphore> * _pexContactsLoadedSemaphore;
}

@property (retain) PEXQuickTypeBroker *pexBroker;

- (void).cxx_destruct;
- (bool)generateNoresultExplanation:(id*)arg1;
- (id)getPEXBroker;
- (id)init;
- (id)pexBroker;
- (void)predictedItemsWithProactiveTrigger:(id)arg1 searchContext:(id)arg2 limit:(unsigned long long)arg3 timeoutInMilliseconds:(float)arg4 handler:(id /* block */)arg5;
- (void)registerNameDelegate:(id)arg1;
- (void)searchForMeCardEmailAddressesWithTimeout:(int)arg1 handler:(id /* block */)arg2;
- (void)searchForMeCardRegionsWithTimeout:(int)arg1 handler:(id /* block */)arg2;
- (void)setPexBroker:(id)arg1;
- (void)unregisterNameDelegate:(id)arg1;

@end
