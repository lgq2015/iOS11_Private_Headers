/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPRangeMap : NSObject {
    struct vector<_TSWPCharIndexAndAffinity, std::__1::allocator<_TSWPCharIndexAndAffinity> > { 
        struct _TSWPCharIndexAndAffinity {} *__begin_; 
        struct _TSWPCharIndexAndAffinity {} *__end_; 
        struct __compressed_pair<_TSWPCharIndexAndAffinity *, std::__1::allocator<_TSWPCharIndexAndAffinity> > { 
            struct _TSWPCharIndexAndAffinity {} *__first_; 
        } __end_cap_; 
    }  _mappedIndexes;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _subRange;
    struct vector<_TSWPCharIndexAndAffinity, std::__1::allocator<_TSWPCharIndexAndAffinity> > { 
        struct _TSWPCharIndexAndAffinity {} *__begin_; 
        struct _TSWPCharIndexAndAffinity {} *__end_; 
        struct __compressed_pair<_TSWPCharIndexAndAffinity *, std::__1::allocator<_TSWPCharIndexAndAffinity> > { 
            struct _TSWPCharIndexAndAffinity {} *__first_; 
        } __end_cap_; 
    }  _unmappedIndexes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)adjustByDelta:(long long)arg1;
- (id)initWithSubRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 unmappedIndexes:(const struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x_3_1_1; } x3; }*)arg2 affinity:(int)arg3;
- (id)initWithSubRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 unmappedPairIndexes:(const struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *x_3_1_1; } x3; }*)arg2;
- (unsigned long long)mappedCharIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mappedCharRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)p_extendLeftMappedIndex:(unsigned long long)arg1;
- (unsigned long long)p_extendRightMappedIndex:(unsigned long long)arg1;
- (unsigned long long)unmappedCharIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })unmappedCharRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
