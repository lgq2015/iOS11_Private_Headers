/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHLWorkoutType : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *swimmingLocationType;
@property (nonatomic, copy) NSString *workoutCategory;
@property (nonatomic, copy) NSString *workoutLocationType;

+ (id)workoutType;
+ (id)workoutTypeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setSwimmingLocationType:(id)arg1;
- (void)setWorkoutCategory:(id)arg1;
- (void)setWorkoutLocationType:(id)arg1;
- (id)swimmingLocationType;
- (id)workoutCategory;
- (id)workoutLocationType;

@end
