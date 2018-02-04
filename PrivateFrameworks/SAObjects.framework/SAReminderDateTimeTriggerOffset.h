/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAReminderDateTimeTriggerOffset : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *offsetTimeUnit;
@property (nonatomic, copy) NSNumber *offsetValue;
@property (readonly) Class superclass;

+ (id)dateTimeTriggerOffset;
+ (id)dateTimeTriggerOffsetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)offsetTimeUnit;
- (id)offsetValue;
- (void)setOffsetTimeUnit:(id)arg1;
- (void)setOffsetValue:(id)arg1;

@end
