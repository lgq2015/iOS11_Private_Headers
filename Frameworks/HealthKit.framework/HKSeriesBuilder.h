/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSeriesBuilder : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _completionQueue;
    HKDevice * _device;
    bool  _hasData;
    NSObject<OS_dispatch_queue> * _resourceQueue;
    long long  _state;
    HKHealthStore * _store;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (nonatomic, readonly, copy) HKDevice *device;
@property (nonatomic) bool hasData;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *resourceQueue;
@property (nonatomic) long long state;
@property (nonatomic, readonly) HKHealthStore *store;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithHealthStore:(id)arg1 device:(id)arg2;
- (void)_resourceQueue_discardWithHandler:(id /* block */)arg1;
- (id)completionQueue;
- (id)device;
- (void)discard;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasData;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)resourceQueue;
- (void)setHasData:(bool)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (id)store;

@end