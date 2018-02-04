/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSTMergeRangeSortedSet : NSObject {
    struct __tree_const_iterator<TSTMergeRangeElem, std::__1::__tree_node<TSTMergeRangeElem, void *> *, long> { 
        struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__ptr_; 
    }  mIter;
    NSObject<OS_dispatch_semaphore> * mSem;
    struct set<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::__1::allocator<TSTMergeRangeElem> > { struct __tree<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::__1::allocator<TSTMergeRangeElem> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<TSTMergeRangeElem, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, TSTMergeRangeElemCompare> { unsigned long long x_3_2_1; } x_1_1_3; } x1; } * mSet;
}

- (id).cxx_construct;
- (void)addRange:(struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })arg1 andSize:(struct CGSize { double x1; double x2; })arg2 andPaddingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 andIsCheckbox:(bool)arg4;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })begin;
- (unsigned long long)count;
- (void)dealloc;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })getPaddingInsets;
- (struct CGSize { double x1; double x2; })getSize;
- (id)init;
- (bool)isCheckbox;
- (struct { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; })iter;
- (void)reset;

@end
