/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPPeriodicTask : NSObject {
    NSObject<OS_xpc_object> * _executionCriteria;
    id /* block */  _handler;
    NSString * _name;
    unsigned long long  _periodSeconds;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *executionCriteria;
@property (nonatomic, readonly) id /* block */ handler;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long periodSeconds;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)taskWithName:(id)arg1 period:(unsigned long long)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)executionCriteria;
- (id /* block */)handler;
- (id)init;
- (id)initWithName:(id)arg1 period:(unsigned long long)arg2 handler:(id /* block */)arg3;
- (id)name;
- (unsigned long long)periodSeconds;
- (id)queue;

@end
