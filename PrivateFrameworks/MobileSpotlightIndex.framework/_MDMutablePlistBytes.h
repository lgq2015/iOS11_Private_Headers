/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileSpotlightIndex.framework/MobileSpotlightIndex
 */

@interface _MDMutablePlistBytes : _MDPlistBytes {
    unsigned long long  _curContainer;
    int  _currentUID;
    unsigned long long * _fillPtr;
    unsigned long long * _limitPtr;
    int  _parentCount;
    int  _parentSize;
    int * _parentUIDs;
    struct __CFDictionary { } * _ptrUIDMap;
    unsigned long long * _rleTagPtr;
}

+ (struct __MDPlistBytes { }*)createArrayPlistBytesUsingBlock:(id /* block */)arg1;
+ (struct __MDPlistBytes { }*)createDictionaryPlistBytesUsingBlock:(id /* block */)arg1;

- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 useMalloc:(bool)arg2;

@end
