/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCKeyValueStoreClassRegistry : NSObject {
    struct unordered_map<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding>, std::__1::hash<int>, std::__1::equal_to<NTPBKeyValuePair_ValueType>, std::__1::allocator<std::__1::pair<const NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding> > > > { 
        struct __hash_table<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding> >, std::__1::__unordered_map_hasher<NTPBKeyValuePair_ValueType, std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding> >, std::__1::hash<int>, true>, std::__1::__unordered_map_equal<NTPBKeyValuePair_ValueType, std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding> >, std::__1::equal_to<NTPBKeyValuePair_ValueType>, true>, std::__1::allocator<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding> > > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding> >, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding> >, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding> >, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding> >, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding> >, void *> *> *> > { 
                            unsigned long long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding> >, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding> >, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding> >, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<NTPBKeyValuePair_ValueType, std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding> >, std::__1::hash<int>, true> > { 
                unsigned long long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<NTPBKeyValuePair_ValueType, std::__1::__hash_value_type<NTPBKeyValuePair_ValueType, Class<FCKeyValueStoreCoding> >, std::__1::equal_to<NTPBKeyValuePair_ValueType>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _registry;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (Class)classForValueType:(int)arg1;
- (id)init;
- (void)registerClass:(Class)arg1;

@end
