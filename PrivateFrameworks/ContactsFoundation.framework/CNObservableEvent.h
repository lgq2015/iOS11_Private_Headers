/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNObservableEvent : NSObject

@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly) unsigned long long eventType;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, readonly) id value;

+ (id)completionEvent;
+ (id)eventWithResult:(id)arg1;
+ (id)failureEventWithError:(id)arg1;

- (void)dematerializeWithObserver:(id)arg1;
- (id)error;
- (unsigned long long)eventType;
- (bool)hasValue;
- (id)value;

@end
