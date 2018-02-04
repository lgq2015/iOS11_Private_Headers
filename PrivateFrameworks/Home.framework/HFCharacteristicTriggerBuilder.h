/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCharacteristicTriggerBuilder : HFTriggerBuilder {
    bool  _markTriggerAsHomeAppCreated;
    NSMutableSet * _triggerEvents;
}

@property (nonatomic, readonly) NSSet *characteristics;
@property (nonatomic) bool markTriggerAsHomeAppCreated;
@property (nonatomic, retain) NSMutableSet *triggerEvents;

- (void).cxx_destruct;
- (id)_allTriggerValuesForCharacteristic:(id)arg1 similarToValue:(id)arg2;
- (id)_existingEventsForCharacteristic:(id)arg1;
- (id)_lazilyMarkTriggerAsHomeAppCreated;
- (id)_performValidation;
- (id)_updateEvents;
- (id)characteristics;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)commitItem;
- (id)deleteTrigger;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3;
- (bool)markTriggerAsHomeAppCreated;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1;
- (void)removeAllCharacteristics;
- (void)removeCharacteristic:(id)arg1;
- (void)setCharacteristic:(id)arg1 triggerValue:(id)arg2;
- (void)setCharacteristic:(id)arg1 triggerValueRange:(id)arg2;
- (void)setMarkTriggerAsHomeAppCreated:(bool)arg1;
- (void)setTriggerEvents:(id)arg1;
- (bool)supportsConditions;
- (bool)supportsEndEvents;
- (id)triggerEvents;
- (bool)wouldFireForCharacteristic:(id)arg1 value:(id)arg2;

@end
