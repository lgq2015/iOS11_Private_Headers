/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter {
    bool  _importingToExistingGroup;
    bool  _recordIsGroup;
}

@property bool recordIsGroup;

+ (struct __CFDictionary { }*)_personToGroupPropertyMap;
+ (int)groupPropertyForPersonProperty:(int)arg1;

- (void)_drainExistingProperties;
- (void*)copyParsedRecordWithSource:(void*)arg1 outRecordType:(unsigned int*)arg2;
- (id)imageData;
- (id)initWithGroup:(void*)arg1 removeExistingProperties:(bool)arg2;
- (id)initWithPerson:(void*)arg1 removeExistingProperties:(bool)arg2;
- (bool)propertyIsValidForPerson:(unsigned int)arg1;
- (bool)recordIsGroup;
- (bool)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5;
- (void)setRecordIsGroup:(bool)arg1;
- (bool)setValue:(void*)arg1 forProperty:(unsigned int)arg2;
- (void*)valueForProperty:(unsigned int)arg1;

@end
