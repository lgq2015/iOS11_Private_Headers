/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUGLObjectPool : NSObject {
    NSHashTable * _contexts;
    struct map<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > >, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > > > > { 
        struct __tree<std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > > > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, std::__1::stack<unsigned int, std::__1::deque<unsigned int, std::__1::allocator<unsigned int> > > >, std::__1::less<unsigned int>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _objects;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) bool isUsed;
@property (readonly) long long objectCount;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_isUsedByContext:(id)arg1;
- (long long)_objectCount;
- (unsigned int)_popObjectOfType:(unsigned int)arg1;
- (void)_pushObject:(unsigned int)arg1 ofType:(unsigned int)arg2;
- (void)_shareWithContext:(id)arg1;
- (long long)_useCount;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithContext:(id)arg1;
- (bool)isUsed;
- (bool)isUsedByContext:(id)arg1;
- (long long)objectCount;
- (unsigned int)popObjectOfType:(unsigned int)arg1;
- (void)pushObject:(unsigned int)arg1 ofType:(unsigned int)arg2;
- (void)shareWithContext:(id)arg1;
- (long long)useCount;

@end
