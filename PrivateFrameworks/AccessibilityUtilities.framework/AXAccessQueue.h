/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXAccessQueue : NSObject {
    NSObject<OS_dispatch_queue> * _concurrentQueue;
    unsigned long long  _specialBehaviors;
    NSString * _threadLocalStorageKey;
}

@property (nonatomic, readonly) bool behavesAsMainQueue;
@property (nonatomic, readonly) bool behavesWithoutErrorReporting;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic) unsigned long long specialBehaviors;
@property (nonatomic, copy) NSString *threadLocalStorageKey;

+ (id)backgroundAccessQueue;
+ (id)mainAccessQueue;

- (void).cxx_destruct;
- (unsigned long long)_accessQueueContextInCurrentExecutionThread;
- (id)_initWithLabel:(id)arg1 appendUUIDToLabel:(bool)arg2 specialBehaviors:(unsigned long long)arg3;
- (void)_performBlock:(id /* block */)arg1 withDispatchFunction:(int (*)arg2 synchronously:(bool)arg3 accessQueueContext:(unsigned long long)arg4;
- (void)afterDelay:(double)arg1 processReadingBlock:(id /* block */)arg2;
- (void)afterDelay:(double)arg1 processWritingBlock:(id /* block */)arg2;
- (bool)behavesAsMainQueue;
- (bool)behavesWithoutErrorReporting;
- (bool)canOnlyReadInCurrentExecutionThread;
- (bool)canReadInCurrentExecutionThread;
- (bool)canWriteInCurrentExecutionThread;
- (id)concurrentQueue;
- (id)description;
- (id)init;
- (id)initWithLabel:(id)arg1 appendUUIDToLabel:(bool)arg2;
- (id)initWithParentClass:(Class)arg1 description:(id)arg2 appendUUIDToLabel:(bool)arg3;
- (id)label;
- (void)performAsynchronousReadingBlock:(id /* block */)arg1;
- (void)performAsynchronousWritingBlock:(id /* block */)arg1;
- (void)performSynchronousReadingBlock:(id /* block */)arg1;
- (void)performSynchronousWritingBlock:(id /* block */)arg1;
- (void)setConcurrentQueue:(id)arg1;
- (void)setSpecialBehaviors:(unsigned long long)arg1;
- (void)setThreadLocalStorageKey:(id)arg1;
- (unsigned long long)specialBehaviors;
- (id)threadLocalStorageKey;

@end
