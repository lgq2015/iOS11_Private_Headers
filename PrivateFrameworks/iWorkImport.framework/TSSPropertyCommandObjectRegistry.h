/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSPropertyCommandObjectRegistry : NSObject {
    struct map<Class, int, std::__1::less<Class>, std::__1::allocator<std::__1::pair<const Class, int> > > { 
        struct __tree<std::__1::__value_type<Class, int>, std::__1::__map_value_compare<Class, std::__1::__value_type<Class, int>, std::__1::less<Class>, true>, std::__1::allocator<std::__1::__value_type<Class, int> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<Class, int>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<Class, std::__1::__value_type<Class, int>, std::__1::less<Class>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _classToIndex;
    struct map<int, std::__1::pair<Class, std::__1::basic_string<char> >, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, std::__1::pair<Class, std::__1::basic_string<char> > > > > { 
        struct __tree<std::__1::__value_type<int, std::__1::pair<Class, std::__1::basic_string<char> > >, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::pair<Class, std::__1::basic_string<char> > >, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, std::__1::pair<Class, std::__1::basic_string<char> > > > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, std::__1::pair<Class, std::__1::basic_string<char> > >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, std::__1::pair<Class, std::__1::basic_string<char> > >, std::__1::less<int>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _indexToClass;
}

+ (void)setIntializationHandler:(id /* block */)arg1;
+ (id)sharedRegistry;

- (id).cxx_construct;
- (void).cxx_destruct;
- (Class)classForIndex:(int)arg1;
- (int)indexForClass:(Class)arg1;
- (id)init;
- (const struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; }*)nameForIndex:(int)arg1;
- (void)registerClass:(Class)arg1 withField:(id)arg2;

@end
