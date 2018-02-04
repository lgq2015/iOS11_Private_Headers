/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFColorControlItem : HFControlItem

@property (nonatomic, readonly) <HFColorProfile> *colorProfile;
@property (nonatomic, readonly) bool supportsRGBColor;

+ (id)colorCharacteristicTypes;
+ (Class)valueClass;

- (bool)canCopyWithCharacteristicTypeSubset:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)colorProfile;
- (id)copyWithCharacteristicTypes:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 displayResults:(id)arg2;
- (bool)supportsItemRepresentingServices:(id)arg1;
- (bool)supportsRGBColor;
- (id)valueForCharacteristicType:(id)arg1 inBatchReadResponse:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)writeValue:(id)arg1;

@end
