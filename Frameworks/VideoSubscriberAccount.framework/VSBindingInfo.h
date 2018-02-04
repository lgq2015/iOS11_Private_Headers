/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSBindingInfo : NSObject {
    NSString * _keyPath;
    NSDictionary * _options;
    id  _unsafeObservedObject;
    NSValueTransformer * _valueTransformer;
    id  _weakObservedObject;
}

@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, readonly, copy) NSDictionary *options;
@property (nonatomic, readonly) id unsafeObservedObject;
@property (nonatomic, retain) id value;
@property (nonatomic, retain) NSValueTransformer *valueTransformer;
@property (nonatomic, readonly) id weakObservedObject;

- (void).cxx_destruct;
- (id)init;
- (id)initWithObservedObject:(id)arg1 keyPath:(id)arg2 options:(id)arg3;
- (id)keyPath;
- (id)options;
- (void)requireExpectedConcurrency;
- (void)setValue:(id)arg1;
- (void)setValueTransformer:(id)arg1;
- (id)unsafeObservedObject;
- (id)value;
- (id)valueTransformer;
- (id)weakObservedObject;

@end
