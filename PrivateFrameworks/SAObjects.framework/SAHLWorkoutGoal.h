/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHLWorkoutGoal : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double goalValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *workoutGoalUnitType;

+ (id)workoutGoal;
+ (id)workoutGoalWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (double)goalValue;
- (id)groupIdentifier;
- (void)setGoalValue:(double)arg1;
- (void)setWorkoutGoalUnitType:(id)arg1;
- (id)workoutGoalUnitType;

@end
