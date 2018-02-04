/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSTHiddenDimensionCache : NSObject <NSCopying> {
    NSMutableIndexSet * mCachedUserVisible;
    NSMutableIndexSet * mCachedVisible;
    unsigned long long  mCount;
    NSMutableIndexSet * mInvalidRanges;
    unsigned long long  mMarkIndex;
}

@property (nonatomic, readonly) NSIndexSet *visibleIndices;

- (bool)anyHiddenIndicesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)anyUserHiddenIndicesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)deleteRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)description;
- (unsigned long long)findNextVisibleIndex:(unsigned long long)arg1;
- (unsigned long long)findNthNextVisibleIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2;
- (unsigned long long)findNthPreviousVisibleIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2;
- (unsigned long long)findPreviousVisibleIndex:(unsigned long long)arg1;
- (id)initWithUserHiddenInformation:(bool)arg1;
- (void)insertRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)invalidate:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)isIndexHidden:(unsigned long long)arg1;
- (bool)isIndexUserHidden:(unsigned long long)arg1;
- (void)moveRangeFrom:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toIndex:(unsigned long long)arg2;
- (unsigned long long)numberHiddenIndicesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned short)numberOfVisibleIndicesToMarkIndexFrom:(unsigned long long)arg1;
- (unsigned long long)numberUserHiddenIndicesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setAllInvalidValuesUsingBlock:(id /* block */)arg1;
- (void)setAllValuesToZero;
- (void)setCount:(unsigned long long)arg1;
- (void)setMarkIndex:(unsigned long long)arg1;
- (id)visibleIndices;

@end
