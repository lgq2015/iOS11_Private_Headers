/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTAgentNotification : NSObject {
    NSString * _name;
    MTPowerAssertion * _powerAssertion;
    long long  _type;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) MTPowerAssertion *powerAssertion;
@property (nonatomic) long long type;

+ (id)notificationWithType:(long long)arg1 name:(id)arg2;
+ (id)notificationWithType:(long long)arg1 name:(id)arg2 powerAssertionTimeout:(double)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithType:(long long)arg1 name:(id)arg2 powerAssertionTimeout:(double)arg3;
- (id)name;
- (id)powerAssertion;
- (void)releaseAssertion;
- (void)setName:(id)arg1;
- (void)setPowerAssertion:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
