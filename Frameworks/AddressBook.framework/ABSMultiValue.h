/* made by EzioChiu
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABSMultiValue : NSObject {
    bool  _mutable;
    unsigned int  _propertyType;
    NSMutableArray * _values;
}

@property (nonatomic, readonly) bool mutable;
@property (nonatomic, readonly) unsigned int propertyType;
@property (nonatomic, readonly) NSMutableArray *values;

- (void).cxx_destruct;
- (unsigned long long)_cfTypeID;
- (bool)addValue:(id)arg1 label:(id)arg2 outIdentifier:(int*)arg3;
- (id)allValues;
- (id)copyValueAtIndex:(long long)arg1;
- (int)identifierAtIndex:(long long)arg1;
- (unsigned long long)indexForIdentifier:(int)arg1;
- (unsigned long long)indexOfValue:(id)arg1;
- (id)initWithPropertyType:(unsigned int)arg1 mutable:(bool)arg2 values:(id)arg3;
- (bool)insertValue:(id)arg1 label:(id)arg2 atIndex:(long long)arg3 outIdentifier:(int*)arg4;
- (id)labelAtIndex:(long long)arg1;
- (bool)mutable;
- (id)mutableCopy;
- (int)nextLegacyIdentifier;
- (unsigned int)propertyType;
- (bool)removeValueAtIndex:(long long)arg1;
- (bool)replaceLabel:(id)arg1 atIndex:(long long)arg2;
- (bool)replaceValue:(id)arg1 atIndex:(long long)arg2;
- (id)values;

@end
