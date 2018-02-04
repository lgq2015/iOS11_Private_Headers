/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTimeConditionItem : HFItem <HFConditionItem> {
    HFTimeCondition * _condition;
    unsigned long long  _type;
}

@property (nonatomic, retain) HFTimeCondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

+ (id)_formattedStringForDateComponentsCondition:(id)arg1 style:(unsigned long long)arg2;
+ (id)_formattedStringForOffset:(id)arg1;
+ (id)_formattedStringForSunriseSunsetCondition:(id)arg1 style:(unsigned long long)arg2;
+ (id)_formattedStringForTimeCondition:(id)arg1 style:(unsigned long long)arg2;
+ (id)_formattedStringForTimeRangeCondition:(id)arg1 style:(unsigned long long)arg2;
+ (id)_nameForConditionType:(unsigned long long)arg1 formattingStyle:(long long)arg2;
+ (unsigned long long)conditionTypeForCondition:(id)arg1;
+ (id)defaultConditionForType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)condition;
- (id)init;
- (id)initWithCondition:(id)arg1;
- (id)initWithConditionType:(unsigned long long)arg1;
- (id)initWithConditionType:(unsigned long long)arg1 condition:(id)arg2;
- (void)setCondition:(id)arg1;
- (unsigned long long)type;

@end
