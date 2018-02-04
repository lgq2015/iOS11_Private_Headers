/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

@interface PGSetterThrottler : NSObject {
    id /* block */  _block;
    bool  _busy;
    bool  _pending;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _throttleQueue;
    id  _throttledValue;
    id  _value;
}

@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (void)_setValue;
- (void)dealloc;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1 usingQueue:(id)arg2;
- (void)setValue:(id)arg1;
- (id)value;

@end
