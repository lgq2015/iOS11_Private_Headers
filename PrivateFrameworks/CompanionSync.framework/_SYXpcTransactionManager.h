/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface _SYXpcTransactionManager : NSObject {
    NSMutableSet * _errorsForStateDump;
    unsigned long long  _stateHandle;
    NSObject<OS_dispatch_queue> * _syncQ;
    NSMutableDictionary * _table;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_logBacktraceForStateDump:(id)arg1 name:(id)arg2 message:(id)arg3;
- (void)beginTransactionWithName:(id)arg1 file:(id)arg2 line:(int)arg3 andFunction:(id)arg4;
- (void)dealloc;
- (void)endTransactionWithName:(id)arg1 file:(id)arg2 line:(int)arg3 andFunction:(id)arg4;
- (id)init;
- (void)logOpenTransactions;

@end
