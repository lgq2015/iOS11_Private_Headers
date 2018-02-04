/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMBuffer : NSObject {
    NSObject<OS_dispatch_queue> * __bufferQueue;
    NSMutableArray * __bufferQueueBufferedValues;
    NSMutableArray * __bufferQueueObservances;
    NSMutableDictionary * __bufferQueueObservers;
    <NSCopying> * _bufferQueueCurrentValue;
    bool  _bufferQueueEnabled;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_bufferQueue;
@property (nonatomic, readonly) NSMutableArray *_bufferQueueBufferedValues;
@property (nonatomic, readonly) NSMutableArray *_bufferQueueObservances;
@property (nonatomic, readonly) NSMutableDictionary *_bufferQueueObservers;
@property (nonatomic, retain) <NSCopying> *bufferQueueCurrentValue;
@property (getter=isBufferQueueEnabled, nonatomic) bool bufferQueueEnabled;
@property (nonatomic, readonly) NSArray *bufferedValues;
@property (nonatomic, readonly) id currentValue;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) id firstBufferedValue;
@property (nonatomic, readonly) bool isBufferEmpty;
@property (nonatomic, readonly) id lastBufferedValue;

+ (id)keyPathsForValuesAffectingCurrentValue;
+ (id)keyPathsForValuesAffectingEnabled;

- (void).cxx_destruct;
- (id)_addObserver:(id /* block */)arg1 onMainQueue:(bool)arg2;
- (id)_bufferQueue;
- (id)_bufferQueueBufferedValues;
- (void)_bufferQueueEvaluateObservances;
- (void)_bufferQueueFulfillAndEvaluateWithChange:(id)arg1;
- (void)_bufferQueueFulfillObservancesWithChange:(id)arg1;
- (id)_bufferQueueObservances;
- (id)_bufferQueueObservers;
- (void)_bufferQueueSetupObservance:(id)arg1;
- (void)_bufferQueueTeardownObservance:(id)arg1;
- (void)_bufferQueueTeardownObservances:(id)arg1;
- (void)_emitBufferedValues;
- (bool)_isBufferQueue;
- (id)addMainQueueObserver:(id /* block */)arg1;
- (id)addObserver:(id /* block */)arg1;
- (id)bufferQueueCurrentValue;
- (id)bufferedValues;
- (id)currentValue;
- (void)dealloc;
- (void)disableUntil:(id /* block */)arg1;
- (void)disableUntilKeyPath:(id)arg1 ofObject:(id)arg2 evaluates:(id /* block */)arg3;
- (void)disableUntilNotification:(id)arg1 fromObject:(id)arg2 usingNotificationCenter:(id)arg3;
- (void)disableWhile:(id /* block */)arg1;
- (void)disableWhileKeyPath:(id)arg1 ofObject:(id)arg2 evaluates:(id /* block */)arg3;
- (void)disableWhileNotification:(id)arg1 fromObject:(id)arg2 usingNotificationCenter:(id)arg3;
- (id)firstBufferedValue;
- (void)handleObservedNotification:(id)arg1;
- (id)init;
- (bool)isBufferEmpty;
- (bool)isBufferQueueEnabled;
- (bool)isEnabled;
- (id)lastBufferedValue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)push:(id)arg1;
- (void)reevaluate;
- (void)removeObserverForKey:(id)arg1;
- (void)replaceWith:(id)arg1;
- (void)setBufferQueueCurrentValue:(id)arg1;
- (void)setBufferQueueEnabled:(bool)arg1;

@end
