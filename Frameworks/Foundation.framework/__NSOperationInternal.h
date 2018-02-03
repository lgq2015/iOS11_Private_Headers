/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface __NSOperationInternal : NSObject {
    id  __activity;
    bool  __cached_isReady;
    id /* block */  __completion;
    NSMutableArray * __dependencies;
    NSHashTable * __down_dependencies;
    void * __implicitObsInfo;
    bool  __isCancelled;
    unsigned char  __isCancelledObserverCount;
    unsigned char  __isExecutingObserverCount;
    unsigned char  __isFinishedObserverCount;
    unsigned char  __isReadyObserverCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  __lock;
    char * __nameBuffer;
    NSOperation * __nextOp;
    NSOperation * __nextPriOp;
    void * __obsInfo;
    NSOperation * __prevOp;
    BOOL  __prio;
    unsigned char  __propertyQoS;
    NSOperationQueue * __queue;
    unsigned char  __state;
    double  __thread_prio;
    long long  __unfinished_deps;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  __wait_cond;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  __wait_mutex;
}

+ (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 changeKind:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 indexes:(id)arg6 context:(void*)arg7;

- (id)_activity;
- (void)_addDependency:(id)arg1 outer:(id)arg2;
- (void)_cancel:(id)arg1;
- (id /* block */)_completionBlock;
- (id /* block */)_copyCompletionBlock;
- (id)_dependencies;
- (void)_invalidate;
- (bool)_isCancelled;
- (bool)_isExecuting;
- (bool)_isFinished;
- (bool)_isReady;
- (id)_name;
- (long long)_queuePriority;
- (void)_removeDependency:(id)arg1 outer:(id)arg2;
- (void)_setCompletionBlock:(id /* block */)arg1 outer:(id)arg2;
- (void)_setName:(id)arg1 outer:(id)arg2;
- (void)_setQueuePriority:(long long)arg1 outer:(id)arg2;
- (void)_setThreadPriority:(double)arg1 outer:(id)arg2;
- (void)_start:(id)arg1;
- (double)_threadPriority;
- (void)_waitUntilFinished:(id)arg1;
- (void)_waitUntilFinishedOrTimeout:(double)arg1 outer:(id)arg2;
- (void)dealloc;
- (id)init:(id)arg1;

@end