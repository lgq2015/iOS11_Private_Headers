/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMKeyValueCoalescer : NSObject {
    NSObject<OS_dispatch_queue> * __coalescingQueue;
    id /* block */  __handler;
    double  __interval;
    NSMutableDictionary * __previousValues;
    NSMutableDictionary * __values;
    NSObject<OS_dispatch_source> * _coalescingTimer;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_coalescingQueue;
@property (nonatomic, readonly, copy) id /* block */ _handler;
@property (nonatomic, readonly) double _interval;
@property (nonatomic, readonly) NSMutableDictionary *_previousValues;
@property (nonatomic, readonly) NSMutableDictionary *_values;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *coalescingTimer;

- (void).cxx_destruct;
- (id)_coalescingQueue;
- (id /* block */)_handler;
- (double)_interval;
- (id)_previousValues;
- (void)_pushCoalescedValues;
- (id)_values;
- (void)coalesceValue:(id)arg1 forKeyPath:(id)arg2;
- (id)coalescingTimer;
- (void)flush;
- (id)initWithInterval:(double)arg1 handler:(id /* block */)arg2;
- (void)setCoalescingTimer:(id)arg1;

@end
