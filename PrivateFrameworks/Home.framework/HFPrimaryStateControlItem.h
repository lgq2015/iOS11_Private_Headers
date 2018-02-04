/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFPrimaryStateControlItem : HFControlItem <HFPrimaryStateWriter> {
    NSString * _primaryStateCharacteristicType;
    HFValueTransformer * _valueTransformer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *primaryStateCharacteristicType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HFValueTransformer *valueTransformer;

+ (Class)valueClass;

- (void).cxx_destruct;
- (bool)canCopyWithCharacteristicTypeSubset:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 valueTransformer:(id)arg3 displayResults:(id)arg4;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (id)primaryStateCharacteristicType;
- (id)togglePrimaryState;
- (id)toggleValue;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)valueTransformer;
- (id)writePrimaryState:(long long)arg1;
- (id)writeValue:(id)arg1;

@end
