/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFActionSetValueSource : NSObject <HFCharacteristicValueSource> {
    HMActionSet * _actionSet;
    HFItemBuilder<HFActionSetBuilderProtocol> * _actionSetBuilder;
    <HFActionSetValueSourceDelegate> * _delegate;
}

@property (nonatomic, retain) HMActionSet *actionSet;
@property (nonatomic, retain) HFItemBuilder<HFActionSetBuilderProtocol> *actionSetBuilder;
@property (nonatomic, readonly) <HFCharacteristicOperationContextProviding> *contextProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HFActionSetValueSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)_actionForCharacteristic:(id)arg1;
- (id)_existingActionBuilderForCharacteristic:(id)arg1;
- (bool)_isCurrentStateCharacteristic:(id)arg1;
- (id)_targetValueForCharacteristic:(id)arg1;
- (id)_valueForCurrentStateCharacteristic:(id)arg1;
- (id)actionSet;
- (id)actionSetBuilder;
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (id)cachedValueForCharacteristic:(id)arg1;
- (void)commitTransactionWithReason:(id)arg1;
- (id)delegate;
- (unsigned long long)hash;
- (id)initWithActionSet:(id)arg1;
- (id)initWithActionSetBuilder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)readValuesForCharacteristicTypes:(id)arg1 inServices:(id)arg2;
- (id)readValuesForCharacteristics:(id)arg1;
- (void)setActionSet:(id)arg1;
- (void)setActionSetBuilder:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)writeValuesForCharacteristics:(id)arg1;

@end
