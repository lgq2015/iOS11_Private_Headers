/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface CDContextStore : NSObject {
    NSXPCConnection * _connection;
    bool  _interrupted;
    bool  _invalidated;
    NSMutableDictionary * _registeredPredicates;
    NSObject<OS_dispatch_queue> * _waitForeverQueue;
}

+ (id)contextStore;

- (void).cxx_destruct;
- (bool)cancelWaitForeverForPredicateString:(id)arg1;
- (bool)cancelWaitForeverForPredicateString:(id)arg1 withOptions:(id)arg2;
- (bool)cancelWaitForeverForPredicteString:(id)arg1;
- (id)clientIdentifierFromOptions:(id)arg1;
- (void)dealloc;
- (void)deregisterHandlerForPredicateId:(unsigned long long)arg1;
- (void)deregisterHandlerForPredicateString:(id)arg1;
- (void)deregisterHandlerForPredicateString:(id)arg1 withClientId:(id)arg2;
- (void)deregisterHandlerForPredicateString:(id)arg1 withOptions:(id)arg2;
- (void)enableHandlerForPredicateId:(unsigned long long)arg1 withOptions:(id)arg2 usingBlock:(id /* block */)arg3;
- (id)init;
- (void)initConnection;
- (long long)integerValueForKey:(id)arg1;
- (void)registerHandlerForPredicateString:(id)arg1 withOptions:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)registerKey:(id)arg1 withSettings:(id)arg2;
- (bool)setIntegerValue:(long long)arg1 forKey:(id)arg2 withMetaData:(id)arg3;
- (bool)setStringValue:(id)arg1 forKey:(id)arg2 withMetaData:(id)arg3;
- (void)set_interrupted:(bool)arg1;
- (void)set_invalidated:(bool)arg1;
- (id)settingsForKey:(id)arg1;
- (id)stateForAllKeys;
- (id)stateForKey:(id)arg1;
- (id)stateForKeys:(id)arg1;
- (id)stateForKeysTreatingNilAsAll:(id)arg1;
- (id)stringValueForKey:(id)arg1;
- (void)waitForeverForPredicateString:(id)arg1 withOptions:(id)arg2 handlerQueue:(id)arg3 handler:(id /* block */)arg4;
- (void)waitForeverForPredicteString:(id)arg1 withOptions:(id)arg2 handlerQueue:(id)arg3 handler:(id /* block */)arg4;

@end
