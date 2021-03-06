/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileSpotlightIndex.framework/MobileSpotlightIndex
 */

@interface _MDPlistBytes : NSObject {
    unsigned long long  _byteVector;
    unsigned int  _byteVectorCapacity;
    unsigned int  _byteVectorCnt;
    id /* block */  _deallocator;
    unsigned int  _didFinalize;
    unsigned int  _isBad;
    unsigned int  _isMutable;
    unsigned int  _isMutating;
    struct __CFArray { } * _rleQueue;
    int  _uidCapacity;
    int  _uidCount;
    unsigned long long * _uidVector;
    unsigned int  _useMalloc;
    unsigned long long * _wrapperPtr;
}

+ (struct __MDPlistBytes { }*)createArrayPlistBytesUsingBlock:(id /* block */)arg1;
+ (struct __MDPlistBytes { }*)createDictionaryPlistBytesUsingBlock:(id /* block */)arg1;
+ (struct __MDPlistBytes { }*)createPlistBytes:(id)arg1;
+ (struct __MDPlistBytes { }*)emptyArrayPlistBytes;
+ (struct __MDPlistBytes { }*)emptyDictionaryPlistBytes;
+ (void)enumerateObjectsFromPlistBytes:(char *)arg1 count:(unsigned int)arg2 shouldDeallocate:(bool)arg3 usingBlock:(id /* block */)arg4;
+ (struct __MDPlistBytes { }*)nullObjectPlistBytes;

- (unsigned long long)_cfTypeID;
- (struct __CFData { }*)copyData;
- (struct __CFData { }*)copyDataWithBytesNoCopy;
- (void)dealloc;
- (id)description;
- (void)dumpUIDs;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (bool)enumerateQueryResults:(unsigned long long)arg1 attributeSize:(unsigned long long)arg2 stringCache:(struct { struct __CFDictionary {} *x1; struct __CFDictionary {} *x2; unsigned int x3; }*)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateQueryResults:(unsigned long long)arg1 stringCache:(struct { struct __CFDictionary {} *x1; struct __CFDictionary {} *x2; unsigned int x3; }*)arg2 usingBlock:(id /* block */)arg3;
- (void)finalize;
- (id)initWithByteVector:(char *)arg1 count:(unsigned int)arg2 deallocator:(id /* block */)arg3;
- (id)initWithByteVector:(char *)arg1 count:(unsigned int)arg2 shouldDeallocate:(bool)arg3;
- (bool)isEqual:(id)arg1;

@end
