/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFMultiStateValueSet : NSObject <NSCopying, NSFastEnumeration> {
    HMCharacteristicMetadata * _characteristicMetadata;
    NSMutableDictionary * _displayResultsByValue;
    id /* block */  _valueComparator;
}

@property (nonatomic, readonly) NSSet *allValues;
@property (nonatomic, readonly) HMCharacteristicMetadata *characteristicMetadata;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSMutableDictionary *displayResultsByValue;
@property (nonatomic, readonly) NSArray *sortedValues;
@property (nonatomic, copy) id /* block */ valueComparator;

+ (id)binaryValueSetWithCharacteristicMetadata:(id)arg1 firstValue:(id)arg2 firstTitle:(id)arg3 secondValue:(id)arg4 secondTitle:(id)arg5;

- (void).cxx_destruct;
- (bool)addValue:(id)arg1 displayResults:(id)arg2;
- (bool)addValue:(id)arg1 displayResults:(id)arg2 addOnlyIfValid:(bool)arg3;
- (void)addValuesFromArray:(id)arg1 displayResultsGenerator:(id /* block */)arg2;
- (id)allValues;
- (id)characteristicMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (id)displayResultsByValue;
- (id)displayResultsForValue:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCharacteristicMetadata:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)minusSet:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeValue:(id)arg1;
- (void)removeValuesFromArray:(id)arg1;
- (void)setValueComparator:(id /* block */)arg1;
- (id)sortedValues;
- (void)unionSet:(id)arg1 displayResultsGenerator:(id /* block */)arg2;
- (id /* block */)valueComparator;

@end
