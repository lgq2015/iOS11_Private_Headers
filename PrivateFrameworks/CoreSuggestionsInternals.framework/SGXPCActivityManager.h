/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGXPCActivityManager : NSObject <SGXPCActivityManagerProtocol> {
    NSMutableArray * _activities;
    NSMutableDictionary * _currentTasks;
    NSMutableArray * _handlers;
    NSMutableArray * _lastCriteria;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    bool  _registered;
}

+ (id)nameForActivityId:(int)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_taskForActivity:(id)arg1;
- (id)activityForActivityId:(int)arg1;
- (id)copyCriteria:(id)arg1;
- (void)dealloc;
- (long long)getState:(id)arg1;
- (id)init;
- (void)registerActivitiesWithSystem;
- (void)registerForActivity:(int)arg1 handler:(id /* block */)arg2;
- (void)setCriteria:(id)arg1 criteria:(id)arg2 forActivity:(int)arg3;
- (bool)setState:(id)arg1 state:(long long)arg2;
- (bool)shouldDefer:(id)arg1;

@end