/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPAllocSupport : NSObject {
    _PASBuddyAllocator * _allocator;
    const struct __CFAllocator { } * _cfAllocator;
}

@property (nonatomic, readonly) const struct __CFAllocator { }*cfAllocator;

+ (id)defaultAllocSupport;

- (void).cxx_destruct;
- (void*)allocZeros:(unsigned long long)arg1;
- (const struct __CFAllocator { }*)cfAllocator;
- (id)copyDate:(id)arg1;
- (id)copyNumber:(id)arg1;
- (id)copyString:(id)arg1;
- (void)dealloc;
- (void)free:(void*)arg1;
- (id)initWithHeapSize:(unsigned long long)arg1;
- (void)logUsage;
- (id)newMutableArray;
- (id)newMutableArrayWithCapacity:(unsigned long long)arg1;
- (id)newMutableDictionary;
- (id)newMutableDictionaryWithCapacity:(unsigned long long)arg1;
- (id)newMutableSet;
- (id)newMutableSetWithCapacity:(unsigned long long)arg1;

@end
