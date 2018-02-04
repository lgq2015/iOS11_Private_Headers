/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface _CLKNotificationCenterRegistration : NSObject {
    id  _observer;
    unsigned long long  _registrationIdentifier;
    SEL  _selector;
}

@property (nonatomic) id observer;
@property (nonatomic) SEL selector;

+ (void)recycleRegistration:(id)arg1;
+ (id)recycledRegistrationWithIdentifier:(unsigned long long)arg1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)observer;
- (id)recycledCopy;
- (SEL)selector;
- (void)setObserver:(id)arg1;
- (void)setSelector:(SEL)arg1;

@end
