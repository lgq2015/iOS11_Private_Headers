/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
 */

@interface BKSTerminationAssertionUpdateEvent : BKSAssertionEvent {
    NSString * _name;
}

@property (nonatomic, copy) NSString *name;

- (void)dealloc;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;

@end
