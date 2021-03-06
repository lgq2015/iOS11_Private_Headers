/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSTTableHeaderStorageBucket : TSPObject <TSTTableHeaderStorage> {
    double  mHorizontalScaleFactor;
    struct map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > > { struct __tree<std::__1::__value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, SFUtility::ObjcSharedPtr<NSObject> >, std::__1::less<unsigned int>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; } * mMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalScaleFactor;
@property (readonly) Class superclass;

- (void)applyFunction:(int (*)arg1 withState:(void*)arg2 willModify:(bool)arg3;
- (long long)count;
- (void)dealloc;
- (unsigned long long)flushableSize;
- (id)headerForKey:(unsigned int)arg1 willModify:(bool)arg2;
- (id)headerForKey:(unsigned int)arg1 willModify:(bool)arg2 createIfNotThere:(bool)arg3;
- (double)horizontalScaleFactor;
- (id)initWithContext:(id)arg1;
- (unsigned int)lowerBound:(unsigned int)arg1;
- (void)makeHeadersPerformSelector:(SEL)arg1 willModify:(bool)arg2;
- (unsigned int)maxKey;
- (unsigned int)minKey;
- (id)packageLocator;
- (void)removeAllHeaders;
- (void)removeHeaderForKey:(unsigned int)arg1;
- (void)setHeader:(id)arg1 forKey:(unsigned int)arg2;
- (void)setHorizontalScaleFactor:(double)arg1;
- (void)shiftKeysAtIndex:(unsigned int)arg1 amount:(int)arg2;
- (unsigned int)upperBound:(unsigned int)arg1;

@end
