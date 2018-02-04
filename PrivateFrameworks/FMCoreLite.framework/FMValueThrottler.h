/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

@interface FMValueThrottler : NSObject {
    NSMutableSet * _observerBlocks;
    double  _throttleInterval;
    <FMScheduler> * _updateScheduler;
    id  _value;
    <FMCancelable> * _valueUpdateCancelationToken;
}

@property (nonatomic, readonly) bool hasPendingValueChange;
@property (nonatomic, readonly) NSMutableSet *observerBlocks;
@property (nonatomic, readonly) double throttleInterval;
@property (nonatomic, retain) <FMScheduler> *updateScheduler;
@property (nonatomic, retain) id value;
@property (nonatomic, retain) <FMCancelable> *valueUpdateCancelationToken;

- (void).cxx_destruct;
- (void)_enqueueValueUpdateIfNecessary;
- (void)_notifyObserversOfValueUpdate;
- (void)dealloc;
- (void)flushValueChanges;
- (bool)hasPendingValueChange;
- (id)init;
- (id)initWithThrottleInterval:(double)arg1;
- (id)initWithThrottleInterval:(double)arg1 initialValue:(id)arg2;
- (id)observeValueChangesWithBlock:(id /* block */)arg1;
- (id)observerBlocks;
- (void)setUpdateScheduler:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueUpdateCancelationToken:(id)arg1;
- (double)throttleInterval;
- (id)updateScheduler;
- (id)value;
- (id)valueUpdateCancelationToken;

@end
