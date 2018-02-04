/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFSimpleIncrementalControlItem : HFControlItem {
    NSString * _incrementalCharacteristicType;
}

@property (nonatomic, readonly, copy) NSString *incrementalCharacteristicType;
@property (nonatomic, readonly) NSNumber *maxValue;
@property (nonatomic, readonly) NSNumber *minValue;
@property (nonatomic, readonly) NSNumber *stepValue;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)_metadata;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2;
- (id)incrementalCharacteristicType;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (id)maxValue;
- (id)minValue;
- (id)stepValue;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)writeValue:(id)arg1;

@end
